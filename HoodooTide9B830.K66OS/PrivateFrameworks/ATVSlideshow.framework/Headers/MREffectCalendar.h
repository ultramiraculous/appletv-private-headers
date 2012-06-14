/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRTextRenderer;

@interface MREffectCalendar : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRImage *mTextImage;	// 116 = 0x74
	CGSize mStride;	// 120 = 0x78
	CGSize mImageSize;	// 128 = 0x80
	CGSize mTextSize;	// 136 = 0x88
	CGPoint mBaseImagePosition;	// 144 = 0x90
	CGPoint mBaseTextPosition;	// 152 = 0x98
	unsigned char mFirstDayWeekday;	// 160 = 0xa0
	unsigned char mNumberOfDays;	// 161 = 0xa1
	BOOL mTextWasUpdatedSinceLastRendering;	// 162 = 0xa2
}
- (id)init;	// 0x321f64dd
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321f6fad
- (void)_unload;	// 0x321f7201
- (BOOL)isLoadedForTime:(double)time;	// 0x321f6c0d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321f6c91
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321f6cd9
- (void)setAttributes:(id)attributes;	// 0x321f6509
@end
