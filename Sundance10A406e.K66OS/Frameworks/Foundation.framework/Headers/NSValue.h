/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSValue : NSObject <NSCopying, NSSecureCoding> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x355330f5
+ (void)initialize;	// 0x35516e99
+ (BOOL)supportsSecureCoding;	// 0x355af209
+ (id)value:(const void *)value withObjCType:(const char *)objCType;	// 0x355aea2d
+ (id)valueWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x3550220d
+ (id)valueWithNonretainedObject:(id)nonretainedObject;	// 0x35504a2d
+ (id)valueWithPoint:(CGPoint)point;	// 0x355021d5
+ (id)valueWithPointer:(const void *)pointer;	// 0x35536b29
+ (id)valueWithRange:(NSRange)range;	// 0x355103e5
+ (id)valueWithRect:(CGRect)rect;	// 0x3551a56d
+ (id)valueWithSize:(CGSize)size;	// 0x3551a5ad
- (id)init;	// 0x355027f5
- (id)initWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x355af249
- (id)initWithCoder:(id)coder;	// 0x355af20d
- (Class)classForCoder;	// 0x3551041d
- (id)copyWithZone:(NSZone *)zone;	// 0x355aea71
- (id)description;	// 0x355aee99
- (void)encodeWithCoder:(id)coder;	// 0x355aeffd
- (void)getValue:(void *)value;	// 0x355aea41
- (unsigned)hash;	// 0x355aed21
- (BOOL)isEqual:(id)equal;	// 0x355075d1
- (BOOL)isEqualToValue:(id)value;	// 0x355aeb99
- (BOOL)isNSValue__;	// 0x3559fec1
- (id)nonretainedObjectValue;	// 0x3553e161
- (const char *)objCType;	// 0x355aea55
- (CGPoint)pointValue;	// 0x35502eb5
- (void *)pointerValue;	// 0x35536b5d
- (NSRange)rangeValue;	// 0x35510839
- (CGRect)rectValue;	// 0x3552129d
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x356576d5
- (CGSize)sizeValue;	// 0x355aefe1
@end

