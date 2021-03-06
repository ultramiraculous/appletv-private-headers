/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSSQLProperty, NSExpression, NSString, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLExistenceSubqueryWhereIntermediate : NSSQLWhereIntermediate {
@private
	NSExpression *_subqueryExpression;	// 12 = 0xc
	NSExpression *_variableExpression;	// 16 = 0x10
	NSString *_variableAlias;	// 20 = 0x14
	NSSQLProperty *_collectionProperty;	// 24 = 0x18
	NSSQLEntity *_governingEntityForVariable;	// 28 = 0x1c
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope;	// 0x36333695
- (id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;	// 0x36333bcd
- (BOOL)_isKeypathScopedToSubquery:(id)subquery;	// 0x36333df1
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x36333d99
- (id)generateSQLStringInContext:(id)context;	// 0x36333791
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x36333ce1
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x36333d3d
- (BOOL)isExistenceScoped;	// 0x36333691
@end

