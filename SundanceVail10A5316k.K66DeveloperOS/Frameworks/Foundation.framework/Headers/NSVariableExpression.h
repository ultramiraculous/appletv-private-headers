/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSString;

@interface NSVariableExpression : NSExpression {
	NSString *_variable;	// 12 = 0xc
}
@property(readonly, retain) NSString *variable;	// G=0x31ac3201; converted property
- (id)initWithCoder:(id)coder;	// 0x31ac3081
- (id)initWithObject:(id)object;	// 0x31a205f1
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x31ac33d5
- (id)copyWithZone:(NSZone *)zone;	// 0x31ac3141
- (void)dealloc;	// 0x31ac2f8d
- (void)encodeWithCoder:(id)coder;	// 0x31ac2fd9
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31ac32b9
- (unsigned)hash;	// 0x31ac3291
- (BOOL)isEqual:(id)equal;	// 0x31ac3211
- (id)predicateFormat;	// 0x31ac317d
// converted property getter: - (id)variable;	// 0x31ac3201
@end

