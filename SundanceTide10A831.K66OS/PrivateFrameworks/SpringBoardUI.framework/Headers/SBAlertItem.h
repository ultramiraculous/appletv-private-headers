/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class NSArray, UIAlertView;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
	UIAlertView *_alertSheet;	// 4 = 0x4
	BOOL _orderOverSBAlert;	// 8 = 0x8
	BOOL _preventLockOver;	// 9 = 0x9
	BOOL _didEverActivate;	// 10 = 0xa
	BOOL _ignoreIfAlreadyDisplaying;	// 11 = 0xb
	BOOL _didPlayPresentationSound;	// 12 = 0xc
	BOOL _allowInSetup;	// 13 = 0xd
	BOOL _pendInSetupIfNotAllowed;	// 14 = 0xe
	NSArray *_allowedBundleIDs;	// 16 = 0x10
}
@property(readonly, retain) UIAlertView *alertSheet;	// G=0x3779ccc1; converted property
@property(assign, nonatomic) BOOL allowInSetup;	// G=0x3779d149; S=0x3779d159; @synthesize=_allowInSetup
@property(retain, nonatomic) NSArray *allowedBundleIDs;	// G=0x3779d189; S=0x3779d199; @synthesize=_allowedBundleIDs
@property(readonly, assign) BOOL didPlayPresentationSound;	// G=0x3779ce85; converted property
@property(assign, nonatomic) BOOL ignoreIfAlreadyDisplaying;	// G=0x3779d129; S=0x3779d139; @synthesize=_ignoreIfAlreadyDisplaying
@property(assign, nonatomic) BOOL pendInSetupIfNotAllowed;	// G=0x3779d169; S=0x3779d179; @synthesize=_pendInSetupIfNotAllowed
@property(assign) BOOL preventLockOver;	// G=0x3779cf95; S=0x3779cfa5; converted property
+ (id)_alertItemsController;	// 0x3779cc51
+ (void)activateAlertItem:(id)item;	// 0x3779cc79
- (id)init;	// 0x3779cd89
- (BOOL)_didEverActivate;	// 0x3779cfe1
- (void)_playPresentationSound;	// 0x3779ce95
- (id)alertItemNotificationDate;	// 0x3779d0d1
- (id)alertItemNotificationSender;	// 0x3779d0d5
- (int)alertItemNotificationType;	// 0x3779d0cd
- (int)alertPriority;	// 0x3779d0ed
// converted property getter: - (id)alertSheet;	// 0x3779ccc1
- (Class)alertSheetClass;	// 0x3779cca5
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3779d119
- (BOOL)allowAutoUnlock;	// 0x3779ce61
// declared property getter: - (BOOL)allowInSetup;	// 0x3779d149
- (BOOL)allowMenuButtonDismissal;	// 0x3779ce5d
// declared property getter: - (id)allowedBundleIDs;	// 0x3779d189
- (double)autoDismissInterval;	// 0x3779cf49
- (BOOL)behavesSuperModally;	// 0x3779d0dd
- (void)buttonDismissed;	// 0x3779d04d
- (void)cleanPreviousConfiguration;	// 0x3779cee1
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x3779cf21
- (void)dealloc;	// 0x3779cde5
- (void)didActivate;	// 0x3779d045
- (void)didDeactivateForReason:(int)reason;	// 0x3779d0c5
- (void)didFailToActivate;	// 0x3779d0bd
// converted property getter: - (BOOL)didPlayPresentationSound;	// 0x3779ce85
- (void)dismiss;	// 0x3779d061
- (void)dismiss:(int)dismiss;	// 0x3779d075
- (BOOL)dismissOnLock;	// 0x3779ce79
- (BOOL)dismissOnModalDisplayActivation;	// 0x3779ce7d
- (BOOL)forcesModalAlertAppearance;	// 0x3779d0d9
- (BOOL)hasActiveKeyboardOnScreen;	// 0x3779d0f1
// declared property getter: - (BOOL)ignoreIfAlreadyDisplaying;	// 0x3779d129
- (BOOL)isCriticalAlert;	// 0x3779ce81
- (id)lockLabel;	// 0x3779cf25
- (float)lockLabelFontSize;	// 0x3779cf2d
- (void)noteVolumeOrLockPressed;	// 0x3779d0c9
// declared property getter: - (BOOL)pendInSetupIfNotAllowed;	// 0x3779d169
- (void)performUnlockAction;	// 0x3779cf61
- (void)playPresentationSound;	// 0x3779ce99
- (BOOL)preventInterruption;	// 0x3779d0e9
// converted property getter: - (BOOL)preventLockOver;	// 0x3779cf95
- (BOOL)reappearsAfterLock;	// 0x3779d0e1
- (BOOL)reappearsAfterUnlock;	// 0x3779d0e5
- (void)screenWillUndim;	// 0x3779d0b9
// declared property setter: - (void)setAllowInSetup:(BOOL)setup;	// 0x3779d159
// declared property setter: - (void)setAllowedBundleIDs:(id)ids;	// 0x3779d199
// declared property setter: - (void)setIgnoreIfAlreadyDisplaying:(BOOL)displaying;	// 0x3779d139
- (void)setOrderOverSBAlert:(BOOL)alert;	// 0x3779cf65
// declared property setter: - (void)setPendInSetupIfNotAllowed:(BOOL)setupIfNotAllowed;	// 0x3779d179
// converted property setter: - (void)setPreventLockOver:(BOOL)over;	// 0x3779cfa5
- (id)shortLockLabel;	// 0x3779cf29
- (BOOL)shouldShowInEmergencyCall;	// 0x3779ce69
- (BOOL)shouldShowInLockScreen;	// 0x3779ce65
- (BOOL)togglesMediaControls;	// 0x3779ce75
- (BOOL)undimsScreen;	// 0x3779ce6d
- (BOOL)unlocksScreen;	// 0x3779ce71
- (void)willActivate;	// 0x3779cff1
- (void)willDeactivateForReason:(int)reason;	// 0x3779d0c1
- (void)willRelockForButtonPress:(BOOL)buttonPress;	// 0x3779d049
@end

