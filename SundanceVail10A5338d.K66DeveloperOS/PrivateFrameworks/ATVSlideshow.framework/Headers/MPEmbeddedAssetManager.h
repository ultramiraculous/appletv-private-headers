/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAssetManager.h"


@interface MPEmbeddedAssetManager : MPAssetManager {
}
- (id)absolutePathFromPath:(id)path;	// 0x334dcfc9
- (double)durationForAssetAtPath:(id)path;	// 0x334dcea9
- (BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;	// 0x334dce09
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x334dccd1
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x334dcd6d
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x334dcb59
- (double)stopTimeForAssetAtPath:(id)path;	// 0x334dcfb9
@end
