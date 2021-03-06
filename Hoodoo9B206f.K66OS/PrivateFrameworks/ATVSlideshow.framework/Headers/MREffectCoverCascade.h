/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MZEffectTiming.h"
#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableArray, MREffectCoverCascadeSlideStory;

@interface MREffectCoverCascade : MREffect <MZEffectTiming> {
	NSMutableArray *_slideStories;	// 112 = 0x70
	MREffectCoverCascadeSlideStory *_grid[7][4];	// 116 = 0x74
	NSRange _previousNewSlideRange;	// 228 = 0xe4
	unsigned _numberOfStoriesRemoved;	// 236 = 0xec
	unsigned char _previousScenarioType;	// 240 = 0xf0
	unsigned char _previousStartX;	// 241 = 0xf1
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x30b3d9ed
+ (BOOL)hasCustomTiming;	// 0x30b3d9e9
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x30b41081
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x30b41085
- (void)_applyTimingToSlideProviders;	// 0x30b3dd91
- (double)_buildNumberOfSlideStories:(unsigned)slideStories withSlideRange:(NSRange)slideRange;	// 0x30b3eb01
- (void)_cleanup;	// 0x30b41055
- (void)_unload;	// 0x30b41029
- (void)appendSlideInformation:(id)information andTextInformation:(id)information2;	// 0x30b3dca5
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x30b3dbf9
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x30b3dc7d
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x30b410c9
- (double)lowestDisplayTime;	// 0x30b3dc91
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b3f571
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b3f655
- (void)setMultiImageSlideRange:(NSRange)range;	// 0x30b41221
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x30b3e081
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x30b3db7d
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x30b3db2d
- (BOOL)supportsDynamicExpansion;	// 0x30b41089
- (int)typicalSlideBatchSize;	// 0x30b4108d
@end

