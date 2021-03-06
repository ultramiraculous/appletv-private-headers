/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSPredicate;

@interface NSSubqueryExpression : NSExpression {
	NSExpression *_collection;	// 12 = 0xc
	NSExpression *_variableExpression;	// 16 = 0x10
	NSPredicate *_subpredicate;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *collection;	// G=0x34e122f9; converted property
@property(readonly, retain) NSExpression *variableExpression;	// G=0x34e12309; converted property
- (id)initWithCoder:(id)coder;	// 0x34e12059
- (id)initWithExpression:(id)expression usingIteratorExpression:(id)expression2 predicate:(id)predicate;	// 0x34e11e75
- (id)initWithExpression:(id)expression usingIteratorVariable:(id)variable predicate:(id)predicate;	// 0x34e11da1
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x34e126c9
- (BOOL)_shouldUseParensWithDescription;	// 0x34e127d1
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x34e127d5
// converted property getter: - (id)collection;	// 0x34e122f9
- (id)copyWithZone:(NSZone *)zone;	// 0x34e121a1
- (void)dealloc;	// 0x34e11d29
- (void)encodeWithCoder:(id)coder;	// 0x34e11f5d
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x34e12455
- (unsigned)hash;	// 0x34e1240d
- (BOOL)isEqual:(id)equal;	// 0x34e12351
- (id)predicate;	// 0x34e12341
- (id)predicateFormat;	// 0x34e12259
- (id)variable;	// 0x34e12319
// converted property getter: - (id)variableExpression;	// 0x34e12309
@end

