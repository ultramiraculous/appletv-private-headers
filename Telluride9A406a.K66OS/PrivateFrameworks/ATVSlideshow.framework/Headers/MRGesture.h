/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRHitBlob;

@interface MRGesture : NSObject {
@private
	MRHitBlob *_hitBlob;	// 4 = 0x4
@protected
	CGPoint locationInViewAtStart;	// 8 = 0x8
	CGPoint locationInSlideAtStart;	// 16 = 0x10
	CGPoint slideCenterAtStart;	// 24 = 0x18
	float slideRotationAtStart;	// 32 = 0x20
	float slideScaleAtStart;	// 36 = 0x24
	CGPoint currentTranslation;	// 40 = 0x28
	float currentRotation;	// 48 = 0x30
	float currentScale;	// 52 = 0x34
}
@property(assign) float currentRotation;	// G=0x34aa5c01; S=0x34aa5c11; @synthesize
@property(assign) float currentScale;	// G=0x34aa5c21; S=0x34aa5c31; @synthesize
@property(assign) CGPoint currentTranslation;	// G=0x34aa5bd1; S=0x34aa5bed; @synthesize
@property(retain) MRHitBlob *hitBlob;	// G=0x34aa5ac9; S=0x34aa5add; @synthesize=_hitBlob
@property(assign) CGPoint locationInSlideAtStart;	// G=0x34aa5b31; S=0x34aa5b4d; @synthesize
@property(assign) CGPoint locationInViewAtStart;	// G=0x34aa5b01; S=0x34aa5b1d; @synthesize
@property(assign) CGPoint slideCenterAtStart;	// G=0x34aa5b61; S=0x34aa5b7d; @synthesize
@property(assign) float slideRotationAtStart;	// G=0x34aa5b91; S=0x34aa5ba1; @synthesize
@property(assign) float slideScaleAtStart;	// G=0x34aa5bb1; S=0x34aa5bc1; @synthesize
- (id)initWithHitBlob:(id)hitBlob;	// 0x34aa5a35
// declared property getter: - (float)currentRotation;	// 0x34aa5c01
// declared property getter: - (float)currentScale;	// 0x34aa5c21
// declared property getter: - (CGPoint)currentTranslation;	// 0x34aa5bd1
- (void)dealloc;	// 0x34aa5a75
// declared property getter: - (id)hitBlob;	// 0x34aa5ac9
// declared property getter: - (CGPoint)locationInSlideAtStart;	// 0x34aa5b31
// declared property getter: - (CGPoint)locationInViewAtStart;	// 0x34aa5b01
// declared property setter: - (void)setCurrentRotation:(float)rotation;	// 0x34aa5c11
// declared property setter: - (void)setCurrentScale:(float)scale;	// 0x34aa5c31
// declared property setter: - (void)setCurrentTranslation:(CGPoint)translation;	// 0x34aa5bed
// declared property setter: - (void)setHitBlob:(id)blob;	// 0x34aa5add
// declared property setter: - (void)setLocationInSlideAtStart:(CGPoint)start;	// 0x34aa5b4d
// declared property setter: - (void)setLocationInViewAtStart:(CGPoint)start;	// 0x34aa5b1d
// declared property setter: - (void)setSlideCenterAtStart:(CGPoint)start;	// 0x34aa5b7d
// declared property setter: - (void)setSlideRotationAtStart:(float)start;	// 0x34aa5ba1
// declared property setter: - (void)setSlideScaleAtStart:(float)start;	// 0x34aa5bc1
// declared property getter: - (CGPoint)slideCenterAtStart;	// 0x34aa5b61
// declared property getter: - (float)slideRotationAtStart;	// 0x34aa5b91
// declared property getter: - (float)slideScaleAtStart;	// 0x34aa5bb1
@end
