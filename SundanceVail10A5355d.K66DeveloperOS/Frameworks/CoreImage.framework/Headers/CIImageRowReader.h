/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "ImageRowReading.h"
#import <NSObject.h> // Unknown library
#import "CoreImage-Structs.h"


__attribute__((visibility("hidden")))
@interface CIImageRowReader : NSObject <ImageRowReading> {
	unsigned long height;	// 4 = 0x4
	unsigned long width;	// 8 = 0x8
	unsigned long bpr;	// 12 = 0xc
	void *data;	// 16 = 0x10
	short red;	// 20 = 0x14
	short green;	// 22 = 0x16
	short blue;	// 24 = 0x18
	short alpha;	// 26 = 0x1a
	CGColorSpaceRef cs;	// 28 = 0x1c
}
@property(readonly, assign) short alpha;	// G=0x36970f81; converted property
@property(readonly, assign) short blue;	// G=0x36970f71; converted property
@property(readonly, assign) short green;	// G=0x36970f61; converted property
@property(readonly, assign) unsigned long height;	// G=0x36970f41; converted property
@property(readonly, assign) short red;	// G=0x36970f51; converted property
@property(readonly, assign) unsigned long width;	// G=0x36970f31; converted property
+ (id)forImage:(id)image downscaleToMax:(unsigned)max;	// 0x369706d9
+ (id)forImage:(id)image downscaleToMax:(unsigned)max colorspace:(CGColorSpaceRef)colorspace;	// 0x36970719
+ (id)forImage:(id)image downscaleToMax:(unsigned)max colorspace:(CGColorSpaceRef)colorspace usingContext:(id)context;	// 0x3697076d
+ (id)forImage:(id)image usingContext:(id)context;	// 0x36970c69
+ (id)forImage:(id)image usingContext:(id)context colorspace:(CGColorSpaceRef)colorspace;	// 0x36970ca9
+ (id)fromImage:(CGImageRef)image;	// 0x36970321
+ (id)fromImageFile:(id)imageFile;	// 0x36970275
+ (id)withDictionary:(id)dictionary;	// 0x36970a7d
- (id)init;	// 0x36970e6d
- (void)_dumpImage:(id)image colorspace:(CGColorSpaceRef)colorspace;	// 0x369704b9
// converted property getter: - (short)alpha;	// 0x36970f81
// converted property getter: - (short)blue;	// 0x36970f71
- (unsigned)bytesPerPixel;	// 0x36970fb9
- (void)dealloc;	// 0x36970ed5
- (void)dumpImage:(id)image;	// 0x36970655
- (void)dumpImageAsDeviceRGB:(id)rgb;	// 0x369706a9
- (void)dumpImageAsDict:(id)dict;	// 0x369708a1
// converted property getter: - (short)green;	// 0x36970f61
// converted property getter: - (unsigned long)height;	// 0x36970f41
// converted property getter: - (short)red;	// 0x36970f51
- (const char *)rowAtIndex:(unsigned)index;	// 0x36970f91
// converted property getter: - (unsigned long)width;	// 0x36970f31
@end
