/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRTextRenderer, MRCroppingSprite;

@interface MREffectSnapshotTitle : MREffect {
	MRTextRenderer *mTextRenderer0;	// 116 = 0x74
	MRImage *mImage0;	// 120 = 0x78
	MRCroppingSprite *mTextSprite0;	// 124 = 0x7c
}
- (id)init;	// 0x339fb469
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339fb901
- (int)_maxLinesForTextElement:(id)textElement;	// 0x339fbc91
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x339fbc39
- (void)_unload;	// 0x339fbc95
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x339fb4c5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x339fb509
- (BOOL)isLoadedForTime:(double)time;	// 0x339fb561
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339fb5e9
@end
