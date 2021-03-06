/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSymbolicExpression : NSExpression {
	NSString *_token;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x373e6805
- (id)initWithString:(id)string;	// 0x373e66b1
- (id)constantValue;	// 0x373e6951
- (id)copyWithZone:(NSZone *)zone;	// 0x373e68b9
- (void)dealloc;	// 0x373e68f5
- (void)encodeWithCoder:(id)coder;	// 0x373e675d
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x373e69e9
- (unsigned)hash;	// 0x373e69c9
- (BOOL)isEqual:(id)equal;	// 0x373e6961
- (id)predicateFormat;	// 0x373e6941
@end

