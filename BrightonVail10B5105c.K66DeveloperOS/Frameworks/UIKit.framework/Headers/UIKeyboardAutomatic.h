/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboard.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard {
	BOOL showsCandidateBar;	// 100 = 0x64
	BOOL showsCandidateInline;	// 101 = 0x65
	BOOL caretBlinks;	// 102 = 0x66
}
@property(assign, nonatomic) BOOL caretBlinks;	// G=0x34875379; S=0x34875389; @synthesize
@property(assign, nonatomic) BOOL showsCandidateBar;	// G=0x34875359; S=0x346e4361; @synthesize
@property(assign, nonatomic) BOOL showsCandidateInline;	// G=0x34875369; S=0x346e4381; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x34630129
- (BOOL)_isAutomaticKeyboard;	// 0x346c3a05
- (void)activate;	// 0x34645ee1
// declared property getter: - (BOOL)caretBlinks;	// 0x34875379
- (void)dealloc;	// 0x34874cf1
- (void)didSuspend:(id)suspend;	// 0x346e41e5
- (UIPeripheralAnimationGeometry)geometryForHeightDelta:(float)heightDelta;	// 0x34874db9
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x3487513d
- (BOOL)isActive;	// 0x34644fbd
- (void)maximize;	// 0x34874d81
- (void)minimize;	// 0x34874d4d
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x3487501d
// declared property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x34875389
// declared property setter: - (void)setShowsCandidateBar:(BOOL)bar;	// 0x346e4361
// declared property setter: - (void)setShowsCandidateInline:(BOOL)anInline;	// 0x346e4381
// declared property getter: - (BOOL)showsCandidateBar;	// 0x34875359
// declared property getter: - (BOOL)showsCandidateInline;	// 0x34875369
- (void)willResume:(id)resume;	// 0x346e577d
@end

