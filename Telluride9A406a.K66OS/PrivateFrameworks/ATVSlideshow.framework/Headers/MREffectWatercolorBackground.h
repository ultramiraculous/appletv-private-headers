/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MREffectWatercolorBackground : MREffect {
	MRImageProvider *mPlasmaProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x349f1835
- (void)_cleanup;	// 0x349f193d
- (void)_unload;	// 0x349f225d
- (BOOL)isLoadedForTime:(double)time;	// 0x349f19d5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349f19f9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349f1c81
- (void)setAttributes:(id)attributes;	// 0x349f1a65
- (void)setPixelSize:(CGSize)size;	// 0x349f197d
@end

