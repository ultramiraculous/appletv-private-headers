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
@property(readonly, retain) NSArray *arguments;	// G=0x35eb4075; converted property
- (id)initWithCoder:(id)coder;	// 0x35eb4029
- (id)initWithType:(unsigned)type block:(id)block arguments:(id)arguments;	// 0x35eb3e8d
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x35eb4315
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x35eb44b1
// converted property getter: - (id)arguments;	// 0x35eb4075
- (id)copyWithZone:(NSZone *)zone;	// 0x35eb3f7d
- (void)dealloc;	// 0x35eb3f05
- (void)encodeWithCoder:(id)coder;	// 0x35eb3fed
- (id)expressionBlock;	// 0x35eb4065
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x35eb4085
- (id)predicateFormat;	// 0x35eb42bd
@end
