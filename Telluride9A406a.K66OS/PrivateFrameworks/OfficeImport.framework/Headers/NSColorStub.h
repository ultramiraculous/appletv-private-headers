/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface NSColorStub : NSObject {
@private
	CGColorRef cgColor;	// 4 = 0x4
}
+ (id)blackColor;	// 0x328e4ce9
+ (id)clearColor;	// 0x32939fbd
+ (id)colorWithBGR:(unsigned long)bgr;	// 0x32ae85a5
+ (id)colorWithBGRValue:(long)bgrvalue;	// 0x328f5bf9
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue;	// 0x32ae84a9
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue alpha:(int)alpha;	// 0x32ae8521
+ (id)colorWithCalibratedHue:(float)calibratedHue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x32aec5e5
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x32823f3d
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x32aca4f1
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x32958049
+ (id)colorWithDeviceRed:(float)deviceRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x329580c1
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x32a898e5
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x32aca569
+ (id)colorWithPatternImage:(CGImageRef)patternImage;	// 0x329dd83d
+ (id)colorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3;	// 0x328b4061
+ (id)colorWithRGBValue:(long)rgbvalue;	// 0x329f5b15
+ (id)colorWithSystemColorID:(int)systemColorID;	// 0x328fe5b9
+ (id)stringForColor:(id)color;	// 0x32ae8629
+ (id)stringForSystemColorID:(int)systemColorID;	// 0x32ae8281
+ (id)whiteColor;	// 0x32923ffd
- (id)init;	// 0x32aec5a5
- (id)initWithGCColor:(CGColorRef)gccolor;	// 0x328b3ce5
- (float)alphaComponent;	// 0x328e5641
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x329d902d
- (float)blueComponent;	// 0x328e5619
- (CGColorRef)cgColorRef;	// 0x328b6c5d
- (id)colorSpaceName;	// 0x32aec595
- (id)colorUsingColorSpaceName:(id)name;	// 0x328eb9c1
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x328ecf95
- (id)colorWithShadeValue:(double)shadeValue;	// 0x329d8f9d
- (id)colorWithTintValue:(double)tintValue;	// 0x329ee545
- (id)copyWithZone:(NSZone *)zone;	// 0x328b3c99
- (CsColour)csColour;	// 0x32aca46d
- (CsColour)csColour;	// 0x32a89861
- (void)dealloc;	// 0x328aeef5
- (id)description;	// 0x32aec601
- (EshColor)eshColor;	// 0x32aca4a5
- (EshColor)eshColor;	// 0x32a89899
- (void)getRGBBytes:(char *)bytes :(char *)arg2 :(char *)arg3;	// 0x329dd7a5
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x32824679
- (float)greenComponent;	// 0x328e55f1
- (BOOL)isBlack;	// 0x328e5535
- (BOOL)isEqualToColor:(id)color;	// 0x3291be29
- (float)redComponent;	// 0x328e55c9
- (id)rgbColor;	// 0x328eb9bd
- (void)set;	// 0x328b8059
- (id)solidColoredBitmap:(CGSize)bitmap;	// 0x32ae8279
- (id)solidColoredPngImage;	// 0x32ae827d
- (unsigned long)toBGR;	// 0x32ae86ed
- (tagRgbQuad)ttColor;	// 0x328eb8f5
@end

