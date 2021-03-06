/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLOffsetIntermediate, NSMutableSet, NSSQLWhereIntermediate, NSSQLGroupByIntermediate, NSSQLHavingIntermediate, NSSQLOrderIntermediate, NSString, NSMutableDictionary, NSSQLSelectIntermediate, NSMutableArray, NSSQLLimitIntermediate, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLFetchIntermediate : NSSQLIntermediate {
@private
	NSSQLEntity *_governingEntity;	// 8 = 0x8
	NSString *_governingAlias;	// 12 = 0xc
	NSString *_correlationToken;	// 16 = 0x10
	NSSQLSelectIntermediate *_selectClause;	// 20 = 0x14
	NSSQLWhereIntermediate *_whereClause;	// 24 = 0x18
	NSSQLGroupByIntermediate *_groupByClause;	// 28 = 0x1c
	NSSQLHavingIntermediate *_havingClause;	// 32 = 0x20
	NSSQLLimitIntermediate *_limitClause;	// 36 = 0x24
	NSSQLOffsetIntermediate *_offsetClause;	// 40 = 0x28
	NSSQLOrderIntermediate *_orderIntermediate;	// 44 = 0x2c
	NSMutableArray *_joinIntermediates;	// 48 = 0x30
	NSMutableDictionary *_joinKeypaths;	// 52 = 0x34
	NSMutableSet *_groupByKeypaths;	// 56 = 0x38
}
@property(retain) NSString *governingAlias;	// G=0x33e2a3d5; S=0x33ed52a9; converted property
@property(retain) NSSQLEntity *governingEntity;	// G=0x33e2c425; S=0x33ed5275; converted property
@property(retain) id groupByIntermediate;	// G=0x33e3e001; S=0x33ed542d; converted property
@property(retain) id havingIntermediate;	// G=0x33ed5255; S=0x33ed5369; converted property
@property(readonly, retain) NSMutableArray *joinIntermediates;	// G=0x33e2c3c9; converted property
@property(retain) id limitIntermediate;	// G=0x33ed5265; S=0x33e37615; converted property
@property(retain) id selectIntermediate;	// G=0x33e2a4d9; S=0x33e2a499; converted property
- (id)initWithEntity:(id)entity alias:(id)alias inScope:(id)scope;	// 0x33e29845
- (id)initWithScope:(id)scope;	// 0x33e2988d
- (id)_generateJoinSQLStringInContext:(id)context;	// 0x33e2c549
- (void)addGroupByKeypath:(id)keypath;	// 0x33ed53cd
- (void)addJoinIntermediate:(id)intermediate atKeypathWithComponents:(id)components;	// 0x33ed5805
- (void)dealloc;	// 0x33e2c74d
- (id)fetchIntermediate;	// 0x33e2c421
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x33e2c005
- (id)finalJoinForKeypathWithComponents:(id)components;	// 0x33ed5731
- (id)generateSQLStringInContext:(id)context;	// 0x33e2a649
// converted property getter: - (id)governingAlias;	// 0x33e2a3d5
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x33e2ba85
// converted property getter: - (id)governingEntity;	// 0x33e2c425
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x33e2b9a1
- (BOOL)groupByClauseContainsKeypath:(id)keypath;	// 0x33ed53a9
// converted property getter: - (id)groupByIntermediate;	// 0x33e3e001
// converted property getter: - (id)havingIntermediate;	// 0x33ed5255
// converted property getter: - (id)joinIntermediates;	// 0x33e2c3c9
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;	// 0x33ed546d
// converted property getter: - (id)limitIntermediate;	// 0x33ed5265
- (void)promoteToOuterJoinAtKeypathWithComponents:(id)components;	// 0x33ed5651
- (void)promoteToOuterJoinsAlongKeypathWithComponents:(id)components;	// 0x33e3c921
- (void)selectDistinct;	// 0x33ed5285
// converted property getter: - (id)selectIntermediate;	// 0x33e2a4d9
- (void)setCorrelationToken:(id)token;	// 0x33ed52e9
// converted property setter: - (void)setGoverningAlias:(id)alias;	// 0x33ed52a9
// converted property setter: - (void)setGoverningEntity:(id)entity;	// 0x33ed5275
// converted property setter: - (void)setGroupByIntermediate:(id)intermediate;	// 0x33ed542d
// converted property setter: - (void)setHavingIntermediate:(id)intermediate;	// 0x33ed5369
// converted property setter: - (void)setLimitIntermediate:(id)intermediate;	// 0x33e37615
- (void)setOffsetIntermediate:(id)intermediate;	// 0x33ed5329
- (void)setOrderIntermediate:(id)intermediate;	// 0x33e2a5f9
// converted property setter: - (void)setSelectIntermediate:(id)intermediate;	// 0x33e2a499
- (void)setWhereIntermediate:(id)intermediate;	// 0x33e37529
@end

