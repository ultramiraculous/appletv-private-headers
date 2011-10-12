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
@property(assign, nonatomic) BOOL on;	// G=0x3010009d; S=0x301c0319; @synthesize=_on
@property(assign) BOOL sendAction;	// G=0x3029247d; S=0x301c0329; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x300ff441; S=0x302923bd; @synthesize=_tintColor
@property(assign, nonatomic) BOOL useAleternateColor;	// G=0x302924a1; S=0x300ffac5; @synthesize=_useAleternateColor
- (id)initWithFrame:(CGRect)frame;	// 0x300fd9c5
- (void)_buildControl;	// 0x300fdd71
- (void)_cleanUpAfterAnimating;	// 0x300ff6d5
- (id)_colorImage;	// 0x300ff26d
- (id)_createLabelImage;	// 0x300fe611
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x301c06ad
- (void)_prepareForInteraction;	// 0x301c0115
- (void)_sendActions;	// 0x301c07dd
- (void)_setOn:(BOOL)on animated:(BOOL)animated force:(BOOL)force;	// 0x30292411
- (void)_setPressed:(BOOL)pressed;	// 0x301c0159
- (void)_setProgress:(float)progress;	// 0x300ff4c5
- (void)_setProgress:(float)progress animated:(BOOL)animated withDuration:(float)duration force:(BOOL)force sendAction:(BOOL)action;	// 0x301c0339
- (void)_setTintColor:(id)color;	// 0x300ffc3d
- (id)_snapshotImage;	// 0x300ff8dd
- (void)dealloc;	// 0x301b1941
// declared property getter: - (BOOL)on;	// 0x3010009d
// converted property getter: - (BOOL)sendAction;	// 0x3029247d
// declared property setter: - (void)setOn:(BOOL)on;	// 0x301c0319
// converted property setter: - (void)setSendAction:(BOOL)action;	// 0x301c0329
// declared property setter: - (void)setTintColor:(id)color;	// 0x302923bd
// declared property setter: - (void)setUseAleternateColor:(BOOL)color;	// 0x300ffac5
// declared property getter: - (id)tintColor;	// 0x300ff441
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x301c00e5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3029248d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x301c0699
// declared property getter: - (BOOL)useAleternateColor;	// 0x302924a1
@end

