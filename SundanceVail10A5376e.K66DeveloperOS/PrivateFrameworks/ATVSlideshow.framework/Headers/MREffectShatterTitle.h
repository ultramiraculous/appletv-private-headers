/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, MRTextRenderer, MRCroppingSprite, MRImage;

@interface MREffectShatterTitle : MREffect {
	MRImageProvider *mMasks[9];	// 116 = 0x74
	MRTextRenderer *mTextRenderer;	// 152 = 0x98
	MRImage *mTextImage;	// 156 = 0x9c
	MRCroppingSprite *mTextSprite;	// 160 = 0xa0
}
- (id)initWithEffectID:(id)effectID;	// 0x36290219
- (void)_cleanup;	// 0x362903f5
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x36290f11
- (int)_maxLinesForTextElement:(id)textElement;	// 0x36291215
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x362911e1
- (void)_unload;	// 0x36291189
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x362904f1
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x36290535
- (BOOL)isLoadedForTime:(double)time;	// 0x3629058d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3629066d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x362906f1
- (void)setPixelSize:(CGSize)size;	// 0x36290485
@end

