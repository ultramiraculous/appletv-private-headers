/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAssetManager.h"
#import "ATVSlideshow-Structs.h"


@interface MPEmbeddedAssetManager : MPAssetManager {
}
+ (char *)convertCGImageToBuffer:(CGImageRef)buffer;	// 0x343cd275
+ (char *)convertCGImageToBufferUsingDataProvider:(CGImageRef)bufferUsingDataProvider;	// 0x343cd4e9
+ (char *)convertCGImageToBufferUsingRGBDevice:(CGImageRef)bufferUsingRGBDevice;	// 0x343cd3f1
+ (FaceCoreAPI *)createFaceAPI;	// 0x343cd0b5
- (id)absolutePathFromPath:(id)path;	// 0x343cd0b1
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x343cc8a5
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x343cc81d
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x343cca01
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x343cc909
@end

