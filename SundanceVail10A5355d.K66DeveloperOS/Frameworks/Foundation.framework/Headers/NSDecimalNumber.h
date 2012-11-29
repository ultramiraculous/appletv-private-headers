/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSNumber.h"


@interface NSDecimalNumber : NSNumber {
	unsigned _exponent : 8;	// 4 = 0x4
	unsigned _length : 4;	// 5 = 0x5
	unsigned _isNegative : 1;	// 5 = 0x5
	unsigned _isCompact : 1;	// 5 = 0x5
	unsigned _reserved : 1;	// 5 = 0x5
	unsigned _hasExternalRefCount : 1;	// 5 = 0x5
	unsigned _refs : 16;	// 6 = 0x6
	unsigned short _mantissa[0];	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x346edd0d
+ (id)decimalNumberWithDecimal:(XXStruct_9isexA)decimal;	// 0x346ede85
+ (id)decimalNumberWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;	// 0x346ede15
+ (id)decimalNumberWithString:(id)string;	// 0x346edf01
+ (id)decimalNumberWithString:(id)string locale:(id)locale;	// 0x346edf55
+ (id)defaultBehavior;	// 0x346eec35
+ (id)maximumDecimalNumber;	// 0x346ee18d
+ (id)minimumDecimalNumber;	// 0x346ee121
+ (id)notANumber;	// 0x346ee2a9
+ (id)numberWithBool:(BOOL)aBool;	// 0x346f02d1
+ (id)numberWithChar:(BOOL)aChar;	// 0x346efe9d
+ (id)numberWithDouble:(double)aDouble;	// 0x346f0281
+ (id)numberWithFloat:(float)aFloat;	// 0x346f0235
+ (id)numberWithInt:(int)int;	// 0x346effcd
+ (id)numberWithInteger:(int)integer;	// 0x346f0019
+ (id)numberWithLong:(long)aLong;	// 0x346f00fd
+ (id)numberWithLongLong:(long long)longLong;	// 0x346f0195
+ (id)numberWithShort:(short)aShort;	// 0x346eff35
+ (id)numberWithUnsignedChar:(unsigned char)unsignedChar;	// 0x346efee9
+ (id)numberWithUnsignedInt:(unsigned)unsignedInt;	// 0x346f0065
+ (id)numberWithUnsignedInteger:(unsigned)unsignedInteger;	// 0x346f00b1
+ (id)numberWithUnsignedLong:(unsigned long)unsignedLong;	// 0x346f0149
+ (id)numberWithUnsignedLongLong:(unsigned long long)unsignedLongLong;	// 0x346f01e5
+ (id)numberWithUnsignedShort:(unsigned short)unsignedShort;	// 0x346eff81
+ (id)one;	// 0x346ee239
+ (void)setDefaultBehavior:(id)behavior;	// 0x346eebe1
+ (id)zero;	// 0x346ee1f9
- (id)initWithCoder:(id)coder;	// 0x346ee09d
- (id)initWithDecimal:(XXStruct_9isexA)decimal;	// 0x346edfe9
- (id)initWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;	// 0x346edfad
- (id)initWithString:(id)string;	// 0x346ee025
- (id)initWithString:(id)string locale:(id)locale;	// 0x346ee061
- (bool)_getCString:(char *)string length:(int)length multiplier:(double)multiplier;	// 0x346ef059
- (BOOL)boolValue;	// 0x346ef035
- (BOOL)charValue;	// 0x346eeeb9
- (Class)classForCoder;	// 0x346eeca5
- (int)compare:(id)compare;	// 0x346ee319
- (id)copy;	// 0x346edd6d
- (id)copyWithZone:(NSZone *)zone;	// 0x346edd7d
- (id)decimalNumberByAdding:(id)adding;	// 0x346ee4e5
- (id)decimalNumberByAdding:(id)adding withBehavior:(id)behavior;	// 0x346ee535
- (id)decimalNumberByDividingBy:(id)by;	// 0x346ee899
- (id)decimalNumberByDividingBy:(id)by withBehavior:(id)behavior;	// 0x346ee8e9
- (id)decimalNumberByMultiplyingBy:(id)by;	// 0x346ee7c1
- (id)decimalNumberByMultiplyingBy:(id)by withBehavior:(id)behavior;	// 0x346ee811
- (id)decimalNumberByMultiplyingByPowerOf10:(short)a10;	// 0x346eea49
- (id)decimalNumberByMultiplyingByPowerOf10:(short)a10 withBehavior:(id)behavior;	// 0x346eea99
- (id)decimalNumberByRaisingToPower:(unsigned)power;	// 0x346ee971
- (id)decimalNumberByRaisingToPower:(unsigned)power withBehavior:(id)behavior;	// 0x346ee9c1
- (id)decimalNumberByRoundingAccordingToBehavior:(id)behavior;	// 0x346eeb21
- (id)decimalNumberBySubstracting:(id)substracting;	// 0x346ee699
- (id)decimalNumberBySubstracting:(id)substracting withBehavior:(id)behavior;	// 0x346ee6d9
- (id)decimalNumberBySubtracting:(id)subtracting;	// 0x346ee6e9
- (id)decimalNumberBySubtracting:(id)subtracting withBehavior:(id)behavior;	// 0x346ee739
- (XXStruct_9isexA)decimalValue;	// 0x346ee0f5
- (id)description;	// 0x346ee0d9
- (id)descriptionWithLocale:(id)locale;	// 0x346ee0ed
- (double)doubleValue;	// 0x346ee3f1
- (void)encodeWithCoder:(id)coder;	// 0x346eecc1
- (float)floatValue;	// 0x346ef011
- (void)getValue:(void *)value;	// 0x346ee4c9
- (int)intValue;	// 0x346eef49
- (BOOL)isEqual:(id)equal;	// 0x346ee399
- (long long)longLongValue;	// 0x346eefd9
- (long)longValue;	// 0x346eef91
- (const char *)objCType;	// 0x346ee3e1
- (short)shortValue;	// 0x346eef01
- (unsigned char)unsignedCharValue;	// 0x346eeedd
- (unsigned)unsignedIntValue;	// 0x346eef6d
- (unsigned long long)unsignedLongLongValue;	// 0x346eeff5
- (unsigned long)unsignedLongValue;	// 0x346eefb5
- (unsigned short)unsignedShortValue;	// 0x346eef25
@end
