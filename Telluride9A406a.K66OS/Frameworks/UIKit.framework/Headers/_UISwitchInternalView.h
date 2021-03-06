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
@property(assign, nonatomic) BOOL on;	// G=0x3574a09d; S=0x3580a319; @synthesize=_on
@property(assign) BOOL sendAction;	// G=0x358dc47d; S=0x3580a329; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x35749441; S=0x358dc3bd; @synthesize=_tintColor
@property(assign, nonatomic) BOOL useAleternateColor;	// G=0x358dc4a1; S=0x35749ac5; @synthesize=_useAleternateColor
- (id)initWithFrame:(CGRect)frame;	// 0x357479c5
- (void)_buildControl;	// 0x35747d71
- (void)_cleanUpAfterAnimating;	// 0x357496d5
- (id)_colorImage;	// 0x3574926d
- (id)_createLabelImage;	// 0x35748611
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x3580a6ad
- (void)_prepareForInteraction;	// 0x3580a115
- (void)_sendActions;	// 0x3580a7dd
- (void)_setOn:(BOOL)on animated:(BOOL)animated force:(BOOL)force;	// 0x358dc411
- (void)_setPressed:(BOOL)pressed;	// 0x3580a159
- (void)_setProgress:(float)progress;	// 0x357494c5
- (void)_setProgress:(float)progress animated:(BOOL)animated withDuration:(float)duration force:(BOOL)force sendAction:(BOOL)action;	// 0x3580a339
- (void)_setTintColor:(id)color;	// 0x35749c3d
- (id)_snapshotImage;	// 0x357498dd
- (void)dealloc;	// 0x357fb941
// declared property getter: - (BOOL)on;	// 0x3574a09d
// converted property getter: - (BOOL)sendAction;	// 0x358dc47d
// declared property setter: - (void)setOn:(BOOL)on;	// 0x3580a319
// converted property setter: - (void)setSendAction:(BOOL)action;	// 0x3580a329
// declared property setter: - (void)setTintColor:(id)color;	// 0x358dc3bd
// declared property setter: - (void)setUseAleternateColor:(BOOL)color;	// 0x35749ac5
// declared property getter: - (id)tintColor;	// 0x35749441
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3580a0e5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x358dc48d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3580a699
// declared property getter: - (BOOL)useAleternateColor;	// 0x358dc4a1
@end

