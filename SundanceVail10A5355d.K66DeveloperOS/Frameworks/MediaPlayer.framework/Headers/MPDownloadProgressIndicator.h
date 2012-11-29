/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIButton.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class CADisplayLink, UIImageView;

@interface MPDownloadProgressIndicator : UIButton {
	float _animatedStartValue;	// 180 = 0xb4
	float _animatedValue;	// 184 = 0xb8
	BOOL _animating;	// 188 = 0xbc
	BOOL _canCancel;	// 189 = 0xbd
	double _animationEndTime;	// 192 = 0xc0
	double _animationStartTime;	// 200 = 0xc8
	CADisplayLink *_displayLink;	// 208 = 0xd0
	UIImageView *_centerImageView;	// 212 = 0xd4
	BOOL _mpExternalHidden;	// 216 = 0xd8
	BOOL _mpInternalHidden;	// 217 = 0xd9
	int _style;	// 220 = 0xdc
	float _value;	// 224 = 0xe0
}
@property(assign, nonatomic) BOOL canCancel;	// G=0x3377a241; S=0x337795a1; @synthesize=_canCancel
@property(readonly, assign, nonatomic) int style;	// G=0x3377a251; @synthesize=_style
@property(assign, nonatomic) float value;	// G=0x3377a261; S=0x33779629; @synthesize=_value
+ (id)_baseImageForStyle:(int)style;	// 0x33779a89
+ (id)_fillImageForStyle:(int)style;	// 0x33779be9
+ (id)_nonstopImageForStyle:(int)style;	// 0x33779d89
+ (CGSize)_sizeForStyle:(int)style;	// 0x33779de1
+ (id)_stopImageForStyle:(int)style;	// 0x33779e51
- (id)initWithStyle:(int)style;	// 0x33778e09
- (void)_animateValueOnDisplayLink:(id)link;	// 0x33779fb1
- (CGRect)_baseFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x3377a0f9
- (CGRect)_centerImageViewFrame:(CGRect)frame inBounds:(CGRect)bounds forStyle:(int)style;	// 0x3377a139
- (CGRect)_fillFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x3377a1ad
- (void)_setInternalHidden:(BOOL)hidden;	// 0x3377a1ed
// declared property getter: - (BOOL)canCancel;	// 0x3377a241
- (void)dealloc;	// 0x33778fc1
- (void)drawRect:(CGRect)rect;	// 0x33779029
- (void)layoutSubviews;	// 0x33779459
// declared property setter: - (void)setCanCancel:(BOOL)cancel;	// 0x337795a1
- (void)setHidden:(BOOL)hidden;	// 0x3377954d
// declared property setter: - (void)setValue:(float)value;	// 0x33779629
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x33779641
// declared property getter: - (int)style;	// 0x3377a251
- (void)updateFromObserver:(id)observer;	// 0x33779841
- (void)updateFromObserver:(id)observer animated:(BOOL)animated;	// 0x33779855
// declared property getter: - (float)value;	// 0x3377a261
@end
