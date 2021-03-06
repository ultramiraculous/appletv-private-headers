/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackOverlayView : UIView {
	double _value;	// 88 = 0x58
	double _minimumValue;	// 96 = 0x60
	double _maximumValue;	// 104 = 0x68
	double _startValue;	// 112 = 0x70
	double _endValue;	// 120 = 0x78
	UIView *_leftFillView;	// 128 = 0x80
	UIView *_rightFillView;	// 132 = 0x84
	UIView *_innerShadowView;	// 136 = 0x88
	CGRect _leftFillFrame;	// 140 = 0x8c
	CGRect _rightFillFrame;	// 156 = 0x9c
	unsigned _editingHandle;	// 172 = 0xac
	unsigned _editing : 1;	// 176 = 0xb0
	unsigned _zoomed : 1;	// 176 = 0xb0
}
- (id)initWithFrame:(CGRect)frame;	// 0x30e8ba11
- (void)_clampValueAndLayout;	// 0x30e8bfb9
- (void)_updateLeftFill;	// 0x30e8bc75
- (void)_updateRightFill;	// 0x30e8bd9d
- (void)animateFillFramesAway;	// 0x30e8bee1
- (void)layoutSubviews;	// 0x30e8c201
- (void)setEditing:(BOOL)editing;	// 0x30e8c021
- (void)setEditingHandle:(int)handle;	// 0x30e8c1f1
- (void)setEndValue:(double)value;	// 0x30e8c151
- (void)setFrame:(CGRect)frame;	// 0x30e8bbe1
- (void)setIsZoomed:(BOOL)zoomed;	// 0x30e8c1d9
- (void)setMaximumValue:(double)value;	// 0x30e8c1b1
- (void)setMinimumValue:(double)value;	// 0x30e8c189
- (void)setStartValue:(double)value;	// 0x30e8c119
- (void)setValue:(double)value;	// 0x30e8c0e1
@end

