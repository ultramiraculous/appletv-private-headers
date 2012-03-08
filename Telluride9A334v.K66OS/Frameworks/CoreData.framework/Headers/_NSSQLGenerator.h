/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSMutableArray, NSMutableString, NSSQLAdapter, NSMutableDictionary, NSSQLStatement, NSSQLStoreMappingGenerator;

__attribute__((visibility("hidden")))
@interface _NSSQLGenerator : NSObject {
@private
	NSSQLStatement *_statement;	// 4 = 0x4
	NSSQLAdapter *_adapter;	// 8 = 0x8
	NSMutableString *_sqlString;	// 12 = 0xc
	NSMutableDictionary *_aliasMap;	// 16 = 0x10
	NSSQLStoreMappingGenerator *_aliasNamer;	// 20 = 0x14
	NSMutableString *_joinClause;	// 24 = 0x18
	NSMutableString *_whereClause;	// 28 = 0x1c
	NSMutableString *_selectList;	// 32 = 0x20
	NSMutableString *_orderByClause;	// 36 = 0x24
	BOOL _allowToManyKeyPath;	// 40 = 0x28
	BOOL _useDistinct;	// 41 = 0x29
	BOOL _autoDistinct;	// 42 = 0x2a
	unsigned _scopedByORPredicate;	// 44 = 0x2c
	NSMutableArray *_comparisonPredicateScopedItem;	// 48 = 0x30
}
@property(assign) BOOL autoDistinct;	// G=0x31e771d9; S=0x31e771e9; converted property
@property(readonly, retain) NSMutableString *sqlString;	// G=0x31e771b9; converted property
@property(readonly, retain) NSMutableString *whereClause;	// G=0x31e771c9; converted property
+ (void)initialize;	// 0x31e7b021
- (id)initWithStatement:(id)statement forAdapter:(id)adapter;	// 0x31e7e595
- (void)_addBindVarForConstVal1:(id)constVal1;	// 0x31e77b91
- (void)_addBindVarForConstVal2:(id)constVal2;	// 0x31e77979
- (void)_appendWhereClauseForConstVal:(id)constVal;	// 0x31e77e61
- (void)_appendWhereClauseForConstantCollection:(id)constantCollection;	// 0x31e7cf85
- (void)_appendWhereClauseForExpressionCollection:(id)expressionCollection;	// 0x31e7d08d
- (BOOL)_isForeignObjectExpression:(id)expression;	// 0x31e7ae21
- (BOOL)_isNullExpression:(id)expression;	// 0x31e7adc5
- (id)_newPredicateWithInheritanceForFetchRequest:(id)fetchRequest;	// 0x31e7a065
- (id)_newWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x31e7a9f5
- (void)_prepareConst:(id)aConst inAttribute:(id)attribute sensitiveOptions:(unsigned)options;	// 0x31e7a915
- (void)_prepareConst:(id)aConst inManyToMany:(id)many;	// 0x31e7a6f1
- (void)_prepareConst:(id)aConst inToMany:(id)many;	// 0x31e7a78d
- (BOOL)_prepareFunctionExpression:(id)expression;	// 0x31e7ad0d
- (void)_preparePredicate:(id)predicate;	// 0x31e7b079
- (void)_preparePredicateExpression:(id)expression;	// 0x31e7cda9
- (void)_preparePredicateOperator:(id)anOperator;	// 0x31e7e4d1
- (void)_prepareString:(id)string expressionPath:(id)path sensitiveOptions:(unsigned)options wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many;	// 0x31e7ab35
- (void)_prepareSubstringWith:(id)with wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x31e7bed1
- (id)_reducedSubpredicates:(id)subpredicates;	// 0x31e7b845
- (id)_retainedPrimaryKeyNumberForObject:(id)object;	// 0x31e777b5
- (id)_retainedPrimaryKeyNumberForObjectID:(NSScalarObjectID *)objectID;	// 0x31e77759
- (void)_startSQL:(id)sql;	// 0x31e7735d
- (id)addJoinForDirectToManyToMany:(id)many;	// 0x31e799d9
- (void)addJoinForManyToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x31e79685
- (void)addJoinForToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x31e7948d
- (void)addJoinForToOneRelationship:(id)oneRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x31e792b1
- (void)appendClause:(id)clause forKeyPath:(id)keyPath allowToMany:(BOOL)many;	// 0x31e7dcc1
- (void)appendClause:(id)clause forKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many;	// 0x31e79bdd
- (void)appendClause:(id)clause forProperty:(id)property keypath:(id)keypath;	// 0x31e79205
- (void)appendCountClause:(id)clause forToManyKeyPath:(id)manyKeyPath;	// 0x31e7e169
- (void)appendJoinClauseToSQL;	// 0x31e77659
- (void)appendLimitClauseToSQL:(unsigned)sql;	// 0x31e776e9
- (void)appendOrderByClauseToSQL;	// 0x31e776c9
- (void)appendSQL:(id)sql;	// 0x31e77381
- (void)appendSelectListToSQLForRequest:(id)request;	// 0x31e773a5
- (void)appendWhereClause:(id)clause;	// 0x31e77339
- (void)appendWhereClauseToSQL;	// 0x31e77679
// converted property getter: - (BOOL)autoDistinct;	// 0x31e771d9
- (void)buildOrderByClauseWithSortDescriptors:(id)sortDescriptors;	// 0x31e7dac9
- (void)buildWhereClauseForRow:(id)row optLock:(long long)lock;	// 0x31e79d15
- (void)buildWhereClauseWithSelectPredicate:(id)selectPredicate;	// 0x31e79095
- (void)buildWhereClauseWithSimplePredicate:(id)simplePredicate;	// 0x31e79c81
- (void)dealloc;	// 0x31e7e725
- (BOOL)foldComparisonPredicate:(id)predicate;	// 0x31e7af39
- (BOOL)isToManyCountKeyPath:(id)manyCountKeyPath;	// 0x31e79b61
- (void)prepareBeginsWith:(id)with;	// 0x31e7ad85
- (void)prepareBetween:(id)between;	// 0x31e7c281
- (void)prepareComparisonPredicate:(id)predicate;	// 0x31e7bb99
- (void)prepareCountStatementWithFetchRequest:(id)fetchRequest;	// 0x31e7a581
- (void)prepareDeleteStatementWithCorrelation:(id)correlation;	// 0x31e78ec5
- (void)prepareDeleteStatementWithRow:(id)row;	// 0x31e79e3d
- (void)prepareEndsWith:(id)with;	// 0x31e7ada5
- (void)prepareIn:(id)anIn swap:(BOOL)swap;	// 0x31e7c7e9
- (void)prepareInsertStatementWithCorrelation:(id)correlation;	// 0x31e78811
- (void)prepareInsertStatementWithRow:(id)row;	// 0x31e77e99
- (void)prepareLike:(id)like;	// 0x31e7c039
- (void)prepareMatches:(id)matches;	// 0x31e7c781
- (void)prepareSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;	// 0x31e7a461
- (void)prepareUpdateStatementWithCorrelation:(id)correlation;	// 0x31e78b19
- (void)prepareUpdateStatementWithRow:(id)row originalRow:(id)row2;	// 0x31e7d195
// converted property setter: - (void)setAutoDistinct:(BOOL)distinct;	// 0x31e771e9
// converted property getter: - (id)sqlString;	// 0x31e771b9
- (unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;	// 0x31e771f9
- (unsigned)sqlTypeForPropertyAtEndOfKeyPath:(id)keyPath;	// 0x31e77825
// converted property getter: - (id)whereClause;	// 0x31e771c9
@end
