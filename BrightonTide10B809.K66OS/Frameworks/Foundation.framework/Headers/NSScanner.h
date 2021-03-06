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
@property(assign) BOOL caseSensitive;	// G=0x3195105d; S=0x319510f5; converted property
@property(retain) id charactersToBeSkipped;	// G=0x31951015; S=0x319510d1; converted property
@property(retain) id locale;	// G=0x31951061; S=0x31951119; converted property
@property(assign) unsigned scanLocation;	// G=0x319510ad; S=0x31951089; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x318c0535
+ (id)localizedScannerWithString:(id)string;	// 0x319502b1
+ (id)scannerWithString:(id)string;	// 0x318c04e9
- (id)initWithString:(id)string;	// 0x318c065d
- (id)_invertedSkipSet;	// 0x31950419
- (id)_remainingString;	// 0x3190c319
- (BOOL)_scanDecimal:(unsigned)decimal into:(int *)into;	// 0x318c0dc5
// converted property getter: - (BOOL)caseSensitive;	// 0x3195105d
// converted property getter: - (id)charactersToBeSkipped;	// 0x31951015
- (id)copyWithZone:(NSZone *)zone;	// 0x3195032d
- (BOOL)isAtEnd;	// 0x318c0691
// converted property getter: - (id)locale;	// 0x31951061
- (BOOL)scanCharactersFromSet:(id)set intoString:(id *)string;	// 0x318c0c65
- (BOOL)scanDecimal:(XXStruct_9isexA *)decimal;	// 0x31967fc1
- (BOOL)scanDouble:(double *)aDouble;	// 0x318f8e9d
- (BOOL)scanFloat:(float *)aFloat;	// 0x319507b1
- (BOOL)scanHexDouble:(double *)aDouble;	// 0x31950861
- (BOOL)scanHexFloat:(float *)aFloat;	// 0x319508f5
- (BOOL)scanHexInt:(unsigned *)int;	// 0x31950e81
- (BOOL)scanHexLongLong:(unsigned long long *)aLong;	// 0x31950a8d
- (BOOL)scanInt:(int *)int;	// 0x31950a19
- (BOOL)scanInteger:(int *)integer;	// 0x318f8e85
// converted property getter: - (unsigned)scanLocation;	// 0x319510ad
- (BOOL)scanLongLong:(long long *)aLong;	// 0x319509a5
- (BOOL)scanString:(id)string intoString:(id *)string2;	// 0x318c0b11
- (BOOL)scanUpToCharactersFromSet:(id)set intoString:(id *)string;	// 0x318f7535
- (BOOL)scanUpToString:(id)string intoString:(id *)string2;	// 0x31950ee1
// converted property setter: - (void)setCaseSensitive:(BOOL)sensitive;	// 0x319510f5
// converted property setter: - (void)setCharactersToBeSkipped:(id)beSkipped;	// 0x319510d1
// converted property setter: - (void)setLocale:(id)locale;	// 0x31951119
// converted property setter: - (void)setScanLocation:(unsigned)location;	// 0x31951089
- (id)string;	// 0x31951065
@end

