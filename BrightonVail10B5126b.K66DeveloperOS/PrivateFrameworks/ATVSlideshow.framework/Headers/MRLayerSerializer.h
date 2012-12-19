/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLayer.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSMutableArray, MRTransition, MCContainerSerializer, NSArray;

@interface MRLayerSerializer : MRLayer {
	MCContainerSerializer *mContainer;	// 120 = 0x78
	NSMutableArray *mSublayers;	// 124 = 0x7c
	NSMutableDictionary *mSublayersForPlugs;	// 128 = 0x80
	MRLayer *mCurrentSublayer;	// 132 = 0x84
	MRLayer *mNextSublayer;	// 136 = 0x88
	MRTransition *mCurrentTransition;	// 140 = 0x8c
	MRLayer *mSublayerForTransition;	// 144 = 0x90
	MRLayer *mSublayerToPrecompute;	// 148 = 0x94
	id mPrecomputingTarget;	// 152 = 0x98
	unsigned mPrecomputingType;	// 156 = 0x9c
	MRLayer *mLiveSourceSublayer;	// 160 = 0xa0
	MRLayer *mLiveTargetSublayer;	// 164 = 0xa4
	BOOL mLiveTransitionIsBackwards;	// 168 = 0xa8
	BOOL mIsTransitioning;	// 169 = 0xa9
	BOOL mNeedsToUpdateSublayersTiming;	// 170 = 0xaa
	BOOL mNeedsToUpdateTransitionAttributes;	// 171 = 0xab
	BOOL mHasWarnedDelegateAboutNearingEnd;	// 172 = 0xac
}
@property(readonly, assign) NSArray *sublayers;	// G=0x3320a659; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x33207989
- (id)_createSublayerForPlug:(id)plug;	// 0x3320ac49
- (id)_currentState;	// 0x3320a3e5
- (void)_deleteSublayer:(id)sublayer;	// 0x3320ada5
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x3320a4d1
- (void)_executeLayerCommandQueue;	// 0x3320a66d
- (BOOL)_isNative3D;	// 0x332097c9
- (void)_observePlug;	// 0x3320b155
- (void)_observePlugOnPreactivate;	// 0x3320b251
- (void)_observeSublayer:(id)sublayer;	// 0x3320af4d
- (void)_observeSublayerOnPreactivate:(id)preactivate;	// 0x3320b0b1
- (void)_precomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3320b455
- (void)_preprecomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3320c2c1
- (void)_prerenderSublayersAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3320bad1
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3320b6f9
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3320b8b5
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x3320b36d
- (void)_unobservePlug;	// 0x3320b1e1
- (void)_unobservePlugOnDepreactivate;	// 0x3320b2ed
- (void)_unobserveSublayer:(id)sublayer;	// 0x3320b009
- (void)_unobserveSublayerOnDepreactivate:(id)depreactivate;	// 0x3320b105
- (void)_updateSublayersTiming;	// 0x3320aa31
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x33209d15
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x33209b81
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x33208449
- (void)cleanup;	// 0x33207b15
- (void)deactivate;	// 0x33208635
- (void)depreactivate:(BOOL)depreactivate;	// 0x332087f5
- (void)endMorphing;	// 0x33208559
- (void)endTransitionToSublayer;	// 0x3320a391
- (BOOL)hasAudio;	// 0x332096b1
- (BOOL)hasSomethingToRender;	// 0x33208335
- (BOOL)isAlphaFriendly;	// 0x33208af9
- (BOOL)isLoadedForTime:(double)time;	// 0x33208915
- (BOOL)isOpaque;	// 0x33208a85
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33207ddd
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3320937d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33208b6d
- (void)setPixelSize:(CGSize)size;	// 0x3320824d
- (id)sublayerAtIndex:(unsigned)index;	// 0x3320981d
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x33209945
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x33209529
// declared property getter: - (id)sublayers;	// 0x3320a659
- (BOOL)supportsDynamicExpansion;	// 0x33209525
- (void)synchronizeTime;	// 0x332083bd
- (double)transitionToNextSublayer;	// 0x33209e69
- (double)transitionToPreviousSublayer;	// 0x33209f29
- (double)transitionToSublayerAtIndex:(unsigned)index;	// 0x33209fe1
@end
