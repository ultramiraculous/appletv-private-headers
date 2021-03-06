/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSScanner : NSObject <NSCopying> {
}
@property(assign) BOOL caseSensitive;	// G=0x319f0855; S=0x319f08ed; converted property
@property(retain) id charactersToBeSkipped;	// G=0x319f080d; S=0x319f08c9; converted property
@property(retain) id locale;	// G=0x319f0859; S=0x319f0911; converted property
@property(assign) unsigned scanLocation;	// G=0x319f08a5; S=0x319f0881; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3195fd2d
+ (id)localizedScannerWithString:(id)string;	// 0x319efaa9
+ (id)scannerWithString:(id)string;	// 0x3195fce1
- (id)initWithString:(id)string;	// 0x3195fe55
- (id)_invertedSkipSet;	// 0x319efc11
- (id)_remainingString;	// 0x319abb11
- (BOOL)_scanDecimal:(unsigned)decimal into:(int *)into;	// 0x319605bd
// converted property getter: - (BOOL)caseSensitive;	// 0x319f0855
// converted property getter: - (id)charactersToBeSkipped;	// 0x319f080d
- (id)copyWithZone:(NSZone *)zone;	// 0x319efb25
- (BOOL)isAtEnd;	// 0x3195fe89
// converted property getter: - (id)locale;	// 0x319f0859
- (BOOL)scanCharactersFromSet:(id)set intoString:(id *)string;	// 0x3196045d
- (BOOL)scanDecimal:(XXStruct_9isexA *)decimal;	// 0x31a077b9
- (BOOL)scanDouble:(double *)aDouble;	// 0x31998695
- (BOOL)scanFloat:(float *)aFloat;	// 0x319effa9
- (BOOL)scanHexDouble:(double *)aDouble;	// 0x319f0059
- (BOOL)scanHexFloat:(float *)aFloat;	// 0x319f00ed
- (BOOL)scanHexInt:(unsigned *)int;	// 0x319f0679
- (BOOL)scanHexLongLong:(unsigned long long *)aLong;	// 0x319f0285
- (BOOL)scanInt:(int *)int;	// 0x319f0211
- (BOOL)scanInteger:(int *)integer;	// 0x3199867d
// converted property getter: - (unsigned)scanLocation;	// 0x319f08a5
- (BOOL)scanLongLong:(long long *)aLong;	// 0x319f019d
- (BOOL)scanString:(id)string intoString:(id *)string2;	// 0x31960309
- (BOOL)scanUpToCharactersFromSet:(id)set intoString:(id *)string;	// 0x31996d2d
- (BOOL)scanUpToString:(id)string intoString:(id *)string2;	// 0x319f06d9
// converted property setter: - (void)setCaseSensitive:(BOOL)sensitive;	// 0x319f08ed
// converted property setter: - (void)setCharactersToBeSkipped:(id)beSkipped;	// 0x319f08c9
// converted property setter: - (void)setLocale:(id)locale;	// 0x319f0911
// converted property setter: - (void)setScanLocation:(unsigned)location;	// 0x319f0881
- (id)string;	// 0x319f085d
@end

