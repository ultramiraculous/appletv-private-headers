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

@class NSString, MRImage, NSDictionary, MRLayer;

@interface MRTransition : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	id mTransitioner;	// 8 = 0x8
	MRLayer *mSourceLayer;	// 12 = 0xc
	MRLayer *mTargetLayer;	// 16 = 0x10
	MRImage *mSourceLayerImage;	// 20 = 0x14
	MRImage *mTargetLayerImage;	// 24 = 0x18
	MRImage *mOutputImage;	// 28 = 0x1c
	NSString *mTransitionID;	// 32 = 0x20
	NSString *mPresetID;	// 36 = 0x24
	NSDictionary *mAttributes;	// 40 = 0x28
	NSDictionary *mFlattenedAttributes;	// 44 = 0x2c
	BOOL mNeedsToUpdateAttributes;	// 48 = 0x30
	CGSize mPixelSize;	// 52 = 0x34
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x3215fff5; S=0x3215f961; @synthesize=mAttributes
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x3215fcb1; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x3215fd19; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x3215fc31; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x3215fc71; 
@property(readonly, assign, nonatomic) BOOL needsSourceLayerImageForPrecomputing;	// G=0x3215f8e1; 
@property(readonly, assign, nonatomic) BOOL needsTargetLayerImageForPrecomputing;	// G=0x3215f921; 
@property(readonly, assign, nonatomic) BOOL noContentsMotion;	// G=0x3215f8a1; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x32160005; S=0x3216001d; @synthesize=mPixelSize
@property(copy) NSString *presetID;	// G=0x3215ffd1; S=0x3215ffe5; @synthesize=mPresetID
@property(retain) MRLayer *sourceLayer;	// G=0x3215ff55; S=0x3215ff69; @synthesize=mSourceLayer
@property(retain, nonatomic) MRImage *sourceLayerImage;	// G=0x3215ff9d; S=0x3215fb31; @synthesize=mSourceLayerImage
@property(retain) MRLayer *targetLayer;	// G=0x3215ff79; S=0x3215ff8d; @synthesize=mTargetLayer
@property(retain, nonatomic) MRImage *targetLayerImage;	// G=0x3215ffad; S=0x3215fb71; @synthesize=mTargetLayerImage
@property(readonly, assign) NSString *transitionID;	// G=0x3215ffbd; @synthesize=mTransitionID
+ (id)retainedTransitionWithTransitionID:(id)transitionID forTransitioner:(id)transitioner;	// 0x3215f501
- (id)initWithTransitionID:(id)transitionID;	// 0x3215f551
// declared property getter: - (id)attributes;	// 0x3215fff5
- (void)cancelLoading;	// 0x3215fc2d
- (void)cleanup;	// 0x3215f711
- (void)dealloc;	// 0x3215f691
- (void)finalize;	// 0x3215f6d1
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x3215fcb1
// declared property getter: - (BOOL)isInfinite;	// 0x3215fd19
- (BOOL)isLoadedForTime:(double)time;	// 0x3215fbb1
// declared property getter: - (BOOL)isNative3D;	// 0x3215fc31
// declared property getter: - (BOOL)isOpaque;	// 0x3215fc71
- (BOOL)isRetainedByTransitioner;	// 0x3215f889
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x3215fbb5
// declared property getter: - (BOOL)needsSourceLayerImageForPrecomputing;	// 0x3215f8e1
// declared property getter: - (BOOL)needsTargetLayerImageForPrecomputing;	// 0x3215f921
// declared property getter: - (BOOL)noContentsMotion;	// 0x3215f8a1
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3215fded
// declared property getter: - (CGSize)pixelSize;	// 0x32160005
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3215fd1d
// declared property getter: - (id)presetID;	// 0x3215ffd1
- (void)releaseByTransitioner:(id)transitioner;	// 0x3215f7ad
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3215fdc1
- (void)retainByTransitioner:(id)transitioner;	// 0x3215f785
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3215fdd5
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3215f961
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x3216001d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x3215ffe5
// declared property setter: - (void)setSourceLayer:(id)layer;	// 0x3215ff69
// declared property setter: - (void)setSourceLayerImage:(id)image;	// 0x3215fb31
// declared property setter: - (void)setTargetLayer:(id)layer;	// 0x3215ff8d
// declared property setter: - (void)setTargetLayerImage:(id)image;	// 0x3215fb71
// declared property getter: - (id)sourceLayer;	// 0x3215ff55
// declared property getter: - (id)sourceLayerImage;	// 0x3215ff9d
// declared property getter: - (id)targetLayer;	// 0x3215ff79
// declared property getter: - (id)targetLayerImage;	// 0x3215ffad
// declared property getter: - (id)transitionID;	// 0x3215ffbd
- (void)unload;	// 0x3215fbb9
@end

