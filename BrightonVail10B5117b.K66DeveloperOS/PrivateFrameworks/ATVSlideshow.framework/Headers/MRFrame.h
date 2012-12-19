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

@class NSString, NSDictionary, MRImage, MRSlideProvider;

@interface MRFrame : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	MRSlideProvider *mSlideProvider;	// 8 = 0x8
	MRImage *mInputImage;	// 12 = 0xc
	MRImage *mOutputImage;	// 16 = 0x10
	NSString *mFrameID;	// 20 = 0x14
	NSDictionary *mAttributes;	// 24 = 0x18
	NSDictionary *mFlattenedAttributes;	// 28 = 0x1c
	CGSize mPixelSize;	// 32 = 0x20
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x3339d26d; S=0x3339ce09; @synthesize=mAttributes
@property(readonly, assign) NSString *frameID;	// G=0x3339d259; @synthesize=mFrameID
@property(retain, nonatomic) MRImage *inputImage;	// G=0x3339d249; S=0x3339cda1; @synthesize=mInputImage
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x3339d069; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x3339d0d1; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x3339cfe9; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x3339d029; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x3339d27d; S=0x3339cf35; @synthesize=mPixelSize
+ (id)retainedFrameWithFrameID:(id)frameID forSlideProvider:(id)slideProvider;	// 0x3339ca95
- (id)initWithFrameID:(id)frameID;	// 0x3339cae5
// declared property getter: - (id)attributes;	// 0x3339d26d
- (void)cancelLoading;	// 0x3339cfe5
- (void)cleanup;	// 0x3339cc41
- (void)dealloc;	// 0x3339cbc1
- (void)finalize;	// 0x3339cc01
// declared property getter: - (id)frameID;	// 0x3339d259
// declared property getter: - (id)inputImage;	// 0x3339d249
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x3339d069
// declared property getter: - (BOOL)isInfinite;	// 0x3339d0d1
- (BOOL)isLoadedForTime:(double)time;	// 0x3339cf8d
// declared property getter: - (BOOL)isNative3D;	// 0x3339cfe9
// declared property getter: - (BOOL)isOpaque;	// 0x3339d029
- (BOOL)isRetainedBySlideProvider;	// 0x3339cd89
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x3339cf91
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3339d0e1
// declared property getter: - (CGSize)pixelSize;	// 0x3339d27d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3339d0d5
- (void)releaseBySlideProvider:(id)provider;	// 0x3339ccdd
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3339d0d9
- (void)retainBySlideProvider:(id)provider;	// 0x3339ccb5
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3339d0dd
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3339ce09
// declared property setter: - (void)setInputImage:(id)image;	// 0x3339cda1
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x3339cf35
- (void)unload;	// 0x3339cf95
@end
