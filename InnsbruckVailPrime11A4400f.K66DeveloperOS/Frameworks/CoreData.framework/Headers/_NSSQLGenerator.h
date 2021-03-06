/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import </libobjc.A.h>

@class NSMutableDictionary, NSSQLStatement, NSSQLStoreMappingGenerator, NSSQLAdapter, NSMutableArray, NSMutableString;

@interface _NSSQLGenerator : NSObject {
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
@property(assign) BOOL autoDistinct;	// G=0x2d07e549; S=0x2d07e559; converted property
@property(readonly, retain) NSMutableString *sqlString;	// G=0x2d077ad1; converted property
@property(readonly, retain) NSMutableString *whereClause;	// G=0x2d077c89; converted property
+ (void)initialize;	// 0x2d0777c5
- (id)initWithStatement:(id)statement forAdapter:(id)adapter;	// 0x2d077955
- (void)_addBindVarForConstVal1:(id)constVal1;	// 0x2d078559
- (void)_addBindVarForConstVal2:(id)constVal2;	// 0x2d07834d
- (void)_appendWhereClauseForConstVal:(id)constVal;	// 0x2d07881d
- (void)_appendWhereClauseForConstantCollection:(id)constantCollection;	// 0x2d07c629
- (void)_appendWhereClauseForExpressionCollection:(id)expressionCollection;	// 0x2d07c519
- (BOOL)_isForeignObjectExpression:(id)expression;	// 0x2d07e569
- (BOOL)_isNullExpression:(id)expression;	// 0x2d07d829
- (id)_newPredicateWithInheritanceForFetchRequest:(id)fetchRequest;	// 0x2d07b911
- (id)_newWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x2d07c205
- (void)_prepareConst:(id)aConst inAttribute:(id)attribute sensitiveOptions:(unsigned)options;	// 0x2d07c129
- (void)_prepareConst:(id)aConst inManyToMany:(id)many;	// 0x2d07bf29
- (void)_prepareConst:(id)aConst inToMany:(id)many;	// 0x2d07bfbd
- (BOOL)_prepareFunctionExpression:(id)expression;	// 0x2d07c739
- (void)_preparePredicate:(id)predicate;	// 0x2d07decd
- (void)_preparePredicateExpression:(id)expression;	// 0x2d07c7a5
- (void)_preparePredicateOperator:(id)anOperator;	// 0x2d078119
- (void)_prepareString:(id)string expressionPath:(id)path sensitiveOptions:(unsigned)options wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many;	// 0x2d07c341
- (void)_prepareSubstringWith:(id)with wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x2d07d685
- (id)_reducedSubpredicates:(id)subpredicates;	// 0x2d07db99
- (id)_retainedPrimaryKeyNumberForObject:(id)object;	// 0x2d0780ad
- (id)_retainedPrimaryKeyNumberForObjectID:(NSScalarObjectID *)objectID;	// 0x2d078055
- (void)_startSQL:(id)sql;	// 0x2d077c49
- (id)addJoinForDirectToManyToMany:(id)many;	// 0x2d07a089
- (void)addJoinForManyToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x2d079d95
- (void)addJoinForToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x2d079bc9
- (void)addJoinForToOneRelationship:(id)oneRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x2d079a01
- (void)appendClause:(id)clause forKeyPath:(id)keyPath allowToMany:(BOOL)many;	// 0x2d07a5a5
- (void)appendClause:(id)clause forKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many;	// 0x2d07a9b9
- (void)appendClause:(id)clause forProperty:(id)property keypath:(id)keypath;	// 0x2d07995d
- (void)appendCountClause:(id)clause forToManyKeyPath:(id)manyKeyPath;	// 0x2d07a24d
- (void)appendJoinClauseToSQL;	// 0x2d077f51
- (void)appendLimitClauseToSQL:(unsigned)sql;	// 0x2d077fe1
- (void)appendOrderByClauseToSQL;	// 0x2d077fc1
- (void)appendSQL:(id)sql;	// 0x2d077c69
- (void)appendSelectListToSQLForRequest:(id)request;	// 0x2d077c99
- (void)appendWhereClause:(id)clause;	// 0x2d077c29
- (void)appendWhereClauseToSQL;	// 0x2d077f71
// converted property getter: - (BOOL)autoDistinct;	// 0x2d07e549
- (void)buildOrderByClauseWithSortDescriptors:(id)sortDescriptors;	// 0x2d07aa61
- (void)buildWhereClauseForRow:(id)row optLock:(long long)lock;	// 0x2d07acb1
- (void)buildWhereClauseWithSelectPredicate:(id)selectPredicate;	// 0x2d079801
- (void)buildWhereClauseWithSimplePredicate:(id)simplePredicate;	// 0x2d07ac41
- (void)dealloc;	// 0x2d077821
- (BOOL)foldComparisonPredicate:(id)predicate;	// 0x2d07e67d
- (BOOL)isToManyCountKeyPath:(id)manyCountKeyPath;	// 0x2d07a1d1
- (void)prepareBeginsWith:(id)with;	// 0x2d07d7e9
- (void)prepareBetween:(id)between;	// 0x2d07cf4d
- (void)prepareComparisonPredicate:(id)predicate;	// 0x2d07d88d
- (void)prepareCountStatementWithFetchRequest:(id)fetchRequest;	// 0x2d07bdb5
- (void)prepareDeleteStatementWithCorrelation:(id)correlation;	// 0x2d079635
- (void)prepareDeleteStatementWithRow:(id)row;	// 0x2d07b709
- (void)prepareEndsWith:(id)with;	// 0x2d07d809
- (void)prepareIn:(id)anIn swap:(BOOL)swap;	// 0x2d07c98d
- (void)prepareInsertStatementWithCorrelation:(id)correlation;	// 0x2d079049
- (void)prepareInsertStatementWithRow:(id)row;	// 0x2d078855
- (void)prepareLike:(id)like;	// 0x2d07d44d
- (void)prepareMatches:(id)matches;	// 0x2d07cee9
- (void)prepareSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;	// 0x2d07bca5
- (void)prepareUpdateStatementWithCorrelation:(id)correlation;	// 0x2d0792d9
- (void)prepareUpdateStatementWithRow:(id)row originalRow:(id)row2;	// 0x2d07adc5
// converted property setter: - (void)setAutoDistinct:(BOOL)distinct;	// 0x2d07e559
// converted property getter: - (id)sqlString;	// 0x2d077ad1
- (unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;	// 0x2d077ae1
- (unsigned)sqlTypeForPropertyAtEndOfKeyPath:(id)keyPath;	// 0x2d0781d9
// converted property getter: - (id)whereClause;	// 0x2d077c89
@end

