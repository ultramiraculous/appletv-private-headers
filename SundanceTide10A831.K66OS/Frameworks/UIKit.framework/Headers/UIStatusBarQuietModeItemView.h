/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarIndicatorItemView.h"


__attribute__((visibility("hidden")))
@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView {
	BOOL _hideForAction;	// 76 = 0x4c
	BOOL _registeredForNotifications;	// 77 = 0x4d
}
- (void)_triggerAction;	// 0x3203562d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x320355e5
- (void)dealloc;	// 0x320354d1
- (float)extraRightPadding;	// 0x320355dd
- (void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;	// 0x32035b99
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x3203552d
@end
