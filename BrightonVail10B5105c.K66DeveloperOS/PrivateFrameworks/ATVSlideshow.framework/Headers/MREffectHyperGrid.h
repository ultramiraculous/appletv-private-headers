/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MZEffectTiming.h"
#import "MREffect.h"

@class MRImage, NSMutableDictionary, MRCAMLBezierData, NSMutableArray, NSDictionary;

@interface MREffectHyperGrid : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSMutableArray *mLayouts;	// 120 = 0x78
	int mSlideStartIndex;	// 124 = 0x7c
	int mIterationStartIndex;	// 128 = 0x80
	int mLastSlideIndex;	// 132 = 0x84
	MRImage *mSavedImage;	// 136 = 0x88
	int mLastIteration;	// 140 = 0x8c
	MRCAMLBezierData *mCurves[2];	// 144 = 0x90
	MRCAMLBezierData *mBreakCurves[2];	// 152 = 0x98
	BOOL mNeedsToRecalculateIterations;	// 160 = 0xa0
	float mAspectRatio;	// 164 = 0xa4
	NSDictionary *mBreakInformation;	// 168 = 0xa8
	int mLastUsableIteration;	// 172 = 0xac
	int mLastIterationsAdded[2];	// 176 = 0xb0
	BOOL mCanAddSlides;	// 184 = 0xb8
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x325c9ec9
+ (BOOL)hasCustomTiming;	// 0x325c9ec5
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x325c9f89
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x325c9f8d
- (id)initWithEffectID:(id)effectID;	// 0x325c9ad5
- (void)_applyTimingToSlideProviders:(int)slideProviders;	// 0x325ca3d5
- (float)_aspectRatioForLayout:(int)layout atIndex:(int)index inAspectRatio:(float)aspectRatio;	// 0x325cd6b9
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x325cb41d
- (double)_calculateMainDuration;	// 0x325caf51
- (void)_cleanup;	// 0x325c9d51
- (void)_drawSlideAtIndex:(int)index size:(CGSize)size position:(CGPoint)position atTime:(double)time iterationTime:(double)time5 iterationDuration:(double)duration inContext:(id)context withArguments:(id)arguments;	// 0x325cede1
- (int)_findLandscape:(BOOL)landscape inIndicies:(id)indicies withSlideInformation:(id)slideInformation;	// 0x325cb4b9
- (int)_findLandscape:(BOOL)landscape inIndicies:(id)indicies withSlideInformation:(id)slideInformation iterations:(id)iterations neededAspectRatio:(float)ratio;	// 0x325cb4ed
- (int)_iterationForTime:(double)time;	// 0x325cdc91
- (BOOL)_layoutAtIndexHasBreak:(int)indexHasBreak;	// 0x325cdc41
- (int)_layoutCount:(int)count;	// 0x325ca3b1
- (int)_lowestDisplayIteration;	// 0x325ca149
- (void)_renderIteration:(id)iteration atTime:(double)time relativeTime:(double)time3 inContext:(id)context withArguments:(id)arguments;	// 0x325ce1c9
- (void)_setupLayoutsWithSlideInfo:(id)slideInfo aspectRatio:(float)ratio;	// 0x325cb7d9
- (CGSize)_sizeForLayout:(int)layout atIndex:(int)index;	// 0x325cec71
- (id)_slideProviderWithAspectRatio:(BOOL)aspectRatio nearest:(int)nearest actual:(int *)actual;	// 0x325cf631
- (void)_unload;	// 0x325cf85d
- (void)_updateSizeScripts:(int)scripts;	// 0x325ca831
- (void)appendSlideInformation:(id)information andTextInformation:(id)information2;	// 0x325ca339
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x325cb261
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x325cb3b9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x325cf6c9
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x325c9fd5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x325cf815
- (void)interationTime:(double *)time duration:(double *)duration forIndex:(int)index atTime:(double)time4 inIteration:(id)iteration;	// 0x325ced19
- (BOOL)isOpaque;	// 0x325c9f95
- (id)layoutForSlideIndex:(int)slideIndex forIterations:(id)iterations atIndex:(int *)index;	// 0x325cb669
- (double)lowestDisplayTime;	// 0x325cb1f1
- (BOOL)needsMoreSlidesAtTime:(double)time;	// 0x325cb3d1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325cd789
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x325cdda9
- (void)setAttributes:(id)attributes;	// 0x325c9e29
- (void)setMultiImageSlideRange:(NSRange)range;	// 0x325ca21d
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x325cb071
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x325cae19
- (BOOL)slideIndex:(int)index isInIteration:(id)iteration;	// 0x325cb785
- (BOOL)supportsDynamicExpansion;	// 0x325c9f91
- (int)typicalSlideBatchSize;	// 0x325c9f99
@end
