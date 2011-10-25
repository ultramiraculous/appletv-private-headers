/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, NSMutableDictionary, MRImage, MRTextRenderer;

@interface MREffectWatercolorPanel : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x3435627d
- (void)_cleanup;	// 0x343562e9
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34357b21
- (int)_maxLinesForTextElement:(id)textElement;	// 0x34357b1d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x34357ae9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x343578e1
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x34357a55
- (BOOL)isLoadedForTime:(double)time;	// 0x34356315
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34356399
- (void)renderEffect2AtTime:(double)time isSquare:(BOOL)square inContext:(id)context withArguments:(id)arguments;	// 0x343564b1
- (void)renderEffect3AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34356d4d
- (void)renderEffectSubtitleAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34357261
@end

