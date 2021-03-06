/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAAccount.h> // Unknown library
#import "DAEAS-Structs.h"

@class NSMutableSet, ASProtocol, NSLock, ASFolderHierarchy, ASTaskManager;

@interface ASAccount : DAAccount {
	ASFolderHierarchy *_folderHierarchy;	// 60 = 0x3c
	ASTaskManager *_taskManager;	// 64 = 0x40
	ASProtocol *_protocol;	// 68 = 0x44
	NSMutableSet *_searchTaskSet;	// 72 = 0x48
	NSMutableSet *_autodiscoveryTasks;	// 76 = 0x4c
	NSLock *_autodiscoverTaskLock;	// 80 = 0x50
	BOOL _useHTTPForTesting;	// 84 = 0x54
	BOOL _useLocalhostForAutodiscoveryTesting;	// 85 = 0x55
	BOOL _oneAutodiscoverAtATime;	// 86 = 0x56
	BOOL _isValidating;	// 87 = 0x57
}
@property(assign, setter=setASAccountVersion:) int asAccountVersion;	// G=0x36c2f639; S=0x36c2f66d; 
@property(retain) id emailAddress;	// G=0x36c2f921; S=0x36c2f93d; converted property
@property(retain) id emailAddresses;	// G=0x36c2f9b9; S=0x36c2fa39; converted property
@property(retain) id encryptionIdentityPersistentReference;	// G=0x36c2fff1; S=0x36c3000d; converted property
@property(retain) id host;	// G=0x36c2f7c9; S=0x36c2f7e5; converted property
@property(retain) id lastKnownProtocolVersion;	// G=0x36c2fdbd; S=0x36c2ff59; converted property
@property(assign) int mailNumberOfPastDaysToSync;	// G=0x36c2fd31; S=0x36c2fda1; 
@property(readonly, assign) int mailNumberOfPastDaysToSyncUpperLimit;	// G=0x36c2fc85; 
@property(assign) int port;	// G=0x36c2f861; S=0x36c2f87d; converted property
@property(readonly, retain) ASProtocol *protocol;	// G=0x36c30189; converted property
@property(retain) id savedFolderPathsThatClientsCareAbout;	// G=0x36c2fe71; S=0x36c2fe8d; converted property
@property(retain) id signingIdentityPersistentReference;	// G=0x36c2ff8d; S=0x36c2ffa9; converted property
@property(readonly, retain) ASTaskManager *taskManager;	// G=0x36c29229; converted property
@property(assign) BOOL useSSL;	// G=0x36c2f899; S=0x36c2f8b9; converted property
@property(retain) id username;	// G=0x36c2f6b1; S=0x36c2f6cd; converted property
+ (Class)accountClass;	// 0x36c2903d
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x36c292b9
+ (Class)clientClass;	// 0x36c34775
+ (id)defaultProperties;	// 0x36c29515
+ (id)supportedDataclasses;	// 0x36c29691
- (id)initWithProperties:(id)properties;	// 0x36c28f6d
- (void *)_copyABAccount:(BOOL)account;	// 0x36c2d861
- (void *)_copyDefaultExchangeEventsCalendar:(BOOL)calendar;	// 0x36c2dbfd
- (void *)_copyExchangeCalendarStore:(BOOL)store;	// 0x36c2d925
- (id)_defaultMailFolderWithDefaultType:(int)defaultType fallbackType:(int)type fallbackName:(id)name;	// 0x36c2b50d
- (void)_explodeEmailAddress:(id)address outUsername:(id *)username outEmailAddress:(id *)address3;	// 0x36c2e7bd
- (void)_fillOutActionsArray:(id)array responseArray:(id)array2 withTask:(id)task added:(id)added removed:(id)removed modified:(id)modified perserved:(id)perserved addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x36c2b8d9
- (id)_folderHierarchy;	// 0x36c2a3d5
- (BOOL)_generateAutodiscoverURLsForEmailAddress:(id)emailAddress withConsumer:(id)consumer;	// 0x36c2e8a5
- (void)_getContextElementsForItemChangeType:(int)itemChangeType dataclass:(int)dataclass nativeContext:(id)context outContext:(id *)context4 outServerId:(id *)anId;	// 0x36c2b861
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x36c29b75
- (id)_newPolicyManager;	// 0x36c28f69
- (id)_oldURLsForKeychain;	// 0x36c2991d
- (void)_removeInvitationsForMailboxFolderID:(id)mailboxFolderID;	// 0x36c2c09d
- (BOOL)_shouldSaveLastKnownProtocolVersion;	// 0x36c2ff55
- (void)_silentlyTearDownAutodiscoveryTasks;	// 0x36c2ed49
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x36c29b81
- (id)_visibleASFolders;	// 0x36c2a455
- (void)accountDidUpdateProtocolVersion;	// 0x36c302b9
- (BOOL)accountNeedsUpgrade;	// 0x36c2a02d
- (id)addressBookConstraintsPath;	// 0x36c30291
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x36c2d5dd
// declared property getter: - (int)asAccountVersion;	// 0x36c2f639
- (id)asFolderHierarchyTaskManager:(id)manager;	// 0x36c2b77d
- (id)asFolderWithId:(id)anId;	// 0x36c2b725
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x36c2ef2d
- (void)autodiscoverTask:(id)task completedWithStatus:(int)status accountInfo:(id)info shouldRetryWithEmail:(id)email error:(id)error;	// 0x36c2f129
- (void)blowAwayFolderCache;	// 0x36c2b6fd
- (id)calendarConstraintsPath;	// 0x36c30269
- (void)cancelAllSearchQueries;	// 0x36c2e2ed
- (void)cancelSearchQuery:(id)query;	// 0x36c2e189
- (void)cancelTaskWithID:(int)anId;	// 0x36c2d835
- (void)checkValidityWithConsumer:(id)consumer;	// 0x36c292d5
- (void)cleanupAccountFiles;	// 0x36c291e9
- (id)contactsFolders;	// 0x36c2aaad
- (void)dealloc;	// 0x36c29059
- (id)defaultContactsFolder;	// 0x36c2a8fd
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x36c2b7e1
- (id)defaultEventsFolder;	// 0x36c2ac01
- (id)defaultNotesFolder;	// 0x36c2b209
- (id)defaultToDosFolder;	// 0x36c2af05
- (id)deletedItemsFolder;	// 0x36c2b6a9
- (id)displayName;	// 0x36c297fd
- (id)domainOnly;	// 0x36c302bd
// converted property getter: - (id)emailAddress;	// 0x36c2f921
// converted property getter: - (id)emailAddresses;	// 0x36c2f9b9
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x36c2a129
// converted property getter: - (id)encryptionIdentityPersistentReference;	// 0x36c2fff1
- (id)eventsFolders;	// 0x36c2adb1
- (id)existingTaskManager;	// 0x36c292a9
- (void)fetchAttachmentTask:(id)task completedWithStatus:(int)status dataWasBase64:(BOOL)a64 error:(id)error;	// 0x36c2ce81
- (void)fetchAttachmentTask:(id)task receivedData:(id)data ofContentType:(id)contentType;	// 0x36c2ce15
- (id)folderIdsThatExternalClientsCareAbout;	// 0x36c2b78d
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x36c2b7b5
- (void)folderItemsSyncTask:(id)task completedWithStatus:(int)status error:(id)error newSyncKey:(id)key added:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x36c2c1f9
- (BOOL)folderItemsSyncTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x36c2c9d1
- (BOOL)folderItemsSyncTask:(id)task hasPartialAdded:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response6 removedResponse:(id)response7 fetchedResponse:(id)response8 moreAvailable:(BOOL)available;	// 0x36c2cbfd
- (id)folderWithId:(id)anId;	// 0x36c2b751
- (id)foldersTag;	// 0x36c2b6d5
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x36c29381
// converted property getter: - (id)host;	// 0x36c2f7c9
- (id)inboxFolder;	// 0x36c2b651
- (BOOL)isActiveSyncAccount;	// 0x36c30325
- (BOOL)isEqualToAccount:(id)account;	// 0x36c303f9
- (BOOL)isGoogleAccount;	// 0x36c30391
- (BOOL)isHotmailAccount;	// 0x36c30329
- (void)itemOperationsTask:(id)task completedWithStatus:(int)status error:(id)error responses:(id)responses;	// 0x36c2ceed
- (BOOL)itemOperationsTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x36c2d121
- (BOOL)itemOperationsTask:(id)task hasPartialResponses:(id)responses;	// 0x36c2d331
// converted property getter: - (id)lastKnownProtocolVersion;	// 0x36c2fdbd
- (id)localizedIdenticalAccountFailureMessage;	// 0x36c3061d
- (id)localizedInvalidPasswordMessage;	// 0x36c306b9
// declared property getter: - (int)mailNumberOfPastDaysToSync;	// 0x36c2fd31
// declared property getter: - (int)mailNumberOfPastDaysToSyncUpperLimit;	// 0x36c2fc85
- (void)moveItemsTask:(id)task completedWithStatus:(int)status error:(id)error movedItems:(id)items;	// 0x36c2dd89
- (id)notesFolders;	// 0x36c2b3b9
- (CFStringRef)passwordChangedNotificationName;	// 0x36c298b5
- (CFStringRef)passwordIsKnownGoodNotificationName;	// 0x36c298e9
- (void)performSearchQuery:(id)query;	// 0x36c2e3e5
- (id)policyManager;	// 0x36c29171
// converted property getter: - (int)port;	// 0x36c2f861
// converted property getter: - (id)protocol;	// 0x36c30189
- (void)resetAccountID;	// 0x36c2a385
- (void)saveAccountSettings;	// 0x36c29199
// converted property getter: - (id)savedFolderPathsThatClientsCareAbout;	// 0x36c2fe71
- (BOOL)searchQueriesRunning;	// 0x36c2e601
- (void)searchTask:(id)task finishedWithError:(id)error;	// 0x36c2e6e1
- (void)searchTask:(id)task returnedResults:(id)results;	// 0x36c2e629
- (void)searchTask:(id)task returnedTotalCount:(id)count;	// 0x36c2e671
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x36c2d599
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 useSmartTasksIfPossible:(BOOL)possible consumer:(id)consumer context:(void *)context;	// 0x36c2d621
- (id)sentItemsFolder;	// 0x36c2b67d
// declared property setter: - (void)setASAccountVersion:(int)version;	// 0x36c2f66d
// converted property setter: - (void)setEmailAddress:(id)address;	// 0x36c2f93d
// converted property setter: - (void)setEmailAddresses:(id)addresses;	// 0x36c2fa39
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass;	// 0x36c2a201
// converted property setter: - (void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x36c3000d
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x36c2b85d
// converted property setter: - (void)setHost:(id)host;	// 0x36c2f7e5
// converted property setter: - (void)setLastKnownProtocolVersion:(id)version;	// 0x36c2ff59
- (void)setLastKnownProtocolVersion:(id)version save:(BOOL)save;	// 0x36c2fdd9
// declared property setter: - (void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x36c2fda1
- (void)setOneAutodiscoverAtATime:(BOOL)atime;	// 0x36c2ed39
// converted property setter: - (void)setPort:(int)port;	// 0x36c2f87d
- (void)setProtocolVersion:(id)version;	// 0x36c3009d
// converted property setter: - (void)setSavedFolderPathsThatClientsCareAbout:(id)about;	// 0x36c2fe8d
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x36c2f591
// converted property setter: - (void)setSigningIdentityPersistentReference:(id)reference;	// 0x36c2ffa9
- (void)setUseHTTPForTesting:(BOOL)testing;	// 0x36c2ed19
- (void)setUseLocalhostForAutodiscoveryTesting:(BOOL)autodiscoveryTesting;	// 0x36c2ed29
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x36c2f8b9
// converted property setter: - (void)setUsername:(id)username;	// 0x36c2f6cd
- (id)shortTypeString;	// 0x36c29861
- (BOOL)shouldFixOnDiskDeviceId;	// 0x36c2b8d5
- (BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;	// 0x36c2fe6d
// converted property getter: - (id)signingIdentityPersistentReference;	// 0x36c2ff8d
- (int)sniffableTypeForFolder:(id)folder;	// 0x36c2a761
- (id)stateString;	// 0x36c29491
- (id)supportedDataclasses;	// 0x36c296b1
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x36c29471
- (int)supportsEmailFlagging;	// 0x36c30221
- (int)supportsMailboxSearch;	// 0x36c301f9
- (BOOL)syncDefaultFoldersOnly;	// 0x36c2fe4d
// converted property getter: - (id)taskManager;	// 0x36c29229
- (id)toDosFolders;	// 0x36c2b0b5
- (id)typeString;	// 0x36c2980d
- (BOOL)upgradeAccount;	// 0x36c29fa5
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x36c30055
// converted property getter: - (BOOL)useSSL;	// 0x36c2f899
// converted property getter: - (id)username;	// 0x36c2f6b1
- (id)usernameWithoutDomain;	// 0x36c2f749
- (id)visibleFolders;	// 0x36c2a439
@end

