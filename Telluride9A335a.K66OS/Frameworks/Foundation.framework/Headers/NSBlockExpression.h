/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSArray;

@interface NSBlockExpression : NSExpression {
	id _block;	// 12 = 0xc
	NSArray *_arguments;	// 16 = 0x10
}
@property(readonly, retain) NSArray *arguments;	// G=0x320e3075; converted property
- (id)initWithCoder:(id)coder;	// 0x320e3029
- (id)initWithType:(unsigned)type block:(id)block arguments:(id)arguments;	// 0x320e2e8d
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x320e3315
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x320e34b1
// converted property getter: - (id)arguments;	// 0x320e3075
- (id)copyWithZone:(NSZone *)zone;	// 0x320e2f7d
- (void)dealloc;	// 0x320e2f05
- (void)encodeWithCoder:(id)coder;	// 0x320e2fed
- (id)expressionBlock;	// 0x320e3065
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x320e3085
- (id)predicateFormat;	// 0x320e32bd
@end
