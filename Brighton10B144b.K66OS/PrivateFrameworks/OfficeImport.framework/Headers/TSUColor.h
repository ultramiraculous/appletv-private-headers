/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


@interface TSUColor : NSObject <NSCopying> {
	CGColorRef mCGColor;	// 4 = 0x4
}
@property(readonly, assign) CGColorRef CGColor;	// G=0x348785c5; @synthesize=mCGColor
+ (id)blackColor;	// 0x3487e7e9
+ (id)blueColor;	// 0x34ad1be5
+ (id)brownColor;	// 0x34ad1db5
+ (id)clearColor;	// 0x348d6ad5
+ (id)colorWithBGR:(unsigned long)bgr;	// 0x349f85a1
+ (id)colorWithBGRValue:(long)bgrvalue;	// 0x34892a91
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue;	// 0x349f84ad
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue alpha:(int)alpha;	// 0x349f84d1
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x34886709
+ (id)colorWithCalibratedHue:(float)calibratedHue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x349fcb55
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34878009
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x34924fe9
+ (id)colorWithDeviceRed:(float)deviceRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34950aa9
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x34a55145
+ (id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x34ad19fd
+ (id)colorWithPatternImage:(id)patternImage;	// 0x349a5f91
+ (id)colorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3;	// 0x348ca5b1
+ (id)colorWithRGBValue:(long)rgbvalue;	// 0x349a47d1
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34878025
+ (id)colorWithSystemColorID:(int)systemColorID;	// 0x3489b0d1
+ (id)colorWithUIColor:(id)uicolor;	// 0x34ad1a55
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x34ad19bd
+ (id)cyanColor;	// 0x34ad1c2d
+ (id)grayColor;	// 0x34ad1ac9
+ (id)greenColor;	// 0x34ad1b99
+ (id)lightGrayColor;	// 0x34ad1b09
+ (id)magentaColor;	// 0x34ad1cc9
+ (id)orangeColor;	// 0x34ad1d15
+ (id)purpleColor;	// 0x34ad1d65
+ (id)randomColor;	// 0x34ad1a91
+ (id)redColor;	// 0x34ad1b4d
+ (id)stringForColor:(id)color;	// 0x349f8849
+ (id)stringForSystemColorID:(int)systemColorID;	// 0x349f8621
+ (id)whiteColor;	// 0x348c6eb9
+ (id)yellowColor;	// 0x34ad1c79
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x34878109
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x34ad1e15
- (id)initWithPatternImage:(id)patternImage;	// 0x349a5fd9
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34878081
- (id)initWithUIColor:(id)uicolor;	// 0x34ad1e4d
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x3487e82d
// declared property getter: - (CGColorRef)CGColor;	// 0x348785c5
- (id)UIColor;	// 0x34ad1ead
- (float)alphaComponent;	// 0x34878601
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x349427d1
- (float)blueComponent;	// 0x348785ed
- (CGColorRef)cgColorRef;	// 0x3497d6dd
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x348866c1
- (id)colorWithShadeValue:(double)shadeValue;	// 0x34942749
- (id)colorWithTintValue:(double)tintValue;	// 0x34993a2d
- (id)copy;	// 0x348ca3e1
- (id)copyWithZone:(NSZone *)zone;	// 0x34ad1e7d
- (CsColour)csColour;	// 0x34a550fd
- (void)dealloc;	// 0x3487d04d
- (EshColor)eshColor;	// 0x34a551d9
- (void)getRGBBytes:(char *)bytes :(char *)arg2 :(char *)arg3;	// 0x349542f9
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x34af26a1
- (id)grayscaleColor;	// 0x34ad1ee9
- (float)greenComponent;	// 0x348785d9
- (unsigned)hash;	// 0x349beffd
- (id)invertedColor;	// 0x34ad1fa1
- (BOOL)isBlack;	// 0x3487f079
- (BOOL)isEqual:(id)equal;	// 0x348c6041
- (BOOL)isEqualToColor:(id)color;	// 0x348c6025
- (BOOL)isOpaque;	// 0x34ad20a1
- (float)luminance;	// 0x34ad2015
- (id)newSolidColoredBitmap:(CGSize)bitmap;	// 0x349f84a5
- (float)p_rgbComponentWithIndex:(unsigned char)index;	// 0x34878521
- (void)paintPath:(CGPathRef)path inContext:(CGContextRef)context;	// 0x34ad2121
- (void)paintRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x34ad20d5
- (float)redComponent;	// 0x3487850d
- (void)set;	// 0x349523b5
- (id)solidColoredPngImage;	// 0x349f84a9
- (unsigned long)toBGR;	// 0x349f8559
- (tagRgbQuad)ttColor;	// 0x348854d9
@end

