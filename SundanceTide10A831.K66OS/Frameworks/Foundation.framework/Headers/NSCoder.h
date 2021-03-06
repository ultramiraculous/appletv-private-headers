/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSCoder : NSObject {
}
@property(retain) id allowedClasses;	// G=0x325663d5; S=0x32566285; converted property
@property(assign) NSZone *objectZone;	// G=0x3256628d; S=0x32566289; converted property
- (void)_validateAllowedClass:(Class)aClass forKey:(id)key allowingInvocations:(BOOL)invocations;	// 0x325460f5
// converted property getter: - (id)allowedClasses;	// 0x325663d5
- (BOOL)allowsKeyedCoding;	// 0x3251e205
- (BOOL)containsValueForKey:(id)key;	// 0x32566139
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x32565ead
- (BOOL)decodeBoolForKey:(id)key;	// 0x3256615d
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x32566261
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x32565f39
- (id)decodeDataObject;	// 0x32565c55
- (double)decodeDoubleForKey:(id)key;	// 0x32566229
- (float)decodeFloatForKey:(id)key;	// 0x32566201
- (int)decodeInt32ForKey:(id)key;	// 0x325661a5
- (long long)decodeInt64ForKey:(id)key;	// 0x325661c9
- (int)decodeIntForKey:(id)key;	// 0x32566181
- (int)decodeIntegerForKey:(id)key;	// 0x32533229
- (long)decodeLongForKey:(id)key;	// 0x325661f1
- (id)decodeObject;	// 0x32565e2d
- (id)decodeObjectForKey:(id)key;	// 0x32565fe5
- (id)decodeObjectOfClass:(Class)aClass forKey:(id)key;	// 0x32534b4d
- (id)decodeObjectOfClasses:(id)classes forKey:(id)key;	// 0x32534c65
- (CGPoint)decodePoint;	// 0x32578b75
- (CGPoint)decodePointForKey:(id)key;	// 0x32590ea1
- (id)decodePropertyListForKey:(id)key;	// 0x3256629d
- (CGRect)decodeRect;	// 0x32578c59
- (CGRect)decodeRectForKey:(id)key;	// 0x32590f21
- (CGSize)decodeSize;	// 0x32578bd9
- (CGSize)decodeSizeForKey:(id)key;	// 0x32590ee1
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x32565c31
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x32565e65
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x32565d51
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x3256602d
- (void)encodeBycopyObject:(id)object;	// 0x32565cc9
- (void)encodeByrefObject:(id)object;	// 0x32565cd9
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x32565ddd
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x32566115
- (void)encodeConditionalObject:(id)object;	// 0x32565cf9
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x32566009
- (void)encodeDataObject:(id)object;	// 0x32565c0d
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x325660f1
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x325660cd
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x32566075
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x32566099
- (void)encodeInt:(int)int forKey:(id)key;	// 0x32566051
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x32510a3d
- (void)encodeLong:(long)aLong forKey:(id)key;	// 0x325660bd
- (void)encodeObject:(id)object;	// 0x32565c9d
- (void)encodeObject:(id)object forKey:(id)key;	// 0x32565fc1
- (void)encodePoint:(CGPoint)point;	// 0x32578b45
- (void)encodePoint:(CGPoint)point forKey:(id)key;	// 0x32590e1d
- (void)encodeRect:(CGRect)rect;	// 0x32578c0d
- (void)encodeRect:(CGRect)rect forKey:(id)key;	// 0x32590e6d
- (void)encodeRootObject:(id)object;	// 0x32565ce9
- (void)encodeSize:(CGSize)size;	// 0x32578ba9
- (void)encodeSize:(CGSize)size forKey:(id)key;	// 0x32590e45
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x32565be9
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x32565d09
// converted property getter: - (NSZone *)objectZone;	// 0x3256628d
- (BOOL)requiresSecureCoding;	// 0x32566299
// converted property setter: - (void)setAllowedClasses:(id)classes;	// 0x32566285
// converted property setter: - (void)setObjectZone:(NSZone *)zone;	// 0x32566289
- (unsigned)systemVersion;	// 0x32566291
- (void)validateAllowedClass:(Class)aClass forKey:(id)key;	// 0x325663d9
- (int)versionForClassName:(id)className;	// 0x32565c79
@end

