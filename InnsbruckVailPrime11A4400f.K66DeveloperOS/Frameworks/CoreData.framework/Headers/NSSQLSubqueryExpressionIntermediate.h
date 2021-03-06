/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLExpressionIntermediate.h"

@class NSSQLEntity, NSExpression, NSString, NSSQLColumn, NSSQLFetchIntermediate, NSMutableArray, NSMutableString;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {
	NSExpression *_trailingKeypath;	// 16 = 0x10
	NSExpression *_variableExpression;	// 20 = 0x14
	NSSQLFetchIntermediate *_fetchIntermediate;	// 24 = 0x18
	NSSQLEntity *_selectFromEntity;	// 28 = 0x1c
	NSMutableString *_selectFromCorrelationTarget;	// 32 = 0x20
	NSString *_selectEntityAlias;	// 36 = 0x24
	NSSQLEntity *_governingEntityForVariable;	// 40 = 0x28
	NSSQLColumn *_variableColumn;	// 44 = 0x2c
	NSString *_variableAlias;	// 48 = 0x30
	NSSQLColumn *_targetColumn;	// 52 = 0x34
	NSString *_targetAlias;	// 56 = 0x38
	NSMutableArray *_keypathsToPromote;	// 60 = 0x3c
	BOOL _useDistinct;	// 64 = 0x40
	BOOL _isCount;	// 65 = 0x41
	BOOL _hasTrailingFunction;	// 66 = 0x42
	BOOL _onlyTrailIsCount;	// 67 = 0x43
	BOOL _subqueryHasTruePredicate;	// 68 = 0x44
}
- (id)initWithExpression:(id)expression trailingKeypath:(id)keypath inScope:(id)scope;	// 0x2d12fc05
- (void)_createCollectionJoinsForFetchInContext:(id)context;	// 0x2d130d11
- (void)_createSelectClauseInFetchWithContext:(id)context;	// 0x2d130625
- (id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;	// 0x2d1300a5
- (BOOL)_isKeypathScopedToSubquery:(id)subquery;	// 0x2d12fed5
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)subqueryScopedKeypath;	// 0x2d1301a9
- (void)_promoteJoinsForSubqueryScopedKeypaths;	// 0x2d1302fd
- (void)_setVariableColumn:(id)column;	// 0x2d130ccd
- (void)dealloc;	// 0x2d12fdb5
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x2d12ff95
- (id)generateSQLStringInContext:(id)context;	// 0x2d131f65
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x2d130049
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x2d12ffed
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;	// 0x2d1303f5
- (void)selectDistinct;	// 0x2d130611
@end

