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
@property(readonly, retain) UIAlertView *alertSheet;	// G=0x303f1cc1; converted property
@property(assign, nonatomic) BOOL allowInSetup;	// G=0x303f2149; S=0x303f2159; @synthesize=_allowInSetup
@property(retain, nonatomic) NSArray *allowedBundleIDs;	// G=0x303f2189; S=0x303f2199; @synthesize=_allowedBundleIDs
@property(readonly, assign) BOOL didPlayPresentationSound;	// G=0x303f1e85; converted property
@property(assign, nonatomic) BOOL ignoreIfAlreadyDisplaying;	// G=0x303f2129; S=0x303f2139; @synthesize=_ignoreIfAlreadyDisplaying
@property(assign, nonatomic) BOOL pendInSetupIfNotAllowed;	// G=0x303f2169; S=0x303f2179; @synthesize=_pendInSetupIfNotAllowed
@property(assign) BOOL preventLockOver;	// G=0x303f1f95; S=0x303f1fa5; converted property
+ (id)_alertItemsController;	// 0x303f1c51
+ (void)activateAlertItem:(id)item;	// 0x303f1c79
- (id)init;	// 0x303f1d89
- (BOOL)_didEverActivate;	// 0x303f1fe1
- (void)_playPresentationSound;	// 0x303f1e95
- (id)alertItemNotificationDate;	// 0x303f20d1
- (id)alertItemNotificationSender;	// 0x303f20d5
- (int)alertItemNotificationType;	// 0x303f20cd
- (int)alertPriority;	// 0x303f20ed
// converted property getter: - (id)alertSheet;	// 0x303f1cc1
- (Class)alertSheetClass;	// 0x303f1ca5
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x303f2119
- (BOOL)allowAutoUnlock;	// 0x303f1e61
// declared property getter: - (BOOL)allowInSetup;	// 0x303f2149
- (BOOL)allowMenuButtonDismissal;	// 0x303f1e5d
// declared property getter: - (id)allowedBundleIDs;	// 0x303f2189
- (double)autoDismissInterval;	// 0x303f1f49
- (BOOL)behavesSuperModally;	// 0x303f20dd
- (void)buttonDismissed;	// 0x303f204d
- (void)cleanPreviousConfiguration;	// 0x303f1ee1
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x303f1f21
- (void)dealloc;	// 0x303f1de5
- (void)didActivate;	// 0x303f2045
- (void)didDeactivateForReason:(int)reason;	// 0x303f20c5
- (void)didFailToActivate;	// 0x303f20bd
// converted property getter: - (BOOL)didPlayPresentationSound;	// 0x303f1e85
- (void)dismiss;	// 0x303f2061
- (void)dismiss:(int)dismiss;	// 0x303f2075
- (BOOL)dismissOnLock;	// 0x303f1e79
- (BOOL)dismissOnModalDisplayActivation;	// 0x303f1e7d
- (BOOL)forcesModalAlertAppearance;	// 0x303f20d9
- (BOOL)hasActiveKeyboardOnScreen;	// 0x303f20f1
// declared property getter: - (BOOL)ignoreIfAlreadyDisplaying;	// 0x303f2129
- (BOOL)isCriticalAlert;	// 0x303f1e81
- (id)lockLabel;	// 0x303f1f25
- (float)lockLabelFontSize;	// 0x303f1f2d
- (void)noteVolumeOrLockPressed;	// 0x303f20c9
// declared property getter: - (BOOL)pendInSetupIfNotAllowed;	// 0x303f2169
- (void)performUnlockAction;	// 0x303f1f61
- (void)playPresentationSound;	// 0x303f1e99
- (BOOL)preventInterruption;	// 0x303f20e9
// converted property getter: - (BOOL)preventLockOver;	// 0x303f1f95
- (BOOL)reappearsAfterLock;	// 0x303f20e1
- (BOOL)reappearsAfterUnlock;	// 0x303f20e5
- (void)screenWillUndim;	// 0x303f20b9
// declared property setter: - (void)setAllowInSetup:(BOOL)setup;	// 0x303f2159
// declared property setter: - (void)setAllowedBundleIDs:(id)ids;	// 0x303f2199
// declared property setter: - (void)setIgnoreIfAlreadyDisplaying:(BOOL)displaying;	// 0x303f2139
- (void)setOrderOverSBAlert:(BOOL)alert;	// 0x303f1f65
// declared property setter: - (void)setPendInSetupIfNotAllowed:(BOOL)setupIfNotAllowed;	// 0x303f2179
// converted property setter: - (void)setPreventLockOver:(BOOL)over;	// 0x303f1fa5
- (id)shortLockLabel;	// 0x303f1f29
- (BOOL)shouldShowInEmergencyCall;	// 0x303f1e69
- (BOOL)shouldShowInLockScreen;	// 0x303f1e65
- (BOOL)togglesMediaControls;	// 0x303f1e75
- (BOOL)undimsScreen;	// 0x303f1e6d
- (BOOL)unlocksScreen;	// 0x303f1e71
- (void)willActivate;	// 0x303f1ff1
- (void)willDeactivateForReason:(int)reason;	// 0x303f20c1
- (void)willRelockForButtonPress:(BOOL)buttonPress;	// 0x303f2049
@end
