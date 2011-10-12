/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import <DAAccount.h> // Unknown library
#import "DALDAP-Structs.h"

@class LDAPTaskManager, NSMutableSet;

@interface LDAPAccount : DAAccount {
	LDAPTaskManager *_taskManager;	// 64 = 0x40
	NSMutableSet *_searchTaskSet;	// 68 = 0x44
	dispatch_queue_s *_backgroundQueue;	// 72 = 0x48
	BOOL _isShuttingDown;	// 76 = 0x4c
}
@property(assign) int authType;	// G=0x3113bae9; S=0x3113bb05; converted property
@property(readonly, assign) dispatch_queue_s *backgroundQueue;	// G=0x3113be75; @synthesize=_backgroundQueue
@property(retain) id host;	// G=0x3113b92d; S=0x3113b949; converted property
@property(assign, setter=setLDAPAccountVersion:) int ldapAccountVersion;	// G=0x3113b81d; S=0x3113b851; 
@property(assign, setter=setLDAPDidAutodiscovery:) BOOL ldapDidAutodiscovery;	// G=0x3113bb21; S=0x3113bb45; 
@property(assign) int port;	// G=0x3113b9c5; S=0x3113b9e1; converted property
@property(readonly, retain) LDAPTaskManager *taskManager;	// G=0x31139ec5; converted property
@property(assign) BOOL useSSL;	// G=0x3113ba45; S=0x3113ba65; converted property
@property(retain) id username;	// G=0x3113b895; S=0x3113b8b1; converted property
+ (Class)accountClass;	// 0x3113a321
+ (Class)clientClass;	// 0x3113a33d
+ (Class)daemonClass;	// 0x3113a359
+ (id)defaultProperties;	// 0x3113a395
+ (id)displayedAccountTypeString;	// 0x3113ae2d
+ (id)displayedShortAccountTypeString;	// 0x3113ae39
+ (id)supportedDataclasses;	// 0x3113a375
- (id)initWithProperties:(id)properties;	// 0x31139ed5
- (id)_oldURLsForKeychain;	// 0x3113aead
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x3113b1e5
- (BOOL)accountNeedsUpgrade;	// 0x3113b639
- (void)addSearchSettings:(id)settings;	// 0x3113ae55
// converted property getter: - (int)authType;	// 0x3113bae9
// declared property getter: - (dispatch_queue_s *)backgroundQueue;	// 0x3113be75
- (void)cancelAllSearchQueries;	// 0x3113a661
- (void)cancelSearchQuery:(id)query;	// 0x3113a519
- (void)checkValidityWithConsumer:(id)consumer;	// 0x3113aba9
- (id)connectionURL;	// 0x3113b7e1
- (id)connectionURLWithSSL:(BOOL)ssl;	// 0x3113b749
- (void)dealloc;	// 0x3113a295
- (id)displayName;	// 0x3113ae45
// converted property getter: - (id)host;	// 0x3113b92d
- (BOOL)isEqualToAccount:(id)account;	// 0x3113bb65
- (BOOL)isLDAPAccount;	// 0x3113bb61
- (int)keychainAccessibilityType;	// 0x3113a4c5
// declared property getter: - (int)ldapAccountVersion;	// 0x3113b81d
// declared property getter: - (BOOL)ldapDidAutodiscovery;	// 0x3113bb21
- (void)ldapGetDefaultSearchBaseTask:(id)task completedWithStatus:(int)status error:(id)error defaultSearchBase:(id)base;	// 0x3113ac45
- (void)ldapSearchTask:(id)task finishedWithError:(id)error foundItems:(id)items;	// 0x3113a9f5
- (id)localizedIdenticalAccountFailureMessage;	// 0x3113bd4d
- (id)localizedInvalidPasswordMessage;	// 0x3113bdc5
- (void)performSearchQuery:(id)query;	// 0x3113a73d
// converted property getter: - (int)port;	// 0x3113b9c5
- (id)propertiesToSave;	// 0x3113a13d
- (void)removeSearchSettings:(id)settings;	// 0x3113ae81
- (BOOL)resetCertWarnings;	// 0x3113b72d
- (void)saveAccountSettings;	// 0x3113a4c9
- (id)searchSettings;	// 0x3113bacd
// converted property setter: - (void)setAuthType:(int)type;	// 0x3113bb05
// converted property setter: - (void)setHost:(id)host;	// 0x3113b949
// declared property setter: - (void)setLDAPAccountVersion:(int)version;	// 0x3113b851
// declared property setter: - (void)setLDAPDidAutodiscovery:(BOOL)autodiscovery;	// 0x3113bb45
// converted property setter: - (void)setPort:(int)port;	// 0x3113b9e1
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x3113ba65
// converted property setter: - (void)setUsername:(id)username;	// 0x3113b8b1
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3113b811
// converted property getter: - (id)taskManager;	// 0x31139ec5
- (BOOL)upgradeAccount;	// 0x3113b5b1
// converted property getter: - (BOOL)useSSL;	// 0x3113ba45
// converted property getter: - (id)username;	// 0x3113b895
@end

