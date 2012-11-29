/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate {
	BOOL _useDefaultModalPresentationStyle;	// 24 = 0x18
	BOOL _useDefaultModalTransitionStyle;	// 25 = 0x19
	int _modalPresentationStyle;	// 28 = 0x1c
	int _modalTransitionStyle;	// 32 = 0x20
	BOOL _animates;	// 36 = 0x24
}
@property(assign, nonatomic) BOOL animates;	// G=0x30c42551; S=0x30c42561; @synthesize=_animates
@property(assign, nonatomic) int modalPresentationStyle;	// G=0x30c42511; S=0x30c42521; @synthesize=_modalPresentationStyle
@property(assign, nonatomic) int modalTransitionStyle;	// G=0x30c42531; S=0x30c42541; @synthesize=_modalTransitionStyle
@property(assign, nonatomic) BOOL useDefaultModalPresentationStyle;	// G=0x30c424d1; S=0x30c424e1; @synthesize=_useDefaultModalPresentationStyle
@property(assign, nonatomic) BOOL useDefaultModalTransitionStyle;	// G=0x30c424f1; S=0x30c42501; @synthesize=_useDefaultModalTransitionStyle
- (id)initWithCoder:(id)coder;	// 0x30c421d9
// declared property getter: - (BOOL)animates;	// 0x30c42551
- (id)defaultSegueClassName;	// 0x30c423f1
- (void)encodeWithCoder:(id)coder;	// 0x30c4231d
// declared property getter: - (int)modalPresentationStyle;	// 0x30c42511
// declared property getter: - (int)modalTransitionStyle;	// 0x30c42531
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x30c423fd
// declared property setter: - (void)setAnimates:(BOOL)animates;	// 0x30c42561
// declared property setter: - (void)setModalPresentationStyle:(int)style;	// 0x30c42521
// declared property setter: - (void)setModalTransitionStyle:(int)style;	// 0x30c42541
// declared property setter: - (void)setUseDefaultModalPresentationStyle:(BOOL)style;	// 0x30c424e1
// declared property setter: - (void)setUseDefaultModalTransitionStyle:(BOOL)style;	// 0x30c42501
// declared property getter: - (BOOL)useDefaultModalPresentationStyle;	// 0x30c424d1
// declared property getter: - (BOOL)useDefaultModalTransitionStyle;	// 0x30c424f1
@end
