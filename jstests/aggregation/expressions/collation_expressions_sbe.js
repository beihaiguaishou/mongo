// Cannot implicitly shard accessed collections because of collection existing when none expected.
// TODO: Enable "collation_expressions.js" under SBE mode and remove this test once SERVER-51823
// is fixed.
// @tags: [
//   assumes_no_implicit_collection_creation_after_drop,
// ]

// Test that expressions which make can make string comparisons respect the collation.
(function() {
"use strict";

// For testExpression() and testExpressionWithCollation().
load("jstests/aggregation/extras/utils.js");

var coll = db.collation_expressions_sbe;
coll.drop();

var results;
const caseInsensitive = {
    locale: "en_US",
    strength: 2
};
const numericOrdering = {
    locale: "en_US",
    numericOrdering: true
};

// Test that $cmp respects the collection-default collation.
assert.commandWorked(db.createCollection(coll.getName(), {collation: caseInsensitive}));
testExpression(coll, {$cmp: ["a", "A"]}, 0);

coll.drop();

// Test that $cmp respects the collation.
testExpressionWithCollation(coll, {$cmp: ["a", "A"]}, 0, caseInsensitive);

// Test that $eq respects the collation.
testExpressionWithCollation(coll, {$eq: ["a", "A"]}, true, caseInsensitive);

// Test that $ne respects the collation.
testExpressionWithCollation(coll, {$ne: ["a", "A"]}, false, caseInsensitive);

// Test that $lt respects the collation.
testExpressionWithCollation(coll, {$lt: ["2", "10"]}, true, numericOrdering);

// Test that $lte respects the collation.
testExpressionWithCollation(coll, {$lte: ["2", "10"]}, true, numericOrdering);
testExpressionWithCollation(coll, {$lte: ["b", "B"]}, true, caseInsensitive);

// Test that $gt respects the collation.
testExpressionWithCollation(coll, {$gt: ["2", "10"]}, false, numericOrdering);

// Test that $gte respects the collation.
testExpressionWithCollation(coll, {$gte: ["2", "10"]}, false, numericOrdering);
testExpressionWithCollation(coll, {$gte: ["b", "B"]}, true, caseInsensitive);

// Test that $in respects the collation.
testExpressionWithCollation(coll, {$in: ["A", [1, 2, "a", 3, 4]]}, true, caseInsensitive);

// Test that $indexOfArray respects the collation.
testExpressionWithCollation(
    coll, {$indexOfArray: [[1, 2, "a", "b", "c", "B"], "B"]}, 3, caseInsensitive);

// Test that $indexOfBytes doesn't respect the collation.
testExpressionWithCollation(coll, {$indexOfBytes: ["12abcB", "B"]}, 5, caseInsensitive);

// Test that $indexOfCP doesn't respect the collation.
testExpressionWithCollation(coll, {$indexOfCP: ["12abcB", "B"]}, 5, caseInsensitive);

// Test that $strcasecmp doesn't respect the collation.
testExpressionWithCollation(coll, {$strcasecmp: ["100", "2"]}, -1, numericOrdering);

// Test that $setEquals respects the collation.
testExpressionWithCollation(coll, {$setEquals: [["a", "B"], ["b", "A"]]}, true, caseInsensitive);

// Test that $setIntersection respects the collation.
results =
    coll.aggregate([{$project: {out: {$setIntersection: [["a", "B", "c"], ["d", "b", "A"]]}}}],
                   {collation: caseInsensitive})
        .toArray();
assert.eq(1, results.length);
assert.eq(2, results[0].out.length);

// Test that $setUnion respects the collation.
results = coll.aggregate([{$project: {out: {$setUnion: [["a", "B", "c"], ["d", "b", "A"]]}}}],
                         {collation: caseInsensitive})
              .toArray();
assert.eq(1, results.length);
assert.eq(4, results[0].out.length);

// Test that $setDifference respects the collation.
testExpressionWithCollation(coll, {$setDifference: [["a", "B"], ["b", "A"]]}, [], caseInsensitive);

// Test that $setIsSubset respects the collation.
testExpressionWithCollation(
    coll, {$setIsSubset: [["a", "B"], ["b", "A", "c"]]}, true, caseInsensitive);

// Test that $split doesn't respect the collation.
testExpressionWithCollation(coll, {$split: ["abc", "B"]}, ["abc"], caseInsensitive);

// Test that an $and which can be optimized out respects the collation.
coll.drop();
assert.commandWorked(coll.insert({_id: 1, str: "A"}));
results = coll.aggregate([{$project: {out: {$and: [{$eq: ["$str", "a"]}, {$eq: ["b", "B"]}]}}}],
                         {collation: caseInsensitive})
              .toArray();
assert.eq(1, results.length);
assert.eq(true, results[0].out);

// Test that an $and which cannot be optimized out respects the collation.
coll.drop();
assert.commandWorked(coll.insert({_id: 1, str: "A", str2: "B"}));
results = coll.aggregate([{$project: {out: {$and: [{$eq: ["$str", "a"]}, {$eq: ["$str2", "b"]}]}}}],
                         {collation: caseInsensitive})
              .toArray();
assert.eq(1, results.length);
assert.eq(true, results[0].out);

// Test that an $or which can be optimized out respects the collation.
coll.drop();
assert.commandWorked(coll.insert({_id: 1, str: "A"}));
results = coll.aggregate([{$project: {out: {$or: [{$eq: ["$str", "a"]}, {$eq: ["b", "c"]}]}}}],
                         {collation: caseInsensitive})
              .toArray();
assert.eq(1, results.length);
assert.eq(true, results[0].out);

// Test that an $or which cannot be optimized out respects the collation.
coll.drop();
assert.commandWorked(coll.insert({_id: 1, str: "A", str2: "B"}));
results = coll.aggregate([{$project: {out: {$or: [{$eq: ["$str", "c"]}, {$eq: ["$str2", "b"]}]}}}],
                         {collation: caseInsensitive})
              .toArray();
assert.eq(1, results.length);
assert.eq(true, results[0].out);

// Test that $filter's subexpressions respect the collation.
testExpressionWithCollation(coll,
                                {
                                  $filter: {
                                      input: {
                                          $cond: {
                                              if: {$eq: ["FOO", "foo"]},
                                              then: ["a", "b", "A", "c", "C", "d"],
                                              else: null
                                          }
                                      },
                                      as: "str",
                                      cond: {$or: [{$eq: ["$$str", "a"]}, {$eq: ["$$str", "c"]}]}
                                  }
                                },
                                ["a", "A", "c", "C"],
                                caseInsensitive);

// Test that $let's subexpressions respect the collation.
testExpressionWithCollation(coll,
                                {
                                  $let: {
                                      vars: {str: {$cond: [{$eq: ["A", "a"]}, "b", "c"]}},
                                      in : {$cond: [{$eq: ["$$str", "B"]}, "d", "e"]}
                                  }
                                },
                                "d",
                                caseInsensitive);

// Test that $group stage's _id expressions respect the collation.
coll.drop();
assert.commandWorked(coll.insert({_id: 1}));
results = coll.aggregate([{$group: {_id: {a: {$eq: ["a", "A"]}, b: {$eq: ["b", "B"]}}}}],
                         {collation: caseInsensitive})
              .toArray();
assert.eq(1, results.length);
assert.eq(true, results[0]._id.a);
assert.eq(true, results[0]._id.b);

// Test that $switch's subexpressions respect the collation.
coll.drop();
assert.commandWorked(coll.insert({_id: 1, a: "A"}));
assert.commandWorked(coll.insert({_id: 2, b: "B"}));
assert.commandWorked(coll.insert({_id: 3, c: "C"}));
results = coll.aggregate(
                  [
                      {$sort: {_id: 1}},
                      {
                          $project: {
                              out: {
                                  $switch: {
                                      branches: [
                                          {case: {$eq: ["$a", "a"]}, then: "foo"},
                                          {case: {$eq: ["$b", "b"]}, then: "bar"}
                                      ],
                                      default: "baz"
                                  }
                              }
                          }
                      }
                  ],
                  {collation: caseInsensitive})
              .toArray();
assert.eq(3, results.length);
assert.eq("foo", results[0].out);
assert.eq("bar", results[1].out);
assert.eq("baz", results[2].out);
})();
