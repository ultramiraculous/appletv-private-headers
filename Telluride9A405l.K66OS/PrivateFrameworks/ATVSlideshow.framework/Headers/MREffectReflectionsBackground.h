/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MREffectReflectionsBackground : MREffect {
	MRImageProvider *mGradientProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x33548329
- (void)_cleanup;	// 0x33548431
- (void)_unload;	// 0x335488e1
- (BOOL)isLoadedForTime:(double)time;	// 0x335484c9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x335484ed
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33548765
- (void)setAttributes:(id)attributes;	// 0x33548559
- (void)setPixelSize:(CGSize)size;	// 0x33548471
@end

