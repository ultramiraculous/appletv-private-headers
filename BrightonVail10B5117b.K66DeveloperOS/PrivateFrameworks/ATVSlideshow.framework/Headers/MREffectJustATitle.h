/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRTextRenderer, MRCroppingSprite;

@interface MREffectJustATitle : MREffect {
	MRTextRenderer *mTextRenderer0;	// 116 = 0x74
	MRTextRenderer *mTextRenderer1;	// 120 = 0x78
	MRImage *mImage0;	// 124 = 0x7c
	MRImage *mImage1;	// 128 = 0x80
	MRCroppingSprite *mTextSprite0;	// 132 = 0x84
	MRCroppingSprite *mTextSprite1;	// 136 = 0x88
	CGRect mText0Rect;	// 140 = 0x8c
	CGRect mText1Rect;	// 156 = 0x9c
	BOOL mTextWasUpdatedSinceLastRendering;	// 172 = 0xac
}
- (id)init;	// 0x33343bd1
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3334475d
- (int)_maxLinesForTextElement:(id)textElement;	// 0x33345165
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3334505d
- (void)_unload;	// 0x333451d5
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33343edd
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33343f65
- (BOOL)isLoadedForTime:(double)time;	// 0x33343fed
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x333440e1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33344129
- (void)setAttributes:(id)attributes;	// 0x33343c55
@end
