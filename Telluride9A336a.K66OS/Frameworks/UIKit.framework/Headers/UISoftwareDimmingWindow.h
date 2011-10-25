/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


__attribute__((visibility("hidden")))
@interface UISoftwareDimmingWindow : UIWindow {
@private
	float _overlayLevel;	// 132 = 0x84
}
@property(assign, nonatomic) float overlayLevel;	// G=0x3530f189; S=0x3530f0b1; @synthesize=_overlayLevel
- (id)initWithFrame:(CGRect)frame;	// 0x3530efb5
- (BOOL)_ignoresHitTest;	// 0x3530f049
// declared property getter: - (float)overlayLevel;	// 0x3530f189
// declared property setter: - (void)setOverlayLevel:(float)level;	// 0x3530f0b1
- (void)updateOverlayColor;	// 0x3530f04d
@end

