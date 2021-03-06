/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableArray, MRImageProvider;

@interface MREffectMapZoom : MREffect {
	NSMutableArray *mTileProviders;	// 112 = 0x70
	MRImageProvider *mGradientProvider;	// 116 = 0x74
}
- (id)initWithEffectID:(id)effectID;	// 0x354f2181
- (void)_cleanup;	// 0x354f2285
- (void)_unload;	// 0x354f333d
- (BOOL)isLoadedForTime:(double)time;	// 0x354f23d5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354f24ad
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354f2c89
- (void)setPixelSize:(CGSize)size;	// 0x354f237d
@end

