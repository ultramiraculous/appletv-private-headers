/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRTextRenderer, MRImageProvider, NSMutableDictionary;

@interface MREffectScrapbookTitle : MREffect {
	MRImageProvider *mImageProviders[5];	// 112 = 0x70
	NSMutableDictionary *mSprites;	// 132 = 0x84
	MRTextRenderer *mTextRenderer0;	// 136 = 0x88
	MRImage *mTextImage0;	// 140 = 0x8c
	float mLocalTranslationX;	// 144 = 0x90
	float mLocalTranslationY;	// 148 = 0x94
}
- (id)initWithEffectID:(id)effectID;	// 0x33d4c229
- (void)_cleanup;	// 0x33d4d1d1
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d4d83d
- (int)_maxLinesForTextElement:(id)textElement;	// 0x33d4dbed
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x33d4db59
- (void)_unload;	// 0x33d4dbf1
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33d4d2e5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33d4d515
- (BOOL)isLoadedForTime:(double)time;	// 0x33d4d63d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d4d6ad
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d4d72d
- (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size withBorderRect:(CGRect)borderRect;	// 0x33d4fd3d
- (void)renderEffectTitle2AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d4ec65
- (void)renderEffectTitleAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d4dcad
- (void)renderImage:(id)image forKey:(id)key withFrame:(id)frame andMask:(id)mask inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size withInnerCenteredRect:(CGRect)innerCenteredRect;	// 0x33d4fa59
- (void)setPixelSize:(CGSize)size;	// 0x33d4d22d
@end

