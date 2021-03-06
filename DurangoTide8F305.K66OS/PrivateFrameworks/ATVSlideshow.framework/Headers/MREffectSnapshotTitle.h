/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectSnapshotTitle : MREffect {
	MRTextRenderer *mTextRenderer0;	// 112 = 0x70
	MRImage *mImage0;	// 116 = 0x74
	MRCroppingSprite *mTextSprite0;	// 120 = 0x78
}
- (id)init;	// 0x332c53dd
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332c58a9
- (int)_maxLinesForTextElement:(id)textElement;	// 0x332c5c09
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x332c5bc1
- (void)_unload;	// 0x332c5c0d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x332c5435
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x332c5479
- (BOOL)isLoadedForTime:(double)time;	// 0x332c54c5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332c5535
@end

