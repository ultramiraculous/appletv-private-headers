/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, NSMutableArray, MRTextRenderer, NSArray, MRImage;

@interface MREffectScrapbook : MREffect {
	NSMutableDictionary *mFrameProviders;	// 112 = 0x70
	NSMutableDictionary *mSprites;	// 116 = 0x74
	BOOL mIsLoaded;	// 120 = 0x78
	BOOL mTitleAspectRatio;	// 121 = 0x79
	NSArray *mLayouts;	// 124 = 0x7c
	MRTextRenderer *mTextRenderer0;	// 128 = 0x80
	MRImage *mTextImage0;	// 132 = 0x84
	NSMutableArray *mRectsToSubtract;	// 136 = 0x88
}
+ (void)initialize;	// 0x30b6588d
- (id)initWithEffectID:(id)effectID;	// 0x30b67961
- (void)_cleanup;	// 0x30b67a31
- (void)_drawBlendedFrame:(id)frame info:(id)info index:(int)index rect:(CGRect)rect zIndex:(int)index5 zRotation:(float)rotation subtract:(id)subtract time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b6a3a9
- (void)_drawFrame:(id)frame info:(id)info index:(int)index rect:(CGRect)rect zIndex:(int)index5 zRotation:(float)rotation subtract:(id)subtract time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b69b25
- (void)_drawFrame:(id)frame info:(id)info rect:(CGRect)rect stretch:(BOOL)stretch zIndex:(int)index zRotation:(float)rotation subtract:(id)subtract time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b690c5
- (void)_drawMask:(id)mask index:(int)index rect:(CGRect)rect zIndex:(int)index4 zRotation:(float)rotation subtract:(id)subtract time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b69571
- (void)_drawTextWithInfo:(id)info rect:(CGRect)rect zIndex:(int)index zRotation:(float)rotation time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b68e99
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b6aadd
- (int)_maxLinesForTextElement:(id)textElement;	// 0x30b6ae89
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x30b6ae11
- (void)_unload;	// 0x30b6ae8d
- (BOOL)isAlphaFriendly;	// 0x30b67ddd
- (BOOL)isLoadedForTime:(double)time;	// 0x30b67bc1
- (BOOL)isOpaque;	// 0x30b67de1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b67de5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b68671
- (void)setPixelSize:(CGSize)size;	// 0x30b67cc1
@end

