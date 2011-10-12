/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAV-Structs.h"
#import "CoreDAVAccountInfoProvider.h"

@class NSData, NSString, NSDictionary, NSError, NSURL, NSSet;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {
	NSString *_scheme;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	NSString *_serverRoot;	// 12 = 0xc
	int _port;	// 16 = 0x10
	NSString *_user;	// 20 = 0x14
	NSString *_password;	// 24 = 0x18
	NSData *_identityPersist;	// 28 = 0x1c
	NSURL *_principalURL;	// 32 = 0x20
	NSString *_accountID;	// 36 = 0x24
	NSDictionary *_serverHeaders;	// 40 = 0x28
	NSSet *_serverComplianceClasses;	// 44 = 0x2c
	NSString *_userAgentHeader;	// 48 = 0x30
	BOOL _shouldFailAllTasks;	// 52 = 0x34
	BOOL _started;	// 53 = 0x35
	BOOL _success;	// 54 = 0x36
	NSError *_error;	// 56 = 0x38
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;	// 60 = 0x3c
}
@property(retain) NSString *accountID;	// G=0x3479fe09; S=0x3479fe1d; @synthesize=_accountID
@property(retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;	// G=0x3479fe61; S=0x3479fe75; @synthesize=_backingAccountInfoProvider
@property(retain) NSError *error;	// G=0x3479fed9; S=0x3479feed; @synthesize=_error
@property(retain) NSString *host;	// G=0x3479fc99; S=0x3479fcad; @synthesize=_host
@property(retain) NSData *identityPersist;	// G=0x3479fd99; S=0x3479fdad; @synthesize=_identityPersist
@property(retain) NSString *password;	// G=0x3479fd61; S=0x3479fd75; @synthesize=_password
@property(assign) int port;	// G=0x3479fcd1; S=0x3479fce1; @synthesize=_port
@property(retain) NSURL *principalURL;	// G=0x3479fdd1; S=0x3479fde5; @synthesize=_principalURL
@property(retain) NSString *scheme;	// G=0x3479fc61; S=0x3479fc75; @synthesize=_scheme
@property(retain) NSSet *serverComplianceClasses;	// G=0x3479ff49; S=0x3479ff5d; @synthesize=_serverComplianceClasses
@property(retain) NSDictionary *serverHeaders;	// G=0x3479ff11; S=0x3479ff25; @synthesize=_serverHeaders
@property(retain) NSString *serverRoot;	// G=0x3479fcf1; S=0x3479fd05; @synthesize=_serverRoot
@property(assign) BOOL shouldFailAllTasks;	// G=0x3479fe41; S=0x3479fe51; @synthesize=_shouldFailAllTasks
@property(assign) BOOL started;	// G=0x3479fe99; S=0x3479fea9; @synthesize=_started
@property(assign) BOOL success;	// G=0x3479feb9; S=0x3479fec9; @synthesize=_success
@property(retain) NSString *user;	// G=0x3479fd29; S=0x3479fd3d; @synthesize=_user
@property(retain) NSString *userAgentHeader;	// G=0x3479ff81; S=0x3479ff95; @synthesize=_userAgentHeader
- (id)initWithAccountInfoProvider:(id)accountInfoProvider;	// 0x3479f1b5
// declared property getter: - (id)accountID;	// 0x3479fe09
- (id)additionalHeaderValues;	// 0x3479f76d
// declared property getter: - (id)backingAccountInfoProvider;	// 0x3479fe61
- (CFURLStorageSessionRef)copyStorageSession;	// 0x3479fbd1
- (void)dealloc;	// 0x3479f331
- (id)description;	// 0x3479f46d
// declared property getter: - (id)error;	// 0x3479fed9
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;	// 0x3479f8fd
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;	// 0x3479fa21
- (BOOL)handleCertificateError:(id)error;	// 0x3479f87d
- (BOOL)handleShouldUseCredentialStorage;	// 0x3479fad9
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x3479f7b5
- (BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;	// 0x3479f80d
// declared property getter: - (id)host;	// 0x3479fc99
// declared property getter: - (id)identityPersist;	// 0x3479fd99
// declared property getter: - (id)password;	// 0x3479fd61
// declared property getter: - (int)port;	// 0x3479fcd1
// declared property getter: - (id)principalURL;	// 0x3479fdd1
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x3479f745
// declared property getter: - (id)scheme;	// 0x3479fc61
// declared property getter: - (id)serverComplianceClasses;	// 0x3479ff49
// declared property getter: - (id)serverHeaders;	// 0x3479ff11
// declared property getter: - (id)serverRoot;	// 0x3479fcf1
// declared property setter: - (void)setAccountID:(id)anId;	// 0x3479fe1d
// declared property setter: - (void)setBackingAccountInfoProvider:(id)provider;	// 0x3479fe75
// declared property setter: - (void)setError:(id)error;	// 0x3479feed
// declared property setter: - (void)setHost:(id)host;	// 0x3479fcad
// declared property setter: - (void)setIdentityPersist:(id)persist;	// 0x3479fdad
// declared property setter: - (void)setPassword:(id)password;	// 0x3479fd75
// declared property setter: - (void)setPort:(int)port;	// 0x3479fce1
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3479fde5
// declared property setter: - (void)setScheme:(id)scheme;	// 0x3479fc75
// declared property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x3479ff5d
// declared property setter: - (void)setServerHeaders:(id)headers;	// 0x3479ff25
// declared property setter: - (void)setServerRoot:(id)root;	// 0x3479fd05
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x3479fe51
// declared property setter: - (void)setStarted:(BOOL)started;	// 0x3479fea9
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x3479fec9
// declared property setter: - (void)setUser:(id)user;	// 0x3479fd3d
// declared property setter: - (void)setUserAgentHeader:(id)header;	// 0x3479ff95
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x3479fe41
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x3479fb21
- (BOOL)shouldRetryUnauthorizedConnection:(id)connection;	// 0x3479f8a5
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x3479fb79
- (BOOL)shouldTurnModalOnBadPassword;	// 0x3479f8a1
- (BOOL)shouldUseOpportunisticSockets;	// 0x3479fc19
// declared property getter: - (BOOL)started;	// 0x3479fe99
// declared property getter: - (BOOL)success;	// 0x3479feb9
- (id)url;	// 0x3479f675
// declared property getter: - (id)user;	// 0x3479fd29
// declared property getter: - (id)userAgentHeader;	// 0x3479ff81
@end

