/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAAccount.h> // Unknown library
#import "DAEAS-Structs.h"

@class ASFolderHierarchy, ASProtocol, ASTaskManager, NSMutableSet, NSLock, NSMutableArray, ASAutodiscoverTask;

@interface ASAccount : DAAccount {
	ASFolderHierarchy *_folderHierarchy;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	ASProtocol *_protocol;	// 72 = 0x48
	NSMutableSet *_searchTaskSet;	// 76 = 0x4c
	NSMutableArray *_autodiscoveryServersToTry;	// 80 = 0x50
	NSLock *_autodiscoverTaskLock;	// 84 = 0x54
	ASAutodiscoverTask *_autodiscoverTask;	// 88 = 0x58
	BOOL _useHTTPForTesting;	// 92 = 0x5c
	BOOL _useLocalhostForAutodiscoveryTesting;	// 93 = 0x5d
	BOOL _isValidating;	// 94 = 0x5e
}
@property(assign, setter=setASAccountVersion:) int asAccountVersion;	// G=0x341cdbe1; S=0x341cdc15; 
@property(retain) id emailAddress;	// G=0x341cded5; S=0x341cdef1; converted property
@property(retain) id emailAddresses;	// G=0x341cdf6d; S=0x341cdfe9; converted property
@property(retain) id encryptionIdentityPersistentReference;	// G=0x341ce575; S=0x341ce591; converted property
@property(retain) id host;	// G=0x341cdd7d; S=0x341cdd99; converted property
@property(retain) id lastKnownProtocolVersion;	// G=0x341ce369; S=0x341ce4dd; converted property
@property(assign) int mailNumberOfPastDaysToSync;	// G=0x341ce2dd; S=0x341ce34d; 
@property(readonly, assign) int mailNumberOfPastDaysToSyncUpperLimit;	// G=0x341ce231; 
@property(assign) int port;	// G=0x341cde15; S=0x341cde31; converted property
@property(readonly, retain) ASProtocol *protocol;	// G=0x341ce711; converted property
@property(retain) id savedFolderPathsThatClientsCareAbout;	// G=0x341ce3f9; S=0x341ce415; converted property
@property(retain) id signingIdentityPersistentReference;	// G=0x341ce511; S=0x341ce52d; converted property
@property(readonly, retain) ASTaskManager *taskManager;	// G=0x341c8351; converted property
@property(assign) BOOL useSSL;	// G=0x341cde4d; S=0x341cde6d; converted property
@property(retain) id username;	// G=0x341cdc59; S=0x341cdc75; converted property
+ (Class)accountClass;	// 0x341c8165
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x341c83dd
+ (Class)clientClass;	// 0x341d2e85
+ (id)defaultProperties;	// 0x341c8621
+ (id)supportedDataclasses;	// 0x341c879d
- (id)initWithProperties:(id)properties;	// 0x341c8099
- (void *)_copyDefaultExchangeEventsCalendar:(BOOL)calendar;	// 0x341cc4c1
- (void *)_copyExchangeCalendarStore:(BOOL)store;	// 0x341cc1bd
- (id)_defaultMailFolderWithDefaultType:(int)defaultType fallbackType:(int)type fallbackName:(id)name;	// 0x341ca031
- (void)_fillOutActionsArray:(id)array responseArray:(id)array2 withTask:(id)task added:(id)added removed:(id)removed modified:(id)modified perserved:(id)perserved addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x341ca3dd
- (id)_folderHierarchy;	// 0x341c9395
- (BOOL)_generateAutodiscoverURLsForEmailAddress:(id)emailAddress;	// 0x341cd025
- (void)_getContextElementsForItemChangeType:(int)itemChangeType dataclass:(int)dataclass nativeContext:(id)context outContext:(id *)context4 outServerId:(id *)anId;	// 0x341ca365
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x341c8be1
- (id)_newPolicyManager;	// 0x341c8095
- (id)_oldURLsForKeychain;	// 0x341c8971
- (void)_removeInvitationsForMailboxFolderID:(id)mailboxFolderID;	// 0x341caac5
- (BOOL)_shouldSaveLastKnownProtocolVersion;	// 0x341ce4d9
- (void)_startAutodiscoverTaskWithConsumer:(id)consumer;	// 0x341cd331
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x341c8bed
- (id)_visibleASFolders;	// 0x341c9419
- (void)accountDidUpdateProtocolVersion;	// 0x341ce819
- (BOOL)accountNeedsUpgrade;	// 0x341c9081
- (id)addressBookConstraintsPath;	// 0x341ce7f1
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x341cbf3d
// declared property getter: - (int)asAccountVersion;	// 0x341cdbe1
- (id)asFolderHierarchyTaskManager:(id)manager;	// 0x341ca295
- (id)asFolderWithId:(id)anId;	// 0x341ca23d
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x341cd4b5
- (void)autodiscoverTask:(id)task completedWithStatus:(int)status accountInfo:(id)info shouldRetryWithEmail:(id)email error:(id)error;	// 0x341cd6ed
- (void)blowAwayFolderCache;	// 0x341ca215
- (id)calendarConstraintsPath;	// 0x341ce7c9
- (void)cancelAllSearchQueries;	// 0x341ccb71
- (void)cancelAutodiscovery;	// 0x341cd2c1
- (void)cancelSearchQuery:(id)query;	// 0x341cca29
- (void)cancelTaskWithID:(int)anId;	// 0x341cc191
- (void)checkValidityWithConsumer:(id)consumer;	// 0x341c83f9
- (void)cleanupAccountFiles;	// 0x341c8311
- (id)contactsFolders;	// 0x341c99cd
- (void)dealloc;	// 0x341c8181
- (id)defaultContactsFolder;	// 0x341c982d
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x341ca2f9
- (id)defaultEventsFolder;	// 0x341c9ad9
- (id)defaultToDosFolder;	// 0x341c9d85
- (id)deletedItemsFolder;	// 0x341ca1c1
- (id)displayName;	// 0x341c8851
- (id)domainOnly;	// 0x341ce81d
// converted property getter: - (id)emailAddress;	// 0x341cded5
// converted property getter: - (id)emailAddresses;	// 0x341cdf6d
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x341c9179
// converted property getter: - (id)encryptionIdentityPersistentReference;	// 0x341ce575
- (id)eventsFolders;	// 0x341c9c79
- (id)existingTaskManager;	// 0x341c83cd
- (void)fetchAttachmentTask:(id)task completedWithStatus:(int)status dataWasBase64:(BOOL)a64 error:(id)error;	// 0x341cb839
- (void)fetchAttachmentTask:(id)task receivedData:(id)data ofContentType:(id)contentType;	// 0x341cb7cd
- (id)folderIdsThatExternalClientsCareAbout;	// 0x341ca2a5
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x341ca2cd
- (void)folderItemsSyncTask:(id)task completedWithStatus:(int)status error:(id)error newSyncKey:(id)key added:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x341cac21
- (BOOL)folderItemsSyncTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x341cb361
- (BOOL)folderItemsSyncTask:(id)task hasPartialAdded:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response6 removedResponse:(id)response7 fetchedResponse:(id)response8 moreAvailable:(BOOL)available;	// 0x341cb589
- (id)folderWithId:(id)anId;	// 0x341ca269
- (id)foldersTag;	// 0x341ca1ed
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x341c84a5
// converted property getter: - (id)host;	// 0x341cdd7d
- (id)inboxFolder;	// 0x341ca169
- (BOOL)isActiveSyncAccount;	// 0x341ce88d
- (BOOL)isEqualToAccount:(id)account;	// 0x341ce959
- (BOOL)isGoogleAccount;	// 0x341ce8f5
- (BOOL)isHotmailAccount;	// 0x341ce891
- (void)itemOperationsTask:(id)task completedWithStatus:(int)status error:(id)error responses:(id)responses;	// 0x341cb8a5
- (BOOL)itemOperationsTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x341cbab1
- (BOOL)itemOperationsTask:(id)task hasPartialResponses:(id)responses;	// 0x341cbcbd
// converted property getter: - (id)lastKnownProtocolVersion;	// 0x341ce369
- (id)localizedIdenticalAccountFailureMessage;	// 0x341ceb85
- (id)localizedInvalidPasswordMessage;	// 0x341cec35
// declared property getter: - (int)mailNumberOfPastDaysToSync;	// 0x341ce2dd
// declared property getter: - (int)mailNumberOfPastDaysToSyncUpperLimit;	// 0x341ce231
- (void)moveItemsTask:(id)task completedWithStatus:(int)status error:(id)error movedItems:(id)items;	// 0x341cc65d
- (CFStringRef)passwordChangedNotificationName;	// 0x341c8909
- (CFStringRef)passwordIsKnownGoodNotificationName;	// 0x341c893d
- (void)performSearchQuery:(id)query;	// 0x341ccc49
- (id)policyManager;	// 0x341c8299
// converted property getter: - (int)port;	// 0x341cde15
// converted property getter: - (id)protocol;	// 0x341ce711
- (void)resetAccountID;	// 0x341c9345
- (void)saveAccountSettings;	// 0x341c82c1
// converted property getter: - (id)savedFolderPathsThatClientsCareAbout;	// 0x341ce3f9
- (BOOL)searchQueriesRunning;	// 0x341cce6d
- (void)searchTask:(id)task finishedWithError:(id)error;	// 0x341ccf45
- (void)searchTask:(id)task returnedResults:(id)results;	// 0x341cce95
- (void)searchTask:(id)task returnedTotalCount:(id)count;	// 0x341ccedd
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x341cbef9
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x341cbf81
- (id)sentItemsFolder;	// 0x341ca195
// declared property setter: - (void)setASAccountVersion:(int)version;	// 0x341cdc15
// converted property setter: - (void)setEmailAddress:(id)address;	// 0x341cdef1
// converted property setter: - (void)setEmailAddresses:(id)addresses;	// 0x341cdfe9
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass changeType:(int)type;	// 0x341c91c9
// converted property setter: - (void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x341ce591
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x341ca361
// converted property setter: - (void)setHost:(id)host;	// 0x341cdd99
// converted property setter: - (void)setLastKnownProtocolVersion:(id)version;	// 0x341ce4dd
- (void)setLastKnownProtocolVersion:(id)version save:(BOOL)save;	// 0x341ce385
// declared property setter: - (void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x341ce34d
// converted property setter: - (void)setPort:(int)port;	// 0x341cde31
- (void)setProtocolVersion:(id)version;	// 0x341ce621
// converted property setter: - (void)setSavedFolderPathsThatClientsCareAbout:(id)about;	// 0x341ce415
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x341cdb39
// converted property setter: - (void)setSigningIdentityPersistentReference:(id)reference;	// 0x341ce52d
- (void)setUseHTTPForTesting:(BOOL)testing;	// 0x341cd2a1
- (void)setUseLocalhostForAutodiscoveryTesting:(BOOL)autodiscoveryTesting;	// 0x341cd2b1
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x341cde6d
// converted property setter: - (void)setUsername:(id)username;	// 0x341cdc75
- (id)shortTypeString;	// 0x341c88b5
- (BOOL)shouldFixOnDiskDeviceId;	// 0x341ca3d9
- (BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;	// 0x341ce3f5
// converted property getter: - (id)signingIdentityPersistentReference;	// 0x341ce511
- (int)sniffableTypeForFolder:(id)folder;	// 0x341c96b1
- (id)stateString;	// 0x341c859d
- (id)supportedDataclasses;	// 0x341c87bd
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x341c857d
- (int)supportsEmailFlagging;	// 0x341ce7a1
- (int)supportsMailboxSearch;	// 0x341ce779
// converted property getter: - (id)taskManager;	// 0x341c8351
- (id)toDosFolders;	// 0x341c9f25
- (id)typeString;	// 0x341c8861
- (BOOL)upgradeAccount;	// 0x341c8ff9
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x341ce5d9
// converted property getter: - (BOOL)useSSL;	// 0x341cde4d
// converted property getter: - (id)username;	// 0x341cdc59
- (id)usernameWithoutDomain;	// 0x341cdcf1
- (id)visibleFolders;	// 0x341c93fd
@end

