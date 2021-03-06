/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UISwitchInternalView : UIView {
@private
	UIImage *_colorMask;	// 48 = 0x30
	UIImage *_shapeMask;	// 52 = 0x34
	UIImage *_shapeShadow;	// 56 = 0x38
	UIImage *_thumb;	// 60 = 0x3c
	UIImage *_thumbPressed;	// 64 = 0x40
	float _position;	// 68 = 0x44
	BOOL _pressed;	// 72 = 0x48
	UIImageView *_colorView;	// 76 = 0x4c
	UIImageView *_thumbView;	// 80 = 0x50
	UIImageView *_labelView;	// 84 = 0x54
	UIColor *_tintColor;	// 88 = 0x58
	UIColor *_nonAlternateColor;	// 92 = 0x5c
	BOOL _on;	// 96 = 0x60
	BOOL _sendAction;	// 97 = 0x61
	BOOL _useAleternateColor;	// 98 = 0x62
	BOOL _animating;	// 99 = 0x63
	UIImageView *_idleImageView;	// 100 = 0x64
	UIView *_interactiveView;	// 104 = 0x68
}
@property(assign, nonatomic) BOOL on;	// G=0x300eeca1; S=0x301afb21; @synthesize=_on
@property(assign) BOOL sendAction;	// G=0x30285179; S=0x301afb31; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x300ee045; S=0x302850b9; @synthesize=_tintColor
@property(assign, nonatomic) BOOL useAleternateColor;	// G=0x3028519d; S=0x300ee6c9; @synthesize=_useAleternateColor
- (id)initWithFrame:(CGRect)frame;	// 0x300ec5c9
- (void)_buildControl;	// 0x300ec975
- (void)_cleanUpAfterAnimating;	// 0x300ee2d9
- (id)_colorImage;	// 0x300ede71
- (id)_createLabelImage;	// 0x300ed215
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x301afeb5
- (void)_prepareForInteraction;	// 0x301af91d
- (void)_sendActions;	// 0x301affe5
- (void)_setOn:(BOOL)on animated:(BOOL)animated force:(BOOL)force;	// 0x3028510d
- (void)_setPressed:(BOOL)pressed;	// 0x301af961
- (void)_setProgress:(float)progress;	// 0x300ee0c9
- (void)_setProgress:(float)progress animated:(BOOL)animated withDuration:(float)duration force:(BOOL)force sendAction:(BOOL)action;	// 0x301afb41
- (void)_setTintColor:(id)color;	// 0x300ee841
- (id)_snapshotImage;	// 0x300ee4e1
- (void)dealloc;	// 0x301a13bd
// declared property getter: - (BOOL)on;	// 0x300eeca1
// converted property getter: - (BOOL)sendAction;	// 0x30285179
// declared property setter: - (void)setOn:(BOOL)on;	// 0x301afb21
// converted property setter: - (void)setSendAction:(BOOL)action;	// 0x301afb31
// declared property setter: - (void)setTintColor:(id)color;	// 0x302850b9
// declared property setter: - (void)setUseAleternateColor:(BOOL)color;	// 0x300ee6c9
// declared property getter: - (id)tintColor;	// 0x300ee045
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x301af8ed
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30285189
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x301afea1
// declared property getter: - (BOOL)useAleternateColor;	// 0x3028519d
@end

