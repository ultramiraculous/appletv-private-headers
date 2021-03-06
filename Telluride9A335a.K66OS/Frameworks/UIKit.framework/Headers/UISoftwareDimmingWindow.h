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
@property(assign, nonatomic) float overlayLevel;	// G=0x33bd5189; S=0x33bd50b1; @synthesize=_overlayLevel
- (id)initWithFrame:(CGRect)frame;	// 0x33bd4fb5
- (BOOL)_ignoresHitTest;	// 0x33bd5049
// declared property getter: - (float)overlayLevel;	// 0x33bd5189
// declared property setter: - (void)setOverlayLevel:(float)level;	// 0x33bd50b1
- (void)updateOverlayColor;	// 0x33bd504d
@end

