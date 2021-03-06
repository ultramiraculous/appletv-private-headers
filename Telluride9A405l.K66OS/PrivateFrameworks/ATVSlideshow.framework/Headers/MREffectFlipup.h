/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSMutableArray;

@interface MREffectFlipup : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	NSMutableArray *mZPositions;	// 116 = 0x74
	NSMutableArray *mXPositions;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x3361f535
- (void)_cleanup;	// 0x3361f5c1
- (void)_unload;	// 0x33621319
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x336211a1
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x336212d1
- (BOOL)isLoadedForTime:(double)time;	// 0x3361fd19
- (void)loadPositions;	// 0x3361f7e9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3361f65d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3361fd1d
- (void)setPixelSize:(CGSize)size;	// 0x3361f62d
@end

