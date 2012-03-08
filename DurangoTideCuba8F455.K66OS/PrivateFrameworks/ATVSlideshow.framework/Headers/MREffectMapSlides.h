/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, NSMutableDictionary;

@interface MREffectMapSlides : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	MRImageProvider *mBoxShadowBig;	// 116 = 0x74
	MRImageProvider *mBoxShadowBigBottom;	// 120 = 0x78
	MRImageProvider *mBoxShadowBigTop;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x33d1fcbd
- (void)_cleanup;	// 0x33d1ff59
- (void)_renderBigShadowForRect:(CGRect)rect scale:(float)scale rects:(id)rects atTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d22751
- (void)_unload;	// 0x33d22b59
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33d229d5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33d22b19
- (BOOL)isLoadedForTime:(double)time;	// 0x33d200b1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d20125
- (void)render1SlideAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x33d20429
- (void)render2SlidesAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x33d2042d
- (void)render3SlidesAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x33d21035
- (void)render4SlidesAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x33d21aa5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d201c9
- (void)renderKey:(id)key shadow:(id)shadow shadowRect:(CGRect)rect size:(CGSize)size position:(CGPoint)position xRot:(float)rot tX:(float)x time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d2274d
- (void)setPixelSize:(CGSize)size;	// 0x33d20011
@end
