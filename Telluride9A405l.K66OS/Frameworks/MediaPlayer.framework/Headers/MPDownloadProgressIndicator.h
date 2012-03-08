/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIButton.h> // Unknown library

@class UIImageView, CADisplayLink;

@interface MPDownloadProgressIndicator : UIButton {
@private
	float _animatedStartValue;	// 140 = 0x8c
	float _animatedValue;	// 144 = 0x90
	BOOL _animating;	// 148 = 0x94
	BOOL _canCancel;	// 149 = 0x95
	double _animationEndTime;	// 152 = 0x98
	double _animationStartTime;	// 160 = 0xa0
	CADisplayLink *_displayLink;	// 168 = 0xa8
	UIImageView *_centerImageView;	// 172 = 0xac
	BOOL _mpExternalHidden;	// 176 = 0xb0
	BOOL _mpInternalHidden;	// 177 = 0xb1
	int _style;	// 180 = 0xb4
	float _value;	// 184 = 0xb8
}
@property(assign, nonatomic) BOOL canCancel;	// G=0x33c5ff05; S=0x33c5f6b1; @synthesize=_canCancel
@property(readonly, assign, nonatomic) int style;	// G=0x33c5ff15; @synthesize=_style
@property(assign, nonatomic) float value;	// G=0x33c5ff25; S=0x33c5f735; @synthesize=_value
+ (id)_baseImageForStyle:(int)style;	// 0x33c5fb81
+ (id)_fillImageForStyle:(int)style;	// 0x33c5fc1d
+ (id)_nonstopImageForStyle:(int)style;	// 0x33c5fdd5
+ (CGSize)_sizeForStyle:(int)style;	// 0x33c5fcfd
+ (id)_stopImageForStyle:(int)style;	// 0x33c5fd39
- (id)initWithStyle:(int)style;	// 0x33c5ef25
- (void)_animateValueOnDisplayLink:(id)link;	// 0x33c5fa35
- (CGRect)_baseFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x33c5fe29
- (CGRect)_fillFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x33c5fe69
- (void)_setInternalHidden:(BOOL)hidden;	// 0x33c5fea9
// declared property getter: - (BOOL)canCancel;	// 0x33c5ff05
- (void)dealloc;	// 0x33c5f0e9
- (void)drawRect:(CGRect)rect;	// 0x33c5f149
- (void)layoutSubviews;	// 0x33c5f595
// declared property setter: - (void)setCanCancel:(BOOL)cancel;	// 0x33c5f6b1
- (void)setHidden:(BOOL)hidden;	// 0x33c5f659
// declared property setter: - (void)setValue:(float)value;	// 0x33c5f735
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x33c5f749
// declared property getter: - (int)style;	// 0x33c5ff15
- (void)updateFromObserver:(id)observer;	// 0x33c5f94d
- (void)updateFromObserver:(id)observer animated:(BOOL)animated;	// 0x33c5f961
// declared property getter: - (float)value;	// 0x33c5ff25
@end
