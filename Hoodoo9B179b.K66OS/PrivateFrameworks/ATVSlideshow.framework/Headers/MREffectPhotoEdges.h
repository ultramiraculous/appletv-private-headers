/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRImageProvider, MRTextRenderer, MRImage;

@interface MREffectPhotoEdges : MREffect {
	MRImageProvider *mFrameProvider;	// 112 = 0x70
	NSMutableDictionary *mSprites;	// 116 = 0x74
	MRTextRenderer *mText0Renderer;	// 120 = 0x78
	MRImage *mText0Image;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x35506251
- (void)_cleanup;	// 0x355062e5
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x35507e2d
- (int)_maxLinesForTextElement:(id)textElement;	// 0x355082f9
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x355081e1
- (void)_unload;	// 0x355082fd
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x35507cc5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x35507ded
- (BOOL)isLoadedForTime:(double)time;	// 0x35506335
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x355068b1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3550691d
- (void)setAttributes:(id)attributes;	// 0x35506489
- (void)setPixelSize:(CGSize)size;	// 0x355063f9
@end
