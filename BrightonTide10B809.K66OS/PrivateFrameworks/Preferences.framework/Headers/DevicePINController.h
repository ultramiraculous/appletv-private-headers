/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSDetailController.h"

@class UIBarButtonItem, NSString;

@interface DevicePINController : PSDetailController {
	int _mode;	// 212 = 0xd4
	int _substate;	// 216 = 0xd8
	NSString *_oldPassword;	// 220 = 0xdc
	NSString *_lastEntry;	// 224 = 0xe0
	BOOL _success;	// 228 = 0xe4
	id _pinDelegate;	// 232 = 0xe8
	UIBarButtonItem *_cancelButton;	// 236 = 0xec
	UIBarButtonItem *_nextButton;	// 240 = 0xf0
	UIBarButtonItem *_doneButton;	// 244 = 0xf4
	NSString *_error1;	// 248 = 0xf8
	NSString *_error2;	// 252 = 0xfc
}
+ (BOOL)settingEnabled;	// 0x352f39a1
- (id)init;	// 0x352f3a21
- (BOOL)_attemptValidationWithPIN:(id)pin;	// 0x352f4361
- (void)_clearBlockedState;	// 0x352f4165
- (void)_dismiss;	// 0x352f3b91
- (int)_getScreenType;	// 0x352f3f6d
- (BOOL)_isBlocked;	// 0x352f427d
- (int)_numberOfFailedAttempts;	// 0x352f40c9
- (void)_setNumberOfFailedAttempts:(int)failedAttempts;	// 0x352f4105
- (void)_setUnblockTime:(double)time;	// 0x352f42f1
- (void)_showFailedAttempts;	// 0x352f44fd
- (void)_showPINConfirmationError;	// 0x352f4a79
- (void)_showUnacceptablePINError:(id)error password:(id)password;	// 0x352f4969
- (void)_slidePasscodeField;	// 0x352f4f2d
- (BOOL)_success;	// 0x352f5b91
- (double)_unblockTime;	// 0x352f41e5
- (void)_updateErrorTextAndFailureCount:(BOOL)count;	// 0x352f45d1
- (void)_updatePINButtons;	// 0x352f4af9
- (void)_updateUI;	// 0x352f4911
- (void)adjustButtonsForPasswordLength:(unsigned)passwordLength;	// 0x352f4e11
- (CFStringRef)blockTimeIntervalKey;	// 0x352f3f55
- (CFStringRef)blockedStateKey;	// 0x352f3f61
- (void)cancelButtonTapped;	// 0x352f5591
- (BOOL)completedInputIsValid:(id)valid;	// 0x352f4e55
- (void)dealloc;	// 0x352f3c4d
- (CFStringRef)defaultsID;	// 0x352f3f3d
- (CFStringRef)failedAttemptsKey;	// 0x352f3f49
- (void)loadView;	// 0x352f4e59
- (CGRect)paneFrame;	// 0x352f5881
- (void)performActionAfterPINEntry;	// 0x352f44d1
- (void)performActionAfterPINRemove;	// 0x352f44d9
- (void)performActionAfterPINSet;	// 0x352f44d5
- (CGSize)pinContentSizeForViewInPopover;	// 0x352f3b3d
- (void)pinEntered:(id)entered;	// 0x352f5015
- (id)pinInstructionsPrompt;	// 0x352f5651
- (id)pinInstructionsPromptFont;	// 0x352f5795
- (BOOL)pinIsAcceptable:(id)acceptable outError:(id *)error;	// 0x352f3dad
- (int)pinLength;	// 0x352f3f39
- (BOOL)requiresKeyboard;	// 0x352f3ff1
- (void)setLastEntry:(id)entry;	// 0x352f3d71
- (void)setOldPassword:(id)password;	// 0x352f3d35
- (void)setPIN:(id)pin;	// 0x352f3e19
- (void)setPane:(id)pane;	// 0x352f590d
- (void)setSpecifier:(id)specifier;	// 0x352f3a95
- (BOOL)simplePIN;	// 0x352f40a9
- (id)stringsBundle;	// 0x352f3c15
- (id)stringsTable;	// 0x352f3c09
- (void)suspend;	// 0x352f44dd
- (BOOL)useProgressiveDelays;	// 0x352f3f35
- (BOOL)validatePIN:(id)pin;	// 0x352f3eb9
- (void)viewDidAppear:(BOOL)view;	// 0x352f5829
- (void)viewWillAppear:(BOOL)view;	// 0x352f57b9
- (void)viewWillLayoutSubviews;	// 0x352f4ead
- (void)willUnlock;	// 0x352f39d5
@end

