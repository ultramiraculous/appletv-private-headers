/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPLayer.h"

@class MCContainerParallelizer, NSArray;

@interface MPLayerAnimatedSet : MPLayer {
	NSArray *_animatedSets;	// 48 = 0x30
	MCContainerParallelizer *_layerParallelizer;	// 52 = 0x34
}
@property(retain) NSArray *animatedSets;	// G=0x32084281; S=0x32084291; converted property
- (id)init;	// 0x32083f59
- (id)initWithCoder:(id)coder;	// 0x3208401d
// converted property getter: - (id)animatedSets;	// 0x32084281
- (void)cleanup;	// 0x32084ca5
- (id)container;	// 0x32084c95
- (void)dealloc;	// 0x320841f9
- (id)description;	// 0x3208414d
- (void)encodeWithCoder:(id)coder;	// 0x32083fbd
- (void)finalize;	// 0x320841b9
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x3208449d
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x32084a79
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x3208481d
- (void)resetStartTimes;	// 0x32084d6d
// converted property setter: - (void)setAnimatedSets:(id)sets;	// 0x32084291
- (void)setAudioPlaylist:(id)playlist;	// 0x32084b2d
- (void)setLayerParallelizer:(id)parallelizer;	// 0x32084f2d
@end
