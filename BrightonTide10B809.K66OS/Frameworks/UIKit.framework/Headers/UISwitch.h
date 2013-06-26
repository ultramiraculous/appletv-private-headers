/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class UIColor, UIImage;

@interface UISwitch : UIControl <NSCoding> {
	id _control;	// 108 = 0x6c
	float _enabledAlpha;	// 112 = 0x70
}
@property(assign, nonatomic) float enabledAlpha;	// G=0x32d65135; S=0x32bbfc3d; @synthesize=_enabledAlpha
@property(retain, nonatomic) UIImage *offImage;	// G=0x32d65085; S=0x32d65065; 
@property(assign, nonatomic, getter=isOn) BOOL on;	// G=0x32bc4931; S=0x32bbfc5d; @dynamic
@property(retain, nonatomic, getter=_onColor, setter=_setOnColor:) UIColor *onColor;	// G=0x32d64f95; S=0x32d64f85; 
@property(retain, nonatomic) UIImage *onImage;	// G=0x32d650c5; S=0x32d650a5; 
@property(retain, nonatomic) UIColor *onTintColor;	// G=0x32d64fc5; S=0x32bbfe2d; 
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x32d65045; S=0x32d65025; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32d65005; S=0x32d64fe5; 
- (id)init;	// 0x32d6470d
- (id)initWithCoder:(id)coder;	// 0x32d64761
- (id)initWithFrame:(CGRect)frame;	// 0x32bbe271
- (void)_animateToOn:(BOOL)on withDuration:(float)duration sendAction:(BOOL)action;	// 0x32cacc61
- (void)_commonInitNewLook;	// 0x32bbe409
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x32d64f6d
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x32d64f69
- (void)_encodeFrameWithCoder:(id)coder;	// 0x32d64a15
- (void)_handlePanNL:(id)nl;	// 0x32d64479
- (void)_handleTapNL:(id)nl;	// 0x32d646a9
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x32bbe3c1
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x32d64ed1
// declared property getter: - (id)_onColor;	// 0x32d64f95
- (id)_onTintColor;	// 0x32d64fb5
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32d650e5
- (id)_scriptingInfo;	// 0x32d65165
// declared property setter: - (void)_setOnColor:(id)color;	// 0x32d64f85
- (void)_setOnTintColor:(id)color;	// 0x32d64fa5
- (BOOL)_useOldSize;	// 0x32bbe2f5
- (UIEdgeInsets)alignmentRectInsets;	// 0x32d64f71
- (void)dealloc;	// 0x32c8c66d
- (unsigned long long)defaultAccessibilityTraits;	// 0x32d80f75
// declared property getter: - (float)enabledAlpha;	// 0x32d65135
- (void)encodeWithCoder:(id)coder;	// 0x32d64cad
- (BOOL)isAccessibilityElementByDefault;	// 0x32d80f71
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32d80f89
// declared property getter: - (BOOL)isOn;	// 0x32bc4931
// declared property getter: - (id)offImage;	// 0x32d65085
// declared property getter: - (id)onImage;	// 0x32d650c5
// declared property getter: - (id)onTintColor;	// 0x32d64fc5
- (void)setAlpha:(float)alpha;	// 0x32bc0b51
- (void)setAlternateColors:(BOOL)colors;	// 0x32d65145
- (void)setEnabled:(BOOL)enabled;	// 0x32bc4955
// declared property setter: - (void)setEnabledAlpha:(float)alpha;	// 0x32bbfc3d
- (void)setFrame:(CGRect)frame;	// 0x32bbe32d
// declared property setter: - (void)setOffImage:(id)image;	// 0x32d65065
// declared property setter: - (void)setOn:(BOOL)on;	// 0x32bbfc5d
- (void)setOn:(BOOL)on animated:(BOOL)animated;	// 0x32bbfc71
// declared property setter: - (void)setOnImage:(id)image;	// 0x32d650a5
// declared property setter: - (void)setOnTintColor:(id)color;	// 0x32bbfe2d
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x32d65025
// declared property setter: - (void)setTintColor:(id)color;	// 0x32d64fe5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32bbe391
// declared property getter: - (id)thumbTintColor;	// 0x32d65045
// declared property getter: - (id)tintColor;	// 0x32d65005
@end
