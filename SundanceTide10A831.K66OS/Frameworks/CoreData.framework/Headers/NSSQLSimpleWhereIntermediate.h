/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSMutableArray, NSExpression;

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
	NSMutableArray *_comparisonPredicateScopedItem;	// 12 = 0xc
	NSExpression *_effectiveLeftExpression;	// 16 = 0x10
	NSExpression *_effectiveRightExpression;	// 20 = 0x14
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope;	// 0x33d27a11
- (long)_cfStringOptionsFromPredicateOptions:(unsigned)predicateOptions;	// 0x33de57f1
- (id)_generateSQLBeginsWithStringInContext:(id)context;	// 0x33de6789
- (id)_generateSQLBetweenStringInContext:(id)context;	// 0x33de7919
- (id)_generateSQLContainmentStringInContext:(id)context;	// 0x33de7001
- (id)_generateSQLEndsWithStringInContext:(id)context;	// 0x33de6a29
- (id)_generateSQLForConst:(id)aConst inAttribute:(id)attribute expression:(id)expression inContext:(id)context;	// 0x33de6e51
- (id)_generateSQLForConst:(id)aConst inManyToMany:(id)many expression:(id)expression inContext:(id)context;	// 0x33de6a49
- (id)_generateSQLForConst:(id)aConst inToMany:(id)many inContext:(id)context;	// 0x33de6c29
- (id)_generateSQLForMatchingOperator:(id)matchingOperator inContext:(id)context;	// 0x33de5b39
- (id)_generateSQLForString:(id)string expressionPath:(id)path wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many inContext:(id)context;	// 0x33de6069
- (id)_generateSQLForWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x33de5f2d
- (id)_generateSQLSubstringWildStart:(BOOL)start wildEnd:(BOOL)end inContext:(id)context;	// 0x33de62f1
- (id)_generateSQLType1InContext:(id)context;	// 0x33de5505
- (id)_generateSQLType2InContext:(id)context;	// 0x33d28da9
- (id)_generateSQLType3InContext:(id)context;	// 0x33de5821
- (BOOL)_isNilExpression:(id)expression;	// 0x33d28d45
- (id)_lastScopedItem;	// 0x33d2abf1
- (id)_sqlTokenForPredicateOperator:(unsigned)predicateOperator inContext:(id)context;	// 0x33d2b00d
- (id)_upperBoundSearchStringForString:(id)string context:(id)context;	// 0x33de6479
- (void)dealloc;	// 0x33d2b881
- (id)generateSQLStringInContext:(id)context;	// 0x33d28a05
@end

