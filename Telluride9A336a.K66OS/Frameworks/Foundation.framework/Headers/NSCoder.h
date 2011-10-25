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
@property(assign) NSZone *objectZone;	// G=0x336ab5cd; S=0x336ab5c9; converted property
- (BOOL)allowsKeyedCoding;	// 0x3366c399
- (BOOL)containsValueForKey:(id)key;	// 0x336ab485
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x336ab221
- (BOOL)decodeBoolForKey:(id)key;	// 0x336ab4a9
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x336ab5a5
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x336ab289
- (id)decodeDataObject;	// 0x336aafed
- (double)decodeDoubleForKey:(id)key;	// 0x336ab571
- (float)decodeFloatForKey:(id)key;	// 0x336ab54d
- (int)decodeInt32ForKey:(id)key;	// 0x336ab4f1
- (long long)decodeInt64ForKey:(id)key;	// 0x336ab515
- (int)decodeIntForKey:(id)key;	// 0x336ab4cd
- (int)decodeIntegerForKey:(id)key;	// 0x3367d6c1
- (long)decodeLongForKey:(id)key;	// 0x336ab53d
- (id)decodeObject;	// 0x336ab1a1
- (id)decodeObjectForKey:(id)key;	// 0x336ab331
- (CGPoint)decodePoint;	// 0x336badf9
- (CGPoint)decodePointForKey:(id)key;	// 0x336d11fd
- (CGRect)decodeRect;	// 0x336baf05
- (CGRect)decodeRectForKey:(id)key;	// 0x336d127d
- (CGSize)decodeSize;	// 0x336bae71
- (CGSize)decodeSizeForKey:(id)key;	// 0x336d123d
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x336aafc9
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x336ab1d9
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x336ab0e9
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x336ab379
- (void)encodeBycopyObject:(id)object;	// 0x336ab061
- (void)encodeByrefObject:(id)object;	// 0x336ab071
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x336ab151
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x336ab461
- (void)encodeConditionalObject:(id)object;	// 0x336ab091
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x336ab355
- (void)encodeDataObject:(id)object;	// 0x336aafa5
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x336ab43d
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x336ab419
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x336ab3c1
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x336ab3e5
- (void)encodeInt:(int)int forKey:(id)key;	// 0x336ab39d
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x3367cf71
- (void)encodeLong:(long)aLong forKey:(id)key;	// 0x336ab409
- (void)encodeObject:(id)object;	// 0x336ab035
- (void)encodeObject:(id)object forKey:(id)key;	// 0x336ab30d
- (void)encodePoint:(CGPoint)point;	// 0x336badc9
- (void)encodePoint:(CGPoint)point forKey:(id)key;	// 0x336d1179
- (void)encodeRect:(CGRect)rect;	// 0x336baeb9
- (void)encodeRect:(CGRect)rect forKey:(id)key;	// 0x336d11c9
- (void)encodeRootObject:(id)object;	// 0x336ab081
- (void)encodeSize:(CGSize)size;	// 0x336bae41
- (void)encodeSize:(CGSize)size forKey:(id)key;	// 0x336d11a1
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x336aaf81
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x336ab0a1
// converted property getter: - (NSZone *)objectZone;	// 0x336ab5cd
// converted property setter: - (void)setObjectZone:(NSZone *)zone;	// 0x336ab5c9
- (unsigned)systemVersion;	// 0x336ab5d1
- (int)versionForClassName:(id)className;	// 0x336ab011
@end

