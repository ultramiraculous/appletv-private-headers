/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRStatusAlertControlDelegate, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRStatusAlertControl : BRControl {
	BRStatusAlertControlDelegate *_animationDelegate;	// 80 = 0x50
	BRImageControl *_background;	// 84 = 0x54
	BRImageControl *_overlay;	// 88 = 0x58
	int _fadeHalfCount;	// 92 = 0x5c
	int _maxFadeCount;	// 96 = 0x60
}
+ (id)alertWithType:(int)type;	// 0x28ad89
+ (void)postStatusAlertOfType:(id)type;	// 0x28ade5
- (id)init;	// 0x28af65
- (void)_cancel;	// 0x28b609
- (void)_setDuration:(float)duration;	// 0x28b5c5
- (void)_setType:(int)type;	// 0x28b231
- (id)accessibilityLabel;	// 0x28b211
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x28b189
- (void)dealloc;	// 0x28afa5
- (BOOL)isAccessibilityElement;	// 0x28b20d
- (void)layoutSubcontrols;	// 0x28b031
@end

