/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "MCJobQueueObserver.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MCJobQueue, MCUserNotificationManager, NSString, MCMDMServer;
@protocol OS_dispatch_queue;

@interface MCManagedAppManager : NSObject <MCJobQueueObserver> {
	MCMDMServer *_server;	// 4 = 0x4
	NSString *_manifestPath;	// 8 = 0x8
	NSMutableDictionary *_manifest;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_manifestQueue;	// 16 = 0x10
	MCJobQueue *_jobQueue;	// 20 = 0x14
	MCUserNotificationManager *_userNotificationManager;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_busyCountQueue;	// 28 = 0x1c
	int _busyCount;	// 32 = 0x20
}
@property(assign, nonatomic) __weak MCMDMServer *server;	// G=0x351232a1; S=0x351232c1; @synthesize=_server
+ (id)sharedManager;	// 0x3511739d
+ (id)stringForAppState:(int)appState;	// 0x35123199
- (id)initWithManifestPath:(id)manifestPath;	// 0x35117441
- (void).cxx_destruct;	// 0x351232d5
- (int)__appStateForBundleID:(id)bundleID;	// 0x351180d5
- (void)__commitManifest;	// 0x35117991
- (BOOL)__hasMetadataForBundleID:(id)bundleID;	// 0x351179c1
- (id)__managedAppMetadataByBundleID;	// 0x35117b55
- (id)__metadataForBundleID:(id)bundleID;	// 0x35117ef9
- (void)__removeBundleID:(id)anId;	// 0x35118431
- (void)__setAppState:(int)state forBundleID:(id)bundleID;	// 0x35118291
- (void)__setManagedAppMetadataByBundleID:(id)anId;	// 0x35117bcd
- (void)__setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x35117d61
- (BOOL)_advanceTransientStateForBundleID:(id)bundleID params:(id)params outNewParams:(id *)params3 outSetChanged:(BOOL *)changed;	// 0x35122b51
- (id)_appAlreadyQueuedError:(id)error;	// 0x35118b8d
- (BOOL)_appBundleID:(id)anId wasInstalledOutIsManaged:(BOOL *)managed;	// 0x351188d5
- (id)_bundleIDAlreadyInstalledError:(id)error;	// 0x35118b05
- (void)_displayAppInstallationAlertMessage:(id)message isUpdate:(BOOL)update completionBlock:(id)block;	// 0x35119441
- (void)_displayAppInstallationFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x351194fd
- (void)_displayAppUpdateFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x351195b9
- (void)_displayPromptForAppInstallationTitle:(id)appInstallationTitle isAppStore:(BOOL)store isUpdate:(BOOL)update completionBlock:(id)block;	// 0x35119041
- (id)_downloadingAppIDs;	// 0x35122651
- (void)_installEnterpriseAppManifestURL:(id)url completionBlock:(id)block;	// 0x3511b115
- (id)_invalidManifestErrorWithURL:(id)url underlyingError:(id)error;	// 0x35118c15
- (BOOL)_isBundleIDInstalled:(id)installed;	// 0x35118835
- (id)_notAnAppError;	// 0x35118a81
- (void)_promptUserForEnterpriseAppInstallationManifestURL:(id)enterpriseAppInstallationManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x3511b36d
- (void)_promptUserForEnterpriseAppUpdateManifestURL:(id)enterpriseAppUpdateManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x3511b831
- (void)_promptUserForStoreAppInstallationItem:(id)storeAppInstallationItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x35119c49
- (void)_promptUserForStoreAppUpdateItem:(id)storeAppUpdateItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x3511a49d
- (void)_promptUserForiTunesAccount:(id)account accountNameEditable:(BOOL)editable canCreateNewAccount:(BOOL)account3 completionBlock:(id)block;	// 0x3511c215
- (void)_purchaseItem:(id)item account:(id)account offer:(id)offer completionBlock:(id)block;	// 0x35119675
- (void)_userAccount:(id)account hasPurchasedBundleID:(id)anId completionBlock:(id)block;	// 0x3511bf69
- (BOOL)_willQueueAppBundleID:(id)anId forDownloadManagementFlags:(int)downloadManagementFlags outRejectionReason:(id *)reason outIsUpdate:(BOOL *)update outError:(id *)error;	// 0x3511bd39
- (void)advanceTransientStates;	// 0x35122d21
- (void)advanceTransientStatesForBundleID:(id)bundleID;	// 0x35122f29
- (int)appStateForBundleID:(id)bundleID;	// 0x35118179
- (BOOL)applyRedemptionCode:(id)code forBundleID:(id)bundleID outError:(id *)error;	// 0x351204fd
- (id)bundleIDsWithFlags:(int)flags;	// 0x351185bd
- (void)cleanUp;	// 0x35118ca5
- (id)doNotBackupAppIDs;	// 0x3512255d
- (BOOL)hasMetadataForBundleID:(id)bundleID;	// 0x35117a3d
- (BOOL)hasPendingInstallations;	// 0x35122571
- (BOOL)installITunesStoreID:(unsigned long long)anId managementFlags:(int)flags outBundleID:(id *)anId3 outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x3511c4c5
- (BOOL)installManifestURL:(id)url managementFlags:(int)flags outBundleID:(id *)anId outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x3511e4d1
- (void)jobQueueDidReleaseBusy:(id)jobQueue;	// 0x35117801
- (void)jobQueueDidRetainBusy:(id)jobQueue;	// 0x35117701
- (id)managedAppMetadataByBundleID;	// 0x35117c15
- (id)metadataForBundleID:(id)bundleID;	// 0x35117f61
- (void)removeBundleID:(id)anId;	// 0x351184f5
// declared property getter: - (id)server;	// 0x351232a1
- (void)setAppState:(int)state forBundleID:(id)bundleID;	// 0x35118355
- (void)setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x35117dfd
// declared property setter: - (void)setServer:(id)server;	// 0x351232c1
- (void)uninstallManagedAppsAccordingToFlags;	// 0x3512027d
- (void)updateApplicationInstallationStates;	// 0x35122815
@end

