/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"


@interface NSSetExpression : NSExpression {
@private
	NSExpression *_left;	// 12 = 0xc
	NSExpression *_right;	// 16 = 0x10
}
- (id)initWithCoder:(id)coder;	// 0x310db415
- (id)initWithType:(unsigned)type leftExpression:(id)expression rightExpression:(id)expression3;	// 0x310db251
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x310db815
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x310db779
- (id)copyWithZone:(NSZone *)zone;	// 0x310db509
- (void)dealloc;	// 0x310db2c9
- (void)encodeWithCoder:(id)coder;	// 0x310db341
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x310db909
- (BOOL)isEqual:(id)equal;	// 0x310db5c1
- (id)leftExpression;	// 0x310db759
- (id)predicateFormat;	// 0x310db699
- (id)rightExpression;	// 0x310db769
@end

