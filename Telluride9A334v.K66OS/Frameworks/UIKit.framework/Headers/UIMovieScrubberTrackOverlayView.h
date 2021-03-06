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
@private
	double _value;	// 48 = 0x30
	double _minimumValue;	// 56 = 0x38
	double _maximumValue;	// 64 = 0x40
	double _startValue;	// 72 = 0x48
	double _endValue;	// 80 = 0x50
	UIView *_leftFillView;	// 88 = 0x58
	UIView *_rightFillView;	// 92 = 0x5c
	UIView *_innerShadowView;	// 96 = 0x60
	CGRect _leftFillFrame;	// 100 = 0x64
	CGRect _rightFillFrame;	// 116 = 0x74
	unsigned _editingHandle;	// 132 = 0x84
	unsigned _editing : 1;	// 136 = 0x88
	unsigned _zoomed : 1;	// 136 = 0x88
}
- (id)initWithFrame:(CGRect)frame;	// 0x302c68fd
- (void)_clampValueAndLayout;	// 0x302c6ee5
- (void)_updateLeftFill;	// 0x302c6b99
- (void)_updateRightFill;	// 0x302c6ccd
- (void)animateFillFramesAway;	// 0x302c6e01
- (void)layoutSubviews;	// 0x302c711d
- (void)setEditing:(BOOL)editing;	// 0x302c6f4d
- (void)setEditingHandle:(int)handle;	// 0x302c710d
- (void)setEndValue:(double)value;	// 0x302c7069
- (void)setFrame:(CGRect)frame;	// 0x302c6b05
- (void)setIsZoomed:(BOOL)zoomed;	// 0x302c70f5
- (void)setMaximumValue:(double)value;	// 0x302c70cd
- (void)setMinimumValue:(double)value;	// 0x302c70a5
- (void)setStartValue:(double)value;	// 0x302c702d
- (void)setValue:(double)value;	// 0x302c6ff1
@end

