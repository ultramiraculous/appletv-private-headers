/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import "ATVSlideshow-Structs.h"
#import "MRRenderable.h"
#import <NSObject.h> // Unknown library

@class NSOperation, NSDictionary, MRLayerEffect, NSString, MRImage;

@interface MREffect : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	MRLayerEffect *mEffectLayer;	// 8 = 0x8
	MRImage *mOutputImage;	// 12 = 0xc
	NSString *mEffectID;	// 16 = 0x10
	NSDictionary *mAttributes;	// 20 = 0x14
	NSDictionary *mFlattenedAttributes;	// 24 = 0x18
	unsigned mSeed;	// 28 = 0x1c
	BOOL mNeedsToUpdateSlides;	// 32 = 0x20
	BOOL mNeedsToUpdateTexts;	// 33 = 0x21
	BOOL mNeedsToUpdateAttributes;	// 34 = 0x22
	NSOperation *mPreloadOperation;	// 36 = 0x24
	CGSize mPixelSize;	// 40 = 0x28
	MRImage *mAccumulatedImage;	// 48 = 0x30
	BOOL mNeedsToUpdateAccumulatedImage;	// 52 = 0x34
	double mDefaultPhaseInDuration;	// 56 = 0x38
	double mDefaultMainDuration;	// 64 = 0x40
	double mDefaultPhaseOutDuration;	// 72 = 0x48
	double mPhaseTime;	// 80 = 0x50
	double mPhaseInDuration;	// 88 = 0x58
	double mMainDuration;	// 96 = 0x60
	double mPhaseOutDuration;	// 104 = 0x68
}
@property(retain, nonatomic) MRImage *accumulatedImage;	// G=0x3149eca9; S=0x3149e06d; @synthesize=mAccumulatedImage
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x3149ec41; S=0x3149df39; @synthesize=mAttributes
@property(readonly, assign) NSString *effectID;	// G=0x3149ec31; @synthesize=mEffectID
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x3149e8c9; 
@property(readonly, assign) BOOL isInfinite;	// G=0x3149e939; 
@property(readonly, assign) BOOL isNative3D;	// G=0x3149e821; 
@property(readonly, assign) BOOL isOpaque;	// G=0x3149e891; 
@property(assign) BOOL needsToUpdateSlides;	// G=0x3149ec69; S=0x3149ec79; @synthesize=mNeedsToUpdateSlides
@property(assign) BOOL needsToUpdateTexts;	// G=0x3149ec89; S=0x3149ec99; @synthesize=mNeedsToUpdateTexts
@property(assign, nonatomic) CGSize pixelSize;	// G=0x3149ec51; S=0x3149decd; @synthesize=mPixelSize
+ (id)retainedEffectWithEffectID:(id)effectID forEffectLayer:(id)effectLayer;	// 0x3149d84d
- (id)initWithEffectID:(id)effectID;	// 0x3149d899
- (void)_cleanup;	// 0x3149dea9
- (void)_computePhaseTimeForTime:(double)time;	// 0x3149dd7d
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3149ecb9
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3149ec2d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3149ec19
- (void)_unload;	// 0x3149ecbd
// declared property getter: - (id)accumulatedImage;	// 0x3149eca9
// declared property getter: - (id)attributes;	// 0x3149ec41
- (void)cancelLoading;	// 0x3149e705
- (void)cleanup;	// 0x3149da51
- (void)dealloc;	// 0x3149d9d1
// declared property getter: - (id)effectID;	// 0x3149ec31
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3149e0d1
- (void)finalize;	// 0x3149da11
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3149e0d5
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x3149e8c9
// declared property getter: - (BOOL)isInfinite;	// 0x3149e939
- (BOOL)isLoadedForTime:(double)time;	// 0x3149e0d9
// declared property getter: - (BOOL)isNative3D;	// 0x3149e821
// declared property getter: - (BOOL)isOpaque;	// 0x3149e891
- (BOOL)isRetainedByEffectLayer;	// 0x3149dd21
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x3149e0dd
- (void)loadWithArguments:(id)arguments;	// 0x3149e389
// declared property getter: - (BOOL)needsToUpdateSlides;	// 0x3149ec69
// declared property getter: - (BOOL)needsToUpdateTexts;	// 0x3149ec89
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3149eadd
// declared property getter: - (CGSize)pixelSize;	// 0x3149ec51
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3149e93d
- (void)releaseByEffectLayer:(id)layer;	// 0x3149dc75
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3149e9d9
- (void)retainByEffectLayer:(id)layer;	// 0x3149dbed
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3149ea21
// declared property setter: - (void)setAccumulatedImage:(id)image;	// 0x3149e06d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3149df39
// declared property setter: - (void)setNeedsToUpdateSlides:(BOOL)updateSlides;	// 0x3149ec79
// declared property setter: - (void)setNeedsToUpdateTexts:(BOOL)updateTexts;	// 0x3149ec99
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x3149dd39
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x3149decd
- (void)unload;	// 0x3149e565
@end

