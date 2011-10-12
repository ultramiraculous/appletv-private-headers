/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRLayer.h"

@class NSMutableDictionary, MREffect, MCContainerEffect, NSDictionary, NSString, NSArray, MRImage, MRSlideProvider;

@interface MRLayerEffect : MRLayer {
	MCContainerEffect *mContainer;	// 112 = 0x70
	MREffect *mEffect;	// 116 = 0x74
	NSMutableDictionary *mSlideProvidersForElementIDs;	// 120 = 0x78
	NSArray *mSlideProviders;	// 124 = 0x7c
	NSMutableDictionary *mSlideShowTimeScripts;	// 128 = 0x80
	NSMutableDictionary *mTextsForElementIDs;	// 132 = 0x84
	NSString *mTargetedElement;	// 136 = 0x88
	NSString *mEditedElement;	// 140 = 0x8c
	float mEditedAlpha;	// 144 = 0x90
	MRImage *mAccumulatedImage;	// 148 = 0x94
	MRSlideProvider *mMultiImageModelInput;	// 152 = 0x98
	unsigned long mIndexOfFirstMultiImageInput;	// 156 = 0x9c
	NSRange mMultiImageSlideRange;	// 160 = 0xa0
	BOOL mNeedsToUpdateEffect;	// 168 = 0xa8
	BOOL mNeedsToUpdateTiming;	// 169 = 0xa9
	BOOL mNeedsToUpdateSlides;	// 170 = 0xaa
	BOOL mNeedsToUpdateTexts;	// 171 = 0xab
	BOOL mNeedsToUpdateEffectAttributes;	// 172 = 0xac
	BOOL mHasWarnedDelegateAboutNearingEnd;	// 173 = 0xad
}
@property(retain, nonatomic) MRImage *accumulatedImage;	// G=0x32f4eb35; S=0x32f4e35d; @synthesize=mAccumulatedImage
@property(assign, setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;	// G=0x32f4eacd; S=0x32f4eaf5; 
@property(readonly, assign) MCContainerEffect *container;	// G=0x32f4eb65; @synthesize=mContainer
@property(copy, nonatomic) NSString *editedElement;	// G=0x32f4eb55; S=0x32f4e2ed; @synthesize=mEditedElement
@property(readonly, assign) NSDictionary *slideProvidersForElementIDs;	// G=0x32f4eb75; @synthesize=mSlideProvidersForElementIDs
@property(copy, nonatomic) NSString *targetedElement;	// G=0x32f4eb45; S=0x32f4e27d; @synthesize=mTargetedElement
@property(readonly, assign) NSDictionary *textsForElementIDs;	// G=0x32f4eb85; @synthesize=mTextsForElementIDs
+ (void)initialize;	// 0x32f4d03d
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x32f4d0b9
- (void)_cleanupProviders;	// 0x32f4f2cd
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x32f4ea01
- (id)_effectAttributes;	// 0x32f4eb15
- (BOOL)_isNative3D;	// 0x32f4e581
- (int)_maxLinesForTextElement:(id)textElement;	// 0x32f4e9a9
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x32f4e92d
- (void)_observePlug;	// 0x32f503a1
- (void)_observePlugOnPreactivate;	// 0x32f504c5
- (void)_rebuildEffect;	// 0x32f4eb95
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f50611
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f5065d
- (void)_stallRenderer;	// 0x32f4eaad
- (void)_unobservePlug;	// 0x32f50441
- (void)_unobservePlugOnDepreactivate;	// 0x32f50579
- (void)_updateEffectAttributes;	// 0x32f50191
- (void)_updateSlides;	// 0x32f4f70d
- (void)_updateTexts;	// 0x32f4ff09
- (void)_updateTiming;	// 0x32f4f551
// declared property getter: - (id)accumulatedImage;	// 0x32f4eb35
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x32f4e8b9
// declared property getter: - (BOOL)asynchronousOperationsAreSuspended;	// 0x32f4eacd
- (void)cleanup;	// 0x32f4d281
// declared property getter: - (id)container;	// 0x32f4eb65
// declared property getter: - (id)editedElement;	// 0x32f4eb55
- (id)elementHitAtPoint:(CGPoint)point localPoint:(CGPoint *)point2;	// 0x32f4e609
- (id)elementHitAtPoint:(CGPoint)point localPoint:(CGPoint *)point2 localTime:(double *)time;	// 0x32f4e5bd
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates forElement:(id)element;	// 0x32f4e6c1
- (BOOL)hasAudio;	// 0x32f4e41d
- (BOOL)hasSomethingToRender;	// 0x32f4e231
- (BOOL)isAlphaFriendly;	// 0x32f4dbd5
- (BOOL)isLoadedForTime:(double)time;	// 0x32f4d989
- (BOOL)isOpaque;	// 0x32f4dbb1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32f4d3c9
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f4e025
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f4dbf9
- (void)resumeOrPause:(BOOL)pause;	// 0x32f4d689
// declared property setter: - (void)setAccumulatedImage:(id)image;	// 0x32f4e35d
// declared property setter: - (void)setEditedElement:(id)element;	// 0x32f4e2ed
- (void)setPixelSize:(CGSize)size;	// 0x32f4e0e9
// declared property setter: - (void)setTargetedElement:(id)element;	// 0x32f4e27d
// declared property getter: - (id)slideProvidersForElementIDs;	// 0x32f4eb75
- (BOOL)supportsDynamicExpansion;	// 0x32f4e0c5
// declared property setter: - (void)suspendAsynchronousOperations:(BOOL)operations;	// 0x32f4eaf5
- (void)synchronizeTime;	// 0x32f4d8b5
// declared property getter: - (id)targetedElement;	// 0x32f4eb45
// declared property getter: - (id)textsForElementIDs;	// 0x32f4eb85
- (void)unload;	// 0x32f4db2d
@end

