/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate {
@private
	BOOL _useDefaultModalPresentationStyle;	// 20 = 0x14
	BOOL _useDefaultModalTransitionStyle;	// 21 = 0x15
	int _modalPresentationStyle;	// 24 = 0x18
	int _modalTransitionStyle;	// 28 = 0x1c
}
@property(assign, nonatomic) int modalPresentationStyle;	// G=0x3323aec9; S=0x3323aed9; @synthesize=_modalPresentationStyle
@property(assign, nonatomic) int modalTransitionStyle;	// G=0x3323aee9; S=0x3323aef9; @synthesize=_modalTransitionStyle
@property(assign, nonatomic) BOOL useDefaultModalPresentationStyle;	// G=0x3323ae89; S=0x3323ae99; @synthesize=_useDefaultModalPresentationStyle
@property(assign, nonatomic) BOOL useDefaultModalTransitionStyle;	// G=0x3323aea9; S=0x3323aeb9; @synthesize=_useDefaultModalTransitionStyle
- (id)initWithCoder:(id)coder;	// 0x3323ac35
- (id)defaultSegueClassName;	// 0x3323adc9
- (void)encodeWithCoder:(id)coder;	// 0x3323ad21
// declared property getter: - (int)modalPresentationStyle;	// 0x3323aec9
// declared property getter: - (int)modalTransitionStyle;	// 0x3323aee9
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x3323add5
// declared property setter: - (void)setModalPresentationStyle:(int)style;	// 0x3323aed9
// declared property setter: - (void)setModalTransitionStyle:(int)style;	// 0x3323aef9
// declared property setter: - (void)setUseDefaultModalPresentationStyle:(BOOL)style;	// 0x3323ae99
// declared property setter: - (void)setUseDefaultModalTransitionStyle:(BOOL)style;	// 0x3323aeb9
// declared property getter: - (BOOL)useDefaultModalPresentationStyle;	// 0x3323ae89
// declared property getter: - (BOOL)useDefaultModalTransitionStyle;	// 0x3323aea9
@end

