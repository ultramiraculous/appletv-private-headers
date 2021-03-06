/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "_UISwitchInternalViewProtocol.h"

@class UIImageView, UIColor, UIImage, CALayer;

__attribute__((visibility("hidden")))
@interface _UISwitchInternalView : UIView <_UISwitchInternalViewProtocol> {
	UIImage *_colorMask;	// 96 = 0x60
	UIImage *_shapeMask;	// 100 = 0x64
	UIImage *_shapeShadow;	// 104 = 0x68
	UIImage *_thumb;	// 108 = 0x6c
	UIImage *_thumbPressed;	// 112 = 0x70
	float _position;	// 116 = 0x74
	BOOL _pressed;	// 120 = 0x78
	UIImageView *_colorView;	// 124 = 0x7c
	UIImageView *_thumbView;	// 128 = 0x80
	UIImageView *_labelView;	// 132 = 0x84
	UIColor *_onTintColor;	// 136 = 0x88
	UIColor *_tintColor;	// 140 = 0x8c
	UIColor *_thumbTintColor;	// 144 = 0x90
	UIColor *_nonAlternateColor;	// 148 = 0x94
	UIImage *_onImage;	// 152 = 0x98
	UIImage *_offImage;	// 156 = 0x9c
	BOOL _on;	// 160 = 0xa0
	BOOL _sendAction;	// 161 = 0xa1
	BOOL _useAlternateColor;	// 162 = 0xa2
	BOOL _animating;	// 163 = 0xa3
	UIImageView *_idleImageView;	// 164 = 0xa4
	UIView *_interactiveView;	// 168 = 0xa8
	CALayer *_backgroundLayer;	// 172 = 0xac
}
@property(retain, nonatomic) UIImage *offImage;	// G=0x2f6a6ed1; S=0x2f6a6e35; 
@property(assign, nonatomic) BOOL on;	// G=0x2f4aa099; S=0x2f576399; @synthesize=_on
@property(retain, nonatomic) UIImage *onImage;	// G=0x2f6a6ec1; S=0x2f6a6da9; 
@property(retain, nonatomic) UIColor *onTintColor;	// G=0x2f6a6ee1; S=0x2f4aa0f9; @synthesize=_onTintColor
@property(assign) BOOL sendAction;	// G=0x2f6a5efd; S=0x2f5763ad; converted property
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x2f6a6f11; S=0x2f6a5b5d; @synthesize=_thumbTintColor
@property(retain, nonatomic) UIColor *tintColor;	// G=0x2f6a6ef1; S=0x2f6a5a65; @synthesize=_tintColor
@property(assign, nonatomic) BOOL useAlternateColor;	// G=0x2f6a6f01; S=0x2f6a5bc5; @synthesize=_useAlternateColor
+ (id)_defaultOnTintColor;	// 0x2f4a8add
- (id)initWithFrame:(CGRect)frame;	// 0x2f4a8931
- (void)_buildControl;	// 0x2f4a8b09
- (void)_cleanUpAfterAnimating;	// 0x2f4a9c69
- (id)_colorImage;	// 0x2f4a97f5
- (id)_labelImage;	// 0x2f4a946d
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x2f6a5da5
- (void)_prepareForInteraction;	// 0x2f576295
- (void)_sendActions;	// 0x2f6a5d5d
- (void)_setOn:(BOOL)on animated:(BOOL)animated force:(BOOL)force;	// 0x2f6a5cfd
- (void)_setOnTintColor:(id)color;	// 0x2f4aa155
- (void)_setPressed:(BOOL)pressed;	// 0x2f6a5e45
- (void)_setPressed:(BOOL)pressed on:(BOOL)on animated:(BOOL)animated shouldAnimateLabels:(BOOL)labels completion:(id)completion;	// 0x2f6a5a01
- (void)_setProgress:(float)progress;	// 0x2f4a9a6d
- (void)_setProgress:(float)progress animated:(BOOL)animated withDuration:(float)duration force:(BOOL)force sendAction:(BOOL)action;	// 0x2f5763bd
- (void)_setupBackgroundLayer;	// 0x2f4a91b5
- (void)_setupThumbImages;	// 0x2f4a9885
- (id)_snapshotImage;	// 0x2f4a9e69
- (void)dealloc;	// 0x2f55ed09
// declared property getter: - (id)offImage;	// 0x2f6a6ed1
// declared property getter: - (BOOL)on;	// 0x2f4aa099
// declared property getter: - (id)onImage;	// 0x2f6a6ec1
// declared property getter: - (id)onTintColor;	// 0x2f6a6ee1
// converted property getter: - (BOOL)sendAction;	// 0x2f6a5efd
// declared property setter: - (void)setOffImage:(id)image;	// 0x2f6a6e35
// declared property setter: - (void)setOn:(BOOL)on;	// 0x2f576399
// declared property setter: - (void)setOnImage:(id)image;	// 0x2f6a6da9
// declared property setter: - (void)setOnTintColor:(id)color;	// 0x2f4aa0f9
// converted property setter: - (void)setSendAction:(BOOL)action;	// 0x2f5763ad
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x2f6a5b5d
// declared property setter: - (void)setTintColor:(id)color;	// 0x2f6a5a65
// declared property setter: - (void)setUseAlternateColor:(BOOL)color;	// 0x2f6a5bc5
// declared property getter: - (id)thumbTintColor;	// 0x2f6a6f11
// declared property getter: - (id)tintColor;	// 0x2f6a6ef1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f6a6d51
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f6a6d81
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f6a6d95
// declared property getter: - (BOOL)useAlternateColor;	// 0x2f6a6f01
@end

