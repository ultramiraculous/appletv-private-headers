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
+ (id)black;	// 0x327df55d
+ (id)rgbColorWithNSColor:(id)nscolor;	// 0x329d371d
+ (id)rgbColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x329d38a1
+ (id)rgbColorWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x329d3845
+ (id)rgbColorWithWhite:(float)white;	// 0x329d37fd
+ (id)rgbColorWithWhiteByte:(float)whiteByte;	// 0x329d37b5
+ (id)white;	// 0x32800bd5
- (id)initWithRed:(float)red green:(float)green blue:(float)blue;	// 0x327df5ad
- (id)initWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x327f3f35
- (id)initWithWhite:(float)white;	// 0x329d3a89
- (id)initWithWhiteByte:(float)whiteByte;	// 0x329d3a11
- (float)blue;	// 0x3273aed1
- (unsigned char)blueByte;	// 0x327baeed
- (id)copyWithZone:(NSZone *)zone;	// 0x328f9471
- (float)green;	// 0x3273aee1
- (unsigned char)greenByte;	// 0x327bae7d
- (unsigned)hash;	// 0x327bad9d
- (BOOL)isEqual:(id)equal;	// 0x327bacf9
- (float)red;	// 0x3273aef1
- (unsigned char)redByte;	// 0x327bae0d
- (id)rgbColorWithFraction:(float)fraction ofRgbColor:(id)rgbColor;	// 0x329d38fd
@end

