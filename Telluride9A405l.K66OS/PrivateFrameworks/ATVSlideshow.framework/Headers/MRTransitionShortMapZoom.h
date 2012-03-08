/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MRTransitionShortMapZoom : MRTransition {
	MRImageProvider *mGradientProvider;	// 60 = 0x3c
	MRImageProvider *mPinProvider;	// 64 = 0x40
	MRImageProvider *mYellowPinProvider;	// 68 = 0x44
	MRImageProvider *mRedPinProvider;	// 72 = 0x48
	MRImageProvider *mBoxShadowSmall;	// 76 = 0x4c
}
- (id)initWithTransitionID:(id)transitionID;	// 0x335afeb5
- (void)_cleanup;	// 0x335b02c9
- (void)drawSortedPins:(id)pins providers:(id)providers attributes:(id)attributes offset:(CGPoint)offset outro:(BOOL)outro atTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x335b07e5
- (BOOL)isLoadedForTime:(double)time;	// 0x335b0479
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x335b049d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x335b07e1
- (void)setAttributes:(id)attributes;	// 0x335b0581
- (void)setPixelSize:(CGSize)size;	// 0x335b03ad
- (void)unload;	// 0x335b180d
@end
