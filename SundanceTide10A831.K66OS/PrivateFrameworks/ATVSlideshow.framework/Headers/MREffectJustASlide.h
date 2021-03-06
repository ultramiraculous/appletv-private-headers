/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite;

@interface MREffectJustASlide : MREffect {
	MRCroppingSprite *mSprite;	// 116 = 0x74
	BOOL mForceIsOpaque;	// 120 = 0x78
}
- (id)init;	// 0x339ac0f1
- (void)_cleanup;	// 0x339ac155
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x339acda5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x339acde9
- (BOOL)isAlphaFriendly;	// 0x339ac2b1
- (BOOL)isNative3D;	// 0x339ac181
- (BOOL)isOpaque;	// 0x339ac211
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339acd49
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339ac32d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339ac3a9
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339acc7d
@end

