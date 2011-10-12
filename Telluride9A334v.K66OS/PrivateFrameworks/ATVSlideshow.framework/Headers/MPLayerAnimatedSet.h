/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPLayer.h"

@class NSArray, MCContainerParallelizer;

@interface MPLayerAnimatedSet : MPLayer {
	NSArray *_animatedSets;	// 48 = 0x30
	MCContainerParallelizer *_layerParallelizer;	// 52 = 0x34
}
@property(retain) NSArray *animatedSets;	// G=0x32eb1211; S=0x32eb1221; converted property
- (id)init;	// 0x32eb0ee9
- (id)initWithCoder:(id)coder;	// 0x32eb0fad
// converted property getter: - (id)animatedSets;	// 0x32eb1211
- (void)cleanup;	// 0x32eb1c35
- (id)container;	// 0x32eb1c25
- (void)dealloc;	// 0x32eb1189
- (id)description;	// 0x32eb10dd
- (void)encodeWithCoder:(id)coder;	// 0x32eb0f4d
- (void)finalize;	// 0x32eb1149
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x32eb142d
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x32eb1a09
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x32eb17ad
- (void)resetStartTimes;	// 0x32eb1cfd
// converted property setter: - (void)setAnimatedSets:(id)sets;	// 0x32eb1221
- (void)setAudioPlaylist:(id)playlist;	// 0x32eb1abd
- (void)setLayerParallelizer:(id)parallelizer;	// 0x32eb1ebd
@end

