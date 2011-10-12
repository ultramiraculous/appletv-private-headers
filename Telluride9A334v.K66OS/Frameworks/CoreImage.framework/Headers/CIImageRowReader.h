/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <NSObject.h> // Unknown library
#import "ImageRowReading.h"
#import "CoreImage-Structs.h"


__attribute__((visibility("hidden")))
@interface CIImageRowReader : NSObject <ImageRowReading> {
@private
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
@property(readonly, assign) short alpha;	// G=0x35895e15; converted property
@property(readonly, assign) short blue;	// G=0x35895e05; converted property
@property(readonly, assign) short green;	// G=0x35895df5; converted property
@property(readonly, assign) unsigned long height;	// G=0x35895dd5; converted property
@property(readonly, assign) short red;	// G=0x35895de5; converted property
@property(readonly, assign) unsigned long width;	// G=0x35895dc5; converted property
+ (id)forImage:(id)image downscaleToMax:(unsigned)max;	// 0x35895589
+ (id)forImage:(id)image downscaleToMax:(unsigned)max colorspace:(CGColorSpaceRef)colorspace;	// 0x358955c9
+ (id)forImage:(id)image downscaleToMax:(unsigned)max colorspace:(CGColorSpaceRef)colorspace usingContext:(id)context;	// 0x3589561d
+ (id)forImage:(id)image usingContext:(id)context;	// 0x35895b11
+ (id)forImage:(id)image usingContext:(id)context colorspace:(CGColorSpaceRef)colorspace;	// 0x35895b51
+ (id)fromImage:(CGImageRef)image;	// 0x358951d1
+ (id)fromImageFile:(id)imageFile;	// 0x35895125
+ (id)withDictionary:(id)dictionary;	// 0x35895925
- (id)init;	// 0x35895d01
- (void)_dumpImage:(id)image colorspace:(CGColorSpaceRef)colorspace;	// 0x35895371
// converted property getter: - (short)alpha;	// 0x35895e15
// converted property getter: - (short)blue;	// 0x35895e05
- (unsigned)bytesPerPixel;	// 0x35895e4d
- (void)dealloc;	// 0x35895d69
- (void)dumpImage:(id)image;	// 0x35895509
- (void)dumpImageAsDeviceRGB:(id)rgb;	// 0x35895559
- (void)dumpImageAsDict:(id)dict;	// 0x35895751
// converted property getter: - (short)green;	// 0x35895df5
// converted property getter: - (unsigned long)height;	// 0x35895dd5
// converted property getter: - (short)red;	// 0x35895de5
- (const char *)rowAtIndex:(unsigned)index;	// 0x35895e25
// converted property getter: - (unsigned long)width;	// 0x35895dc5
@end

