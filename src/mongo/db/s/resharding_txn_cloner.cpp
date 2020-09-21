/**
 *    Copyright (C) 2020-present MongoDB, Inc.
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the Server Side Public License, version 1,
 *    as published by MongoDB, Inc.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    Server Side Public License for more details.
 *
 *    You should have received a copy of the Server Side Public License
 *    along with this program. If not, see
 *    <http://www.mongodb.com/licensing/server-side-public-license>.
 *
 *    As a special exception, the copyright holders give permission to link the
 *    code of portions of this program with the OpenSSL library under certain
 *    conditions as described in each individual source file and distribute
 *    linked combinations including the program with the OpenSSL library. You
 *    must comply with the Server Side Public License in all respects for
 *    all of the code used other than as permitted herein. If you modify file(s)
 *    with this exception, you may extend this exception to your version of the
 *    file(s), but you are not obligated to do so. If you do not wish to do so,
 *    delete this exception statement from your version. If you delete this
 *    exception statement from all source files in the program, then also delete
 *    it in the license file.
 */

#define MONGO_LOGV2_DEFAULT_COMPONENT ::mongo::logv2::LogComponent::kSharding


#include "mongo/platform/basic.h"

#include "mongo/db/s/resharding_txn_cloner.h"

#include <fmt/format.h>

#include "mongo/bson/bsonobj.h"
#include "mongo/client/dbclient_connection.h"
#include "mongo/client/fetcher.h"
#include "mongo/client/read_preference.h"
#include "mongo/client/remote_command_targeter.h"
#include "mongo/db/operation_context.h"
#include "mongo/db/pipeline/sharded_agg_helpers.h"
#include "mongo/db/query/query_request.h"
#include "mongo/db/s/resharding_util.h"
#include "mongo/s/shard_id.h"

namespace mongo {

using namespace fmt::literals;

std::unique_ptr<Fetcher> cloneConfigTxnsForResharding(
    OperationContext* opCtx,
    const ShardId& shardId,
    Timestamp fetchTimestamp,
    boost::optional<LogicalSessionId> startAfter,
    std::function<void(StatusWith<BSONObj>)> merge) {
    boost::intrusive_ptr<ExpressionContext> expCtx = make_intrusive<ExpressionContext>(
        opCtx, nullptr, NamespaceString::kSessionTransactionsTableNamespace);
    auto pipeline =
        createConfigTxnCloningPipelineForResharding(expCtx, fetchTimestamp, std::move(startAfter));
    AggregationRequest request(NamespaceString::kSessionTransactionsTableNamespace,
                               pipeline->serializeToBson());

    request.setReadConcern(BSON(repl::ReadConcernArgs::kLevelFieldName
                                << repl::ReadConcernLevel::kMajorityReadConcern
                                << repl::ReadConcernArgs::kAfterClusterTimeFieldName
                                << fetchTimestamp));
    request.setHint(BSON("_id_" << 1));

    auto shard = uassertStatusOK(Grid::get(opCtx)->shardRegistry()->getShard(opCtx, shardId));
    const auto targetHost = uassertStatusOK(
        shard->getTargeter()->findHost(opCtx, ReadPreferenceSetting{ReadPreference::Nearest}));

    auto fetcherCallback = [merge](const Fetcher::QueryResponseStatus& dataStatus,
                                   Fetcher::NextAction* nextAction,
                                   BSONObjBuilder* getMoreBob) {
        if (!dataStatus.isOK()) {
            merge(dataStatus.getStatus());
            return;
        }

        auto data = dataStatus.getValue();
        for (BSONObj doc : data.documents) {
            merge(doc);
        }

        if (!getMoreBob) {
            return;
        }
        getMoreBob->append("getMore", data.cursorId);
        getMoreBob->append("collection", data.nss.coll());
    };

    auto executor = Grid::get(opCtx)->getExecutorPool()->getFixedExecutor();

    auto fetcher = std::make_unique<Fetcher>(
        executor.get(),
        targetHost,
        "config",
        request.serializeToCommandObj().toBson(),
        fetcherCallback,
        ReadPreferenceSetting(ReadPreference::Nearest).toContainingBSON());
    uassertStatusOK(fetcher->schedule());
    return fetcher;
}

}  // namespace mongo
