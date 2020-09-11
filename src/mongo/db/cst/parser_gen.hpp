// A Bison parser, made by GNU Bison 3.7.1.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file parser_gen.hpp
 ** Define the mongo::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_PARSER_GEN_HPP_INCLUDED
#define YY_YY_PARSER_GEN_HPP_INCLUDED
// "%code requires" blocks.
#line 66 "grammar.yy"

#include "mongo/db/cst/bson_location.h"
#include "mongo/db/cst/c_node.h"

// Forward declare any parameters needed for lexing/parsing.
namespace mongo {
class BSONLexer;
}

#ifdef _MSC_VER
// warning C4065: switch statement contains 'default' but no 'case' labels.
#pragma warning(disable : 4065)
#endif

#line 64 "parser_gen.hpp"

#include <cassert>
#include <cstdlib>  // std::abort
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#if defined __cplusplus
#define YY_CPLUSPLUS __cplusplus
#else
#define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
#define YY_MOVE std::move
#define YY_MOVE_OR_COPY move
#define YY_MOVE_REF(Type) Type&&
#define YY_RVREF(Type) Type&&
#define YY_COPY(Type) Type
#else
#define YY_MOVE
#define YY_MOVE_OR_COPY copy
#define YY_MOVE_REF(Type) Type&
#define YY_RVREF(Type) const Type&
#define YY_COPY(Type) const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
#define YY_NOEXCEPT noexcept
#define YY_NOTHROW
#else
#define YY_NOEXCEPT
#define YY_NOTHROW throw()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
#define YY_CONSTEXPR constexpr
#else
#define YY_CONSTEXPR
#endif

#include <typeinfo>
#ifndef YY_ASSERT
#include <cassert>
#define YY_ASSERT assert
#endif


#ifndef YY_ATTRIBUTE_PURE
#if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_PURE __attribute__((__pure__))
#else
#define YY_ATTRIBUTE_PURE
#endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
#if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_UNUSED __attribute__((__unused__))
#else
#define YY_ATTRIBUTE_UNUSED
#endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if !defined lint || defined __GNUC__
#define YYUSE(E) ((void)(E))
#else
#define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && !defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                                              \
    _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wuninitialized\"") \
        _Pragma("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
#define YY_IGNORE_MAYBE_UNINITIALIZED_END _Pragma("GCC diagnostic pop")
#else
#define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
#define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && !defined __ICC && 6 <= __GNUC__
#define YY_IGNORE_USELESS_CAST_BEGIN \
    _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wuseless-cast\"")
#define YY_IGNORE_USELESS_CAST_END _Pragma("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_END
#endif

#ifndef YY_CAST
#ifdef __cplusplus
#define YY_CAST(Type, Val) static_cast<Type>(Val)
#define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type>(Val)
#else
#define YY_CAST(Type, Val) ((Type)(Val))
#define YY_REINTERPRET_CAST(Type, Val) ((Type)(Val))
#endif
#endif
#ifndef YY_NULLPTR
#if defined __cplusplus
#if 201103L <= __cplusplus
#define YY_NULLPTR nullptr
#else
#define YY_NULLPTR 0
#endif
#else
#define YY_NULLPTR ((void*)0)
#endif
#endif

/* Debug traces.  */
#ifndef YYDEBUG
#define YYDEBUG 0
#endif

#line 57 "grammar.yy"
namespace mongo {
#line 199 "parser_gen.hpp"


/// A Bison parser.
class ParserGen {
public:
#ifndef YYSTYPE
    /// A buffer to store and retrieve objects.
    ///
    /// Sort of a variant, but does not keep track of the nature
    /// of the stored data, since that knowledge is available
    /// via the current parser state.
    class semantic_type {
    public:
        /// Type of *this.
        typedef semantic_type self_type;

        /// Empty construction.
        semantic_type() YY_NOEXCEPT : yybuffer_(), yytypeid_(YY_NULLPTR) {}

        /// Construct and fill.
        template <typename T>
        semantic_type(YY_RVREF(T) t) : yytypeid_(&typeid(T)) {
            YY_ASSERT(sizeof(T) <= size);
            new (yyas_<T>()) T(YY_MOVE(t));
        }

#if 201103L <= YY_CPLUSPLUS
        /// Non copyable.
        semantic_type(const self_type&) = delete;
        /// Non copyable.
        self_type& operator=(const self_type&) = delete;
#endif

        /// Destruction, allowed only if empty.
        ~semantic_type() YY_NOEXCEPT {
            YY_ASSERT(!yytypeid_);
        }

#if 201103L <= YY_CPLUSPLUS
        /// Instantiate a \a T in here from \a t.
        template <typename T, typename... U>
        T& emplace(U&&... u) {
            YY_ASSERT(!yytypeid_);
            YY_ASSERT(sizeof(T) <= size);
            yytypeid_ = &typeid(T);
            return *new (yyas_<T>()) T(std::forward<U>(u)...);
        }
#else
        /// Instantiate an empty \a T in here.
        template <typename T>
        T& emplace() {
            YY_ASSERT(!yytypeid_);
            YY_ASSERT(sizeof(T) <= size);
            yytypeid_ = &typeid(T);
            return *new (yyas_<T>()) T();
        }

        /// Instantiate a \a T in here from \a t.
        template <typename T>
        T& emplace(const T& t) {
            YY_ASSERT(!yytypeid_);
            YY_ASSERT(sizeof(T) <= size);
            yytypeid_ = &typeid(T);
            return *new (yyas_<T>()) T(t);
        }
#endif

        /// Instantiate an empty \a T in here.
        /// Obsolete, use emplace.
        template <typename T>
        T& build() {
            return emplace<T>();
        }

        /// Instantiate a \a T in here from \a t.
        /// Obsolete, use emplace.
        template <typename T>
        T& build(const T& t) {
            return emplace<T>(t);
        }

        /// Accessor to a built \a T.
        template <typename T>
        T& as() YY_NOEXCEPT {
            YY_ASSERT(yytypeid_);
            YY_ASSERT(*yytypeid_ == typeid(T));
            YY_ASSERT(sizeof(T) <= size);
            return *yyas_<T>();
        }

        /// Const accessor to a built \a T (for %printer).
        template <typename T>
        const T& as() const YY_NOEXCEPT {
            YY_ASSERT(yytypeid_);
            YY_ASSERT(*yytypeid_ == typeid(T));
            YY_ASSERT(sizeof(T) <= size);
            return *yyas_<T>();
        }

        /// Swap the content with \a that, of same type.
        ///
        /// Both variants must be built beforehand, because swapping the actual
        /// data requires reading it (with as()), and this is not possible on
        /// unconstructed variants: it would require some dynamic testing, which
        /// should not be the variant's responsibility.
        /// Swapping between built and (possibly) non-built is done with
        /// self_type::move ().
        template <typename T>
        void swap(self_type& that) YY_NOEXCEPT {
            YY_ASSERT(yytypeid_);
            YY_ASSERT(*yytypeid_ == *that.yytypeid_);
            std::swap(as<T>(), that.as<T>());
        }

        /// Move the content of \a that to this.
        ///
        /// Destroys \a that.
        template <typename T>
        void move(self_type& that) {
#if 201103L <= YY_CPLUSPLUS
            emplace<T>(std::move(that.as<T>()));
#else
            emplace<T>();
            swap<T>(that);
#endif
            that.destroy<T>();
        }

#if 201103L <= YY_CPLUSPLUS
        /// Move the content of \a that to this.
        template <typename T>
        void move(self_type&& that) {
            emplace<T>(std::move(that.as<T>()));
            that.destroy<T>();
        }
#endif

        /// Copy the content of \a that to this.
        template <typename T>
        void copy(const self_type& that) {
            emplace<T>(that.as<T>());
        }

        /// Destroy the stored \a T.
        template <typename T>
        void destroy() {
            as<T>().~T();
            yytypeid_ = YY_NULLPTR;
        }

    private:
#if YY_CPLUSPLUS < 201103L
        /// Non copyable.
        semantic_type(const self_type&);
        /// Non copyable.
        self_type& operator=(const self_type&);
#endif

        /// Accessor to raw memory as \a T.
        template <typename T>
        T* yyas_() YY_NOEXCEPT {
            void* yyp = yybuffer_.yyraw;
            return static_cast<T*>(yyp);
        }

        /// Const accessor to raw memory as \a T.
        template <typename T>
        const T* yyas_() const YY_NOEXCEPT {
            const void* yyp = yybuffer_.yyraw;
            return static_cast<const T*>(yyp);
        }

        /// An auxiliary type to compute the largest semantic type.
        union union_type {
            // "BinData"
            char dummy1[sizeof(BSONBinData)];

            // "Code"
            char dummy2[sizeof(BSONCode)];

            // "CodeWScope"
            char dummy3[sizeof(BSONCodeWScope)];

            // "dbPointer"
            char dummy4[sizeof(BSONDBRef)];

            // "regex"
            char dummy5[sizeof(BSONRegEx)];

            // "Symbol"
            char dummy6[sizeof(BSONSymbol)];

            // dbPointer
            // javascript
            // symbol
            // javascriptWScope
            // int
            // timestamp
            // long
            // double
            // decimal
            // minKey
            // maxKey
            // value
            // string
            // fieldPath
            // binary
            // undefined
            // objectId
            // bool
            // date
            // null
            // regex
            // simpleValue
            // compoundValue
            // valueArray
            // valueObject
            // valueFields
            // variable
            // pipeline
            // stageList
            // stage
            // inhibitOptimization
            // unionWith
            // skip
            // limit
            // project
            // sample
            // projectFields
            // projection
            // num
            // expression
            // compoundExpression
            // exprFixedTwoArg
            // expressionArray
            // expressionObject
            // expressionFields
            // maths
            // add
            // atan2
            // boolExps
            // and
            // or
            // not
            // literalEscapes
            // const
            // literal
            // stringExps
            // concat
            // dateFromString
            // dateToString
            // indexOfBytes
            // indexOfCP
            // ltrim
            // regexFind
            // regexFindAll
            // regexMatch
            // regexArgs
            // replaceOne
            // replaceAll
            // rtrim
            // split
            // strLenBytes
            // strLenCP
            // strcasecmp
            // substr
            // substrBytes
            // substrCP
            // toLower
            // toUpper
            // trim
            // compExprs
            // cmp
            // eq
            // gt
            // gte
            // lt
            // lte
            // ne
            // typeExpression
            // convert
            // toBool
            // toDate
            // toDecimal
            // toDouble
            // toInt
            // toLong
            // toObjectId
            // toString
            // type
            // abs
            // ceil
            // divide
            // exponent
            // floor
            // ln
            // log
            // logten
            // mod
            // multiply
            // pow
            // round
            // sqrt
            // subtract
            // trunc
            // setExpression
            // allElementsTrue
            // anyElementTrue
            // setDifference
            // setEquals
            // setIntersection
            // setIsSubset
            // setUnion
            // match
            // predicates
            // compoundMatchExprs
            // predValue
            // additionalExprs
            // sortSpecs
            // specList
            // metaSort
            // oneOrNegOne
            // metaSortKeyword
            char dummy7[sizeof(CNode)];

            // projectionFieldname
            // expressionFieldname
            // stageAsUserFieldname
            // predFieldname
            // argAsUserFieldname
            // aggExprAsUserFieldname
            // invariableUserFieldname
            // idAsUserFieldname
            // valueFieldname
            // logicalExprField
            char dummy8[sizeof(CNode::Fieldname)];

            // "Date"
            char dummy9[sizeof(Date_t)];

            // "arbitrary decimal"
            char dummy10[sizeof(Decimal128)];

            // "ObjectID"
            char dummy11[sizeof(OID)];

            // "Timestamp"
            char dummy12[sizeof(Timestamp)];

            // "maxKey"
            char dummy13[sizeof(UserMaxKey)];

            // "minKey"
            char dummy14[sizeof(UserMinKey)];

            // "null"
            char dummy15[sizeof(UserNull)];

            // "undefined"
            char dummy16[sizeof(UserUndefined)];

            // "arbitrary double"
            char dummy17[sizeof(double)];

            // "arbitrary integer"
            char dummy18[sizeof(int)];

            // "arbitrary long"
            char dummy19[sizeof(long long)];

            // projectField
            // expressionField
            // valueField
            // onErrorArg
            // onNullArg
            // formatArg
            // timezoneArg
            // charsArg
            // optionsArg
            // predicate
            // logicalExpr
            // operatorExpression
            // notExpr
            // sortSpec
            char dummy20[sizeof(std::pair<CNode::Fieldname, CNode>)];

            // "fieldname"
            // "string"
            // "$-prefixed string"
            // "$$-prefixed string"
            // "$-prefixed fieldname"
            char dummy21[sizeof(std::string)];

            // expressions
            // values
            // exprZeroToTwo
            char dummy22[sizeof(std::vector<CNode>)];
        };

        /// The size of the largest semantic type.
        enum { size = sizeof(union_type) };

        /// A buffer to store semantic values.
        union {
            /// Strongest alignment constraints.
            long double yyalign_me;
            /// A buffer large enough to store any of the semantic values.
            char yyraw[size];
        } yybuffer_;

        /// Whether the content is built: if defined, the name of the stored type.
        const std::type_info* yytypeid_;
    };

#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef mongo::BSONLocation location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error {
        syntax_error(const location_type& l, const std::string& m)
            : std::runtime_error(m), location(l) {}

        syntax_error(const syntax_error& s) : std::runtime_error(s.what()), location(s.location) {}

        ~syntax_error() YY_NOEXCEPT YY_NOTHROW;

        location_type location;
    };

    /// Token kinds.
    struct token {
        enum token_kind_type {
            YYEMPTY = -2,
            END_OF_FILE = 0,                  // "EOF"
            YYerror = 1,                      // error
            YYUNDEF = 2,                      // "invalid token"
            ABS = 3,                          // ABS
            ADD = 4,                          // ADD
            ALL_ELEMENTS_TRUE = 5,            // "allElementsTrue"
            AND = 6,                          // AND
            ANY_ELEMENT_TRUE = 7,             // "anyElementTrue"
            ARG_CHARS = 8,                    // "chars argument"
            ARG_COLL = 9,                     // "coll argument"
            ARG_DATE = 10,                    // "date argument"
            ARG_DATE_STRING = 11,             // "dateString argument"
            ARG_FILTER = 12,                  // "filter"
            ARG_FIND = 13,                    // "find argument"
            ARG_FORMAT = 14,                  // "format argument"
            ARG_INPUT = 15,                   // "input argument"
            ARG_ON_ERROR = 16,                // "onError argument"
            ARG_ON_NULL = 17,                 // "onNull argument"
            ARG_OPTIONS = 18,                 // "options argument"
            ARG_PIPELINE = 19,                // "pipeline argument"
            ARG_Q = 20,                       // "q"
            ARG_QUERY = 21,                   // "query"
            ARG_REGEX = 22,                   // "regex argument"
            ARG_REPLACEMENT = 23,             // "replacement argument"
            ARG_SIZE = 24,                    // "size argument"
            ARG_SORT = 25,                    // "sort argument"
            ARG_TIMEZONE = 26,                // "timezone argument"
            ARG_TO = 27,                      // "to argument"
            ATAN2 = 28,                       // ATAN2
            BOOL_FALSE = 29,                  // "false"
            BOOL_TRUE = 30,                   // "true"
            CEIL = 31,                        // CEIL
            CMP = 32,                         // CMP
            CONCAT = 33,                      // CONCAT
            CONST_EXPR = 34,                  // CONST_EXPR
            CONVERT = 35,                     // CONVERT
            DATE_FROM_STRING = 36,            // DATE_FROM_STRING
            DATE_TO_STRING = 37,              // DATE_TO_STRING
            DECIMAL_NEGATIVE_ONE = 38,        // "-1 (decimal)"
            DECIMAL_ONE = 39,                 // "1 (decimal)"
            DECIMAL_ZERO = 40,                // "zero (decimal)"
            DIVIDE = 41,                      // DIVIDE
            DOUBLE_NEGATIVE_ONE = 42,         // "-1 (double)"
            DOUBLE_ONE = 43,                  // "1 (double)"
            DOUBLE_ZERO = 44,                 // "zero (double)"
            END_ARRAY = 45,                   // "end of array"
            END_OBJECT = 46,                  // "end of object"
            EQ = 47,                          // EQ
            EXPONENT = 48,                    // EXPONENT
            FLOOR = 49,                       // FLOOR
            GT = 50,                          // GT
            GTE = 51,                         // GTE
            ID = 52,                          // ID
            INDEX_OF_BYTES = 53,              // INDEX_OF_BYTES
            INDEX_OF_CP = 54,                 // INDEX_OF_CP
            INT_NEGATIVE_ONE = 55,            // "-1 (int)"
            INT_ONE = 56,                     // "1 (int)"
            INT_ZERO = 57,                    // "zero (int)"
            LITERAL = 58,                     // LITERAL
            LN = 59,                          // LN
            LOG = 60,                         // LOG
            LOGTEN = 61,                      // LOGTEN
            LONG_NEGATIVE_ONE = 62,           // "-1 (long)"
            LONG_ONE = 63,                    // "1 (long)"
            LONG_ZERO = 64,                   // "zero (long)"
            LT = 65,                          // LT
            LTE = 66,                         // LTE
            LTRIM = 67,                       // LTRIM
            META = 68,                        // META
            MOD = 69,                         // MOD
            MULTIPLY = 70,                    // MULTIPLY
            NE = 71,                          // NE
            NOR = 72,                         // NOR
            NOT = 73,                         // NOT
            OR = 74,                          // OR
            POW = 75,                         // POW
            RAND_VAL = 76,                    // "randVal"
            REGEX_FIND = 77,                  // REGEX_FIND
            REGEX_FIND_ALL = 78,              // REGEX_FIND_ALL
            REGEX_MATCH = 79,                 // REGEX_MATCH
            REPLACE_ALL = 80,                 // REPLACE_ALL
            REPLACE_ONE = 81,                 // REPLACE_ONE
            ROUND = 82,                       // ROUND
            RTRIM = 83,                       // RTRIM
            SET_DIFFERENCE = 84,              // "setDifference"
            SET_EQUALS = 85,                  // "setEquals"
            SET_INTERSECTION = 86,            // "setIntersection"
            SET_IS_SUBSET = 87,               // "setIsSubset"
            SET_UNION = 88,                   // "setUnion"
            SPLIT = 89,                       // SPLIT
            SQRT = 90,                        // SQRT
            STAGE_INHIBIT_OPTIMIZATION = 91,  // STAGE_INHIBIT_OPTIMIZATION
            STAGE_LIMIT = 92,                 // STAGE_LIMIT
            STAGE_PROJECT = 93,               // STAGE_PROJECT
            STAGE_SAMPLE = 94,                // STAGE_SAMPLE
            STAGE_SKIP = 95,                  // STAGE_SKIP
            STAGE_UNION_WITH = 96,            // STAGE_UNION_WITH
            START_ARRAY = 97,                 // "array"
            START_OBJECT = 98,                // "object"
            STR_CASE_CMP = 99,                // STR_CASE_CMP
            STR_LEN_BYTES = 100,              // STR_LEN_BYTES
            STR_LEN_CP = 101,                 // STR_LEN_CP
            SUBSTR = 102,                     // SUBSTR
            SUBSTR_BYTES = 103,               // SUBSTR_BYTES
            SUBSTR_CP = 104,                  // SUBSTR_CP
            SUBTRACT = 105,                   // SUBTRACT
            TEXT_SCORE = 106,                 // "textScore"
            TO_BOOL = 107,                    // TO_BOOL
            TO_DATE = 108,                    // TO_DATE
            TO_DECIMAL = 109,                 // TO_DECIMAL
            TO_DOUBLE = 110,                  // TO_DOUBLE
            TO_INT = 111,                     // TO_INT
            TO_LONG = 112,                    // TO_LONG
            TO_LOWER = 113,                   // TO_LOWER
            TO_OBJECT_ID = 114,               // TO_OBJECT_ID
            TO_STRING = 115,                  // TO_STRING
            TO_UPPER = 116,                   // TO_UPPER
            TRIM = 117,                       // TRIM
            TRUNC = 118,                      // TRUNC
            TYPE = 119,                       // TYPE
            FIELDNAME = 120,                  // "fieldname"
            STRING = 121,                     // "string"
            BINARY = 122,                     // "BinData"
            UNDEFINED = 123,                  // "undefined"
            OBJECT_ID = 124,                  // "ObjectID"
            DATE_LITERAL = 125,               // "Date"
            JSNULL = 126,                     // "null"
            REGEX = 127,                      // "regex"
            DB_POINTER = 128,                 // "dbPointer"
            JAVASCRIPT = 129,                 // "Code"
            SYMBOL = 130,                     // "Symbol"
            JAVASCRIPT_W_SCOPE = 131,         // "CodeWScope"
            INT_OTHER = 132,                  // "arbitrary integer"
            LONG_OTHER = 133,                 // "arbitrary long"
            DOUBLE_OTHER = 134,               // "arbitrary double"
            DECIMAL_OTHER = 135,              // "arbitrary decimal"
            TIMESTAMP = 136,                  // "Timestamp"
            MIN_KEY = 137,                    // "minKey"
            MAX_KEY = 138,                    // "maxKey"
            DOLLAR_STRING = 139,              // "$-prefixed string"
            DOLLAR_DOLLAR_STRING = 140,       // "$$-prefixed string"
            DOLLAR_PREF_FIELDNAME = 141       // "$-prefixed fieldname"
        };
        /// Backward compatibility alias (Bison 3.6).
        typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::yytokentype token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind {
        enum symbol_kind_type {
            YYNTOKENS = 142,  ///< Number of tokens.
            S_YYEMPTY = -2,
            S_YYEOF = 0,                        // "EOF"
            S_YYerror = 1,                      // error
            S_YYUNDEF = 2,                      // "invalid token"
            S_ABS = 3,                          // ABS
            S_ADD = 4,                          // ADD
            S_ALL_ELEMENTS_TRUE = 5,            // "allElementsTrue"
            S_AND = 6,                          // AND
            S_ANY_ELEMENT_TRUE = 7,             // "anyElementTrue"
            S_ARG_CHARS = 8,                    // "chars argument"
            S_ARG_COLL = 9,                     // "coll argument"
            S_ARG_DATE = 10,                    // "date argument"
            S_ARG_DATE_STRING = 11,             // "dateString argument"
            S_ARG_FILTER = 12,                  // "filter"
            S_ARG_FIND = 13,                    // "find argument"
            S_ARG_FORMAT = 14,                  // "format argument"
            S_ARG_INPUT = 15,                   // "input argument"
            S_ARG_ON_ERROR = 16,                // "onError argument"
            S_ARG_ON_NULL = 17,                 // "onNull argument"
            S_ARG_OPTIONS = 18,                 // "options argument"
            S_ARG_PIPELINE = 19,                // "pipeline argument"
            S_ARG_Q = 20,                       // "q"
            S_ARG_QUERY = 21,                   // "query"
            S_ARG_REGEX = 22,                   // "regex argument"
            S_ARG_REPLACEMENT = 23,             // "replacement argument"
            S_ARG_SIZE = 24,                    // "size argument"
            S_ARG_SORT = 25,                    // "sort argument"
            S_ARG_TIMEZONE = 26,                // "timezone argument"
            S_ARG_TO = 27,                      // "to argument"
            S_ATAN2 = 28,                       // ATAN2
            S_BOOL_FALSE = 29,                  // "false"
            S_BOOL_TRUE = 30,                   // "true"
            S_CEIL = 31,                        // CEIL
            S_CMP = 32,                         // CMP
            S_CONCAT = 33,                      // CONCAT
            S_CONST_EXPR = 34,                  // CONST_EXPR
            S_CONVERT = 35,                     // CONVERT
            S_DATE_FROM_STRING = 36,            // DATE_FROM_STRING
            S_DATE_TO_STRING = 37,              // DATE_TO_STRING
            S_DECIMAL_NEGATIVE_ONE = 38,        // "-1 (decimal)"
            S_DECIMAL_ONE = 39,                 // "1 (decimal)"
            S_DECIMAL_ZERO = 40,                // "zero (decimal)"
            S_DIVIDE = 41,                      // DIVIDE
            S_DOUBLE_NEGATIVE_ONE = 42,         // "-1 (double)"
            S_DOUBLE_ONE = 43,                  // "1 (double)"
            S_DOUBLE_ZERO = 44,                 // "zero (double)"
            S_END_ARRAY = 45,                   // "end of array"
            S_END_OBJECT = 46,                  // "end of object"
            S_EQ = 47,                          // EQ
            S_EXPONENT = 48,                    // EXPONENT
            S_FLOOR = 49,                       // FLOOR
            S_GT = 50,                          // GT
            S_GTE = 51,                         // GTE
            S_ID = 52,                          // ID
            S_INDEX_OF_BYTES = 53,              // INDEX_OF_BYTES
            S_INDEX_OF_CP = 54,                 // INDEX_OF_CP
            S_INT_NEGATIVE_ONE = 55,            // "-1 (int)"
            S_INT_ONE = 56,                     // "1 (int)"
            S_INT_ZERO = 57,                    // "zero (int)"
            S_LITERAL = 58,                     // LITERAL
            S_LN = 59,                          // LN
            S_LOG = 60,                         // LOG
            S_LOGTEN = 61,                      // LOGTEN
            S_LONG_NEGATIVE_ONE = 62,           // "-1 (long)"
            S_LONG_ONE = 63,                    // "1 (long)"
            S_LONG_ZERO = 64,                   // "zero (long)"
            S_LT = 65,                          // LT
            S_LTE = 66,                         // LTE
            S_LTRIM = 67,                       // LTRIM
            S_META = 68,                        // META
            S_MOD = 69,                         // MOD
            S_MULTIPLY = 70,                    // MULTIPLY
            S_NE = 71,                          // NE
            S_NOR = 72,                         // NOR
            S_NOT = 73,                         // NOT
            S_OR = 74,                          // OR
            S_POW = 75,                         // POW
            S_RAND_VAL = 76,                    // "randVal"
            S_REGEX_FIND = 77,                  // REGEX_FIND
            S_REGEX_FIND_ALL = 78,              // REGEX_FIND_ALL
            S_REGEX_MATCH = 79,                 // REGEX_MATCH
            S_REPLACE_ALL = 80,                 // REPLACE_ALL
            S_REPLACE_ONE = 81,                 // REPLACE_ONE
            S_ROUND = 82,                       // ROUND
            S_RTRIM = 83,                       // RTRIM
            S_SET_DIFFERENCE = 84,              // "setDifference"
            S_SET_EQUALS = 85,                  // "setEquals"
            S_SET_INTERSECTION = 86,            // "setIntersection"
            S_SET_IS_SUBSET = 87,               // "setIsSubset"
            S_SET_UNION = 88,                   // "setUnion"
            S_SPLIT = 89,                       // SPLIT
            S_SQRT = 90,                        // SQRT
            S_STAGE_INHIBIT_OPTIMIZATION = 91,  // STAGE_INHIBIT_OPTIMIZATION
            S_STAGE_LIMIT = 92,                 // STAGE_LIMIT
            S_STAGE_PROJECT = 93,               // STAGE_PROJECT
            S_STAGE_SAMPLE = 94,                // STAGE_SAMPLE
            S_STAGE_SKIP = 95,                  // STAGE_SKIP
            S_STAGE_UNION_WITH = 96,            // STAGE_UNION_WITH
            S_START_ARRAY = 97,                 // "array"
            S_START_OBJECT = 98,                // "object"
            S_STR_CASE_CMP = 99,                // STR_CASE_CMP
            S_STR_LEN_BYTES = 100,              // STR_LEN_BYTES
            S_STR_LEN_CP = 101,                 // STR_LEN_CP
            S_SUBSTR = 102,                     // SUBSTR
            S_SUBSTR_BYTES = 103,               // SUBSTR_BYTES
            S_SUBSTR_CP = 104,                  // SUBSTR_CP
            S_SUBTRACT = 105,                   // SUBTRACT
            S_TEXT_SCORE = 106,                 // "textScore"
            S_TO_BOOL = 107,                    // TO_BOOL
            S_TO_DATE = 108,                    // TO_DATE
            S_TO_DECIMAL = 109,                 // TO_DECIMAL
            S_TO_DOUBLE = 110,                  // TO_DOUBLE
            S_TO_INT = 111,                     // TO_INT
            S_TO_LONG = 112,                    // TO_LONG
            S_TO_LOWER = 113,                   // TO_LOWER
            S_TO_OBJECT_ID = 114,               // TO_OBJECT_ID
            S_TO_STRING = 115,                  // TO_STRING
            S_TO_UPPER = 116,                   // TO_UPPER
            S_TRIM = 117,                       // TRIM
            S_TRUNC = 118,                      // TRUNC
            S_TYPE = 119,                       // TYPE
            S_FIELDNAME = 120,                  // "fieldname"
            S_STRING = 121,                     // "string"
            S_BINARY = 122,                     // "BinData"
            S_UNDEFINED = 123,                  // "undefined"
            S_OBJECT_ID = 124,                  // "ObjectID"
            S_DATE_LITERAL = 125,               // "Date"
            S_JSNULL = 126,                     // "null"
            S_REGEX = 127,                      // "regex"
            S_DB_POINTER = 128,                 // "dbPointer"
            S_JAVASCRIPT = 129,                 // "Code"
            S_SYMBOL = 130,                     // "Symbol"
            S_JAVASCRIPT_W_SCOPE = 131,         // "CodeWScope"
            S_INT_OTHER = 132,                  // "arbitrary integer"
            S_LONG_OTHER = 133,                 // "arbitrary long"
            S_DOUBLE_OTHER = 134,               // "arbitrary double"
            S_DECIMAL_OTHER = 135,              // "arbitrary decimal"
            S_TIMESTAMP = 136,                  // "Timestamp"
            S_MIN_KEY = 137,                    // "minKey"
            S_MAX_KEY = 138,                    // "maxKey"
            S_DOLLAR_STRING = 139,              // "$-prefixed string"
            S_DOLLAR_DOLLAR_STRING = 140,       // "$$-prefixed string"
            S_DOLLAR_PREF_FIELDNAME = 141,      // "$-prefixed fieldname"
            S_YYACCEPT = 142,                   // $accept
            S_projectionFieldname = 143,        // projectionFieldname
            S_expressionFieldname = 144,        // expressionFieldname
            S_stageAsUserFieldname = 145,       // stageAsUserFieldname
            S_predFieldname = 146,              // predFieldname
            S_argAsUserFieldname = 147,         // argAsUserFieldname
            S_aggExprAsUserFieldname = 148,     // aggExprAsUserFieldname
            S_invariableUserFieldname = 149,    // invariableUserFieldname
            S_idAsUserFieldname = 150,          // idAsUserFieldname
            S_valueFieldname = 151,             // valueFieldname
            S_projectField = 152,               // projectField
            S_expressionField = 153,            // expressionField
            S_valueField = 154,                 // valueField
            S_dbPointer = 155,                  // dbPointer
            S_javascript = 156,                 // javascript
            S_symbol = 157,                     // symbol
            S_javascriptWScope = 158,           // javascriptWScope
            S_int = 159,                        // int
            S_timestamp = 160,                  // timestamp
            S_long = 161,                       // long
            S_double = 162,                     // double
            S_decimal = 163,                    // decimal
            S_minKey = 164,                     // minKey
            S_maxKey = 165,                     // maxKey
            S_value = 166,                      // value
            S_string = 167,                     // string
            S_fieldPath = 168,                  // fieldPath
            S_binary = 169,                     // binary
            S_undefined = 170,                  // undefined
            S_objectId = 171,                   // objectId
            S_bool = 172,                       // bool
            S_date = 173,                       // date
            S_null = 174,                       // null
            S_regex = 175,                      // regex
            S_simpleValue = 176,                // simpleValue
            S_compoundValue = 177,              // compoundValue
            S_valueArray = 178,                 // valueArray
            S_valueObject = 179,                // valueObject
            S_valueFields = 180,                // valueFields
            S_variable = 181,                   // variable
            S_pipeline = 182,                   // pipeline
            S_stageList = 183,                  // stageList
            S_stage = 184,                      // stage
            S_inhibitOptimization = 185,        // inhibitOptimization
            S_unionWith = 186,                  // unionWith
            S_skip = 187,                       // skip
            S_limit = 188,                      // limit
            S_project = 189,                    // project
            S_sample = 190,                     // sample
            S_projectFields = 191,              // projectFields
            S_projection = 192,                 // projection
            S_num = 193,                        // num
            S_expression = 194,                 // expression
            S_compoundExpression = 195,         // compoundExpression
            S_exprFixedTwoArg = 196,            // exprFixedTwoArg
            S_expressionArray = 197,            // expressionArray
            S_expressionObject = 198,           // expressionObject
            S_expressionFields = 199,           // expressionFields
            S_maths = 200,                      // maths
            S_add = 201,                        // add
            S_atan2 = 202,                      // atan2
            S_boolExps = 203,                   // boolExps
            S_and = 204,                        // and
            S_or = 205,                         // or
            S_not = 206,                        // not
            S_literalEscapes = 207,             // literalEscapes
            S_const = 208,                      // const
            S_literal = 209,                    // literal
            S_stringExps = 210,                 // stringExps
            S_concat = 211,                     // concat
            S_dateFromString = 212,             // dateFromString
            S_dateToString = 213,               // dateToString
            S_indexOfBytes = 214,               // indexOfBytes
            S_indexOfCP = 215,                  // indexOfCP
            S_ltrim = 216,                      // ltrim
            S_regexFind = 217,                  // regexFind
            S_regexFindAll = 218,               // regexFindAll
            S_regexMatch = 219,                 // regexMatch
            S_regexArgs = 220,                  // regexArgs
            S_replaceOne = 221,                 // replaceOne
            S_replaceAll = 222,                 // replaceAll
            S_rtrim = 223,                      // rtrim
            S_split = 224,                      // split
            S_strLenBytes = 225,                // strLenBytes
            S_strLenCP = 226,                   // strLenCP
            S_strcasecmp = 227,                 // strcasecmp
            S_substr = 228,                     // substr
            S_substrBytes = 229,                // substrBytes
            S_substrCP = 230,                   // substrCP
            S_toLower = 231,                    // toLower
            S_toUpper = 232,                    // toUpper
            S_trim = 233,                       // trim
            S_compExprs = 234,                  // compExprs
            S_cmp = 235,                        // cmp
            S_eq = 236,                         // eq
            S_gt = 237,                         // gt
            S_gte = 238,                        // gte
            S_lt = 239,                         // lt
            S_lte = 240,                        // lte
            S_ne = 241,                         // ne
            S_typeExpression = 242,             // typeExpression
            S_convert = 243,                    // convert
            S_toBool = 244,                     // toBool
            S_toDate = 245,                     // toDate
            S_toDecimal = 246,                  // toDecimal
            S_toDouble = 247,                   // toDouble
            S_toInt = 248,                      // toInt
            S_toLong = 249,                     // toLong
            S_toObjectId = 250,                 // toObjectId
            S_toString = 251,                   // toString
            S_type = 252,                       // type
            S_abs = 253,                        // abs
            S_ceil = 254,                       // ceil
            S_divide = 255,                     // divide
            S_exponent = 256,                   // exponent
            S_floor = 257,                      // floor
            S_ln = 258,                         // ln
            S_log = 259,                        // log
            S_logten = 260,                     // logten
            S_mod = 261,                        // mod
            S_multiply = 262,                   // multiply
            S_pow = 263,                        // pow
            S_round = 264,                      // round
            S_sqrt = 265,                       // sqrt
            S_subtract = 266,                   // subtract
            S_trunc = 267,                      // trunc
            S_onErrorArg = 268,                 // onErrorArg
            S_onNullArg = 269,                  // onNullArg
            S_formatArg = 270,                  // formatArg
            S_timezoneArg = 271,                // timezoneArg
            S_charsArg = 272,                   // charsArg
            S_optionsArg = 273,                 // optionsArg
            S_expressions = 274,                // expressions
            S_values = 275,                     // values
            S_exprZeroToTwo = 276,              // exprZeroToTwo
            S_setExpression = 277,              // setExpression
            S_allElementsTrue = 278,            // allElementsTrue
            S_anyElementTrue = 279,             // anyElementTrue
            S_setDifference = 280,              // setDifference
            S_setEquals = 281,                  // setEquals
            S_setIntersection = 282,            // setIntersection
            S_setIsSubset = 283,                // setIsSubset
            S_setUnion = 284,                   // setUnion
            S_match = 285,                      // match
            S_predicates = 286,                 // predicates
            S_compoundMatchExprs = 287,         // compoundMatchExprs
            S_predValue = 288,                  // predValue
            S_additionalExprs = 289,            // additionalExprs
            S_predicate = 290,                  // predicate
            S_logicalExpr = 291,                // logicalExpr
            S_operatorExpression = 292,         // operatorExpression
            S_notExpr = 293,                    // notExpr
            S_logicalExprField = 294,           // logicalExprField
            S_sortSpecs = 295,                  // sortSpecs
            S_specList = 296,                   // specList
            S_metaSort = 297,                   // metaSort
            S_oneOrNegOne = 298,                // oneOrNegOne
            S_metaSortKeyword = 299,            // metaSortKeyword
            S_sortSpec = 300,                   // sortSpec
            S_start = 301,                      // start
            S_START_ORDERED_OBJECT = 302,       // START_ORDERED_OBJECT
            S_303_1 = 303                       // $@1
        };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base {
        /// Alias to Base.
        typedef Base super_type;

        /// Default constructor.
        basic_symbol() : value(), location() {}

#if 201103L <= YY_CPLUSPLUS
        /// Move constructor.
        basic_symbol(basic_symbol&& that)
            : Base(std::move(that)), value(), location(std::move(that.location)) {
            switch (this->kind()) {
                case symbol_kind::S_BINARY:  // "BinData"
                    value.move<BSONBinData>(std::move(that.value));
                    break;

                case symbol_kind::S_JAVASCRIPT:  // "Code"
                    value.move<BSONCode>(std::move(that.value));
                    break;

                case symbol_kind::S_JAVASCRIPT_W_SCOPE:  // "CodeWScope"
                    value.move<BSONCodeWScope>(std::move(that.value));
                    break;

                case symbol_kind::S_DB_POINTER:  // "dbPointer"
                    value.move<BSONDBRef>(std::move(that.value));
                    break;

                case symbol_kind::S_REGEX:  // "regex"
                    value.move<BSONRegEx>(std::move(that.value));
                    break;

                case symbol_kind::S_SYMBOL:  // "Symbol"
                    value.move<BSONSymbol>(std::move(that.value));
                    break;

                case symbol_kind::S_dbPointer:            // dbPointer
                case symbol_kind::S_javascript:           // javascript
                case symbol_kind::S_symbol:               // symbol
                case symbol_kind::S_javascriptWScope:     // javascriptWScope
                case symbol_kind::S_int:                  // int
                case symbol_kind::S_timestamp:            // timestamp
                case symbol_kind::S_long:                 // long
                case symbol_kind::S_double:               // double
                case symbol_kind::S_decimal:              // decimal
                case symbol_kind::S_minKey:               // minKey
                case symbol_kind::S_maxKey:               // maxKey
                case symbol_kind::S_value:                // value
                case symbol_kind::S_string:               // string
                case symbol_kind::S_fieldPath:            // fieldPath
                case symbol_kind::S_binary:               // binary
                case symbol_kind::S_undefined:            // undefined
                case symbol_kind::S_objectId:             // objectId
                case symbol_kind::S_bool:                 // bool
                case symbol_kind::S_date:                 // date
                case symbol_kind::S_null:                 // null
                case symbol_kind::S_regex:                // regex
                case symbol_kind::S_simpleValue:          // simpleValue
                case symbol_kind::S_compoundValue:        // compoundValue
                case symbol_kind::S_valueArray:           // valueArray
                case symbol_kind::S_valueObject:          // valueObject
                case symbol_kind::S_valueFields:          // valueFields
                case symbol_kind::S_variable:             // variable
                case symbol_kind::S_pipeline:             // pipeline
                case symbol_kind::S_stageList:            // stageList
                case symbol_kind::S_stage:                // stage
                case symbol_kind::S_inhibitOptimization:  // inhibitOptimization
                case symbol_kind::S_unionWith:            // unionWith
                case symbol_kind::S_skip:                 // skip
                case symbol_kind::S_limit:                // limit
                case symbol_kind::S_project:              // project
                case symbol_kind::S_sample:               // sample
                case symbol_kind::S_projectFields:        // projectFields
                case symbol_kind::S_projection:           // projection
                case symbol_kind::S_num:                  // num
                case symbol_kind::S_expression:           // expression
                case symbol_kind::S_compoundExpression:   // compoundExpression
                case symbol_kind::S_exprFixedTwoArg:      // exprFixedTwoArg
                case symbol_kind::S_expressionArray:      // expressionArray
                case symbol_kind::S_expressionObject:     // expressionObject
                case symbol_kind::S_expressionFields:     // expressionFields
                case symbol_kind::S_maths:                // maths
                case symbol_kind::S_add:                  // add
                case symbol_kind::S_atan2:                // atan2
                case symbol_kind::S_boolExps:             // boolExps
                case symbol_kind::S_and:                  // and
                case symbol_kind::S_or:                   // or
                case symbol_kind::S_not:                  // not
                case symbol_kind::S_literalEscapes:       // literalEscapes
                case symbol_kind::S_const:                // const
                case symbol_kind::S_literal:              // literal
                case symbol_kind::S_stringExps:           // stringExps
                case symbol_kind::S_concat:               // concat
                case symbol_kind::S_dateFromString:       // dateFromString
                case symbol_kind::S_dateToString:         // dateToString
                case symbol_kind::S_indexOfBytes:         // indexOfBytes
                case symbol_kind::S_indexOfCP:            // indexOfCP
                case symbol_kind::S_ltrim:                // ltrim
                case symbol_kind::S_regexFind:            // regexFind
                case symbol_kind::S_regexFindAll:         // regexFindAll
                case symbol_kind::S_regexMatch:           // regexMatch
                case symbol_kind::S_regexArgs:            // regexArgs
                case symbol_kind::S_replaceOne:           // replaceOne
                case symbol_kind::S_replaceAll:           // replaceAll
                case symbol_kind::S_rtrim:                // rtrim
                case symbol_kind::S_split:                // split
                case symbol_kind::S_strLenBytes:          // strLenBytes
                case symbol_kind::S_strLenCP:             // strLenCP
                case symbol_kind::S_strcasecmp:           // strcasecmp
                case symbol_kind::S_substr:               // substr
                case symbol_kind::S_substrBytes:          // substrBytes
                case symbol_kind::S_substrCP:             // substrCP
                case symbol_kind::S_toLower:              // toLower
                case symbol_kind::S_toUpper:              // toUpper
                case symbol_kind::S_trim:                 // trim
                case symbol_kind::S_compExprs:            // compExprs
                case symbol_kind::S_cmp:                  // cmp
                case symbol_kind::S_eq:                   // eq
                case symbol_kind::S_gt:                   // gt
                case symbol_kind::S_gte:                  // gte
                case symbol_kind::S_lt:                   // lt
                case symbol_kind::S_lte:                  // lte
                case symbol_kind::S_ne:                   // ne
                case symbol_kind::S_typeExpression:       // typeExpression
                case symbol_kind::S_convert:              // convert
                case symbol_kind::S_toBool:               // toBool
                case symbol_kind::S_toDate:               // toDate
                case symbol_kind::S_toDecimal:            // toDecimal
                case symbol_kind::S_toDouble:             // toDouble
                case symbol_kind::S_toInt:                // toInt
                case symbol_kind::S_toLong:               // toLong
                case symbol_kind::S_toObjectId:           // toObjectId
                case symbol_kind::S_toString:             // toString
                case symbol_kind::S_type:                 // type
                case symbol_kind::S_abs:                  // abs
                case symbol_kind::S_ceil:                 // ceil
                case symbol_kind::S_divide:               // divide
                case symbol_kind::S_exponent:             // exponent
                case symbol_kind::S_floor:                // floor
                case symbol_kind::S_ln:                   // ln
                case symbol_kind::S_log:                  // log
                case symbol_kind::S_logten:               // logten
                case symbol_kind::S_mod:                  // mod
                case symbol_kind::S_multiply:             // multiply
                case symbol_kind::S_pow:                  // pow
                case symbol_kind::S_round:                // round
                case symbol_kind::S_sqrt:                 // sqrt
                case symbol_kind::S_subtract:             // subtract
                case symbol_kind::S_trunc:                // trunc
                case symbol_kind::S_setExpression:        // setExpression
                case symbol_kind::S_allElementsTrue:      // allElementsTrue
                case symbol_kind::S_anyElementTrue:       // anyElementTrue
                case symbol_kind::S_setDifference:        // setDifference
                case symbol_kind::S_setEquals:            // setEquals
                case symbol_kind::S_setIntersection:      // setIntersection
                case symbol_kind::S_setIsSubset:          // setIsSubset
                case symbol_kind::S_setUnion:             // setUnion
                case symbol_kind::S_match:                // match
                case symbol_kind::S_predicates:           // predicates
                case symbol_kind::S_compoundMatchExprs:   // compoundMatchExprs
                case symbol_kind::S_predValue:            // predValue
                case symbol_kind::S_additionalExprs:      // additionalExprs
                case symbol_kind::S_sortSpecs:            // sortSpecs
                case symbol_kind::S_specList:             // specList
                case symbol_kind::S_metaSort:             // metaSort
                case symbol_kind::S_oneOrNegOne:          // oneOrNegOne
                case symbol_kind::S_metaSortKeyword:      // metaSortKeyword
                    value.move<CNode>(std::move(that.value));
                    break;

                case symbol_kind::S_projectionFieldname:      // projectionFieldname
                case symbol_kind::S_expressionFieldname:      // expressionFieldname
                case symbol_kind::S_stageAsUserFieldname:     // stageAsUserFieldname
                case symbol_kind::S_predFieldname:            // predFieldname
                case symbol_kind::S_argAsUserFieldname:       // argAsUserFieldname
                case symbol_kind::S_aggExprAsUserFieldname:   // aggExprAsUserFieldname
                case symbol_kind::S_invariableUserFieldname:  // invariableUserFieldname
                case symbol_kind::S_idAsUserFieldname:        // idAsUserFieldname
                case symbol_kind::S_valueFieldname:           // valueFieldname
                case symbol_kind::S_logicalExprField:         // logicalExprField
                    value.move<CNode::Fieldname>(std::move(that.value));
                    break;

                case symbol_kind::S_DATE_LITERAL:  // "Date"
                    value.move<Date_t>(std::move(that.value));
                    break;

                case symbol_kind::S_DECIMAL_OTHER:  // "arbitrary decimal"
                    value.move<Decimal128>(std::move(that.value));
                    break;

                case symbol_kind::S_OBJECT_ID:  // "ObjectID"
                    value.move<OID>(std::move(that.value));
                    break;

                case symbol_kind::S_TIMESTAMP:  // "Timestamp"
                    value.move<Timestamp>(std::move(that.value));
                    break;

                case symbol_kind::S_MAX_KEY:  // "maxKey"
                    value.move<UserMaxKey>(std::move(that.value));
                    break;

                case symbol_kind::S_MIN_KEY:  // "minKey"
                    value.move<UserMinKey>(std::move(that.value));
                    break;

                case symbol_kind::S_JSNULL:  // "null"
                    value.move<UserNull>(std::move(that.value));
                    break;

                case symbol_kind::S_UNDEFINED:  // "undefined"
                    value.move<UserUndefined>(std::move(that.value));
                    break;

                case symbol_kind::S_DOUBLE_OTHER:  // "arbitrary double"
                    value.move<double>(std::move(that.value));
                    break;

                case symbol_kind::S_INT_OTHER:  // "arbitrary integer"
                    value.move<int>(std::move(that.value));
                    break;

                case symbol_kind::S_LONG_OTHER:  // "arbitrary long"
                    value.move<long long>(std::move(that.value));
                    break;

                case symbol_kind::S_projectField:        // projectField
                case symbol_kind::S_expressionField:     // expressionField
                case symbol_kind::S_valueField:          // valueField
                case symbol_kind::S_onErrorArg:          // onErrorArg
                case symbol_kind::S_onNullArg:           // onNullArg
                case symbol_kind::S_formatArg:           // formatArg
                case symbol_kind::S_timezoneArg:         // timezoneArg
                case symbol_kind::S_charsArg:            // charsArg
                case symbol_kind::S_optionsArg:          // optionsArg
                case symbol_kind::S_predicate:           // predicate
                case symbol_kind::S_logicalExpr:         // logicalExpr
                case symbol_kind::S_operatorExpression:  // operatorExpression
                case symbol_kind::S_notExpr:             // notExpr
                case symbol_kind::S_sortSpec:            // sortSpec
                    value.move<std::pair<CNode::Fieldname, CNode>>(std::move(that.value));
                    break;

                case symbol_kind::S_FIELDNAME:              // "fieldname"
                case symbol_kind::S_STRING:                 // "string"
                case symbol_kind::S_DOLLAR_STRING:          // "$-prefixed string"
                case symbol_kind::S_DOLLAR_DOLLAR_STRING:   // "$$-prefixed string"
                case symbol_kind::S_DOLLAR_PREF_FIELDNAME:  // "$-prefixed fieldname"
                    value.move<std::string>(std::move(that.value));
                    break;

                case symbol_kind::S_expressions:    // expressions
                case symbol_kind::S_values:         // values
                case symbol_kind::S_exprZeroToTwo:  // exprZeroToTwo
                    value.move<std::vector<CNode>>(std::move(that.value));
                    break;

                default:
                    break;
            }
        }
#endif

        /// Copy constructor.
        basic_symbol(const basic_symbol& that);

        /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, location_type&& l)
            : Base(t), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const location_type& l) : Base(t), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, BSONBinData&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const BSONBinData& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, BSONCode&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const BSONCode& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, BSONCodeWScope&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const BSONCodeWScope& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, BSONDBRef&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const BSONDBRef& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, BSONRegEx&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const BSONRegEx& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, BSONSymbol&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const BSONSymbol& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, CNode&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const CNode& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, CNode::Fieldname&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const CNode::Fieldname& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, Date_t&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const Date_t& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, Decimal128&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const Decimal128& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, OID&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const OID& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, Timestamp&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const Timestamp& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, UserMaxKey&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const UserMaxKey& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, UserMinKey&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const UserMinKey& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, UserNull&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const UserNull& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, UserUndefined&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const UserUndefined& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, double&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const double& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, int&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const int& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, long long&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const long long& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t,
                     std::pair<CNode::Fieldname, CNode>&& v,
                     location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t,
                     const std::pair<CNode::Fieldname, CNode>& v,
                     const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, std::string&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t, const std::string& v, const location_type& l)
            : Base(t), value(v), location(l) {}
#endif
#if 201103L <= YY_CPLUSPLUS
        basic_symbol(typename Base::kind_type t, std::vector<CNode>&& v, location_type&& l)
            : Base(t), value(std::move(v)), location(std::move(l)) {}
#else
        basic_symbol(typename Base::kind_type t,
                     const std::vector<CNode>& v,
                     const location_type& l)
            : Base(t), value(v), location(l) {}
#endif

        /// Destroy the symbol.
        ~basic_symbol() {
            clear();
        }

        /// Destroy contents, and record that is empty.
        void clear() {
            // User destructor.
            symbol_kind_type yykind = this->kind();
            basic_symbol<Base>& yysym = *this;
            (void)yysym;
            switch (yykind) {
                default:
                    break;
            }

            // Value type destructor.
            switch (yykind) {
                case symbol_kind::S_BINARY:  // "BinData"
                    value.template destroy<BSONBinData>();
                    break;

                case symbol_kind::S_JAVASCRIPT:  // "Code"
                    value.template destroy<BSONCode>();
                    break;

                case symbol_kind::S_JAVASCRIPT_W_SCOPE:  // "CodeWScope"
                    value.template destroy<BSONCodeWScope>();
                    break;

                case symbol_kind::S_DB_POINTER:  // "dbPointer"
                    value.template destroy<BSONDBRef>();
                    break;

                case symbol_kind::S_REGEX:  // "regex"
                    value.template destroy<BSONRegEx>();
                    break;

                case symbol_kind::S_SYMBOL:  // "Symbol"
                    value.template destroy<BSONSymbol>();
                    break;

                case symbol_kind::S_dbPointer:            // dbPointer
                case symbol_kind::S_javascript:           // javascript
                case symbol_kind::S_symbol:               // symbol
                case symbol_kind::S_javascriptWScope:     // javascriptWScope
                case symbol_kind::S_int:                  // int
                case symbol_kind::S_timestamp:            // timestamp
                case symbol_kind::S_long:                 // long
                case symbol_kind::S_double:               // double
                case symbol_kind::S_decimal:              // decimal
                case symbol_kind::S_minKey:               // minKey
                case symbol_kind::S_maxKey:               // maxKey
                case symbol_kind::S_value:                // value
                case symbol_kind::S_string:               // string
                case symbol_kind::S_fieldPath:            // fieldPath
                case symbol_kind::S_binary:               // binary
                case symbol_kind::S_undefined:            // undefined
                case symbol_kind::S_objectId:             // objectId
                case symbol_kind::S_bool:                 // bool
                case symbol_kind::S_date:                 // date
                case symbol_kind::S_null:                 // null
                case symbol_kind::S_regex:                // regex
                case symbol_kind::S_simpleValue:          // simpleValue
                case symbol_kind::S_compoundValue:        // compoundValue
                case symbol_kind::S_valueArray:           // valueArray
                case symbol_kind::S_valueObject:          // valueObject
                case symbol_kind::S_valueFields:          // valueFields
                case symbol_kind::S_variable:             // variable
                case symbol_kind::S_pipeline:             // pipeline
                case symbol_kind::S_stageList:            // stageList
                case symbol_kind::S_stage:                // stage
                case symbol_kind::S_inhibitOptimization:  // inhibitOptimization
                case symbol_kind::S_unionWith:            // unionWith
                case symbol_kind::S_skip:                 // skip
                case symbol_kind::S_limit:                // limit
                case symbol_kind::S_project:              // project
                case symbol_kind::S_sample:               // sample
                case symbol_kind::S_projectFields:        // projectFields
                case symbol_kind::S_projection:           // projection
                case symbol_kind::S_num:                  // num
                case symbol_kind::S_expression:           // expression
                case symbol_kind::S_compoundExpression:   // compoundExpression
                case symbol_kind::S_exprFixedTwoArg:      // exprFixedTwoArg
                case symbol_kind::S_expressionArray:      // expressionArray
                case symbol_kind::S_expressionObject:     // expressionObject
                case symbol_kind::S_expressionFields:     // expressionFields
                case symbol_kind::S_maths:                // maths
                case symbol_kind::S_add:                  // add
                case symbol_kind::S_atan2:                // atan2
                case symbol_kind::S_boolExps:             // boolExps
                case symbol_kind::S_and:                  // and
                case symbol_kind::S_or:                   // or
                case symbol_kind::S_not:                  // not
                case symbol_kind::S_literalEscapes:       // literalEscapes
                case symbol_kind::S_const:                // const
                case symbol_kind::S_literal:              // literal
                case symbol_kind::S_stringExps:           // stringExps
                case symbol_kind::S_concat:               // concat
                case symbol_kind::S_dateFromString:       // dateFromString
                case symbol_kind::S_dateToString:         // dateToString
                case symbol_kind::S_indexOfBytes:         // indexOfBytes
                case symbol_kind::S_indexOfCP:            // indexOfCP
                case symbol_kind::S_ltrim:                // ltrim
                case symbol_kind::S_regexFind:            // regexFind
                case symbol_kind::S_regexFindAll:         // regexFindAll
                case symbol_kind::S_regexMatch:           // regexMatch
                case symbol_kind::S_regexArgs:            // regexArgs
                case symbol_kind::S_replaceOne:           // replaceOne
                case symbol_kind::S_replaceAll:           // replaceAll
                case symbol_kind::S_rtrim:                // rtrim
                case symbol_kind::S_split:                // split
                case symbol_kind::S_strLenBytes:          // strLenBytes
                case symbol_kind::S_strLenCP:             // strLenCP
                case symbol_kind::S_strcasecmp:           // strcasecmp
                case symbol_kind::S_substr:               // substr
                case symbol_kind::S_substrBytes:          // substrBytes
                case symbol_kind::S_substrCP:             // substrCP
                case symbol_kind::S_toLower:              // toLower
                case symbol_kind::S_toUpper:              // toUpper
                case symbol_kind::S_trim:                 // trim
                case symbol_kind::S_compExprs:            // compExprs
                case symbol_kind::S_cmp:                  // cmp
                case symbol_kind::S_eq:                   // eq
                case symbol_kind::S_gt:                   // gt
                case symbol_kind::S_gte:                  // gte
                case symbol_kind::S_lt:                   // lt
                case symbol_kind::S_lte:                  // lte
                case symbol_kind::S_ne:                   // ne
                case symbol_kind::S_typeExpression:       // typeExpression
                case symbol_kind::S_convert:              // convert
                case symbol_kind::S_toBool:               // toBool
                case symbol_kind::S_toDate:               // toDate
                case symbol_kind::S_toDecimal:            // toDecimal
                case symbol_kind::S_toDouble:             // toDouble
                case symbol_kind::S_toInt:                // toInt
                case symbol_kind::S_toLong:               // toLong
                case symbol_kind::S_toObjectId:           // toObjectId
                case symbol_kind::S_toString:             // toString
                case symbol_kind::S_type:                 // type
                case symbol_kind::S_abs:                  // abs
                case symbol_kind::S_ceil:                 // ceil
                case symbol_kind::S_divide:               // divide
                case symbol_kind::S_exponent:             // exponent
                case symbol_kind::S_floor:                // floor
                case symbol_kind::S_ln:                   // ln
                case symbol_kind::S_log:                  // log
                case symbol_kind::S_logten:               // logten
                case symbol_kind::S_mod:                  // mod
                case symbol_kind::S_multiply:             // multiply
                case symbol_kind::S_pow:                  // pow
                case symbol_kind::S_round:                // round
                case symbol_kind::S_sqrt:                 // sqrt
                case symbol_kind::S_subtract:             // subtract
                case symbol_kind::S_trunc:                // trunc
                case symbol_kind::S_setExpression:        // setExpression
                case symbol_kind::S_allElementsTrue:      // allElementsTrue
                case symbol_kind::S_anyElementTrue:       // anyElementTrue
                case symbol_kind::S_setDifference:        // setDifference
                case symbol_kind::S_setEquals:            // setEquals
                case symbol_kind::S_setIntersection:      // setIntersection
                case symbol_kind::S_setIsSubset:          // setIsSubset
                case symbol_kind::S_setUnion:             // setUnion
                case symbol_kind::S_match:                // match
                case symbol_kind::S_predicates:           // predicates
                case symbol_kind::S_compoundMatchExprs:   // compoundMatchExprs
                case symbol_kind::S_predValue:            // predValue
                case symbol_kind::S_additionalExprs:      // additionalExprs
                case symbol_kind::S_sortSpecs:            // sortSpecs
                case symbol_kind::S_specList:             // specList
                case symbol_kind::S_metaSort:             // metaSort
                case symbol_kind::S_oneOrNegOne:          // oneOrNegOne
                case symbol_kind::S_metaSortKeyword:      // metaSortKeyword
                    value.template destroy<CNode>();
                    break;

                case symbol_kind::S_projectionFieldname:      // projectionFieldname
                case symbol_kind::S_expressionFieldname:      // expressionFieldname
                case symbol_kind::S_stageAsUserFieldname:     // stageAsUserFieldname
                case symbol_kind::S_predFieldname:            // predFieldname
                case symbol_kind::S_argAsUserFieldname:       // argAsUserFieldname
                case symbol_kind::S_aggExprAsUserFieldname:   // aggExprAsUserFieldname
                case symbol_kind::S_invariableUserFieldname:  // invariableUserFieldname
                case symbol_kind::S_idAsUserFieldname:        // idAsUserFieldname
                case symbol_kind::S_valueFieldname:           // valueFieldname
                case symbol_kind::S_logicalExprField:         // logicalExprField
                    value.template destroy<CNode::Fieldname>();
                    break;

                case symbol_kind::S_DATE_LITERAL:  // "Date"
                    value.template destroy<Date_t>();
                    break;

                case symbol_kind::S_DECIMAL_OTHER:  // "arbitrary decimal"
                    value.template destroy<Decimal128>();
                    break;

                case symbol_kind::S_OBJECT_ID:  // "ObjectID"
                    value.template destroy<OID>();
                    break;

                case symbol_kind::S_TIMESTAMP:  // "Timestamp"
                    value.template destroy<Timestamp>();
                    break;

                case symbol_kind::S_MAX_KEY:  // "maxKey"
                    value.template destroy<UserMaxKey>();
                    break;

                case symbol_kind::S_MIN_KEY:  // "minKey"
                    value.template destroy<UserMinKey>();
                    break;

                case symbol_kind::S_JSNULL:  // "null"
                    value.template destroy<UserNull>();
                    break;

                case symbol_kind::S_UNDEFINED:  // "undefined"
                    value.template destroy<UserUndefined>();
                    break;

                case symbol_kind::S_DOUBLE_OTHER:  // "arbitrary double"
                    value.template destroy<double>();
                    break;

                case symbol_kind::S_INT_OTHER:  // "arbitrary integer"
                    value.template destroy<int>();
                    break;

                case symbol_kind::S_LONG_OTHER:  // "arbitrary long"
                    value.template destroy<long long>();
                    break;

                case symbol_kind::S_projectField:        // projectField
                case symbol_kind::S_expressionField:     // expressionField
                case symbol_kind::S_valueField:          // valueField
                case symbol_kind::S_onErrorArg:          // onErrorArg
                case symbol_kind::S_onNullArg:           // onNullArg
                case symbol_kind::S_formatArg:           // formatArg
                case symbol_kind::S_timezoneArg:         // timezoneArg
                case symbol_kind::S_charsArg:            // charsArg
                case symbol_kind::S_optionsArg:          // optionsArg
                case symbol_kind::S_predicate:           // predicate
                case symbol_kind::S_logicalExpr:         // logicalExpr
                case symbol_kind::S_operatorExpression:  // operatorExpression
                case symbol_kind::S_notExpr:             // notExpr
                case symbol_kind::S_sortSpec:            // sortSpec
                    value.template destroy<std::pair<CNode::Fieldname, CNode>>();
                    break;

                case symbol_kind::S_FIELDNAME:              // "fieldname"
                case symbol_kind::S_STRING:                 // "string"
                case symbol_kind::S_DOLLAR_STRING:          // "$-prefixed string"
                case symbol_kind::S_DOLLAR_DOLLAR_STRING:   // "$$-prefixed string"
                case symbol_kind::S_DOLLAR_PREF_FIELDNAME:  // "$-prefixed fieldname"
                    value.template destroy<std::string>();
                    break;

                case symbol_kind::S_expressions:    // expressions
                case symbol_kind::S_values:         // values
                case symbol_kind::S_exprZeroToTwo:  // exprZeroToTwo
                    value.template destroy<std::vector<CNode>>();
                    break;

                default:
                    break;
            }

            Base::clear();
        }

        /// The user-facing name of this symbol.
        std::string name() const YY_NOEXCEPT {
            return ParserGen::symbol_name(this->kind());
        }

        /// Backward compatibility (Bison 3.6).
        symbol_kind_type type_get() const YY_NOEXCEPT;

        /// Whether empty.
        bool empty() const YY_NOEXCEPT;

        /// Destructive move, \a s is emptied into this.
        void move(basic_symbol& s);

        /// The semantic value.
        semantic_type value;

        /// The location.
        location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
        /// Assignment operator.
        basic_symbol& operator=(const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind {
        /// Default constructor.
        by_kind();

#if 201103L <= YY_CPLUSPLUS
        /// Move constructor.
        by_kind(by_kind&& that);
#endif

        /// Copy constructor.
        by_kind(const by_kind& that);

        /// The symbol kind as needed by the constructor.
        typedef token_kind_type kind_type;

        /// Constructor from (external) token numbers.
        by_kind(kind_type t);

        /// Record that this symbol is empty.
        void clear();

        /// Steal the symbol kind from \a that.
        void move(by_kind& that);

        /// The (internal) type number (corresponding to \a type).
        /// \a empty when empty.
        symbol_kind_type kind() const YY_NOEXCEPT;

        /// Backward compatibility (Bison 3.6).
        symbol_kind_type type_get() const YY_NOEXCEPT;

        /// The symbol kind.
        /// \a S_YYEMPTY when empty.
        symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind> {
        /// Superclass.
        typedef basic_symbol<by_kind> super_type;

        /// Empty symbol.
        symbol_type() {}

        /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, location_type l) : super_type(token_type(tok), std::move(l)) {
            YY_ASSERT(
                tok == token::END_OF_FILE || tok == token::YYerror || tok == token::YYUNDEF ||
                tok == token::ABS || tok == token::ADD || tok == token::ALL_ELEMENTS_TRUE ||
                tok == token::AND || tok == token::ANY_ELEMENT_TRUE || tok == token::ARG_CHARS ||
                tok == token::ARG_COLL || tok == token::ARG_DATE || tok == token::ARG_DATE_STRING ||
                tok == token::ARG_FILTER || tok == token::ARG_FIND || tok == token::ARG_FORMAT ||
                tok == token::ARG_INPUT || tok == token::ARG_ON_ERROR ||
                tok == token::ARG_ON_NULL || tok == token::ARG_OPTIONS ||
                tok == token::ARG_PIPELINE || tok == token::ARG_Q || tok == token::ARG_QUERY ||
                tok == token::ARG_REGEX || tok == token::ARG_REPLACEMENT ||
                tok == token::ARG_SIZE || tok == token::ARG_SORT || tok == token::ARG_TIMEZONE ||
                tok == token::ARG_TO || tok == token::ATAN2 || tok == token::BOOL_FALSE ||
                tok == token::BOOL_TRUE || tok == token::CEIL || tok == token::CMP ||
                tok == token::CONCAT || tok == token::CONST_EXPR || tok == token::CONVERT ||
                tok == token::DATE_FROM_STRING || tok == token::DATE_TO_STRING ||
                tok == token::DECIMAL_NEGATIVE_ONE || tok == token::DECIMAL_ONE ||
                tok == token::DECIMAL_ZERO || tok == token::DIVIDE ||
                tok == token::DOUBLE_NEGATIVE_ONE || tok == token::DOUBLE_ONE ||
                tok == token::DOUBLE_ZERO || tok == token::END_ARRAY || tok == token::END_OBJECT ||
                tok == token::EQ || tok == token::EXPONENT || tok == token::FLOOR ||
                tok == token::GT || tok == token::GTE || tok == token::ID ||
                tok == token::INDEX_OF_BYTES || tok == token::INDEX_OF_CP ||
                tok == token::INT_NEGATIVE_ONE || tok == token::INT_ONE || tok == token::INT_ZERO ||
                tok == token::LITERAL || tok == token::LN || tok == token::LOG ||
                tok == token::LOGTEN || tok == token::LONG_NEGATIVE_ONE || tok == token::LONG_ONE ||
                tok == token::LONG_ZERO || tok == token::LT || tok == token::LTE ||
                tok == token::LTRIM || tok == token::META || tok == token::MOD ||
                tok == token::MULTIPLY || tok == token::NE || tok == token::NOR ||
                tok == token::NOT || tok == token::OR || tok == token::POW ||
                tok == token::RAND_VAL || tok == token::REGEX_FIND ||
                tok == token::REGEX_FIND_ALL || tok == token::REGEX_MATCH ||
                tok == token::REPLACE_ALL || tok == token::REPLACE_ONE || tok == token::ROUND ||
                tok == token::RTRIM || tok == token::SET_DIFFERENCE || tok == token::SET_EQUALS ||
                tok == token::SET_INTERSECTION || tok == token::SET_IS_SUBSET ||
                tok == token::SET_UNION || tok == token::SPLIT || tok == token::SQRT ||
                tok == token::STAGE_INHIBIT_OPTIMIZATION || tok == token::STAGE_LIMIT ||
                tok == token::STAGE_PROJECT || tok == token::STAGE_SAMPLE ||
                tok == token::STAGE_SKIP || tok == token::STAGE_UNION_WITH ||
                tok == token::START_ARRAY || tok == token::START_OBJECT ||
                tok == token::STR_CASE_CMP || tok == token::STR_LEN_BYTES ||
                tok == token::STR_LEN_CP || tok == token::SUBSTR || tok == token::SUBSTR_BYTES ||
                tok == token::SUBSTR_CP || tok == token::SUBTRACT || tok == token::TEXT_SCORE ||
                tok == token::TO_BOOL || tok == token::TO_DATE || tok == token::TO_DECIMAL ||
                tok == token::TO_DOUBLE || tok == token::TO_INT || tok == token::TO_LONG ||
                tok == token::TO_LOWER || tok == token::TO_OBJECT_ID || tok == token::TO_STRING ||
                tok == token::TO_UPPER || tok == token::TRIM || tok == token::TRUNC ||
                tok == token::TYPE);
        }
#else
        symbol_type(int tok, const location_type& l) : super_type(token_type(tok), l) {
            YY_ASSERT(
                tok == token::END_OF_FILE || tok == token::YYerror || tok == token::YYUNDEF ||
                tok == token::ABS || tok == token::ADD || tok == token::ALL_ELEMENTS_TRUE ||
                tok == token::AND || tok == token::ANY_ELEMENT_TRUE || tok == token::ARG_CHARS ||
                tok == token::ARG_COLL || tok == token::ARG_DATE || tok == token::ARG_DATE_STRING ||
                tok == token::ARG_FILTER || tok == token::ARG_FIND || tok == token::ARG_FORMAT ||
                tok == token::ARG_INPUT || tok == token::ARG_ON_ERROR ||
                tok == token::ARG_ON_NULL || tok == token::ARG_OPTIONS ||
                tok == token::ARG_PIPELINE || tok == token::ARG_Q || tok == token::ARG_QUERY ||
                tok == token::ARG_REGEX || tok == token::ARG_REPLACEMENT ||
                tok == token::ARG_SIZE || tok == token::ARG_SORT || tok == token::ARG_TIMEZONE ||
                tok == token::ARG_TO || tok == token::ATAN2 || tok == token::BOOL_FALSE ||
                tok == token::BOOL_TRUE || tok == token::CEIL || tok == token::CMP ||
                tok == token::CONCAT || tok == token::CONST_EXPR || tok == token::CONVERT ||
                tok == token::DATE_FROM_STRING || tok == token::DATE_TO_STRING ||
                tok == token::DECIMAL_NEGATIVE_ONE || tok == token::DECIMAL_ONE ||
                tok == token::DECIMAL_ZERO || tok == token::DIVIDE ||
                tok == token::DOUBLE_NEGATIVE_ONE || tok == token::DOUBLE_ONE ||
                tok == token::DOUBLE_ZERO || tok == token::END_ARRAY || tok == token::END_OBJECT ||
                tok == token::EQ || tok == token::EXPONENT || tok == token::FLOOR ||
                tok == token::GT || tok == token::GTE || tok == token::ID ||
                tok == token::INDEX_OF_BYTES || tok == token::INDEX_OF_CP ||
                tok == token::INT_NEGATIVE_ONE || tok == token::INT_ONE || tok == token::INT_ZERO ||
                tok == token::LITERAL || tok == token::LN || tok == token::LOG ||
                tok == token::LOGTEN || tok == token::LONG_NEGATIVE_ONE || tok == token::LONG_ONE ||
                tok == token::LONG_ZERO || tok == token::LT || tok == token::LTE ||
                tok == token::LTRIM || tok == token::META || tok == token::MOD ||
                tok == token::MULTIPLY || tok == token::NE || tok == token::NOR ||
                tok == token::NOT || tok == token::OR || tok == token::POW ||
                tok == token::RAND_VAL || tok == token::REGEX_FIND ||
                tok == token::REGEX_FIND_ALL || tok == token::REGEX_MATCH ||
                tok == token::REPLACE_ALL || tok == token::REPLACE_ONE || tok == token::ROUND ||
                tok == token::RTRIM || tok == token::SET_DIFFERENCE || tok == token::SET_EQUALS ||
                tok == token::SET_INTERSECTION || tok == token::SET_IS_SUBSET ||
                tok == token::SET_UNION || tok == token::SPLIT || tok == token::SQRT ||
                tok == token::STAGE_INHIBIT_OPTIMIZATION || tok == token::STAGE_LIMIT ||
                tok == token::STAGE_PROJECT || tok == token::STAGE_SAMPLE ||
                tok == token::STAGE_SKIP || tok == token::STAGE_UNION_WITH ||
                tok == token::START_ARRAY || tok == token::START_OBJECT ||
                tok == token::STR_CASE_CMP || tok == token::STR_LEN_BYTES ||
                tok == token::STR_LEN_CP || tok == token::SUBSTR || tok == token::SUBSTR_BYTES ||
                tok == token::SUBSTR_CP || tok == token::SUBTRACT || tok == token::TEXT_SCORE ||
                tok == token::TO_BOOL || tok == token::TO_DATE || tok == token::TO_DECIMAL ||
                tok == token::TO_DOUBLE || tok == token::TO_INT || tok == token::TO_LONG ||
                tok == token::TO_LOWER || tok == token::TO_OBJECT_ID || tok == token::TO_STRING ||
                tok == token::TO_UPPER || tok == token::TRIM || tok == token::TRUNC ||
                tok == token::TYPE);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, BSONBinData v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::BINARY);
        }
#else
        symbol_type(int tok, const BSONBinData& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::BINARY);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, BSONCode v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::JAVASCRIPT);
        }
#else
        symbol_type(int tok, const BSONCode& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::JAVASCRIPT);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, BSONCodeWScope v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::JAVASCRIPT_W_SCOPE);
        }
#else
        symbol_type(int tok, const BSONCodeWScope& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::JAVASCRIPT_W_SCOPE);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, BSONDBRef v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::DB_POINTER);
        }
#else
        symbol_type(int tok, const BSONDBRef& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::DB_POINTER);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, BSONRegEx v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::REGEX);
        }
#else
        symbol_type(int tok, const BSONRegEx& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::REGEX);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, BSONSymbol v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::SYMBOL);
        }
#else
        symbol_type(int tok, const BSONSymbol& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::SYMBOL);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, Date_t v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::DATE_LITERAL);
        }
#else
        symbol_type(int tok, const Date_t& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::DATE_LITERAL);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, Decimal128 v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::DECIMAL_OTHER);
        }
#else
        symbol_type(int tok, const Decimal128& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::DECIMAL_OTHER);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, OID v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::OBJECT_ID);
        }
#else
        symbol_type(int tok, const OID& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::OBJECT_ID);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, Timestamp v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::TIMESTAMP);
        }
#else
        symbol_type(int tok, const Timestamp& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::TIMESTAMP);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, UserMaxKey v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::MAX_KEY);
        }
#else
        symbol_type(int tok, const UserMaxKey& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::MAX_KEY);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, UserMinKey v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::MIN_KEY);
        }
#else
        symbol_type(int tok, const UserMinKey& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::MIN_KEY);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, UserNull v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::JSNULL);
        }
#else
        symbol_type(int tok, const UserNull& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::JSNULL);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, UserUndefined v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::UNDEFINED);
        }
#else
        symbol_type(int tok, const UserUndefined& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::UNDEFINED);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, double v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::DOUBLE_OTHER);
        }
#else
        symbol_type(int tok, const double& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::DOUBLE_OTHER);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, int v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::INT_OTHER);
        }
#else
        symbol_type(int tok, const int& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::INT_OTHER);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, long long v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::LONG_OTHER);
        }
#else
        symbol_type(int tok, const long long& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::LONG_OTHER);
        }
#endif
#if 201103L <= YY_CPLUSPLUS
        symbol_type(int tok, std::string v, location_type l)
            : super_type(token_type(tok), std::move(v), std::move(l)) {
            YY_ASSERT(tok == token::FIELDNAME || tok == token::STRING ||
                      tok == token::DOLLAR_STRING || tok == token::DOLLAR_DOLLAR_STRING ||
                      tok == token::DOLLAR_PREF_FIELDNAME);
        }
#else
        symbol_type(int tok, const std::string& v, const location_type& l)
            : super_type(token_type(tok), v, l) {
            YY_ASSERT(tok == token::FIELDNAME || tok == token::STRING ||
                      tok == token::DOLLAR_STRING || tok == token::DOLLAR_DOLLAR_STRING ||
                      tok == token::DOLLAR_PREF_FIELDNAME);
        }
#endif
    };

    /// Build a parser object.
    ParserGen(BSONLexer& lexer_yyarg, CNode* cst_yyarg);
    virtual ~ParserGen();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    ParserGen(const ParserGen&) = delete;
    /// Non copyable.
    ParserGen& operator=(const ParserGen&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator()();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream() const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream(std::ostream&);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level() const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level(debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error(const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error(const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name(symbol_kind_type yysymbol);

    // Implementation of make_symbol for each symbol type.
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_END_OF_FILE(location_type l) {
        return symbol_type(token::END_OF_FILE, std::move(l));
    }
#else
    static symbol_type make_END_OF_FILE(const location_type& l) {
        return symbol_type(token::END_OF_FILE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_YYerror(location_type l) {
        return symbol_type(token::YYerror, std::move(l));
    }
#else
    static symbol_type make_YYerror(const location_type& l) {
        return symbol_type(token::YYerror, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_YYUNDEF(location_type l) {
        return symbol_type(token::YYUNDEF, std::move(l));
    }
#else
    static symbol_type make_YYUNDEF(const location_type& l) {
        return symbol_type(token::YYUNDEF, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ABS(location_type l) {
        return symbol_type(token::ABS, std::move(l));
    }
#else
    static symbol_type make_ABS(const location_type& l) {
        return symbol_type(token::ABS, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ADD(location_type l) {
        return symbol_type(token::ADD, std::move(l));
    }
#else
    static symbol_type make_ADD(const location_type& l) {
        return symbol_type(token::ADD, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ALL_ELEMENTS_TRUE(location_type l) {
        return symbol_type(token::ALL_ELEMENTS_TRUE, std::move(l));
    }
#else
    static symbol_type make_ALL_ELEMENTS_TRUE(const location_type& l) {
        return symbol_type(token::ALL_ELEMENTS_TRUE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_AND(location_type l) {
        return symbol_type(token::AND, std::move(l));
    }
#else
    static symbol_type make_AND(const location_type& l) {
        return symbol_type(token::AND, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ANY_ELEMENT_TRUE(location_type l) {
        return symbol_type(token::ANY_ELEMENT_TRUE, std::move(l));
    }
#else
    static symbol_type make_ANY_ELEMENT_TRUE(const location_type& l) {
        return symbol_type(token::ANY_ELEMENT_TRUE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_CHARS(location_type l) {
        return symbol_type(token::ARG_CHARS, std::move(l));
    }
#else
    static symbol_type make_ARG_CHARS(const location_type& l) {
        return symbol_type(token::ARG_CHARS, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_COLL(location_type l) {
        return symbol_type(token::ARG_COLL, std::move(l));
    }
#else
    static symbol_type make_ARG_COLL(const location_type& l) {
        return symbol_type(token::ARG_COLL, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_DATE(location_type l) {
        return symbol_type(token::ARG_DATE, std::move(l));
    }
#else
    static symbol_type make_ARG_DATE(const location_type& l) {
        return symbol_type(token::ARG_DATE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_DATE_STRING(location_type l) {
        return symbol_type(token::ARG_DATE_STRING, std::move(l));
    }
#else
    static symbol_type make_ARG_DATE_STRING(const location_type& l) {
        return symbol_type(token::ARG_DATE_STRING, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_FILTER(location_type l) {
        return symbol_type(token::ARG_FILTER, std::move(l));
    }
#else
    static symbol_type make_ARG_FILTER(const location_type& l) {
        return symbol_type(token::ARG_FILTER, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_FIND(location_type l) {
        return symbol_type(token::ARG_FIND, std::move(l));
    }
#else
    static symbol_type make_ARG_FIND(const location_type& l) {
        return symbol_type(token::ARG_FIND, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_FORMAT(location_type l) {
        return symbol_type(token::ARG_FORMAT, std::move(l));
    }
#else
    static symbol_type make_ARG_FORMAT(const location_type& l) {
        return symbol_type(token::ARG_FORMAT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_INPUT(location_type l) {
        return symbol_type(token::ARG_INPUT, std::move(l));
    }
#else
    static symbol_type make_ARG_INPUT(const location_type& l) {
        return symbol_type(token::ARG_INPUT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_ON_ERROR(location_type l) {
        return symbol_type(token::ARG_ON_ERROR, std::move(l));
    }
#else
    static symbol_type make_ARG_ON_ERROR(const location_type& l) {
        return symbol_type(token::ARG_ON_ERROR, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_ON_NULL(location_type l) {
        return symbol_type(token::ARG_ON_NULL, std::move(l));
    }
#else
    static symbol_type make_ARG_ON_NULL(const location_type& l) {
        return symbol_type(token::ARG_ON_NULL, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_OPTIONS(location_type l) {
        return symbol_type(token::ARG_OPTIONS, std::move(l));
    }
#else
    static symbol_type make_ARG_OPTIONS(const location_type& l) {
        return symbol_type(token::ARG_OPTIONS, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_PIPELINE(location_type l) {
        return symbol_type(token::ARG_PIPELINE, std::move(l));
    }
#else
    static symbol_type make_ARG_PIPELINE(const location_type& l) {
        return symbol_type(token::ARG_PIPELINE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_Q(location_type l) {
        return symbol_type(token::ARG_Q, std::move(l));
    }
#else
    static symbol_type make_ARG_Q(const location_type& l) {
        return symbol_type(token::ARG_Q, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_QUERY(location_type l) {
        return symbol_type(token::ARG_QUERY, std::move(l));
    }
#else
    static symbol_type make_ARG_QUERY(const location_type& l) {
        return symbol_type(token::ARG_QUERY, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_REGEX(location_type l) {
        return symbol_type(token::ARG_REGEX, std::move(l));
    }
#else
    static symbol_type make_ARG_REGEX(const location_type& l) {
        return symbol_type(token::ARG_REGEX, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_REPLACEMENT(location_type l) {
        return symbol_type(token::ARG_REPLACEMENT, std::move(l));
    }
#else
    static symbol_type make_ARG_REPLACEMENT(const location_type& l) {
        return symbol_type(token::ARG_REPLACEMENT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_SIZE(location_type l) {
        return symbol_type(token::ARG_SIZE, std::move(l));
    }
#else
    static symbol_type make_ARG_SIZE(const location_type& l) {
        return symbol_type(token::ARG_SIZE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_SORT(location_type l) {
        return symbol_type(token::ARG_SORT, std::move(l));
    }
#else
    static symbol_type make_ARG_SORT(const location_type& l) {
        return symbol_type(token::ARG_SORT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_TIMEZONE(location_type l) {
        return symbol_type(token::ARG_TIMEZONE, std::move(l));
    }
#else
    static symbol_type make_ARG_TIMEZONE(const location_type& l) {
        return symbol_type(token::ARG_TIMEZONE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ARG_TO(location_type l) {
        return symbol_type(token::ARG_TO, std::move(l));
    }
#else
    static symbol_type make_ARG_TO(const location_type& l) {
        return symbol_type(token::ARG_TO, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ATAN2(location_type l) {
        return symbol_type(token::ATAN2, std::move(l));
    }
#else
    static symbol_type make_ATAN2(const location_type& l) {
        return symbol_type(token::ATAN2, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_BOOL_FALSE(location_type l) {
        return symbol_type(token::BOOL_FALSE, std::move(l));
    }
#else
    static symbol_type make_BOOL_FALSE(const location_type& l) {
        return symbol_type(token::BOOL_FALSE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_BOOL_TRUE(location_type l) {
        return symbol_type(token::BOOL_TRUE, std::move(l));
    }
#else
    static symbol_type make_BOOL_TRUE(const location_type& l) {
        return symbol_type(token::BOOL_TRUE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_CEIL(location_type l) {
        return symbol_type(token::CEIL, std::move(l));
    }
#else
    static symbol_type make_CEIL(const location_type& l) {
        return symbol_type(token::CEIL, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_CMP(location_type l) {
        return symbol_type(token::CMP, std::move(l));
    }
#else
    static symbol_type make_CMP(const location_type& l) {
        return symbol_type(token::CMP, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_CONCAT(location_type l) {
        return symbol_type(token::CONCAT, std::move(l));
    }
#else
    static symbol_type make_CONCAT(const location_type& l) {
        return symbol_type(token::CONCAT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_CONST_EXPR(location_type l) {
        return symbol_type(token::CONST_EXPR, std::move(l));
    }
#else
    static symbol_type make_CONST_EXPR(const location_type& l) {
        return symbol_type(token::CONST_EXPR, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_CONVERT(location_type l) {
        return symbol_type(token::CONVERT, std::move(l));
    }
#else
    static symbol_type make_CONVERT(const location_type& l) {
        return symbol_type(token::CONVERT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DATE_FROM_STRING(location_type l) {
        return symbol_type(token::DATE_FROM_STRING, std::move(l));
    }
#else
    static symbol_type make_DATE_FROM_STRING(const location_type& l) {
        return symbol_type(token::DATE_FROM_STRING, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DATE_TO_STRING(location_type l) {
        return symbol_type(token::DATE_TO_STRING, std::move(l));
    }
#else
    static symbol_type make_DATE_TO_STRING(const location_type& l) {
        return symbol_type(token::DATE_TO_STRING, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DECIMAL_NEGATIVE_ONE(location_type l) {
        return symbol_type(token::DECIMAL_NEGATIVE_ONE, std::move(l));
    }
#else
    static symbol_type make_DECIMAL_NEGATIVE_ONE(const location_type& l) {
        return symbol_type(token::DECIMAL_NEGATIVE_ONE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DECIMAL_ONE(location_type l) {
        return symbol_type(token::DECIMAL_ONE, std::move(l));
    }
#else
    static symbol_type make_DECIMAL_ONE(const location_type& l) {
        return symbol_type(token::DECIMAL_ONE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DECIMAL_ZERO(location_type l) {
        return symbol_type(token::DECIMAL_ZERO, std::move(l));
    }
#else
    static symbol_type make_DECIMAL_ZERO(const location_type& l) {
        return symbol_type(token::DECIMAL_ZERO, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DIVIDE(location_type l) {
        return symbol_type(token::DIVIDE, std::move(l));
    }
#else
    static symbol_type make_DIVIDE(const location_type& l) {
        return symbol_type(token::DIVIDE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DOUBLE_NEGATIVE_ONE(location_type l) {
        return symbol_type(token::DOUBLE_NEGATIVE_ONE, std::move(l));
    }
#else
    static symbol_type make_DOUBLE_NEGATIVE_ONE(const location_type& l) {
        return symbol_type(token::DOUBLE_NEGATIVE_ONE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DOUBLE_ONE(location_type l) {
        return symbol_type(token::DOUBLE_ONE, std::move(l));
    }
#else
    static symbol_type make_DOUBLE_ONE(const location_type& l) {
        return symbol_type(token::DOUBLE_ONE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DOUBLE_ZERO(location_type l) {
        return symbol_type(token::DOUBLE_ZERO, std::move(l));
    }
#else
    static symbol_type make_DOUBLE_ZERO(const location_type& l) {
        return symbol_type(token::DOUBLE_ZERO, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_END_ARRAY(location_type l) {
        return symbol_type(token::END_ARRAY, std::move(l));
    }
#else
    static symbol_type make_END_ARRAY(const location_type& l) {
        return symbol_type(token::END_ARRAY, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_END_OBJECT(location_type l) {
        return symbol_type(token::END_OBJECT, std::move(l));
    }
#else
    static symbol_type make_END_OBJECT(const location_type& l) {
        return symbol_type(token::END_OBJECT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_EQ(location_type l) {
        return symbol_type(token::EQ, std::move(l));
    }
#else
    static symbol_type make_EQ(const location_type& l) {
        return symbol_type(token::EQ, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_EXPONENT(location_type l) {
        return symbol_type(token::EXPONENT, std::move(l));
    }
#else
    static symbol_type make_EXPONENT(const location_type& l) {
        return symbol_type(token::EXPONENT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_FLOOR(location_type l) {
        return symbol_type(token::FLOOR, std::move(l));
    }
#else
    static symbol_type make_FLOOR(const location_type& l) {
        return symbol_type(token::FLOOR, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_GT(location_type l) {
        return symbol_type(token::GT, std::move(l));
    }
#else
    static symbol_type make_GT(const location_type& l) {
        return symbol_type(token::GT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_GTE(location_type l) {
        return symbol_type(token::GTE, std::move(l));
    }
#else
    static symbol_type make_GTE(const location_type& l) {
        return symbol_type(token::GTE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ID(location_type l) {
        return symbol_type(token::ID, std::move(l));
    }
#else
    static symbol_type make_ID(const location_type& l) {
        return symbol_type(token::ID, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_INDEX_OF_BYTES(location_type l) {
        return symbol_type(token::INDEX_OF_BYTES, std::move(l));
    }
#else
    static symbol_type make_INDEX_OF_BYTES(const location_type& l) {
        return symbol_type(token::INDEX_OF_BYTES, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_INDEX_OF_CP(location_type l) {
        return symbol_type(token::INDEX_OF_CP, std::move(l));
    }
#else
    static symbol_type make_INDEX_OF_CP(const location_type& l) {
        return symbol_type(token::INDEX_OF_CP, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_INT_NEGATIVE_ONE(location_type l) {
        return symbol_type(token::INT_NEGATIVE_ONE, std::move(l));
    }
#else
    static symbol_type make_INT_NEGATIVE_ONE(const location_type& l) {
        return symbol_type(token::INT_NEGATIVE_ONE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_INT_ONE(location_type l) {
        return symbol_type(token::INT_ONE, std::move(l));
    }
#else
    static symbol_type make_INT_ONE(const location_type& l) {
        return symbol_type(token::INT_ONE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_INT_ZERO(location_type l) {
        return symbol_type(token::INT_ZERO, std::move(l));
    }
#else
    static symbol_type make_INT_ZERO(const location_type& l) {
        return symbol_type(token::INT_ZERO, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LITERAL(location_type l) {
        return symbol_type(token::LITERAL, std::move(l));
    }
#else
    static symbol_type make_LITERAL(const location_type& l) {
        return symbol_type(token::LITERAL, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LN(location_type l) {
        return symbol_type(token::LN, std::move(l));
    }
#else
    static symbol_type make_LN(const location_type& l) {
        return symbol_type(token::LN, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LOG(location_type l) {
        return symbol_type(token::LOG, std::move(l));
    }
#else
    static symbol_type make_LOG(const location_type& l) {
        return symbol_type(token::LOG, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LOGTEN(location_type l) {
        return symbol_type(token::LOGTEN, std::move(l));
    }
#else
    static symbol_type make_LOGTEN(const location_type& l) {
        return symbol_type(token::LOGTEN, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LONG_NEGATIVE_ONE(location_type l) {
        return symbol_type(token::LONG_NEGATIVE_ONE, std::move(l));
    }
#else
    static symbol_type make_LONG_NEGATIVE_ONE(const location_type& l) {
        return symbol_type(token::LONG_NEGATIVE_ONE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LONG_ONE(location_type l) {
        return symbol_type(token::LONG_ONE, std::move(l));
    }
#else
    static symbol_type make_LONG_ONE(const location_type& l) {
        return symbol_type(token::LONG_ONE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LONG_ZERO(location_type l) {
        return symbol_type(token::LONG_ZERO, std::move(l));
    }
#else
    static symbol_type make_LONG_ZERO(const location_type& l) {
        return symbol_type(token::LONG_ZERO, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LT(location_type l) {
        return symbol_type(token::LT, std::move(l));
    }
#else
    static symbol_type make_LT(const location_type& l) {
        return symbol_type(token::LT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LTE(location_type l) {
        return symbol_type(token::LTE, std::move(l));
    }
#else
    static symbol_type make_LTE(const location_type& l) {
        return symbol_type(token::LTE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LTRIM(location_type l) {
        return symbol_type(token::LTRIM, std::move(l));
    }
#else
    static symbol_type make_LTRIM(const location_type& l) {
        return symbol_type(token::LTRIM, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_META(location_type l) {
        return symbol_type(token::META, std::move(l));
    }
#else
    static symbol_type make_META(const location_type& l) {
        return symbol_type(token::META, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_MOD(location_type l) {
        return symbol_type(token::MOD, std::move(l));
    }
#else
    static symbol_type make_MOD(const location_type& l) {
        return symbol_type(token::MOD, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_MULTIPLY(location_type l) {
        return symbol_type(token::MULTIPLY, std::move(l));
    }
#else
    static symbol_type make_MULTIPLY(const location_type& l) {
        return symbol_type(token::MULTIPLY, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_NE(location_type l) {
        return symbol_type(token::NE, std::move(l));
    }
#else
    static symbol_type make_NE(const location_type& l) {
        return symbol_type(token::NE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_NOR(location_type l) {
        return symbol_type(token::NOR, std::move(l));
    }
#else
    static symbol_type make_NOR(const location_type& l) {
        return symbol_type(token::NOR, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_NOT(location_type l) {
        return symbol_type(token::NOT, std::move(l));
    }
#else
    static symbol_type make_NOT(const location_type& l) {
        return symbol_type(token::NOT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_OR(location_type l) {
        return symbol_type(token::OR, std::move(l));
    }
#else
    static symbol_type make_OR(const location_type& l) {
        return symbol_type(token::OR, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_POW(location_type l) {
        return symbol_type(token::POW, std::move(l));
    }
#else
    static symbol_type make_POW(const location_type& l) {
        return symbol_type(token::POW, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_RAND_VAL(location_type l) {
        return symbol_type(token::RAND_VAL, std::move(l));
    }
#else
    static symbol_type make_RAND_VAL(const location_type& l) {
        return symbol_type(token::RAND_VAL, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_REGEX_FIND(location_type l) {
        return symbol_type(token::REGEX_FIND, std::move(l));
    }
#else
    static symbol_type make_REGEX_FIND(const location_type& l) {
        return symbol_type(token::REGEX_FIND, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_REGEX_FIND_ALL(location_type l) {
        return symbol_type(token::REGEX_FIND_ALL, std::move(l));
    }
#else
    static symbol_type make_REGEX_FIND_ALL(const location_type& l) {
        return symbol_type(token::REGEX_FIND_ALL, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_REGEX_MATCH(location_type l) {
        return symbol_type(token::REGEX_MATCH, std::move(l));
    }
#else
    static symbol_type make_REGEX_MATCH(const location_type& l) {
        return symbol_type(token::REGEX_MATCH, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_REPLACE_ALL(location_type l) {
        return symbol_type(token::REPLACE_ALL, std::move(l));
    }
#else
    static symbol_type make_REPLACE_ALL(const location_type& l) {
        return symbol_type(token::REPLACE_ALL, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_REPLACE_ONE(location_type l) {
        return symbol_type(token::REPLACE_ONE, std::move(l));
    }
#else
    static symbol_type make_REPLACE_ONE(const location_type& l) {
        return symbol_type(token::REPLACE_ONE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_ROUND(location_type l) {
        return symbol_type(token::ROUND, std::move(l));
    }
#else
    static symbol_type make_ROUND(const location_type& l) {
        return symbol_type(token::ROUND, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_RTRIM(location_type l) {
        return symbol_type(token::RTRIM, std::move(l));
    }
#else
    static symbol_type make_RTRIM(const location_type& l) {
        return symbol_type(token::RTRIM, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SET_DIFFERENCE(location_type l) {
        return symbol_type(token::SET_DIFFERENCE, std::move(l));
    }
#else
    static symbol_type make_SET_DIFFERENCE(const location_type& l) {
        return symbol_type(token::SET_DIFFERENCE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SET_EQUALS(location_type l) {
        return symbol_type(token::SET_EQUALS, std::move(l));
    }
#else
    static symbol_type make_SET_EQUALS(const location_type& l) {
        return symbol_type(token::SET_EQUALS, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SET_INTERSECTION(location_type l) {
        return symbol_type(token::SET_INTERSECTION, std::move(l));
    }
#else
    static symbol_type make_SET_INTERSECTION(const location_type& l) {
        return symbol_type(token::SET_INTERSECTION, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SET_IS_SUBSET(location_type l) {
        return symbol_type(token::SET_IS_SUBSET, std::move(l));
    }
#else
    static symbol_type make_SET_IS_SUBSET(const location_type& l) {
        return symbol_type(token::SET_IS_SUBSET, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SET_UNION(location_type l) {
        return symbol_type(token::SET_UNION, std::move(l));
    }
#else
    static symbol_type make_SET_UNION(const location_type& l) {
        return symbol_type(token::SET_UNION, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SPLIT(location_type l) {
        return symbol_type(token::SPLIT, std::move(l));
    }
#else
    static symbol_type make_SPLIT(const location_type& l) {
        return symbol_type(token::SPLIT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SQRT(location_type l) {
        return symbol_type(token::SQRT, std::move(l));
    }
#else
    static symbol_type make_SQRT(const location_type& l) {
        return symbol_type(token::SQRT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_STAGE_INHIBIT_OPTIMIZATION(location_type l) {
        return symbol_type(token::STAGE_INHIBIT_OPTIMIZATION, std::move(l));
    }
#else
    static symbol_type make_STAGE_INHIBIT_OPTIMIZATION(const location_type& l) {
        return symbol_type(token::STAGE_INHIBIT_OPTIMIZATION, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_STAGE_LIMIT(location_type l) {
        return symbol_type(token::STAGE_LIMIT, std::move(l));
    }
#else
    static symbol_type make_STAGE_LIMIT(const location_type& l) {
        return symbol_type(token::STAGE_LIMIT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_STAGE_PROJECT(location_type l) {
        return symbol_type(token::STAGE_PROJECT, std::move(l));
    }
#else
    static symbol_type make_STAGE_PROJECT(const location_type& l) {
        return symbol_type(token::STAGE_PROJECT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_STAGE_SAMPLE(location_type l) {
        return symbol_type(token::STAGE_SAMPLE, std::move(l));
    }
#else
    static symbol_type make_STAGE_SAMPLE(const location_type& l) {
        return symbol_type(token::STAGE_SAMPLE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_STAGE_SKIP(location_type l) {
        return symbol_type(token::STAGE_SKIP, std::move(l));
    }
#else
    static symbol_type make_STAGE_SKIP(const location_type& l) {
        return symbol_type(token::STAGE_SKIP, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_STAGE_UNION_WITH(location_type l) {
        return symbol_type(token::STAGE_UNION_WITH, std::move(l));
    }
#else
    static symbol_type make_STAGE_UNION_WITH(const location_type& l) {
        return symbol_type(token::STAGE_UNION_WITH, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_START_ARRAY(location_type l) {
        return symbol_type(token::START_ARRAY, std::move(l));
    }
#else
    static symbol_type make_START_ARRAY(const location_type& l) {
        return symbol_type(token::START_ARRAY, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_START_OBJECT(location_type l) {
        return symbol_type(token::START_OBJECT, std::move(l));
    }
#else
    static symbol_type make_START_OBJECT(const location_type& l) {
        return symbol_type(token::START_OBJECT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_STR_CASE_CMP(location_type l) {
        return symbol_type(token::STR_CASE_CMP, std::move(l));
    }
#else
    static symbol_type make_STR_CASE_CMP(const location_type& l) {
        return symbol_type(token::STR_CASE_CMP, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_STR_LEN_BYTES(location_type l) {
        return symbol_type(token::STR_LEN_BYTES, std::move(l));
    }
#else
    static symbol_type make_STR_LEN_BYTES(const location_type& l) {
        return symbol_type(token::STR_LEN_BYTES, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_STR_LEN_CP(location_type l) {
        return symbol_type(token::STR_LEN_CP, std::move(l));
    }
#else
    static symbol_type make_STR_LEN_CP(const location_type& l) {
        return symbol_type(token::STR_LEN_CP, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SUBSTR(location_type l) {
        return symbol_type(token::SUBSTR, std::move(l));
    }
#else
    static symbol_type make_SUBSTR(const location_type& l) {
        return symbol_type(token::SUBSTR, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SUBSTR_BYTES(location_type l) {
        return symbol_type(token::SUBSTR_BYTES, std::move(l));
    }
#else
    static symbol_type make_SUBSTR_BYTES(const location_type& l) {
        return symbol_type(token::SUBSTR_BYTES, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SUBSTR_CP(location_type l) {
        return symbol_type(token::SUBSTR_CP, std::move(l));
    }
#else
    static symbol_type make_SUBSTR_CP(const location_type& l) {
        return symbol_type(token::SUBSTR_CP, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SUBTRACT(location_type l) {
        return symbol_type(token::SUBTRACT, std::move(l));
    }
#else
    static symbol_type make_SUBTRACT(const location_type& l) {
        return symbol_type(token::SUBTRACT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TEXT_SCORE(location_type l) {
        return symbol_type(token::TEXT_SCORE, std::move(l));
    }
#else
    static symbol_type make_TEXT_SCORE(const location_type& l) {
        return symbol_type(token::TEXT_SCORE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TO_BOOL(location_type l) {
        return symbol_type(token::TO_BOOL, std::move(l));
    }
#else
    static symbol_type make_TO_BOOL(const location_type& l) {
        return symbol_type(token::TO_BOOL, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TO_DATE(location_type l) {
        return symbol_type(token::TO_DATE, std::move(l));
    }
#else
    static symbol_type make_TO_DATE(const location_type& l) {
        return symbol_type(token::TO_DATE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TO_DECIMAL(location_type l) {
        return symbol_type(token::TO_DECIMAL, std::move(l));
    }
#else
    static symbol_type make_TO_DECIMAL(const location_type& l) {
        return symbol_type(token::TO_DECIMAL, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TO_DOUBLE(location_type l) {
        return symbol_type(token::TO_DOUBLE, std::move(l));
    }
#else
    static symbol_type make_TO_DOUBLE(const location_type& l) {
        return symbol_type(token::TO_DOUBLE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TO_INT(location_type l) {
        return symbol_type(token::TO_INT, std::move(l));
    }
#else
    static symbol_type make_TO_INT(const location_type& l) {
        return symbol_type(token::TO_INT, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TO_LONG(location_type l) {
        return symbol_type(token::TO_LONG, std::move(l));
    }
#else
    static symbol_type make_TO_LONG(const location_type& l) {
        return symbol_type(token::TO_LONG, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TO_LOWER(location_type l) {
        return symbol_type(token::TO_LOWER, std::move(l));
    }
#else
    static symbol_type make_TO_LOWER(const location_type& l) {
        return symbol_type(token::TO_LOWER, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TO_OBJECT_ID(location_type l) {
        return symbol_type(token::TO_OBJECT_ID, std::move(l));
    }
#else
    static symbol_type make_TO_OBJECT_ID(const location_type& l) {
        return symbol_type(token::TO_OBJECT_ID, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TO_STRING(location_type l) {
        return symbol_type(token::TO_STRING, std::move(l));
    }
#else
    static symbol_type make_TO_STRING(const location_type& l) {
        return symbol_type(token::TO_STRING, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TO_UPPER(location_type l) {
        return symbol_type(token::TO_UPPER, std::move(l));
    }
#else
    static symbol_type make_TO_UPPER(const location_type& l) {
        return symbol_type(token::TO_UPPER, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TRIM(location_type l) {
        return symbol_type(token::TRIM, std::move(l));
    }
#else
    static symbol_type make_TRIM(const location_type& l) {
        return symbol_type(token::TRIM, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TRUNC(location_type l) {
        return symbol_type(token::TRUNC, std::move(l));
    }
#else
    static symbol_type make_TRUNC(const location_type& l) {
        return symbol_type(token::TRUNC, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TYPE(location_type l) {
        return symbol_type(token::TYPE, std::move(l));
    }
#else
    static symbol_type make_TYPE(const location_type& l) {
        return symbol_type(token::TYPE, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_FIELDNAME(std::string v, location_type l) {
        return symbol_type(token::FIELDNAME, std::move(v), std::move(l));
    }
#else
    static symbol_type make_FIELDNAME(const std::string& v, const location_type& l) {
        return symbol_type(token::FIELDNAME, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_STRING(std::string v, location_type l) {
        return symbol_type(token::STRING, std::move(v), std::move(l));
    }
#else
    static symbol_type make_STRING(const std::string& v, const location_type& l) {
        return symbol_type(token::STRING, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_BINARY(BSONBinData v, location_type l) {
        return symbol_type(token::BINARY, std::move(v), std::move(l));
    }
#else
    static symbol_type make_BINARY(const BSONBinData& v, const location_type& l) {
        return symbol_type(token::BINARY, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_UNDEFINED(UserUndefined v, location_type l) {
        return symbol_type(token::UNDEFINED, std::move(v), std::move(l));
    }
#else
    static symbol_type make_UNDEFINED(const UserUndefined& v, const location_type& l) {
        return symbol_type(token::UNDEFINED, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_OBJECT_ID(OID v, location_type l) {
        return symbol_type(token::OBJECT_ID, std::move(v), std::move(l));
    }
#else
    static symbol_type make_OBJECT_ID(const OID& v, const location_type& l) {
        return symbol_type(token::OBJECT_ID, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DATE_LITERAL(Date_t v, location_type l) {
        return symbol_type(token::DATE_LITERAL, std::move(v), std::move(l));
    }
#else
    static symbol_type make_DATE_LITERAL(const Date_t& v, const location_type& l) {
        return symbol_type(token::DATE_LITERAL, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_JSNULL(UserNull v, location_type l) {
        return symbol_type(token::JSNULL, std::move(v), std::move(l));
    }
#else
    static symbol_type make_JSNULL(const UserNull& v, const location_type& l) {
        return symbol_type(token::JSNULL, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_REGEX(BSONRegEx v, location_type l) {
        return symbol_type(token::REGEX, std::move(v), std::move(l));
    }
#else
    static symbol_type make_REGEX(const BSONRegEx& v, const location_type& l) {
        return symbol_type(token::REGEX, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DB_POINTER(BSONDBRef v, location_type l) {
        return symbol_type(token::DB_POINTER, std::move(v), std::move(l));
    }
#else
    static symbol_type make_DB_POINTER(const BSONDBRef& v, const location_type& l) {
        return symbol_type(token::DB_POINTER, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_JAVASCRIPT(BSONCode v, location_type l) {
        return symbol_type(token::JAVASCRIPT, std::move(v), std::move(l));
    }
#else
    static symbol_type make_JAVASCRIPT(const BSONCode& v, const location_type& l) {
        return symbol_type(token::JAVASCRIPT, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_SYMBOL(BSONSymbol v, location_type l) {
        return symbol_type(token::SYMBOL, std::move(v), std::move(l));
    }
#else
    static symbol_type make_SYMBOL(const BSONSymbol& v, const location_type& l) {
        return symbol_type(token::SYMBOL, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_JAVASCRIPT_W_SCOPE(BSONCodeWScope v, location_type l) {
        return symbol_type(token::JAVASCRIPT_W_SCOPE, std::move(v), std::move(l));
    }
#else
    static symbol_type make_JAVASCRIPT_W_SCOPE(const BSONCodeWScope& v, const location_type& l) {
        return symbol_type(token::JAVASCRIPT_W_SCOPE, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_INT_OTHER(int v, location_type l) {
        return symbol_type(token::INT_OTHER, std::move(v), std::move(l));
    }
#else
    static symbol_type make_INT_OTHER(const int& v, const location_type& l) {
        return symbol_type(token::INT_OTHER, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_LONG_OTHER(long long v, location_type l) {
        return symbol_type(token::LONG_OTHER, std::move(v), std::move(l));
    }
#else
    static symbol_type make_LONG_OTHER(const long long& v, const location_type& l) {
        return symbol_type(token::LONG_OTHER, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DOUBLE_OTHER(double v, location_type l) {
        return symbol_type(token::DOUBLE_OTHER, std::move(v), std::move(l));
    }
#else
    static symbol_type make_DOUBLE_OTHER(const double& v, const location_type& l) {
        return symbol_type(token::DOUBLE_OTHER, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DECIMAL_OTHER(Decimal128 v, location_type l) {
        return symbol_type(token::DECIMAL_OTHER, std::move(v), std::move(l));
    }
#else
    static symbol_type make_DECIMAL_OTHER(const Decimal128& v, const location_type& l) {
        return symbol_type(token::DECIMAL_OTHER, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_TIMESTAMP(Timestamp v, location_type l) {
        return symbol_type(token::TIMESTAMP, std::move(v), std::move(l));
    }
#else
    static symbol_type make_TIMESTAMP(const Timestamp& v, const location_type& l) {
        return symbol_type(token::TIMESTAMP, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_MIN_KEY(UserMinKey v, location_type l) {
        return symbol_type(token::MIN_KEY, std::move(v), std::move(l));
    }
#else
    static symbol_type make_MIN_KEY(const UserMinKey& v, const location_type& l) {
        return symbol_type(token::MIN_KEY, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_MAX_KEY(UserMaxKey v, location_type l) {
        return symbol_type(token::MAX_KEY, std::move(v), std::move(l));
    }
#else
    static symbol_type make_MAX_KEY(const UserMaxKey& v, const location_type& l) {
        return symbol_type(token::MAX_KEY, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DOLLAR_STRING(std::string v, location_type l) {
        return symbol_type(token::DOLLAR_STRING, std::move(v), std::move(l));
    }
#else
    static symbol_type make_DOLLAR_STRING(const std::string& v, const location_type& l) {
        return symbol_type(token::DOLLAR_STRING, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DOLLAR_DOLLAR_STRING(std::string v, location_type l) {
        return symbol_type(token::DOLLAR_DOLLAR_STRING, std::move(v), std::move(l));
    }
#else
    static symbol_type make_DOLLAR_DOLLAR_STRING(const std::string& v, const location_type& l) {
        return symbol_type(token::DOLLAR_DOLLAR_STRING, v, l);
    }
#endif
#if 201103L <= YY_CPLUSPLUS
    static symbol_type make_DOLLAR_PREF_FIELDNAME(std::string v, location_type l) {
        return symbol_type(token::DOLLAR_PREF_FIELDNAME, std::move(v), std::move(l));
    }
#else
    static symbol_type make_DOLLAR_PREF_FIELDNAME(const std::string& v, const location_type& l) {
        return symbol_type(token::DOLLAR_PREF_FIELDNAME, v, l);
    }
#endif


    class context {
    public:
        context(const ParserGen& yyparser, const symbol_type& yyla);
        const symbol_type& lookahead() const {
            return yyla_;
        }
        symbol_kind_type token() const {
            return yyla_.kind();
        }
        const location_type& location() const {
            return yyla_.location;
        }

        /// Put in YYARG at most YYARGN of the expected tokens, and return the
        /// number of tokens stored in YYARG.  If YYARG is null, return the
        /// number of expected tokens (guaranteed to be less than YYNTOKENS).
        int expected_tokens(symbol_kind_type yyarg[], int yyargn) const;

    private:
        const ParserGen& yyparser_;
        const symbol_type& yyla_;
    };

private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    ParserGen(const ParserGen&);
    /// Non copyable.
    ParserGen& operator=(const ParserGen&);
#endif


    /// Stored state numbers (used for stacks).
    typedef short state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_(const context& yyctx,
                                   symbol_kind_type yyarg[],
                                   int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_(const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_(state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_(int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_(int yyvalue);

    static const short yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_type enum.
    static symbol_kind_type yytranslate_(int t);

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_(const char* yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const short yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const short yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
    // symbol of state STATE-NUM.
    static const short yystos_[];

    // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
    static const short yyr1_[];

    // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_(int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_() const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_(std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_(const char* yymsg, basic_symbol<Base>& yysym) const;

private:
    /// Type access provider for state based symbols.
    struct by_state {
        /// Default constructor.
        by_state() YY_NOEXCEPT;

        /// The symbol kind as needed by the constructor.
        typedef state_type kind_type;

        /// Constructor.
        by_state(kind_type s) YY_NOEXCEPT;

        /// Copy constructor.
        by_state(const by_state& that) YY_NOEXCEPT;

        /// Record that this symbol is empty.
        void clear() YY_NOEXCEPT;

        /// Steal the symbol kind from \a that.
        void move(by_state& that);

        /// The symbol kind (corresponding to \a state).
        /// \a symbol_kind::S_YYEMPTY when empty.
        symbol_kind_type kind() const YY_NOEXCEPT;

        /// The state number used to denote an empty symbol.
        /// We use the initial state, as it does not have a value.
        enum { empty_state = 0 };

        /// The state.
        /// \a empty when empty.
        state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state> {
        /// Superclass.
        typedef basic_symbol<by_state> super_type;
        /// Construct an empty symbol.
        stack_symbol_type();
        /// Move or copy construction.
        stack_symbol_type(YY_RVREF(stack_symbol_type) that);
        /// Steal the contents from \a sym to build this.
        stack_symbol_type(state_type s, YY_MOVE_REF(symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
        /// Assignment, needed by push_back by some old implementations.
        /// Moves the contents of that.
        stack_symbol_type& operator=(stack_symbol_type& that);

        /// Assignment, needed by push_back by other implementations.
        /// Needed by some other old implementations.
        stack_symbol_type& operator=(const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T>>
    class stack {
    public:
        // Hide our reversed order.
        typedef typename S::iterator iterator;
        typedef typename S::const_iterator const_iterator;
        typedef typename S::size_type size_type;
        typedef typename std::ptrdiff_t index_type;

        stack(size_type n = 200) : seq_(n) {}

#if 201103L <= YY_CPLUSPLUS
        /// Non copyable.
        stack(const stack&) = delete;
        /// Non copyable.
        stack& operator=(const stack&) = delete;
#endif

        /// Random access.
        ///
        /// Index 0 returns the topmost element.
        const T& operator[](index_type i) const {
            return seq_[size_type(size() - 1 - i)];
        }

        /// Random access.
        ///
        /// Index 0 returns the topmost element.
        T& operator[](index_type i) {
            return seq_[size_type(size() - 1 - i)];
        }

        /// Steal the contents of \a t.
        ///
        /// Close to move-semantics.
        void push(YY_MOVE_REF(T) t) {
            seq_.push_back(T());
            operator[](0).move(t);
        }

        /// Pop elements from the stack.
        void pop(std::ptrdiff_t n = 1) YY_NOEXCEPT {
            for (; 0 < n; --n)
                seq_.pop_back();
        }

        /// Pop all elements from the stack.
        void clear() YY_NOEXCEPT {
            seq_.clear();
        }

        /// Number of elements on the stack.
        index_type size() const YY_NOEXCEPT {
            return index_type(seq_.size());
        }

        /// Iterator on top of the stack (going downwards).
        const_iterator begin() const YY_NOEXCEPT {
            return seq_.begin();
        }

        /// Bottom of the stack.
        const_iterator end() const YY_NOEXCEPT {
            return seq_.end();
        }

        /// Present a slice of the top of a stack.
        class slice {
        public:
            slice(const stack& stack, index_type range) : stack_(stack), range_(range) {}

            const T& operator[](index_type i) const {
                return stack_[range_ - i];
            }

        private:
            const stack& stack_;
            index_type range_;
        };

    private:
#if YY_CPLUSPLUS < 201103L
        /// Non copyable.
        stack(const stack&);
        /// Non copyable.
        stack& operator=(const stack&);
#endif
        /// The wrapped container.
        S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_(const char* m, YY_MOVE_REF(stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_(const char* m, state_type s, YY_MOVE_REF(symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_(int n = 1);

    /// Constants.
    enum {
        yylast_ = 1311,  ///< Last index in yytable_.
        yynnts_ = 162,   ///< Number of nonterminal symbols.
        yyfinal_ = 15    ///< Termination state number.
    };


    // User arguments.
    BSONLexer& lexer;
    CNode* cst;
};

inline ParserGen::symbol_kind_type ParserGen::yytranslate_(int t) {
    return static_cast<symbol_kind_type>(t);
}

// basic_symbol.
template <typename Base>
ParserGen::basic_symbol<Base>::basic_symbol(const basic_symbol& that)
    : Base(that), value(), location(that.location) {
    switch (this->kind()) {
        case symbol_kind::S_BINARY:  // "BinData"
            value.copy<BSONBinData>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_JAVASCRIPT:  // "Code"
            value.copy<BSONCode>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_JAVASCRIPT_W_SCOPE:  // "CodeWScope"
            value.copy<BSONCodeWScope>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_DB_POINTER:  // "dbPointer"
            value.copy<BSONDBRef>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_REGEX:  // "regex"
            value.copy<BSONRegEx>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_SYMBOL:  // "Symbol"
            value.copy<BSONSymbol>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_dbPointer:            // dbPointer
        case symbol_kind::S_javascript:           // javascript
        case symbol_kind::S_symbol:               // symbol
        case symbol_kind::S_javascriptWScope:     // javascriptWScope
        case symbol_kind::S_int:                  // int
        case symbol_kind::S_timestamp:            // timestamp
        case symbol_kind::S_long:                 // long
        case symbol_kind::S_double:               // double
        case symbol_kind::S_decimal:              // decimal
        case symbol_kind::S_minKey:               // minKey
        case symbol_kind::S_maxKey:               // maxKey
        case symbol_kind::S_value:                // value
        case symbol_kind::S_string:               // string
        case symbol_kind::S_fieldPath:            // fieldPath
        case symbol_kind::S_binary:               // binary
        case symbol_kind::S_undefined:            // undefined
        case symbol_kind::S_objectId:             // objectId
        case symbol_kind::S_bool:                 // bool
        case symbol_kind::S_date:                 // date
        case symbol_kind::S_null:                 // null
        case symbol_kind::S_regex:                // regex
        case symbol_kind::S_simpleValue:          // simpleValue
        case symbol_kind::S_compoundValue:        // compoundValue
        case symbol_kind::S_valueArray:           // valueArray
        case symbol_kind::S_valueObject:          // valueObject
        case symbol_kind::S_valueFields:          // valueFields
        case symbol_kind::S_variable:             // variable
        case symbol_kind::S_pipeline:             // pipeline
        case symbol_kind::S_stageList:            // stageList
        case symbol_kind::S_stage:                // stage
        case symbol_kind::S_inhibitOptimization:  // inhibitOptimization
        case symbol_kind::S_unionWith:            // unionWith
        case symbol_kind::S_skip:                 // skip
        case symbol_kind::S_limit:                // limit
        case symbol_kind::S_project:              // project
        case symbol_kind::S_sample:               // sample
        case symbol_kind::S_projectFields:        // projectFields
        case symbol_kind::S_projection:           // projection
        case symbol_kind::S_num:                  // num
        case symbol_kind::S_expression:           // expression
        case symbol_kind::S_compoundExpression:   // compoundExpression
        case symbol_kind::S_exprFixedTwoArg:      // exprFixedTwoArg
        case symbol_kind::S_expressionArray:      // expressionArray
        case symbol_kind::S_expressionObject:     // expressionObject
        case symbol_kind::S_expressionFields:     // expressionFields
        case symbol_kind::S_maths:                // maths
        case symbol_kind::S_add:                  // add
        case symbol_kind::S_atan2:                // atan2
        case symbol_kind::S_boolExps:             // boolExps
        case symbol_kind::S_and:                  // and
        case symbol_kind::S_or:                   // or
        case symbol_kind::S_not:                  // not
        case symbol_kind::S_literalEscapes:       // literalEscapes
        case symbol_kind::S_const:                // const
        case symbol_kind::S_literal:              // literal
        case symbol_kind::S_stringExps:           // stringExps
        case symbol_kind::S_concat:               // concat
        case symbol_kind::S_dateFromString:       // dateFromString
        case symbol_kind::S_dateToString:         // dateToString
        case symbol_kind::S_indexOfBytes:         // indexOfBytes
        case symbol_kind::S_indexOfCP:            // indexOfCP
        case symbol_kind::S_ltrim:                // ltrim
        case symbol_kind::S_regexFind:            // regexFind
        case symbol_kind::S_regexFindAll:         // regexFindAll
        case symbol_kind::S_regexMatch:           // regexMatch
        case symbol_kind::S_regexArgs:            // regexArgs
        case symbol_kind::S_replaceOne:           // replaceOne
        case symbol_kind::S_replaceAll:           // replaceAll
        case symbol_kind::S_rtrim:                // rtrim
        case symbol_kind::S_split:                // split
        case symbol_kind::S_strLenBytes:          // strLenBytes
        case symbol_kind::S_strLenCP:             // strLenCP
        case symbol_kind::S_strcasecmp:           // strcasecmp
        case symbol_kind::S_substr:               // substr
        case symbol_kind::S_substrBytes:          // substrBytes
        case symbol_kind::S_substrCP:             // substrCP
        case symbol_kind::S_toLower:              // toLower
        case symbol_kind::S_toUpper:              // toUpper
        case symbol_kind::S_trim:                 // trim
        case symbol_kind::S_compExprs:            // compExprs
        case symbol_kind::S_cmp:                  // cmp
        case symbol_kind::S_eq:                   // eq
        case symbol_kind::S_gt:                   // gt
        case symbol_kind::S_gte:                  // gte
        case symbol_kind::S_lt:                   // lt
        case symbol_kind::S_lte:                  // lte
        case symbol_kind::S_ne:                   // ne
        case symbol_kind::S_typeExpression:       // typeExpression
        case symbol_kind::S_convert:              // convert
        case symbol_kind::S_toBool:               // toBool
        case symbol_kind::S_toDate:               // toDate
        case symbol_kind::S_toDecimal:            // toDecimal
        case symbol_kind::S_toDouble:             // toDouble
        case symbol_kind::S_toInt:                // toInt
        case symbol_kind::S_toLong:               // toLong
        case symbol_kind::S_toObjectId:           // toObjectId
        case symbol_kind::S_toString:             // toString
        case symbol_kind::S_type:                 // type
        case symbol_kind::S_abs:                  // abs
        case symbol_kind::S_ceil:                 // ceil
        case symbol_kind::S_divide:               // divide
        case symbol_kind::S_exponent:             // exponent
        case symbol_kind::S_floor:                // floor
        case symbol_kind::S_ln:                   // ln
        case symbol_kind::S_log:                  // log
        case symbol_kind::S_logten:               // logten
        case symbol_kind::S_mod:                  // mod
        case symbol_kind::S_multiply:             // multiply
        case symbol_kind::S_pow:                  // pow
        case symbol_kind::S_round:                // round
        case symbol_kind::S_sqrt:                 // sqrt
        case symbol_kind::S_subtract:             // subtract
        case symbol_kind::S_trunc:                // trunc
        case symbol_kind::S_setExpression:        // setExpression
        case symbol_kind::S_allElementsTrue:      // allElementsTrue
        case symbol_kind::S_anyElementTrue:       // anyElementTrue
        case symbol_kind::S_setDifference:        // setDifference
        case symbol_kind::S_setEquals:            // setEquals
        case symbol_kind::S_setIntersection:      // setIntersection
        case symbol_kind::S_setIsSubset:          // setIsSubset
        case symbol_kind::S_setUnion:             // setUnion
        case symbol_kind::S_match:                // match
        case symbol_kind::S_predicates:           // predicates
        case symbol_kind::S_compoundMatchExprs:   // compoundMatchExprs
        case symbol_kind::S_predValue:            // predValue
        case symbol_kind::S_additionalExprs:      // additionalExprs
        case symbol_kind::S_sortSpecs:            // sortSpecs
        case symbol_kind::S_specList:             // specList
        case symbol_kind::S_metaSort:             // metaSort
        case symbol_kind::S_oneOrNegOne:          // oneOrNegOne
        case symbol_kind::S_metaSortKeyword:      // metaSortKeyword
            value.copy<CNode>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_projectionFieldname:      // projectionFieldname
        case symbol_kind::S_expressionFieldname:      // expressionFieldname
        case symbol_kind::S_stageAsUserFieldname:     // stageAsUserFieldname
        case symbol_kind::S_predFieldname:            // predFieldname
        case symbol_kind::S_argAsUserFieldname:       // argAsUserFieldname
        case symbol_kind::S_aggExprAsUserFieldname:   // aggExprAsUserFieldname
        case symbol_kind::S_invariableUserFieldname:  // invariableUserFieldname
        case symbol_kind::S_idAsUserFieldname:        // idAsUserFieldname
        case symbol_kind::S_valueFieldname:           // valueFieldname
        case symbol_kind::S_logicalExprField:         // logicalExprField
            value.copy<CNode::Fieldname>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_DATE_LITERAL:  // "Date"
            value.copy<Date_t>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_DECIMAL_OTHER:  // "arbitrary decimal"
            value.copy<Decimal128>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_OBJECT_ID:  // "ObjectID"
            value.copy<OID>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_TIMESTAMP:  // "Timestamp"
            value.copy<Timestamp>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_MAX_KEY:  // "maxKey"
            value.copy<UserMaxKey>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_MIN_KEY:  // "minKey"
            value.copy<UserMinKey>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_JSNULL:  // "null"
            value.copy<UserNull>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_UNDEFINED:  // "undefined"
            value.copy<UserUndefined>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_DOUBLE_OTHER:  // "arbitrary double"
            value.copy<double>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_INT_OTHER:  // "arbitrary integer"
            value.copy<int>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_LONG_OTHER:  // "arbitrary long"
            value.copy<long long>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_projectField:        // projectField
        case symbol_kind::S_expressionField:     // expressionField
        case symbol_kind::S_valueField:          // valueField
        case symbol_kind::S_onErrorArg:          // onErrorArg
        case symbol_kind::S_onNullArg:           // onNullArg
        case symbol_kind::S_formatArg:           // formatArg
        case symbol_kind::S_timezoneArg:         // timezoneArg
        case symbol_kind::S_charsArg:            // charsArg
        case symbol_kind::S_optionsArg:          // optionsArg
        case symbol_kind::S_predicate:           // predicate
        case symbol_kind::S_logicalExpr:         // logicalExpr
        case symbol_kind::S_operatorExpression:  // operatorExpression
        case symbol_kind::S_notExpr:             // notExpr
        case symbol_kind::S_sortSpec:            // sortSpec
            value.copy<std::pair<CNode::Fieldname, CNode>>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_FIELDNAME:              // "fieldname"
        case symbol_kind::S_STRING:                 // "string"
        case symbol_kind::S_DOLLAR_STRING:          // "$-prefixed string"
        case symbol_kind::S_DOLLAR_DOLLAR_STRING:   // "$$-prefixed string"
        case symbol_kind::S_DOLLAR_PREF_FIELDNAME:  // "$-prefixed fieldname"
            value.copy<std::string>(YY_MOVE(that.value));
            break;

        case symbol_kind::S_expressions:    // expressions
        case symbol_kind::S_values:         // values
        case symbol_kind::S_exprZeroToTwo:  // exprZeroToTwo
            value.copy<std::vector<CNode>>(YY_MOVE(that.value));
            break;

        default:
            break;
    }
}


template <typename Base>
ParserGen::symbol_kind_type ParserGen::basic_symbol<Base>::type_get() const YY_NOEXCEPT {
    return this->kind();
}

template <typename Base>
bool ParserGen::basic_symbol<Base>::empty() const YY_NOEXCEPT {
    return this->kind() == symbol_kind::S_YYEMPTY;
}

template <typename Base>
void ParserGen::basic_symbol<Base>::move(basic_symbol& s) {
    super_type::move(s);
    switch (this->kind()) {
        case symbol_kind::S_BINARY:  // "BinData"
            value.move<BSONBinData>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_JAVASCRIPT:  // "Code"
            value.move<BSONCode>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_JAVASCRIPT_W_SCOPE:  // "CodeWScope"
            value.move<BSONCodeWScope>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_DB_POINTER:  // "dbPointer"
            value.move<BSONDBRef>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_REGEX:  // "regex"
            value.move<BSONRegEx>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_SYMBOL:  // "Symbol"
            value.move<BSONSymbol>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_dbPointer:            // dbPointer
        case symbol_kind::S_javascript:           // javascript
        case symbol_kind::S_symbol:               // symbol
        case symbol_kind::S_javascriptWScope:     // javascriptWScope
        case symbol_kind::S_int:                  // int
        case symbol_kind::S_timestamp:            // timestamp
        case symbol_kind::S_long:                 // long
        case symbol_kind::S_double:               // double
        case symbol_kind::S_decimal:              // decimal
        case symbol_kind::S_minKey:               // minKey
        case symbol_kind::S_maxKey:               // maxKey
        case symbol_kind::S_value:                // value
        case symbol_kind::S_string:               // string
        case symbol_kind::S_fieldPath:            // fieldPath
        case symbol_kind::S_binary:               // binary
        case symbol_kind::S_undefined:            // undefined
        case symbol_kind::S_objectId:             // objectId
        case symbol_kind::S_bool:                 // bool
        case symbol_kind::S_date:                 // date
        case symbol_kind::S_null:                 // null
        case symbol_kind::S_regex:                // regex
        case symbol_kind::S_simpleValue:          // simpleValue
        case symbol_kind::S_compoundValue:        // compoundValue
        case symbol_kind::S_valueArray:           // valueArray
        case symbol_kind::S_valueObject:          // valueObject
        case symbol_kind::S_valueFields:          // valueFields
        case symbol_kind::S_variable:             // variable
        case symbol_kind::S_pipeline:             // pipeline
        case symbol_kind::S_stageList:            // stageList
        case symbol_kind::S_stage:                // stage
        case symbol_kind::S_inhibitOptimization:  // inhibitOptimization
        case symbol_kind::S_unionWith:            // unionWith
        case symbol_kind::S_skip:                 // skip
        case symbol_kind::S_limit:                // limit
        case symbol_kind::S_project:              // project
        case symbol_kind::S_sample:               // sample
        case symbol_kind::S_projectFields:        // projectFields
        case symbol_kind::S_projection:           // projection
        case symbol_kind::S_num:                  // num
        case symbol_kind::S_expression:           // expression
        case symbol_kind::S_compoundExpression:   // compoundExpression
        case symbol_kind::S_exprFixedTwoArg:      // exprFixedTwoArg
        case symbol_kind::S_expressionArray:      // expressionArray
        case symbol_kind::S_expressionObject:     // expressionObject
        case symbol_kind::S_expressionFields:     // expressionFields
        case symbol_kind::S_maths:                // maths
        case symbol_kind::S_add:                  // add
        case symbol_kind::S_atan2:                // atan2
        case symbol_kind::S_boolExps:             // boolExps
        case symbol_kind::S_and:                  // and
        case symbol_kind::S_or:                   // or
        case symbol_kind::S_not:                  // not
        case symbol_kind::S_literalEscapes:       // literalEscapes
        case symbol_kind::S_const:                // const
        case symbol_kind::S_literal:              // literal
        case symbol_kind::S_stringExps:           // stringExps
        case symbol_kind::S_concat:               // concat
        case symbol_kind::S_dateFromString:       // dateFromString
        case symbol_kind::S_dateToString:         // dateToString
        case symbol_kind::S_indexOfBytes:         // indexOfBytes
        case symbol_kind::S_indexOfCP:            // indexOfCP
        case symbol_kind::S_ltrim:                // ltrim
        case symbol_kind::S_regexFind:            // regexFind
        case symbol_kind::S_regexFindAll:         // regexFindAll
        case symbol_kind::S_regexMatch:           // regexMatch
        case symbol_kind::S_regexArgs:            // regexArgs
        case symbol_kind::S_replaceOne:           // replaceOne
        case symbol_kind::S_replaceAll:           // replaceAll
        case symbol_kind::S_rtrim:                // rtrim
        case symbol_kind::S_split:                // split
        case symbol_kind::S_strLenBytes:          // strLenBytes
        case symbol_kind::S_strLenCP:             // strLenCP
        case symbol_kind::S_strcasecmp:           // strcasecmp
        case symbol_kind::S_substr:               // substr
        case symbol_kind::S_substrBytes:          // substrBytes
        case symbol_kind::S_substrCP:             // substrCP
        case symbol_kind::S_toLower:              // toLower
        case symbol_kind::S_toUpper:              // toUpper
        case symbol_kind::S_trim:                 // trim
        case symbol_kind::S_compExprs:            // compExprs
        case symbol_kind::S_cmp:                  // cmp
        case symbol_kind::S_eq:                   // eq
        case symbol_kind::S_gt:                   // gt
        case symbol_kind::S_gte:                  // gte
        case symbol_kind::S_lt:                   // lt
        case symbol_kind::S_lte:                  // lte
        case symbol_kind::S_ne:                   // ne
        case symbol_kind::S_typeExpression:       // typeExpression
        case symbol_kind::S_convert:              // convert
        case symbol_kind::S_toBool:               // toBool
        case symbol_kind::S_toDate:               // toDate
        case symbol_kind::S_toDecimal:            // toDecimal
        case symbol_kind::S_toDouble:             // toDouble
        case symbol_kind::S_toInt:                // toInt
        case symbol_kind::S_toLong:               // toLong
        case symbol_kind::S_toObjectId:           // toObjectId
        case symbol_kind::S_toString:             // toString
        case symbol_kind::S_type:                 // type
        case symbol_kind::S_abs:                  // abs
        case symbol_kind::S_ceil:                 // ceil
        case symbol_kind::S_divide:               // divide
        case symbol_kind::S_exponent:             // exponent
        case symbol_kind::S_floor:                // floor
        case symbol_kind::S_ln:                   // ln
        case symbol_kind::S_log:                  // log
        case symbol_kind::S_logten:               // logten
        case symbol_kind::S_mod:                  // mod
        case symbol_kind::S_multiply:             // multiply
        case symbol_kind::S_pow:                  // pow
        case symbol_kind::S_round:                // round
        case symbol_kind::S_sqrt:                 // sqrt
        case symbol_kind::S_subtract:             // subtract
        case symbol_kind::S_trunc:                // trunc
        case symbol_kind::S_setExpression:        // setExpression
        case symbol_kind::S_allElementsTrue:      // allElementsTrue
        case symbol_kind::S_anyElementTrue:       // anyElementTrue
        case symbol_kind::S_setDifference:        // setDifference
        case symbol_kind::S_setEquals:            // setEquals
        case symbol_kind::S_setIntersection:      // setIntersection
        case symbol_kind::S_setIsSubset:          // setIsSubset
        case symbol_kind::S_setUnion:             // setUnion
        case symbol_kind::S_match:                // match
        case symbol_kind::S_predicates:           // predicates
        case symbol_kind::S_compoundMatchExprs:   // compoundMatchExprs
        case symbol_kind::S_predValue:            // predValue
        case symbol_kind::S_additionalExprs:      // additionalExprs
        case symbol_kind::S_sortSpecs:            // sortSpecs
        case symbol_kind::S_specList:             // specList
        case symbol_kind::S_metaSort:             // metaSort
        case symbol_kind::S_oneOrNegOne:          // oneOrNegOne
        case symbol_kind::S_metaSortKeyword:      // metaSortKeyword
            value.move<CNode>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_projectionFieldname:      // projectionFieldname
        case symbol_kind::S_expressionFieldname:      // expressionFieldname
        case symbol_kind::S_stageAsUserFieldname:     // stageAsUserFieldname
        case symbol_kind::S_predFieldname:            // predFieldname
        case symbol_kind::S_argAsUserFieldname:       // argAsUserFieldname
        case symbol_kind::S_aggExprAsUserFieldname:   // aggExprAsUserFieldname
        case symbol_kind::S_invariableUserFieldname:  // invariableUserFieldname
        case symbol_kind::S_idAsUserFieldname:        // idAsUserFieldname
        case symbol_kind::S_valueFieldname:           // valueFieldname
        case symbol_kind::S_logicalExprField:         // logicalExprField
            value.move<CNode::Fieldname>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_DATE_LITERAL:  // "Date"
            value.move<Date_t>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_DECIMAL_OTHER:  // "arbitrary decimal"
            value.move<Decimal128>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_OBJECT_ID:  // "ObjectID"
            value.move<OID>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_TIMESTAMP:  // "Timestamp"
            value.move<Timestamp>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_MAX_KEY:  // "maxKey"
            value.move<UserMaxKey>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_MIN_KEY:  // "minKey"
            value.move<UserMinKey>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_JSNULL:  // "null"
            value.move<UserNull>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_UNDEFINED:  // "undefined"
            value.move<UserUndefined>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_DOUBLE_OTHER:  // "arbitrary double"
            value.move<double>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_INT_OTHER:  // "arbitrary integer"
            value.move<int>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_LONG_OTHER:  // "arbitrary long"
            value.move<long long>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_projectField:        // projectField
        case symbol_kind::S_expressionField:     // expressionField
        case symbol_kind::S_valueField:          // valueField
        case symbol_kind::S_onErrorArg:          // onErrorArg
        case symbol_kind::S_onNullArg:           // onNullArg
        case symbol_kind::S_formatArg:           // formatArg
        case symbol_kind::S_timezoneArg:         // timezoneArg
        case symbol_kind::S_charsArg:            // charsArg
        case symbol_kind::S_optionsArg:          // optionsArg
        case symbol_kind::S_predicate:           // predicate
        case symbol_kind::S_logicalExpr:         // logicalExpr
        case symbol_kind::S_operatorExpression:  // operatorExpression
        case symbol_kind::S_notExpr:             // notExpr
        case symbol_kind::S_sortSpec:            // sortSpec
            value.move<std::pair<CNode::Fieldname, CNode>>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_FIELDNAME:              // "fieldname"
        case symbol_kind::S_STRING:                 // "string"
        case symbol_kind::S_DOLLAR_STRING:          // "$-prefixed string"
        case symbol_kind::S_DOLLAR_DOLLAR_STRING:   // "$$-prefixed string"
        case symbol_kind::S_DOLLAR_PREF_FIELDNAME:  // "$-prefixed fieldname"
            value.move<std::string>(YY_MOVE(s.value));
            break;

        case symbol_kind::S_expressions:    // expressions
        case symbol_kind::S_values:         // values
        case symbol_kind::S_exprZeroToTwo:  // exprZeroToTwo
            value.move<std::vector<CNode>>(YY_MOVE(s.value));
            break;

        default:
            break;
    }

    location = YY_MOVE(s.location);
}

// by_kind.
inline ParserGen::by_kind::by_kind() : kind_(symbol_kind::S_YYEMPTY) {}

#if 201103L <= YY_CPLUSPLUS
inline ParserGen::by_kind::by_kind(by_kind&& that) : kind_(that.kind_) {
    that.clear();
}
#endif

inline ParserGen::by_kind::by_kind(const by_kind& that) : kind_(that.kind_) {}

inline ParserGen::by_kind::by_kind(token_kind_type t) : kind_(yytranslate_(t)) {}

inline void ParserGen::by_kind::clear() {
    kind_ = symbol_kind::S_YYEMPTY;
}

inline void ParserGen::by_kind::move(by_kind& that) {
    kind_ = that.kind_;
    that.clear();
}

inline ParserGen::symbol_kind_type ParserGen::by_kind::kind() const YY_NOEXCEPT {
    return kind_;
}

inline ParserGen::symbol_kind_type ParserGen::by_kind::type_get() const YY_NOEXCEPT {
    return this->kind();
}

#line 57 "grammar.yy"
}  // namespace mongo
#line 5460 "parser_gen.hpp"


#endif  // !YY_YY_PARSER_GEN_HPP_INCLUDED
