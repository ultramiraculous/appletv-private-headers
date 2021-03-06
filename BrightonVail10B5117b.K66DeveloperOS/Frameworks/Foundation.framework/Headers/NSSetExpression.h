/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"


@interface NSSetExpression : NSExpression {
	NSExpression *_left;	// 12 = 0xc
	NSExpression *_right;	// 16 = 0x10
}
- (id)initWithCoder:(id)coder;	// 0x31a314b5
- (id)initWithType:(unsigned)type leftExpression:(id)expression rightExpression:(id)expression3;	// 0x31a312ed
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x31a318c9
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x31a31825
- (id)copyWithZone:(NSZone *)zone;	// 0x31a315a9
- (void)dealloc;	// 0x31a31365
- (void)encodeWithCoder:(id)coder;	// 0x31a313dd
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31a319bd
- (BOOL)isEqual:(id)equal;	// 0x31a31665
- (id)leftExpression;	// 0x31a31805
- (id)predicateFormat;	// 0x31a31745
- (id)rightExpression;	// 0x31a31815
@end

