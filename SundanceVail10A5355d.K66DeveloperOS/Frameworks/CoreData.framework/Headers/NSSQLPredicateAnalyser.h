/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPredicateVisitor.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {
	BOOL _compoundPredicate;	// 4 = 0x4
	NSMutableArray *_keys;	// 8 = 0x8
	NSMutableArray *_allModifierPredicates;	// 12 = 0xc
	NSMutableArray *_setExpressions;	// 16 = 0x10
	NSMutableArray *_subqueries;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *allModifierPredicates;	// G=0x33489779; converted property
@property(readonly, retain) NSMutableArray *setExpressions;	// G=0x33549805; converted property
@property(readonly, retain) NSMutableArray *subqueries;	// G=0x335497f5; converted property
- (id)init;	// 0x33488f8d
// converted property getter: - (id)allModifierPredicates;	// 0x33489779
- (void)dealloc;	// 0x3348e285
- (id)keypaths;	// 0x335497e5
// converted property getter: - (id)setExpressions;	// 0x33549805
// converted property getter: - (id)subqueries;	// 0x335497f5
- (void)visitPredicate:(id)predicate;	// 0x33489125
- (void)visitPredicateExpression:(id)expression;	// 0x33489069
- (void)visitPredicateOperator:(id)anOperator;	// 0x335497e1
@end

