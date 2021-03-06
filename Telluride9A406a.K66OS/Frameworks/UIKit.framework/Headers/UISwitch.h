/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"
#import "NSCoding.h"

@class UIColor;

@interface UISwitch : UIControl <NSCoding> {
@private
	id _control;	// 72 = 0x48
	float _enabledAlpha;	// 76 = 0x4c
}
@property(assign, nonatomic) float enabledAlpha;	// G=0x358dced9; S=0x35749a95; @synthesize=_enabledAlpha
@property(assign, nonatomic, getter=isOn) BOOL on;	// G=0x3580a821; S=0x3574a005; @dynamic
@property(retain, nonatomic, getter=_onColor, setter=_setOnColor:) UIColor *onColor;	// G=0x358dce15; S=0x358dce05; 
@property(retain, nonatomic) UIColor *onTintColor;	// G=0x358dce65; S=0x358dce45; 
- (id)init;	// 0x357ffcf1
- (id)initWithCoder:(id)coder;	// 0x358dc7a1
- (id)initWithFrame:(CGRect)frame;	// 0x3574765d
- (void)_animateToOn:(BOOL)on withDuration:(float)duration sendAction:(BOOL)action;	// 0x3580a271
- (void)_commonInitNewLook;	// 0x357477b1
- (void)_encodeFrameWithCoder:(id)coder;	// 0x358dc94d
- (void)_handlePanNL:(id)nl;	// 0x358dc55d
- (void)_handleTapNL:(id)nl;	// 0x3580a20d
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x358dccd1
// declared property getter: - (id)_onColor;	// 0x358dce15
- (id)_onTintColor;	// 0x358dce35
- (void)_populateArchivedSubviews:(id)subviews;	// 0x358dce85
- (id)_scriptingInfo;	// 0x358dcee9
- (void)_setAlpha:(float)alpha remember:(BOOL)remember;	// 0x358dcd69
// declared property setter: - (void)_setOnColor:(id)color;	// 0x358dce05
- (void)_setOnTintColor:(id)color;	// 0x358dce25
- (BOOL)_useOldSize;	// 0x357476d9
- (void)dealloc;	// 0x357fb8f5
- (unsigned long long)defaultAccessibilityTraits;	// 0x358ff61d
// declared property getter: - (float)enabledAlpha;	// 0x358dced9
- (void)encodeWithCoder:(id)coder;	// 0x358dcbe9
- (BOOL)isAccessibilityElementByDefault;	// 0x358ff619
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x358ff631
// declared property getter: - (BOOL)isOn;	// 0x3580a821
// declared property getter: - (id)onTintColor;	// 0x358dce65
- (void)setAlpha:(float)alpha;	// 0x3574ac5d
- (void)setAlternateColors:(BOOL)colors;	// 0x35749aa5
- (void)setEnabled:(BOOL)enabled;	// 0x3581e1cd
// declared property setter: - (void)setEnabledAlpha:(float)alpha;	// 0x35749a95
- (void)setFrame:(CGRect)frame;	// 0x3574770d
// declared property setter: - (void)setOn:(BOOL)on;	// 0x3574a005
- (void)setOn:(BOOL)on animated:(BOOL)animated;	// 0x3574a019
// declared property setter: - (void)setOnTintColor:(id)color;	// 0x358dce45
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35747779
@end

