/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRStatusAlertControlDelegate;

@interface BRStatusAlertControl : BRControl {
@private
	BRStatusAlertControlDelegate *_animationDelegate;	// 44 = 0x2c
	BRImageControl *_background;	// 48 = 0x30
	BRImageControl *_overlay;	// 52 = 0x34
	int _fadeHalfCount;	// 56 = 0x38
}
+ (id)alertWithType:(int)type;	// 0x32f5f8a5
+ (void)postStatusAlertOfType:(id)type;	// 0x32f5f7c5
- (void)_cancel;	// 0x32f5f6d5
- (void)_setType:(int)type;	// 0x32f5faf5
- (id)accessibilityLabel;	// 0x32f5f731
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x32f5f751
- (void)dealloc;	// 0x32f5f931
- (BOOL)isAccessibilityElement;	// 0x32f5f69d
- (void)layoutSubcontrols;	// 0x32f5f9b1
@end

