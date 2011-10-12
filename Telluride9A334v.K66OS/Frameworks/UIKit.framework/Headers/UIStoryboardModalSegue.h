/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegue.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardModalSegue : UIStoryboardSegue {
@private
	BOOL _useDefaultModalPresentationStyle;	// 16 = 0x10
	BOOL _useDefaultModalTransitionStyle;	// 17 = 0x11
	int _modalPresentationStyle;	// 20 = 0x14
	int _modalTransitionStyle;	// 24 = 0x18
}
@property(assign, nonatomic) int modalPresentationStyle;	// G=0x303a3e7d; S=0x303a3e8d; @synthesize=_modalPresentationStyle
@property(assign, nonatomic) int modalTransitionStyle;	// G=0x303a3e9d; S=0x303a3ead; @synthesize=_modalTransitionStyle
@property(assign, nonatomic) BOOL useDefaultModalPresentationStyle;	// G=0x303a3e3d; S=0x303a3e4d; @synthesize=_useDefaultModalPresentationStyle
@property(assign, nonatomic) BOOL useDefaultModalTransitionStyle;	// G=0x303a3e5d; S=0x303a3e6d; @synthesize=_useDefaultModalTransitionStyle
// declared property getter: - (int)modalPresentationStyle;	// 0x303a3e7d
// declared property getter: - (int)modalTransitionStyle;	// 0x303a3e9d
- (void)perform;	// 0x303a3d51
// declared property setter: - (void)setModalPresentationStyle:(int)style;	// 0x303a3e8d
// declared property setter: - (void)setModalTransitionStyle:(int)style;	// 0x303a3ead
// declared property setter: - (void)setUseDefaultModalPresentationStyle:(BOOL)style;	// 0x303a3e4d
// declared property setter: - (void)setUseDefaultModalTransitionStyle:(BOOL)style;	// 0x303a3e6d
// declared property getter: - (BOOL)useDefaultModalPresentationStyle;	// 0x303a3e3d
// declared property getter: - (BOOL)useDefaultModalTransitionStyle;	// 0x303a3e5d
@end

