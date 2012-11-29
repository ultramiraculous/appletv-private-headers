/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicate.h"


@interface NSFalsePredicate : NSPredicate {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x34e0dd69
+ (id)defaultInstance;	// 0x34d66849
+ (void)initialize;	// 0x34d66825
- (id)initWithCoder:(id)coder;	// 0x34e0de0d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x34e0de85
- (id)autorelease;	// 0x34e0dd89
- (id)copyWithZone:(NSZone *)zone;	// 0x34e0de6d
- (void)encodeWithCoder:(id)coder;	// 0x34e0dd8d
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x34e0de81
- (unsigned)hash;	// 0x34e0de71
- (BOOL)isEqual:(id)equal;	// 0x34d66859
- (id)predicateFormat;	// 0x34e0de75
- (oneway void)release;	// 0x34e0dd85
- (id)retain;	// 0x34e0dd79
- (unsigned)retainCount;	// 0x34e0dd7d
@end
