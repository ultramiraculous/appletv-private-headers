/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface TSUColor : NSObject <NSCopying> {
@private
	CGColorRef mCGColor;	// 4 = 0x4
}
@property(readonly, assign) CGColorRef CGColor;	// G=0x346429e5; @synthesize=mCGColor
+ (id)blackColor;	// 0x34642d8d
+ (id)blueColor;	// 0x34642c1d
+ (id)brownColor;	// 0x34642a81
+ (id)clearColor;	// 0x34642dc5
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x34642e79
+ (id)colorWithCalibratedHue:(float)calibratedHue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x3463f43d
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3463f409
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34642e31
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x34642df9
+ (id)cyanColor;	// 0x34642bdd
+ (id)grayColor;	// 0x34642d1d
+ (id)greenColor;	// 0x34642c61
+ (id)lightGrayColor;	// 0x34642ce1
+ (id)magentaColor;	// 0x34642b59
+ (id)orangeColor;	// 0x34642b15
+ (id)purpleColor;	// 0x34642ad1
+ (id)randomColor;	// 0x34643449
+ (id)redColor;	// 0x34642ca1
+ (id)whiteColor;	// 0x34642d55
+ (id)yellowColor;	// 0x34642b99
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x346429f5
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34642ead
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x34642f05
// declared property getter: - (CGColorRef)CGColor;	// 0x346429e5
- (float)alphaComponent;	// 0x3464336d
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x34643049
- (float)blueComponent;	// 0x34642a39
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x34643385
- (id)copy;	// 0x3463f3c1
- (id)copyWithZone:(NSZone *)zone;	// 0x34643021
- (void)dealloc;	// 0x34642f55
- (id)grayscaleColor;	// 0x346431ed
- (float)greenComponent;	// 0x34642a51
- (unsigned)hash;	// 0x34642f91
- (id)invertedColor;	// 0x34643189
- (BOOL)isEqual:(id)equal;	// 0x34642fa9
- (BOOL)isOpaque;	// 0x3464333d
- (float)luminance;	// 0x3464310d
- (float)p_rgbComponentWithIndex:(unsigned char)index;	// 0x34643295
- (void)paintPath:(CGPathRef)path inContext:(CGContextRef)context;	// 0x34643411
- (void)paintRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x346433c5
- (float)redComponent;	// 0x34642a69
- (void)set;	// 0x3463f3bd
@end
