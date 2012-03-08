/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSArray;

@interface NSFunctionExpression : NSExpression {
@private
	NSExpression *_operand;	// 12 = 0xc
	SEL _selector;	// 16 = 0x10
	NSArray *_arguments;	// 20 = 0x14
}
@property(readonly, retain) NSArray *arguments;	// G=0x32021add; converted property
@property(readonly, retain) NSExpression *operand;	// G=0x3203cf39; converted property
@property(readonly, assign) SEL selector;	// G=0x3203cf29; converted property
- (id)initWithCoder:(id)coder;	// 0x320da2ad
- (id)initWithExpressionType:(unsigned)expressionType operand:(id)operand selector:(SEL)selector argumentArray:(id)array;	// 0x32019ccd
- (id)initWithSelector:(SEL)selector argumentArray:(id)array;	// 0x3203e4f5
- (id)initWithTarget:(id)target selectorName:(id)name arguments:(id)arguments;	// 0x320da0bd
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x320dad39
- (BOOL)_shouldUseParensWithDescription;	// 0x320dacfd
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3203d1a5
// converted property getter: - (id)arguments;	// 0x32021add
- (id)binaryOperatorForSelector;	// 0x320da535
- (id)copyWithZone:(NSZone *)zone;	// 0x32040199
- (void)dealloc;	// 0x3201b421
- (void)encodeWithCoder:(id)coder;	// 0x320da1ad
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x3203ec2d
- (id)function;	// 0x320da3c9
- (unsigned)hash;	// 0x320da4bd
- (BOOL)isEqual:(id)equal;	// 0x320da3e5
// converted property getter: - (id)operand;	// 0x3203cf39
- (id)predicateFormat;	// 0x320da671
// converted property getter: - (SEL)selector;	// 0x3203cf29
@end
