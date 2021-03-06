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
+ (void)accountDidChange:(id)account forDataclass:(id)dataclass;	// 0x33c58421
+ (void)accountWillChange:(id)account forDataclass:(id)dataclass;	// 0x33c58391
+ (void)noteAccountChanges:(id)changes;	// 0x33c582f1
+ (void)setShouldIgnoreAccountChanges;	// 0x33c5425d
+ (id)sharedConnection;	// 0x33c541c5
+ (id)sharedConnectionIfServerIsRunning;	// 0x33c54231
- (id)init;	// 0x33c57885
- (void)_cancelDownloadsWithIDs:(id)ids error:(id)error;	// 0x33c56afd
- (id)_connection;	// 0x33c52c5d
- (id)_createReplyToRequest:(id)request withProperties:(id)properties;	// 0x33c52f55
- (void)_dispatchMessage:(id)message;	// 0x33c580c1
- (void)_downloadFinished:(id)finished;	// 0x33c53fb1
- (void)_downloadProgress:(id)progress;	// 0x33c53e45
- (void)_folderChangeFinished:(id)finished;	// 0x33c539c1
- (void)_foldersUpdated:(id)updated;	// 0x33c5332d
- (void)_getStatusReportsFromClient:(id)client;	// 0x33c53c01
- (id)_init;	// 0x33c578dd
- (void)_logDataAccessStatus:(id)status;	// 0x33c5350d
- (void)_policyKeyChanged:(id)changed;	// 0x33c5319d
- (void)_reallyRegisterForInterrogation;	// 0x33c576ed
- (void)_registerForAppResumedNotification;	// 0x33c58069
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)status waitForReply:(BOOL)reply;	// 0x33c54fb5
- (void)_requestDaemonStopMonitoringAgents_Sync;	// 0x33c55225
- (void)_resetCertWarningsForAccountId:(id)accountId andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x33c57b55
- (void)_resetThrottleTimersForAccountId:(id)accountId;	// 0x33c57d79
- (void)_sendSynchronousXPCMessageWithParameters:(id)parameters handlerBlock:(id)block;	// 0x33c56629
- (void)_serverContactsSearchQueryFinished:(id)finished;	// 0x33c5356d
- (void)_serverDiedWithReason:(id)reason;	// 0x33c52b49
- (void)_shareResponseFinished:(id)finished;	// 0x33c5410d
- (void)_tearDownInFlightObjects;	// 0x33c527b1
- (void)applyNewAccountProperties:(id)properties onAccountWithId:(id)anId forceSave:(BOOL)save;	// 0x33c572f9
- (id)beginDownloadingAttachmentWithUUID:(id)uuid accountID:(id)anId queue:(id)queue progressBlock:(id)block completionBlock:(id)block5;	// 0x33c5675d
- (void)cancelDownloadingAttachmentWithDownloadID:(id)downloadID error:(id)error;	// 0x33c56bf9
- (void)cancelServerContactsSearch:(id)search;	// 0x33c55bd9
- (id)currentPolicyKeyForAccountID:(id)accountID;	// 0x33c54c9d
- (void)dealloc;	// 0x33c57a21
- (id)decodedErrorFromData:(id)data;	// 0x33c52fd9
- (void)fillOutCurrentEASTimeZoneInfo;	// 0x33c57791
- (void)handleURL:(id)url;	// 0x33c56551
- (BOOL)performServerContactsSearch:(id)search forAccountWithID:(id)anId;	// 0x33c557cd
- (BOOL)processFolderChange:(id)change forAccountWithID:(id)anId;	// 0x33c56f69
- (BOOL)processMeetingRequests:(id)requests deliveryIdsToClear:(id)clear deliveryIdsToSoftClear:(id)softClear inFolderWithId:(id)anId forAccountWithId:(id)anId5;	// 0x33c55d6d
- (BOOL)registerForInterrogationWithBlock:(id)block;	// 0x33c5775d
- (void)removeStoresForAccountWithID:(id)anId;	// 0x33c55239
- (void)reportFolderItemsSyncSuccess:(BOOL)success forFolderWithID:(id)anId andAccountWithID:(id)anId3;	// 0x33c56469
- (void)requestDaemonShutdown;	// 0x33c552c9
- (void)requestDaemonStartMonitoringAgents;	// 0x33c551e9
- (void)requestDaemonStartMonitoringAgents_Sync;	// 0x33c55211
- (void)requestDaemonStopMonitoringAgents;	// 0x33c551fd
- (BOOL)requestPolicyUpdateForAccountID:(id)accountID;	// 0x33c54c05
- (void)resetTimersAndWarnings;	// 0x33c57f51
- (void)respondToSharedCalendarInvite:(int)sharedCalendarInvite forCalendarWithID:(id)anId accountID:(id)anId3 queue:(id)queue completionBlock:(id)block;	// 0x33c56cdd
- (BOOL)resumeWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33c5432d
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag forAccountID:(id)accountID;	// 0x33c560f1
- (id)statusReports;	// 0x33c573cd
- (BOOL)stopWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33c54925
- (BOOL)suspendWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33c54645
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x33c557a9
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x33c55609
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x33c55785
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x33c5548d
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses;	// 0x33c55761
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x33c55469
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses requireChangedFolders:(BOOL)folders isUserRequested:(BOOL)requested;	// 0x33c552dd
- (BOOL)watchFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x33c5426d
@end

