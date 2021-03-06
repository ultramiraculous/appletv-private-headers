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
@property(retain) id allowedClasses;	// G=0x3469d485; S=0x3469d235; converted property
@property(assign) NSZone *objectZone;	// G=0x3469d23d; S=0x3469d239; converted property
- (void)_validateAllowedClass:(Class)aClass forKey:(id)key allowingInvocations:(BOOL)invocations;	// 0x3469d4ad
// converted property getter: - (id)allowedClasses;	// 0x3469d485
- (BOOL)allowsKeyedCoding;	// 0x3465b5c5
- (BOOL)containsValueForKey:(id)key;	// 0x3469d0e9
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x3469ce5d
- (BOOL)decodeBoolForKey:(id)key;	// 0x3469d10d
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x3469d211
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x3469cee9
- (id)decodeDataObject;	// 0x3469cc05
- (double)decodeDoubleForKey:(id)key;	// 0x3469d1d9
- (float)decodeFloatForKey:(id)key;	// 0x3469d1b1
- (int)decodeInt32ForKey:(id)key;	// 0x3469d155
- (long long)decodeInt64ForKey:(id)key;	// 0x3469d179
- (int)decodeIntForKey:(id)key;	// 0x3469d131
- (int)decodeIntegerForKey:(id)key;	// 0x3466c9e1
- (long)decodeLongForKey:(id)key;	// 0x3469d1a1
- (id)decodeObject;	// 0x3469cddd
- (id)decodeObjectForKey:(id)key;	// 0x3469cf95
- (id)decodeObjectOfClass:(Class)aClass forKey:(id)key;	// 0x3469d24d
- (id)decodeObjectOfClasses:(id)classes forKey:(id)key;	// 0x3469d28d
- (CGPoint)decodePoint;	// 0x346ae7f5
- (CGPoint)decodePointForKey:(id)key;	// 0x346c52f1
- (id)decodePropertyListForKey:(id)key;	// 0x3469d34d
- (CGRect)decodeRect;	// 0x346ae8d9
- (CGRect)decodeRectForKey:(id)key;	// 0x346c5371
- (CGSize)decodeSize;	// 0x346ae859
- (CGSize)decodeSizeForKey:(id)key;	// 0x346c5331
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x3469cbe1
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x3469ce15
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x3469cd01
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x3469cfdd
- (void)encodeBycopyObject:(id)object;	// 0x3469cc79
- (void)encodeByrefObject:(id)object;	// 0x3469cc89
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x3469cd8d
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x3469d0c5
- (void)encodeConditionalObject:(id)object;	// 0x3469cca9
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x3469cfb9
- (void)encodeDataObject:(id)object;	// 0x3469cbbd
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x3469d0a1
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x3469d07d
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x3469d025
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x3469d049
- (void)encodeInt:(int)int forKey:(id)key;	// 0x3469d001
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x3466c2ed
- (void)encodeLong:(long)aLong forKey:(id)key;	// 0x3469d06d
- (void)encodeObject:(id)object;	// 0x3469cc4d
- (void)encodeObject:(id)object forKey:(id)key;	// 0x3469cf71
- (void)encodePoint:(CGPoint)point;	// 0x346ae7c5
- (void)encodePoint:(CGPoint)point forKey:(id)key;	// 0x346c526d
- (void)encodeRect:(CGRect)rect;	// 0x346ae88d
- (void)encodeRect:(CGRect)rect forKey:(id)key;	// 0x346c52bd
- (void)encodeRootObject:(id)object;	// 0x3469cc99
- (void)encodeSize:(CGSize)size;	// 0x346ae829
- (void)encodeSize:(CGSize)size forKey:(id)key;	// 0x346c5295
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x3469cb99
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x3469ccb9
// converted property getter: - (NSZone *)objectZone;	// 0x3469d23d
- (BOOL)requiresSecureCoding;	// 0x3469d249
// converted property setter: - (void)setAllowedClasses:(id)classes;	// 0x3469d235
// converted property setter: - (void)setObjectZone:(NSZone *)zone;	// 0x3469d239
- (unsigned)systemVersion;	// 0x3469d241
- (void)validateAllowedClass:(Class)aClass forKey:(id)key;	// 0x3469d489
- (int)versionForClassName:(id)className;	// 0x3469cc29
@end

