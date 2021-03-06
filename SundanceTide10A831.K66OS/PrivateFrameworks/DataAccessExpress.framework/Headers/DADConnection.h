/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "AccountNotificationProtocol.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface DADConnection : NSObject <AccountNotificationProtocol> {
	NSObject<OS_xpc_object> *_conn;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_muckingWithConn;	// 8 = 0x8
	NSMutableSet *_accountIdsWithAlreadyResetCerts;	// 12 = 0xc
	NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;	// 16 = 0x10
	id _statusReportBlock;	// 20 = 0x14
	NSMutableDictionary *_inFlightSearchQueries;	// 24 = 0x18
	NSMutableDictionary *_inFlightFolderChanges;	// 28 = 0x1c
	NSMutableDictionary *_inFlightAttachmentDownloads;	// 32 = 0x20
	NSMutableDictionary *_inFlightShareRequests;	// 36 = 0x24
}
+ (void)accountDidChange:(id)account forDataclass:(id)dataclass;	// 0x3376b41d
+ (void)accountWillChange:(id)account forDataclass:(id)dataclass;	// 0x3376b38d
+ (void)noteAccountChanges:(id)changes;	// 0x3376b2ed
+ (void)setShouldIgnoreAccountChanges;	// 0x33767259
+ (id)sharedConnection;	// 0x337671c1
+ (id)sharedConnectionIfServerIsRunning;	// 0x3376722d
- (id)init;	// 0x3376a881
- (void)_cancelDownloadsWithIDs:(id)ids error:(id)error;	// 0x33769af9
- (id)_connection;	// 0x33765c59
- (id)_createReplyToRequest:(id)request withProperties:(id)properties;	// 0x33765f51
- (void)_dispatchMessage:(id)message;	// 0x3376b0bd
- (void)_downloadFinished:(id)finished;	// 0x33766fad
- (void)_downloadProgress:(id)progress;	// 0x33766e41
- (void)_folderChangeFinished:(id)finished;	// 0x337669bd
- (void)_foldersUpdated:(id)updated;	// 0x33766329
- (void)_getStatusReportsFromClient:(id)client;	// 0x33766bfd
- (id)_init;	// 0x3376a8d9
- (void)_logDataAccessStatus:(id)status;	// 0x33766509
- (void)_policyKeyChanged:(id)changed;	// 0x33766199
- (void)_reallyRegisterForInterrogation;	// 0x3376a6e9
- (void)_registerForAppResumedNotification;	// 0x3376b065
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)status waitForReply:(BOOL)reply;	// 0x33767fb1
- (void)_requestDaemonStopMonitoringAgents_Sync;	// 0x33768221
- (void)_resetCertWarningsForAccountId:(id)accountId andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x3376ab51
- (void)_resetThrottleTimersForAccountId:(id)accountId;	// 0x3376ad75
- (void)_sendSynchronousXPCMessageWithParameters:(id)parameters handlerBlock:(id)block;	// 0x33769625
- (void)_serverContactsSearchQueryFinished:(id)finished;	// 0x33766569
- (void)_serverDiedWithReason:(id)reason;	// 0x33765b45
- (void)_shareResponseFinished:(id)finished;	// 0x33767109
- (void)_tearDownInFlightObjects;	// 0x337657ad
- (void)applyNewAccountProperties:(id)properties onAccountWithId:(id)anId forceSave:(BOOL)save;	// 0x3376a2f5
- (id)beginDownloadingAttachmentWithUUID:(id)uuid accountID:(id)anId queue:(id)queue progressBlock:(id)block completionBlock:(id)block5;	// 0x33769759
- (void)cancelDownloadingAttachmentWithDownloadID:(id)downloadID error:(id)error;	// 0x33769bf5
- (void)cancelServerContactsSearch:(id)search;	// 0x33768bd5
- (id)currentPolicyKeyForAccountID:(id)accountID;	// 0x33767c99
- (void)dealloc;	// 0x3376aa1d
- (id)decodedErrorFromData:(id)data;	// 0x33765fd5
- (void)fillOutCurrentEASTimeZoneInfo;	// 0x3376a78d
- (void)handleURL:(id)url;	// 0x3376954d
- (BOOL)performServerContactsSearch:(id)search forAccountWithID:(id)anId;	// 0x337687c9
- (BOOL)processFolderChange:(id)change forAccountWithID:(id)anId;	// 0x33769f65
- (BOOL)processMeetingRequests:(id)requests deliveryIdsToClear:(id)clear deliveryIdsToSoftClear:(id)softClear inFolderWithId:(id)anId forAccountWithId:(id)anId5;	// 0x33768d69
- (BOOL)registerForInterrogationWithBlock:(id)block;	// 0x3376a759
- (void)removeStoresForAccountWithID:(id)anId;	// 0x33768235
- (void)reportFolderItemsSyncSuccess:(BOOL)success forFolderWithID:(id)anId andAccountWithID:(id)anId3;	// 0x33769465
- (void)requestDaemonShutdown;	// 0x337682c5
- (void)requestDaemonStartMonitoringAgents;	// 0x337681e5
- (void)requestDaemonStartMonitoringAgents_Sync;	// 0x3376820d
- (void)requestDaemonStopMonitoringAgents;	// 0x337681f9
- (BOOL)requestPolicyUpdateForAccountID:(id)accountID;	// 0x33767c01
- (void)resetTimersAndWarnings;	// 0x3376af4d
- (void)respondToSharedCalendarInvite:(int)sharedCalendarInvite forCalendarWithID:(id)anId accountID:(id)anId3 queue:(id)queue completionBlock:(id)block;	// 0x33769cd9
- (BOOL)resumeWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33767329
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag forAccountID:(id)accountID;	// 0x337690ed
- (id)statusReports;	// 0x3376a3c9
- (BOOL)stopWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33767921
- (BOOL)suspendWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33767641
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x337687a5
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x33768605
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x33768781
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x33768489
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses;	// 0x3376875d
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x33768465
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses requireChangedFolders:(BOOL)folders isUserRequested:(BOOL)requested;	// 0x337682d9
- (BOOL)watchFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33767269
@end

