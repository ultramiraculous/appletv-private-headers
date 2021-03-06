/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesStoreAuthenticator.h"
#import "BRUserPasswordAuthenticating.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, MEITunesStoreAccount, BRUserPasswordAuthenticationController;

@interface MEITunesStoreAuthenticator : XXUnknownSuperclass <BRUserPasswordAuthenticating> {
	unsigned char _currentAttempts;	// 4 = 0x4
	NSString *_userName;	// 8 = 0x8
	NSString *_password;	// 12 = 0xc
	BOOL _oneClick;	// 16 = 0x10
	BOOL _failedOnce;	// 17 = 0x11
	BRUserPasswordAuthenticationController *_authenticationController;	// 20 = 0x14
	MEITunesStoreAccount *_account;	// 24 = 0x18
	unsigned _scope;	// 28 = 0x1c
}
@property(readonly, assign) MEITunesStoreAccount *account;	// G=0x41441; @synthesize=_account
@property(assign) BRUserPasswordAuthenticationController *authenticationController;	// G=0x41451; S=0x41461; @synthesize=_authenticationController
@property(readonly, assign) unsigned scope;	// G=0x41431; @synthesize=_scope
+ (void)upgradeAccount:(id)account coder:(id)coder;	// 0x418e1
- (id)initForAccount:(id)account scope:(unsigned)scope;	// 0x41825
// declared property getter: - (id)account;	// 0x41441
- (void)authenticate;	// 0x414f5
// declared property getter: - (id)authenticationController;	// 0x41451
- (void)dealloc;	// 0x41791
- (BOOL)requiresAuthentication;	// 0x41509
- (BOOL)requiresPassword:(id *)password;	// 0x415e9
- (BOOL)requiresSpeedTestDisclosureAgreement;	// 0x413fd
- (BOOL)requiresUser:(id *)user;	// 0x416e9
// declared property getter: - (unsigned)scope;	// 0x41431
// declared property setter: - (void)setAuthenticationController:(id)controller;	// 0x41461
- (void)setOneClick:(BOOL)click;	// 0x41421
- (void)setPassword:(id)password;	// 0x415b1
- (void)setUser:(id)user;	// 0x416b1
- (BOOL)shouldOfferOneClickAuthorization;	// 0x41585
@end

@interface MEITunesStoreAuthenticator (Notifications)
- (void)_authenticationCancelled:(id)cancelled;	// 0x41471
- (void)_authenticationFailed:(id)failed;	// 0x41985
- (void)_authenticationSucceeded:(id)succeeded;	// 0x41a81
@end

@interface MEITunesStoreAuthenticator (Private)
- (void)_sendAuthenticateRequest;	// 0x41d8d
@end

