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
	float _overlayLevel;	// 196 = 0xc4
}
@property(assign, nonatomic) float overlayLevel;	// G=0x30b1ce5d; S=0x30b1cd85; @synthesize=_overlayLevel
- (id)initWithFrame:(CGRect)frame;	// 0x30b1cc89
- (BOOL)_ignoresHitTest;	// 0x30b1cd1d
// declared property getter: - (float)overlayLevel;	// 0x30b1ce5d
// declared property setter: - (void)setOverlayLevel:(float)level;	// 0x30b1cd85
- (void)updateOverlayColor;	// 0x30b1cd21
@end

