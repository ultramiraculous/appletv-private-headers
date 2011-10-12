/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import <NSObject.h> // Unknown library
#import "AccountNotificationProtocol.h"

@class NSMutableSet, NSMutableDictionary;

@interface DADConnection : NSObject <AccountNotificationProtocol> {
@private
	xpc_connection_s *_conn;	// 4 = 0x4
	dispatch_queue_s *_muckingWithConn;	// 8 = 0x8
	NSMutableSet *_accountIdsWithAlreadyResetCerts;	// 12 = 0xc
	NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;	// 16 = 0x10
	id _statusReportBlock;	// 20 = 0x14
	NSMutableDictionary *_inFlightSearchQueries;	// 24 = 0x18
	NSMutableDictionary *_inFlightFolderChanges;	// 28 = 0x1c
	NSMutableDictionary *_inFlightAttachmentDownloads;	// 32 = 0x20
	NSMutableDictionary *_defaultContainerIDCache;	// 36 = 0x24
}
+ (void)accountDidChange:(id)account forDataclass:(id)dataclass;	// 0x3077cb59
+ (void)accountWillChange:(id)account forDataclass:(id)dataclass;	// 0x3077cad5
+ (void)noteAccountChanges:(id)changes;	// 0x3077ca41
+ (void)setShouldIgnoreAccountChanges;	// 0x307789b9
+ (id)sharedConnection;	// 0x30778929
+ (id)sharedConnectionIfServerIsRunning;	// 0x3077898d
- (id)init;	// 0x3077bf4d
- (void)_cancelDownloadsWithIDs:(id)ids error:(id)error;	// 0x3077b5c5
- (xpc_connection_s *)_connection;	// 0x307778a5
- (void *)_createReplyToRequest:(void *)request withProperties:(id)properties;	// 0x30777b99
- (void)_dispatchMessage:(void *)message;	// 0x3077c82d
- (void)_downloadFinished:(void *)finished;	// 0x307787dd
- (void)_downloadProgress:(void *)progress;	// 0x30778699
- (void)_folderChangeFinished:(void *)finished;	// 0x30778241
- (void)_foldersUpdated:(void *)updated;	// 0x30777d85
- (void)_getStatusReportsFromClient:(void *)client;	// 0x3077849d
- (id)_init;	// 0x3077bfa5
- (void)_logDataAccessStatus:(void *)status;	// 0x30777f49
- (void)_policyKeyChanged:(void *)changed;	// 0x30777c09
- (void)_reallyRegisterForInterrogation;	// 0x3077bea5
- (void)_registerForAppResumedNotification;	// 0x3077c7d5
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)status waitForReply:(BOOL)reply;	// 0x30779635
- (void)_requestDaemonStopMonitoringAgents_Sync;	// 0x307798a5
- (void)_resetCertWarningsForAccountId:(id)accountId andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x3077c2e5
- (void)_resetThrottleTimersForAccountId:(id)accountId;	// 0x3077c4f9
- (void)_sendSynchronousXPCMessageWithParameters:(id)parameters handlerBlock:(id)block;	// 0x3077b125
- (void)_serverContactsSearchQueryFinished:(void *)finished;	// 0x30777fa9
- (void)_serverDiedWithReason:(void *)reason;	// 0x3077779d
- (void)_tearDownInFlightObjects;	// 0x307774c9
- (void)applyNewAccountProperties:(id)properties onAccountWithId:(id)anId forceSave:(BOOL)save;	// 0x3077bae9
- (id)beginDownloadingAttachmentWithUUID:(id)uuid accountID:(id)anId queue:(dispatch_queue_s *)queue progressBlock:(id)block completionBlock:(id)block5;	// 0x3077b22d
- (void)cancelDownloadingAttachmentWithDownloadID:(id)downloadID error:(id)error;	// 0x3077b69d
- (void)cancelServerContactsSearch:(id)search;	// 0x3077a729
- (id)currentPolicyKeyForAccountID:(id)accountID;	// 0x30779359
- (void)dealloc;	// 0x3077c1a1
- (id)defaultContainerIdentifierForAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x30779e15
- (void)handleURL:(id)url;	// 0x3077b055
- (BOOL)performServerContactsSearch:(id)search forAccountWithID:(id)anId;	// 0x3077a2fd
- (BOOL)processFolderChange:(id)change forAccountWithID:(id)anId;	// 0x3077b781
- (BOOL)processMeetingRequests:(id)requests deliveryIdsToClear:(id)clear deliveryIdsToSoftClear:(id)softClear inFolderWithId:(id)anId forAccountWithId:(id)anId5;	// 0x3077a8fd
- (BOOL)registerForInterrogationWithBlock:(id)block;	// 0x3077bf15
- (void)removeStoresForAccountWithID:(id)anId;	// 0x307798b9
- (void)reportFolderItemsSyncSuccess:(BOOL)success forFolderWithID:(id)anId andAccountWithID:(id)anId3;	// 0x3077af75
- (void)requestDaemonShutdown;	// 0x30779945
- (void)requestDaemonStartMonitoringAgents;	// 0x30779869
- (void)requestDaemonStartMonitoringAgents_Sync;	// 0x30779891
- (void)requestDaemonStopMonitoringAgents;	// 0x3077987d
- (BOOL)requestPolicyUpdateForAccountID:(id)accountID;	// 0x307792bd
- (void)resetTimersAndWarnings;	// 0x3077c6c5
- (BOOL)resumeWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x30778a89
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag forAccountID:(id)accountID;	// 0x3077ac41
- (id)statusReports;	// 0x3077bbbd
- (BOOL)stopWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x30779015
- (BOOL)suspendWatchingFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x30778d6d
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x30779df1
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x30779c2d
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass;	// 0x30779dcd
- (BOOL)updateContentsOfFoldersWithKeys:(id)keys forAccountID:(id)accountID andDataclass:(int)dataclass isUserRequested:(BOOL)requested;	// 0x30779ab1
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses;	// 0x30779da9
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses ignoreThrottleTimer:(BOOL)timer;	// 0x30779d85
- (BOOL)updateFolderListForAccountID:(id)accountID andDataclasses:(int)dataclasses isUserRequested:(BOOL)requested;	// 0x30779959
- (BOOL)watchFoldersWithKeys:(id)keys forAccountID:(id)accountID;	// 0x307789c9
@end

