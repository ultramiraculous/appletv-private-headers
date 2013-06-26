/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import </libobjc.A.h>

@class DATaskManager, ACAccount, NSMutableDictionary, DAStatusReport, NSArray, NSString, NSData, NSURL;

@interface DAAccount : NSObject {
	ACAccount *_backingAccountInfo;	// 4 = 0x4
	BOOL _hasInitted;	// 8 = 0x8
	BOOL _shouldPromptForPassword;	// 9 = 0x9
	BOOL _shouldUseOpportunisticSockets;	// 10 = 0xa
	BOOL _wasUserInitiated;	// 11 = 0xb
	NSMutableDictionary *_haveWarnedAboutCertDict;	// 12 = 0xc
	DAStatusReport *_statusReport;	// 16 = 0x10
	CFDictionaryRef _consumers;	// 20 = 0x14
	CFURLStorageSessionRef _storageSession;	// 24 = 0x18
	DATaskManager *_taskManager;	// 28 = 0x1c
	BOOL _shouldFailAllTasks;	// 32 = 0x20
	BOOL _isValidating;	// 33 = 0x21
	NSArray *_appIdsForPasswordPrompt;	// 36 = 0x24
	NSMutableDictionary *_dataclassPropertyURLsByDataclass;	// 40 = 0x28
}
@property(copy) NSString *accountDescription;	// G=0x308108a5; S=0x30810eb5; 
@property(readonly, assign) NSArray *appIdsForPasswordPrompt;	// G=0x308135c1; @synthesize=_appIdsForPasswordPrompt
@property(readonly, assign) ACAccount *backingAccountInfo;	// G=0x30813529; @synthesize=_backingAccountInfo
@property(assign, setter=setDAAccountVersion:) int daAccountVersion;	// G=0x3081079d; S=0x30810ded; 
@property(retain, nonatomic) NSMutableDictionary *dataclassPropertyURLsByDataclass;	// G=0x308135f5; S=0x30813605; @synthesize=_dataclassPropertyURLsByDataclass
@property(copy) NSString *emailAddress;	// G=0x30811ca9; S=0x30811cc5; 
@property(copy) NSArray *emailAddresses;	// G=0x30811d05; S=0x30811d3d; 
@property(readonly, assign) int enabledDataclassesBitmask;	// G=0x308111b9; 
@property(retain) NSData *encryptionIdentityPersistentReference;	// G=0x30811e59; 
@property(copy) NSString *host;	// G=0x30811c1d; S=0x30811c39; 
@property(readonly, assign) NSData *identityPersist;	// G=0x30812abd; 
@property(readonly, assign) BOOL isChildAccount;	// G=0x30812d79; 
@property(assign, nonatomic) BOOL isValidating;	// G=0x308135d5; S=0x308135e5; @synthesize=_isValidating
@property(readonly, assign) int keychainAccessibilityType;	// G=0x30812985; 
@property(copy) NSString *password;	// G=0x30811729; S=0x30811761; 
@property(readonly, assign) NSString *persistentUUID;	// G=0x30810621; 
@property(assign) int port;	// G=0x30811e91; S=0x30811ead; 
@property(copy) NSString *principalPath;	// G=0x30811ec9; S=0x30811efd; 
@property(copy) NSURL *principalURL;	// G=0x30811f4d; S=0x30811fe9; 
@property(readonly, assign, nonatomic) NSString *scheduleIdentifier;	// G=0x30810e89; 
@property(readonly, assign) NSString *scheme;	// G=0x30811f19; 
@property(readonly, assign) BOOL shouldAutodiscoverAccountProperties;	// G=0x308123d1; 
@property(assign) BOOL shouldDoInitialAutodiscovery;	// G=0x30812379; S=0x308123a5; 
@property(readonly, assign, nonatomic) BOOL shouldFailAllTasks;	// G=0x30812fd1; @synthesize=_shouldFailAllTasks
@property(assign) BOOL shouldPromptForPassword;	// G=0x308134f9; S=0x30813511; @synthesize=_shouldPromptForPassword
@property(assign) BOOL shouldUseOpportunisticSockets;	// G=0x30813551; S=0x30813569; @synthesize=_shouldUseOpportunisticSockets
@property(retain) NSData *signingIdentityPersistentReference;	// G=0x30811e21; 
@property(readonly, assign) DAStatusReport *statusReport;	// G=0x3081353d; @synthesize=_statusReport
@property(readonly, assign, nonatomic) DATaskManager *taskManager;	// G=0x308135b1; @synthesize=_taskManager
@property(assign) int toDosNumberOfPastDaysToSync;	// G=0x3081c4c9; S=0x3081c4cd; converted property
@property(assign) BOOL useSSL;	// G=0x30811c55; S=0x30811c8d; 
@property(copy) NSString *user;	// G=0x30810f41; S=0x30810f51; 
@property(copy) NSString *username;	// G=0x30810f01; S=0x30810f21; 
@property(assign) BOOL wasUserInitiated;	// G=0x30813581; S=0x30813599; @synthesize=_wasUserInitiated
+ (id)_leafAccountTypes;	// 0x30814671
+ (id)daAccountSubclassWithBackingAccountInfo:(id)backingAccountInfo;	// 0x30810d81
+ (id)oneshotListOfAccountIDs;	// 0x30814785
+ (void)reacquireClientRestrictions:(id)restrictions;	// 0x30814981
- (id)initWithBackingAccountInfo:(id)backingAccountInfo;	// 0x30810c55
- (int)_actionForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x30813615
- (id)_exceptionsDict;	// 0x30812ba1
- (BOOL)_isIdentityManagedByProfile;	// 0x30812b81
- (id)_serverSuffixesToAlwaysFail;	// 0x30813721
- (void)_setPersistentUUID:(id)uuid;	// 0x30810e99
- (BOOL)accountBoolPropertyForKey:(id)key;	// 0x308112a5
- (BOOL)accountContainsEmailAddress:(id)address;	// 0x30811d41
// declared property getter: - (id)accountDescription;	// 0x308108a5
- (id)accountID;	// 0x30810601
- (int)accountIntPropertyForKey:(id)key;	// 0x3081130d
- (id)accountPropertyForKey:(id)key;	// 0x30811251
- (id)addUsernameToURL:(id)url;	// 0x308129f1
- (id)additionalHeaderValues;	// 0x3081244d
// declared property getter: - (id)appIdsForPasswordPrompt;	// 0x308135c1
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x30812375
// declared property getter: - (id)backingAccountInfo;	// 0x30813529
- (id)beginDownloadingAttachmentWithUUID:(id)uuid consumer:(id)consumer;	// 0x30814a7d
- (void)cancelAllSearchQueries;	// 0x3081b961
- (void)cancelDownloadingInstance:(id)instance error:(id)error;	// 0x30814b25
- (void)cancelSearchQuery:(id)query;	// 0x3081b95d
- (void)cancelShareResponseInstance:(id)instance error:(id)error;	// 0x30814bc5
- (void)checkValidityOnAccountStore:(id)store withConsumer:(id)consumer;	// 0x30812111
- (void)cleanupAccountFiles;	// 0x30812d19
- (id)consumerForTask:(id)task;	// 0x30811621
- (id)contactsFolders;	// 0x30814bf5
- (CFURLStorageSessionRef)copyStorageSession;	// 0x30813219
// declared property getter: - (int)daAccountVersion;	// 0x3081079d
- (id)dataclassProperties;	// 0x308111e5
// declared property getter: - (id)dataclassPropertyURLsByDataclass;	// 0x308135f5
- (void)dealloc;	// 0x30810641
- (id)defaultContactsFolder;	// 0x30814bf1
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x30812775
- (id)defaultEventsFolder;	// 0x30814a6d
- (id)defaultNotesFolder;	// 0x3082a1c5
- (id)defaultToDosFolder;	// 0x3081c4bd
- (id)deletedItemsFolder;	// 0x30814c55
- (id)description;	// 0x3081339d
- (void)discoverInitialPropertiesWithConsumer:(id)consumer;	// 0x3081232d
- (id)displayName;	// 0x30810ef1
- (id)domainOnly;	// 0x30811c19
- (id)draftsFolder;	// 0x30814c59
- (void)dropAssertionsAndRenewCredentialsWithHandler:(id)handler;	// 0x308143ad
// declared property getter: - (id)emailAddress;	// 0x30811ca9
// declared property getter: - (id)emailAddresses;	// 0x30811d05
// declared property getter: - (int)enabledDataclassesBitmask;	// 0x308111b9
- (BOOL)enabledForAnyDADataclasses:(int)anyDADataclasses;	// 0x30810fa9
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x308110a9
// declared property getter: - (id)encryptionIdentityPersistentReference;	// 0x30811e59
- (id)eventsFolders;	// 0x30814a71
- (CFDataRef)exceptionsForDigest:(id)digest;	// 0x30812bbd
- (void)getRootFolderWithConsumer:(id)consumer;	// 0x3082f1c9
- (void)handleTrust:(SecTrust *)trust forHost:(id)host withCompletionBlock:(id)completionBlock;	// 0x308137b1
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x30813e85
- (BOOL)haveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x30812da5
// declared property getter: - (id)host;	// 0x30811c1d
- (id)hostFromDataclassPropertiesForDataclass:(id)dataclass;	// 0x30811b59
// declared property getter: - (id)identityPersist;	// 0x30812abd
- (id)inboxFolder;	// 0x30814c4d
- (void)ingestBackingAccountInfoProperties;	// 0x30810d7d
- (BOOL)isActiveSyncAccount;	// 0x308131f5
- (BOOL)isBookmarkDAVAccount;	// 0x308131fd
- (BOOL)isCalDAVAccount;	// 0x30813201
- (BOOL)isCalDAVChildAccount;	// 0x30813209
- (BOOL)isCardDAVAccount;	// 0x30813205
// declared property getter: - (BOOL)isChildAccount;	// 0x30812d79
- (BOOL)isDisabled;	// 0x308107b9
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x30810f61
- (BOOL)isEqualToAccount:(id)account;	// 0x3081314d
- (BOOL)isGoogleAccount;	// 0x30813211
- (BOOL)isHotmailAccount;	// 0x3081320d
- (BOOL)isLDAPAccount;	// 0x308131f9
- (BOOL)isSubscribedCalendarAccount;	// 0x30813215
// declared property getter: - (BOOL)isValidating;	// 0x308135d5
// declared property getter: - (int)keychainAccessibilityType;	// 0x30812985
- (id)localizedIdenticalAccountFailureMessage;	// 0x3081425d
- (id)localizedInvalidPasswordMessage;	// 0x30814305
- (BOOL)monitorFolderWithID:(id)anId;	// 0x30812675
- (BOOL)monitorFoldersWithIDs:(id)ids;	// 0x30812671
- (id)notesFolders;	// 0x3082a1c9
- (id)oauth2Token;	// 0x30812591
- (id)oauthInfoProvider;	// 0x30812609
// declared property getter: - (id)password;	// 0x30811729
- (id)passwordWithExpected:(BOOL)expected;	// 0x30811659
- (void)performSearchQuery:(id)query;	// 0x3081b8bd
// declared property getter: - (id)persistentUUID;	// 0x30810621
// declared property getter: - (int)port;	// 0x30811e91
- (int)portFromDataclassPropertiesForDataclass:(id)dataclass;	// 0x30811bd1
// declared property getter: - (id)principalPath;	// 0x30811ec9
// declared property getter: - (id)principalURL;	// 0x30811f4d
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x30814c5d
- (void)reload;	// 0x30813499
- (void)removeAccountPropertyForKey:(id)key;	// 0x30811291
- (void)removeClientCertificateData;	// 0x30812779
- (void)removeConsumerForTask:(id)task;	// 0x3081163d
- (void)resetAccountID;	// 0x30810e0d
- (BOOL)resetCertWarnings;	// 0x30812ead
- (void)resetStatusReport;	// 0x30812ed9
- (id)respondToShareRequestForCalendar:(id)calendar withResponse:(int)response consumer:(id)consumer;	// 0x30814b29
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x30811375
- (void)saveAccountProperties;	// 0x30812871
- (void)saveAccountPropertiesWithCompletionHandler:(id)completionHandler;	// 0x308127d1
- (BOOL)saveModifiedPropertiesOnBackingAccount;	// 0x30812329
// declared property getter: - (id)scheduleIdentifier;	// 0x30810e89
// declared property getter: - (id)scheme;	// 0x30811f19
- (BOOL)searchQueriesRunning;	// 0x3081b965
- (BOOL)sendEmailsForCalEvents:(id)calEvents consumer:(id)consumer;	// 0x30814a79
- (id)sentItemsFolder;	// 0x30814c51
- (void)setAccountBoolProperty:(BOOL)property forKey:(id)key;	// 0x308112cd
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x30810eb5
- (void)setAccountIntProperty:(int)property forKey:(id)key;	// 0x30811335
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x30811271
- (void)setConsumer:(id)consumer forTask:(id)task;	// 0x308115c5
// declared property setter: - (void)setDAAccountVersion:(int)version;	// 0x30810ded
// declared property setter: - (void)setDataclassPropertyURLsByDataclass:(id)dataclass;	// 0x30813605
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x30811cc5
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x30811d3d
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass;	// 0x308110d9
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x30810f89
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x30811e75
- (void)setExceptions:(CFDataRef)exceptions forDigest:(id)digest;	// 0x30812c01
- (void)setHaveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x30812de9
// declared property setter: - (void)setHost:(id)host;	// 0x30811c39
- (void)setIdentityCertificatePersistentID:(id)anId managedByProfile:(BOOL)profile;	// 0x30812ad9
// declared property setter: - (void)setIsValidating:(BOOL)validating;	// 0x308135e5
// declared property setter: - (void)setPassword:(id)password;	// 0x30811761
// declared property setter: - (void)setPort:(int)port;	// 0x30811ead
// declared property setter: - (void)setPrincipalPath:(id)path;	// 0x30811efd
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x30811fe9
// declared property setter: - (void)setShouldDoInitialAutodiscovery:(BOOL)doInitialAutodiscovery;	// 0x308123a5
// declared property setter: - (void)setShouldPromptForPassword:(BOOL)promptForPassword;	// 0x30813511
// declared property setter: - (void)setShouldUseOpportunisticSockets:(BOOL)useOpportunisticSockets;	// 0x30813569
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x30811e3d
// converted property setter: - (void)setToDosNumberOfPastDaysToSync:(int)sync;	// 0x3081c4cd
// declared property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x30811c8d
// declared property setter: - (void)setUser:(id)user;	// 0x30810f51
// declared property setter: - (void)setUsername:(id)username;	// 0x30810f21
// declared property setter: - (void)setWasUserInitiated:(BOOL)initiated;	// 0x30813599
// declared property getter: - (BOOL)shouldAutodiscoverAccountProperties;	// 0x308123d1
// declared property getter: - (BOOL)shouldDoInitialAutodiscovery;	// 0x30812379
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x30812fd1
// declared property getter: - (BOOL)shouldPromptForPassword;	// 0x308134f9
// declared property getter: - (BOOL)shouldUseOpportunisticSockets;	// 0x30813551
- (void)shutdown;	// 0x3081342d
// declared property getter: - (id)signingIdentityPersistentReference;	// 0x30811e21
- (id)spinnerIdentifiers;	// 0x30811205
- (id)stateString;	// 0x30811485
// declared property getter: - (id)statusReport;	// 0x3081353d
- (void)stopMonitoringFolderWithID:(id)anId;	// 0x30811421
- (void)stopMonitoringFolders;	// 0x30812711
- (void)stopMonitoringFoldersWithIDs:(id)ids;	// 0x308126ad
- (int)supportsEmailFlagging;	// 0x3081b96d
- (int)supportsMailboxSearch;	// 0x3081b969
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x308113bd
- (id)syncStoreIdentifier;	// 0x30810631
- (void)synchronizeBookmarkTreeWithConsumer:(id)consumer hasRemoteChanges:(BOOL)changes;	// 0x3082f1cd
- (void)synchronizeContactsFolder:(id)folder previousTag:(id)tag previousSyncToken:(id)token actions:(id)actions highestIdContext:(XXStruct_K5nmsA *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed previousTagIsSuspect:(BOOL)suspect consumer:(id)consumer;	// 0x30814bf9
- (void)synchronizeEventsFolder:(id)folder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x30814a75
- (void)synchronizeNotesFolder:(id)folder noteContext:(id)context previousTag:(id)tag actions:(id)actions changeSet:(id)set notesToDeleteAfterSync:(id)deleteAfterSync isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x3082a1cd
- (void)synchronizeToDosFolder:(id)dosFolder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x3081c4c5
// declared property getter: - (id)taskManager;	// 0x308135b1
- (void)tearDown;	// 0x3081260d
- (id)toDosFolders;	// 0x3081c4c1
// converted property getter: - (int)toDosNumberOfPastDaysToSync;	// 0x3081c4c9
- (id)unactionableICSRepresentationForMetaData:(id)metaData inFolderWithId:(id)anId outSummary:(id *)summary;	// 0x30814c61
- (BOOL)upgradeAccount;	// 0x30810e09
- (id)urlFromDataclassPropertiesForDataclass:(id)dataclass;	// 0x3081186d
// declared property getter: - (BOOL)useSSL;	// 0x30811c55
- (BOOL)useSSLFromDataclassPropertiesForDataclass:(id)dataclass;	// 0x30811b81
// declared property getter: - (id)user;	// 0x30810f41
// declared property getter: - (id)username;	// 0x30810f01
- (id)usernameWithoutDomain;	// 0x30811c09
// declared property getter: - (BOOL)wasUserInitiated;	// 0x30813581
@end
