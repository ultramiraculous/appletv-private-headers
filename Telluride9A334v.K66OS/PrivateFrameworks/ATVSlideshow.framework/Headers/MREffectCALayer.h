/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class CARenderer, CALayer, MRImage;

@interface MREffectCALayer : MREffect {
	CALayer *mCALayer;	// 112 = 0x70
	CARenderer *mCARenderer;	// 116 = 0x74
	MRImage *mRenderImage;	// 120 = 0x78
}
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32ff6189
- (void)_unload;	// 0x32ff618d
- (BOOL)isLoadedForTime:(double)time;	// 0x32ff5cf5
- (BOOL)isNative3D;	// 0x32ff5d0d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32ff5d11
- (void)setPixelSize:(CGSize)size;	// 0x32ff5c39
@end
