/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSArray;

@interface NSBlockExpression : NSExpression {
	id _block;	// 12 = 0xc
	NSArray *_arguments;	// 16 = 0x10
}
@property(readonly, retain) NSArray *arguments;	// G=0x3471ea21; converted property
- (id)initWithCoder:(id)coder;	// 0x3471e9d5
- (id)initWithType:(unsigned)type block:(id)block arguments:(id)arguments;	// 0x3471e839
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x3471ece5
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3471ee9d
// converted property getter: - (id)arguments;	// 0x3471ea21
- (id)copyWithZone:(NSZone *)zone;	// 0x3471e929
- (void)dealloc;	// 0x3471e8b1
- (void)encodeWithCoder:(id)coder;	// 0x3471e999
- (id)expressionBlock;	// 0x3471ea11
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x3471ea31
- (id)predicateFormat;	// 0x3471ec91
@end

