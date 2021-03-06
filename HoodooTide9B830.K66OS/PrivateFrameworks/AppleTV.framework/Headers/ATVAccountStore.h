/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "SSAccountStore.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSLock, NSMutableArray, SSAccount;

@interface ATVAccountStore : NSObject <SSAccountStore> {
@private
	NSMutableArray *_accounts;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
@property(readonly, assign) NSArray *accounts;	// G=0x32b7a6e9; 
@property(readonly, assign) SSAccount *activeAccount;	// G=0x32b7a7dd; 
@property(readonly, assign) SSAccount *activeLockerAccount;	// G=0x32b7a8fd; 
@property(readonly, assign, getter=isExpired) BOOL expired;	// G=0x32b7aa75; 
+ (id)defaultStore;	// 0x32b7a67d
- (id)init;	// 0x32b7a4dd
- (void)_accountChangeNotification;	// 0x32b7b3b9
- (id)_addAccount:(id)account asActiveAccount:(BOOL)account2 asActiveLockerAccount:(BOOL)account3;	// 0x32b7b4bd
- (void)_atvAccountLogin:(id)login;	// 0x32b7c5f1
- (void)_atvAccountLogout:(id)logout;	// 0x32b7c6bd
- (id)_copyAccountsFromLockdown;	// 0x32b7b721
- (id)_copyActiveAccountIdentifier:(const CFStringRef *)identifier;	// 0x32b7bc79
- (id)_copyActiveLockerAccountIdentifier;	// 0x32b7bcf5
- (id)_newDemoAccount;	// 0x32b7bd6d
- (id)_ntsAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x32b7be79
- (id)_ntsAccounts;	// 0x32b7be41
- (void)_ntsSetActiveAccount:(id)account;	// 0x32b7bf41
- (void)_ntsSetActiveLockerAccount:(id)account;	// 0x32b7c075
- (void)_postAccountStoreDidChange;	// 0x32b7c1b9
- (void)_sendLogoutRequestForAccount:(id)account;	// 0x32b7c201
- (void)_setCreditsString:(id)string forAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x32b7c319
- (void)_signOutAccount:(id)account;	// 0x32b7c361
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x32b7a759
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;	// 0x32b7a7cd
// declared property getter: - (id)accounts;	// 0x32b7a6e9
// declared property getter: - (id)activeAccount;	// 0x32b7a7dd
// declared property getter: - (id)activeLockerAccount;	// 0x32b7a8fd
- (id)addAccount:(id)account;	// 0x32b7aa1d
- (id)addAccountWithUserInfo:(id)userInfo;	// 0x32b7afe9
- (void)dealloc;	// 0x32b7a605
// declared property getter: - (BOOL)isExpired;	// 0x32b7aa75
- (BOOL)isExpiredForTokenType:(int)tokenType;	// 0x32b7aa99
- (void)resetAccountWithUserInfo:(id)userInfo;	// 0x32b7b1c9
- (void)resetExpiration;	// 0x32b7aabd
- (void)resetExpirationForTokenType:(int)tokenType;	// 0x32b7aad9
- (void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x32b7aaf5
- (id)setAccountCreditsWithUserInfo:(id)userInfo;	// 0x32b7b235
- (id)setActiveAccount:(id)account;	// 0x32b7ab4d
- (id)setActiveLockerAccount:(id)account;	// 0x32b7ab6d
- (void)signOutAccount:(id)account;	// 0x32b7ab8d
- (id)signOutAccountsWithUserInfo:(id)userInfo;	// 0x32b7b2f5
- (void)signOutAllAccounts;	// 0x32b7ac01
- (void)synchronizeData;	// 0x32b7ad25
@end

