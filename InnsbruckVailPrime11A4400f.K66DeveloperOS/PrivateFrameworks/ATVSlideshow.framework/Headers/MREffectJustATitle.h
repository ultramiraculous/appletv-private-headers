/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRTextRenderer, MRCroppingSprite, MRImage;

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
- (id)init;	// 0x2fc03e95
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc04a75
- (int)_maxLinesForTextElement:(id)textElement;	// 0x2fc054cd
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x2fc053c5
- (void)_unload;	// 0x2fc0553d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x2fc041f5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x2fc0427d
- (BOOL)isLoadedForTime:(double)time;	// 0x2fc04305
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc043f9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc04441
- (void)setAttributes:(id)attributes;	// 0x2fc03f19
@end

