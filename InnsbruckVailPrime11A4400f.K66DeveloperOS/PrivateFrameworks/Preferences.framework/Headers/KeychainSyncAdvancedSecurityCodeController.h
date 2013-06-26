/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "UIAlertViewDelegate.h"
#import "PSKeychainSyncViewController.h"

@class UIFont, UIAlertView;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate> {
	float _cellTextWidth;	// 420 = 0x1a4
	UIFont *_cellFont;	// 424 = 0x1a8
	UIAlertView *_disableRecoveryConfirmationAlert;	// 428 = 0x1ac
	BOOL _showsDisableRecoveryOption;	// 432 = 0x1b0
}
@property(assign, nonatomic) BOOL showsDisableRecoveryOption;	// G=0x32497ab5; S=0x32497ac5; @synthesize=_showsDisableRecoveryOption
- (void)_finishedWithSpecifier:(id)specifier;	// 0x32497335
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x324979c9
- (void)dealloc;	// 0x32496d6d
- (void)nextPressed;	// 0x32497559
// declared property setter: - (void)setShowsDisableRecoveryOption:(BOOL)option;	// 0x32497ac5
// declared property getter: - (BOOL)showsDisableRecoveryOption;	// 0x32497ab5
- (id)specifiers;	// 0x32496f39
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x32497681
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x324975a9
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x32497869
- (void)viewDidLoad;	// 0x32496dd1
@end
