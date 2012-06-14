/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADRgbColor : OADColor {
@private
	float mRed;	// 8 = 0x8
	float mGreen;	// 12 = 0xc
	float mBlue;	// 16 = 0x10
}
+ (id)black;	// 0x3118f55d
+ (id)rgbColorWithNSColor:(id)nscolor;	// 0x3138371d
+ (id)rgbColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x313838a1
+ (id)rgbColorWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x31383845
+ (id)rgbColorWithWhite:(float)white;	// 0x313837fd
+ (id)rgbColorWithWhiteByte:(float)whiteByte;	// 0x313837b5
+ (id)white;	// 0x311b0bd5
- (id)initWithRed:(float)red green:(float)green blue:(float)blue;	// 0x3118f5ad
- (id)initWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x311a3f35
- (id)initWithWhite:(float)white;	// 0x31383a89
- (id)initWithWhiteByte:(float)whiteByte;	// 0x31383a11
- (float)blue;	// 0x310eaed1
- (unsigned char)blueByte;	// 0x3116aeed
- (id)copyWithZone:(NSZone *)zone;	// 0x312a9471
- (float)green;	// 0x310eaee1
- (unsigned char)greenByte;	// 0x3116ae7d
- (unsigned)hash;	// 0x3116ad9d
- (BOOL)isEqual:(id)equal;	// 0x3116acf9
- (float)red;	// 0x310eaef1
- (unsigned char)redByte;	// 0x3116ae0d
- (id)rgbColorWithFraction:(float)fraction ofRgbColor:(id)rgbColor;	// 0x313838fd
@end
