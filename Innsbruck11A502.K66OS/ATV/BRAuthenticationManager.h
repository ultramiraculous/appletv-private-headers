/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRAccountType, BRAuthenticator;

__attribute__((visibility("hidden")))
@interface BRAuthenticationManager : XXUnknownSuperclass {
	BOOL _isChangingAccounts;	// 4 = 0x4
	BRAccountType *_accountType;	// 8 = 0x8
	BRAuthenticator *__authenticator;	// 12 = 0xc
	id __authenticatorCreation;	// 16 = 0x10
}
@property(retain, nonatomic) BRAuthenticator *_authenticator;	// G=0x413e7d; S=0x413e8d; @synthesize=__authenticator
@property(copy, nonatomic) id _authenticatorCreation;	// G=0x413e9d; S=0x413eb1; @synthesize=__authenticatorCreation
@property(retain, nonatomic) BRAccountType *accountType;	// G=0x413e5d; S=0x413e6d; @synthesize=_accountType
+ (id)managerForAccountType:(id)accountType;	// 0x414391
+ (void)registerManager:(id)manager;	// 0x414259
- (id)initWithAccountType:(id)accountType authenticatorCreation:(id)creation;	// 0x413a89
- (void)_accountManagerPreferredAccountEstablished:(id)established;	// 0x413f29
- (void)_accountManagerPreferredAccountRemoved:(id)removed;	// 0x413f59
- (void)_authenticationCancelledForAuthenticator:(id)authenticator;	// 0x413dd1
- (void)_authenticationFailedForAuthenticator:(id)authenticator;	// 0x413d99
- (void)_authenticationFinalizedForAuthenticator:(id)authenticator;	// 0x413e09
- (void)_authenticationSucceededForAuthenticator:(id)authenticator accountChanged:(BOOL)changed;	// 0x413d01
// declared property getter: - (id)_authenticator;	// 0x413e7d
// declared property getter: - (id)_authenticatorCreation;	// 0x413e9d
- (void)_changeCurrentAccountWithAccount:(id)account;	// 0x413f89
- (void)_handlePreferredAccountChange:(id)change;	// 0x413ec1
- (id)_selectAuthenticatorWithPreferredAccount:(id)preferredAccount;	// 0x414035
- (void)_sendNotificationWithActivity:(int)activity;	// 0x4141c5
// declared property getter: - (id)accountType;	// 0x413e5d
- (id)authenticatorWithAccount:(id)account;	// 0x413cf1
- (id)authenticatorWithNewAccount;	// 0x413cc1
- (id)currentAccount;	// 0x413c9d
- (void)dealloc;	// 0x413ba9
- (void)removeCurrentAccount;	// 0x413cad
// declared property setter: - (void)setAccountType:(id)type;	// 0x413e6d
// declared property setter: - (void)set_authenticator:(id)authenticator;	// 0x413e8d
// declared property setter: - (void)set_authenticatorCreation:(id)creation;	// 0x413eb1
@end

