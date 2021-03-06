/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AccountCreationProtocol.h"
#import "DataAccess-Structs.h"
#import "BasicAccountSyncing.h"
#import "AccountFullAccountProtocol.h"

@class ACAccount, NSMutableDictionary, DAStatusReport, NSString, NSData, NSURL, NSArray, DASettingsTemplate;

@interface DAAccount : XXUnknownSuperclass <AccountFullAccountProtocol, AccountCreationProtocol, BasicAccountSyncing> {
	ACAccount *_backingAccountInfo;	// 24 = 0x18
	int _dataclasses;	// 28 = 0x1c
	BOOL _requiresAccountDeleteAndReAdd;	// 32 = 0x20
	BOOL _hasInitted;	// 33 = 0x21
	BOOL _shouldPromptForPassword;	// 34 = 0x22
	BOOL _shouldFailAllTasks;	// 35 = 0x23
	BOOL _shouldUseOpportunisticSockets;	// 36 = 0x24
	NSMutableDictionary *_haveWarnedAboutCertDict;	// 40 = 0x28
	DASettingsTemplate *_settingsTemplate;	// 44 = 0x2c
	DAStatusReport *_statusReport;	// 48 = 0x30
	CFDictionaryRef _consumers;	// 52 = 0x34
	CFURLStorageSessionRef _storageSession;	// 56 = 0x38
}
@property(copy) NSString *accountDescription;	// G=0x3394c2ed; S=0x3394c94d; 
@property(readonly, assign) NSArray *appIdsForPasswordPrompt;	// G=0x3394fa25; 
@property(readonly, assign) ACAccount *backingAccountInfo;	// G=0x339507ed; @synthesize=_backingAccountInfo
@property(readonly, assign) ACAccount *backingCredentialAccount;	// G=0x33951ff5; 
@property(assign, setter=setDAAccountVersion:) int daAccountVersion;	// G=0x3394be01; S=0x3394fc9d; 
@property(copy) NSString *emailAddress;	// G=0x3394e041; S=0x3394e0c9; 
@property(copy) NSArray *emailAddresses;	// G=0x3394e1a1; S=0x3394e23d; 
@property(readonly, assign) int enabledDataclassesBitmask;	// G=0x339507a9; @synthesize=_dataclasses
@property(retain) NSData *encryptionIdentityPersistentReference;	// G=0x3394e495; 
@property(copy) NSString *host;	// G=0x3394dd91; S=0x3394de19; 
@property(readonly, assign) NSData *identityPersist;	// G=0x3394f0a9; 
@property(readonly, assign) BOOL isChildAccount;	// G=0x3394f365; 
@property(readonly, assign) int keychainAccessibilityType;	// G=0x3394ef69; 
@property(assign) BOOL needsRediscovery;	// G=0x3394ea1d; S=0x3394ea3d; 
@property(copy) NSString *password;	// G=0x3394d9cd; S=0x3394db25; 
@property(readonly, assign) NSString *persistentUUID;	// G=0x3394bb65; 
@property(assign) int port;	// G=0x3394e5a9; S=0x3394e635; 
@property(copy) NSURL *principalURL;	// G=0x3394e7d5; S=0x3394e895; 
@property(readonly, assign) BOOL requiresAccountDeleteAndReAdd;	// G=0x3394ea59; converted property
@property(readonly, assign, nonatomic) NSString *scheduleIdentifier;	// G=0x3394c91d; 
@property(copy) NSString *scheme;	// G=0x3394e6c1; S=0x3394e749; 
@property(retain) DASettingsTemplate *settingsTemplate;	// G=0x33950801; S=0x33950815; @synthesize=_settingsTemplate
@property(assign) BOOL shouldAutodiscoverPrincipalURL;	// G=0x3394e9e1; S=0x3394ea01; 
@property(assign, nonatomic) BOOL shouldFailAllTasks;	// G=0x3394f56d; S=0x33950839; @synthesize=_shouldFailAllTasks
@property(assign) BOOL shouldPromptForPassword;	// G=0x339507bd; S=0x339507d5; @synthesize=_shouldPromptForPassword
@property(assign) BOOL shouldUseOpportunisticSockets;	// G=0x33950849; S=0x33950861; @synthesize=_shouldUseOpportunisticSockets
@property(retain) NSData *signingIdentityPersistentReference;	// G=0x3394e381; 
@property(readonly, assign) DAStatusReport *statusReport;	// G=0x33950825; @synthesize=_statusReport
@property(assign) int toDosNumberOfPastDaysToSync;	// G=0x3395d621; S=0x3395d625; converted property
@property(assign) BOOL useSSL;	// G=0x3394def1; S=0x3394df79; 
@property(copy) NSString *user;	// G=0x3394f9b9; S=0x3394f9c9; 
@property(copy) NSString *username;	// G=0x3394ca85; S=0x3394cb75; 
@property(retain) id version;	// G=0x3394dce9; S=0x3394dd35; converted property
+ (Class)accountClass;	// 0x3394c835
+ (Class)classForAccountType:(id)accountType;	// 0x3394fc0d
+ (Class)clientClass;	// 0x3394d259
+ (Class)daemonClass;	// 0x3394d2a5
+ (id)defaultProperties;	// 0x3394fc09
+ (id)newAccountOfAccountType:(id)accountType;	// 0x3394fc45
- (id)initWithBackingAccountInfo:(id)backingAccountInfo;	// 0x3394c735
- (id)initWithProperties:(id)properties;	// 0x3394b7e1
- (int)_actionForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x33950879
- (id)_exceptionsDict;	// 0x3394f18d
- (void)_handlePasswordNotification:(CFUserNotificationRef)notification response:(unsigned long)response callback:(id)callback;	// 0x33951c95
- (BOOL)_isIdentityManagedByProfile;	// 0x3394f16d
- (void)_removeHostsToTrust;	// 0x3394fdad
- (void)_renewAccountCredentialsWithHandler_legacy:(id)handler_legacy;	// 0x339514e9
- (id)_serverSuffixesToAlwaysFail;	// 0x3395097d
- (void)_setPersistentUUID:(id)uuid;	// 0x3394c931
- (BOOL)_upgradeSelfFromPreKirkwood;	// 0x3394fddd
- (BOOL)accountBoolPropertyForKey:(id)key;	// 0x3394d501
- (BOOL)accountContainsEmailAddress:(id)address;	// 0x3394e2a1
// declared property getter: - (id)accountDescription;	// 0x3394c2ed
- (id)accountID;	// 0x3394ba69
- (int)accountIntPropertyForKey:(id)key;	// 0x3394d569
- (BOOL)accountNeedsUpgrade;	// 0x3394fcb9
- (id)accountPropertyForKey:(id)key;	// 0x3394d2f1
- (id)addUsernameToURL:(id)url;	// 0x3394eff5
// declared property getter: - (id)appIdsForPasswordPrompt;	// 0x3394fa25
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x3394e9dd
- (id)backingACAccountTypeIdentifier;	// 0x3394ff91
// declared property getter: - (id)backingAccountInfo;	// 0x339507ed
// declared property getter: - (id)backingCredentialAccount;	// 0x33951ff5
- (id)beginDownloadingAttachmentWithUUID:(id)uuid consumer:(id)consumer;	// 0x33952265
- (void)cancelAllSearchQueries;	// 0x3395b4a9
- (void)cancelDownloadingInstance:(id)instance error:(id)error;	// 0x3395230d
- (void)cancelSearchQuery:(id)query;	// 0x3395b4a5
- (void)cancelShareResponseInstance:(id)instance error:(id)error;	// 0x339523ad
- (void)checkValidityWithConsumer:(id)consumer;	// 0x3394e995
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x3394f705
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x3394f7c9
- (void)cleanupAccountFiles;	// 0x3394f305
- (id)consumerForTask:(id)task;	// 0x3394d7ed
- (id)contactsFolders;	// 0x339523dd
- (CFURLStorageSessionRef)copyStorageSession;	// 0x3394f7cd
// declared property getter: - (int)daAccountVersion;	// 0x3394be01
- (id)dataclassProperties;	// 0x3394d141
- (void)dealloc;	// 0x3394bcfd
- (id)defaultContactsFolder;	// 0x339523d9
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x3394ebd1
- (id)defaultEventsFolder;	// 0x33952255
- (id)defaultNotesFolder;	// 0x3396cb55
- (id)defaultToDosFolder;	// 0x3395d615
- (id)delegateeInvitationICSRepresentationForMetaData:(id)metaData inFolderWithId:(id)anId outSummary:(id *)summary;	// 0x33952445
- (id)deletedItemsFolder;	// 0x3395243d
- (id)description;	// 0x3394f929
- (id)displayName;	// 0x3394ca29
- (id)domainOnly;	// 0x3394dd8d
// declared property getter: - (id)emailAddress;	// 0x3394e041
// declared property getter: - (id)emailAddresses;	// 0x3394e1a1
// declared property getter: - (int)enabledDataclassesBitmask;	// 0x339507a9
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x3394ccc1
// declared property getter: - (id)encryptionIdentityPersistentReference;	// 0x3394e495
- (id)eventsFolders;	// 0x33952259
- (CFDataRef)exceptionsForDigest:(id)digest;	// 0x3394f1a9
- (void)getRootFolderWithConsumer:(id)consumer;	// 0x33973a85
- (void)handleTrust:(SecTrust *)trust forHost:(id)host withCompletionBlock:(id)completionBlock;	// 0x33950a09
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x339511a9
- (BOOL)haveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x3394f369
// declared property getter: - (id)host;	// 0x3394dd91
// declared property getter: - (id)identityPersist;	// 0x3394f0a9
- (id)inboxFolder;	// 0x33952435
- (BOOL)isActiveSyncAccount;	// 0x3394f6e9
- (BOOL)isCalDAVAccount;	// 0x3394f6f1
- (BOOL)isCalDAVChildAccount;	// 0x3394f6fd
- (BOOL)isCardDAVAccount;	// 0x3394f6f9
// declared property getter: - (BOOL)isChildAccount;	// 0x3394f365
- (BOOL)isDAMMeAccount;	// 0x3394f6f5
- (BOOL)isDisabled;	// 0x3394c1f1
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x3394cd89
- (BOOL)isEqualToAccount:(id)account;	// 0x3394f641
- (BOOL)isHotmailAccount;	// 0x3394f701
- (BOOL)isLDAPAccount;	// 0x3394f6ed
// declared property getter: - (int)keychainAccessibilityType;	// 0x3394ef69
- (id)localizedIdenticalAccountFailureMessage;	// 0x33951ea5
- (id)localizedInvalidPasswordMessage;	// 0x33951f4d
- (BOOL)monitorFolderWithID:(id)anId;	// 0x3394ead1
- (BOOL)monitorFoldersWithIDs:(id)ids;	// 0x3394eacd
// declared property getter: - (BOOL)needsRediscovery;	// 0x3394ea1d
- (id)notesFolders;	// 0x3396cb59
// declared property getter: - (id)password;	// 0x3394d9cd
- (id)passwordWithExpected:(BOOL)expected;	// 0x3394d825
- (void)performSearchQuery:(id)query;	// 0x3395b401
// declared property getter: - (id)persistentUUID;	// 0x3394bb65
// declared property getter: - (int)port;	// 0x3394e5a9
- (void)prepareForAccountSave;	// 0x3394ec2d
// declared property getter: - (id)principalURL;	// 0x3394e7d5
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x33952441
- (void)removeAccountPropertyForKey:(id)key;	// 0x3394d49d
- (void)removeClientCertificateData;	// 0x3394ebd5
- (void)removeConsumerForTask:(id)task;	// 0x3394d809
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x33952005
// converted property getter: - (BOOL)requiresAccountDeleteAndReAdd;	// 0x3394ea59
- (void)resetAccountID;	// 0x3394c851
- (BOOL)resetCertWarnings;	// 0x3394f471
- (void)resetStatusReport;	// 0x3394f49d
- (id)respondToShareRequestForCalendar:(id)calendar withResponse:(int)response consumer:(id)consumer;	// 0x33952311
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x3394d5d1
- (void)saveAccountProperties;	// 0x3394ec31
- (void)saveAccountSettings;	// 0x3394fb51
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x3394fb01
// declared property getter: - (id)scheduleIdentifier;	// 0x3394c91d
// declared property getter: - (id)scheme;	// 0x3394e6c1
- (BOOL)searchQueriesRunning;	// 0x3395b4ad
- (BOOL)sendEmailsForCalEvents:(id)calEvents consumer:(id)consumer;	// 0x33952261
- (id)sentItemsFolder;	// 0x33952439
- (void)setAccountBoolProperty:(BOOL)property forKey:(id)key;	// 0x3394d529
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x3394c94d
- (void)setAccountIntProperty:(int)property forKey:(id)key;	// 0x3394d591
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x3394d3c5
- (void)setConsumer:(id)consumer forTask:(id)task;	// 0x3394d791
// declared property setter: - (void)setDAAccountVersion:(int)version;	// 0x3394fc9d
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3394e0c9
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x3394e23d
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass;	// 0x3394ce65
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x3394e51d
- (void)setExceptions:(CFDataRef)exceptions forDigest:(id)digest;	// 0x3394f1ed
- (void)setHaveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x3394f3ad
// declared property setter: - (void)setHost:(id)host;	// 0x3394de19
- (void)setIdentityCertificatePersistentID:(id)anId managedByProfile:(BOOL)profile;	// 0x3394f0c5
// declared property setter: - (void)setNeedsRediscovery:(BOOL)rediscovery;	// 0x3394ea3d
// declared property setter: - (void)setPassword:(id)password;	// 0x3394db25
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x3394da05
// declared property setter: - (void)setPort:(int)port;	// 0x3394e635
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3394e895
// declared property setter: - (void)setScheme:(id)scheme;	// 0x3394e749
// declared property setter: - (void)setSettingsTemplate:(id)aTemplate;	// 0x33950815
// declared property setter: - (void)setShouldAutodiscoverPrincipalURL:(BOOL)autodiscoverPrincipalURL;	// 0x3394ea01
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x33950839
// declared property setter: - (void)setShouldPromptForPassword:(BOOL)promptForPassword;	// 0x339507d5
// declared property setter: - (void)setShouldUseOpportunisticSockets:(BOOL)useOpportunisticSockets;	// 0x33950861
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x3394e409
// converted property setter: - (void)setToDosNumberOfPastDaysToSync:(int)sync;	// 0x3395d625
// declared property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x3394df79
// declared property setter: - (void)setUser:(id)user;	// 0x3394f9c9
// declared property setter: - (void)setUsername:(id)username;	// 0x3394cb75
// converted property setter: - (void)setVersion:(id)version;	// 0x3394dd35
// declared property getter: - (id)settingsTemplate;	// 0x33950801
// declared property getter: - (BOOL)shouldAutodiscoverPrincipalURL;	// 0x3394e9e1
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x3394f56d
// declared property getter: - (BOOL)shouldPromptForPassword;	// 0x339507bd
// declared property getter: - (BOOL)shouldUseOpportunisticSockets;	// 0x33950849
// declared property getter: - (id)signingIdentityPersistentReference;	// 0x3394e381
- (id)spinnerIdentifiers;	// 0x3394d20d
- (id)stateString;	// 0x3394d6e1
// declared property getter: - (id)statusReport;	// 0x33950825
- (void)stopMonitoringFolderWithID:(id)anId;	// 0x3394d67d
- (void)stopMonitoringFolders;	// 0x3394eb6d
- (void)stopMonitoringFoldersWithIDs:(id)ids;	// 0x3394eb09
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3394cc75
- (int)supportsEmailFlagging;	// 0x3395b4b5
- (int)supportsMailboxSearch;	// 0x3395b4b1
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x3394d619
- (id)syncStoreIdentifier;	// 0x3394bced
- (void)synchronizeBookmarkTreeWithConsumer:(id)consumer hasRemoteChanges:(BOOL)changes;	// 0x33973a89
- (void)synchronizeContactsFolder:(id)folder previousTag:(id)tag previousSyncToken:(id)token actions:(id)actions highestIdContext:(XXStruct_K5nmsA *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed previousTagIsSuspect:(BOOL)suspect consumer:(id)consumer;	// 0x339523e1
- (void)synchronizeEventsFolder:(id)folder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x3395225d
- (void)synchronizeNotesFolder:(id)folder noteContext:(id)context previousTag:(id)tag actions:(id)actions changeSet:(id)set notesToDeleteAfterSync:(id)deleteAfterSync isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x3396cb5d
- (void)synchronizeToDosFolder:(id)dosFolder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x3395d61d
- (void)tearDown;	// 0x3394ea69
- (id)toDosFolders;	// 0x3395d619
// converted property getter: - (int)toDosNumberOfPastDaysToSync;	// 0x3395d621
- (BOOL)upgradeAccount;	// 0x3394ff31
- (void)upgradeAccountSpecificPropertiesOnAccount:(id)account inStore:(id)store parentAccount:(id)account3;	// 0x3394ff8d
- (BOOL)upgradeToAccountsdWithStore:(id)store parentAccount:(id)account;	// 0x3394ff95
- (void)upgradeToHoodooAccountInfo;	// 0x3394ff89
- (id)urlForKeychain;	// 0x3394f9d9
// declared property getter: - (BOOL)useSSL;	// 0x3394def1
// declared property getter: - (id)user;	// 0x3394f9b9
// declared property getter: - (id)username;	// 0x3394ca85
- (id)usernameWithoutDomain;	// 0x3394dd7d
- (BOOL)usesLegacyAccountSettings;	// 0x3394f911
// converted property getter: - (id)version;	// 0x3394dce9
@end

