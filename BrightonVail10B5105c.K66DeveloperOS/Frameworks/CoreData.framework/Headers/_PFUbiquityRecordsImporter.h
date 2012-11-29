/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectContextFaultingDelegate.h"
#import "_PFUbiquityRecordImportOperationDelegate.h"
#import "PFUbiquityImportScanOperationDelegate.h"
#import "PFUbiquityBaselineRollOperationDelegate.h"
#import "PFUbiquityBaselineRecoveryOperationDelegate.h"
#import "PFUbiquityBaselineRollResponseOperationDelegate.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, PFUbiquityLocation, NSString, NSLock, NSRecursiveLock, NSMutableSet, NSSet, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityImportScanOperationDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate> {
	NSOperationQueue *_importQueue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_privateQueue;	// 8 = 0x8
	BOOL _isMonitoring;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	PFUbiquityLocation *_ubiquityRootLocation;	// 20 = 0x14
	NSMutableSet *_pendingTransactionLogLocations;	// 24 = 0x18
	NSMutableSet *_failedPendingTransactionLogs;	// 28 = 0x1c
	NSObject<OS_dispatch_source> *_logRestartTimer;	// 32 = 0x20
	BOOL _hasScheduledPendingLogsBlock;	// 36 = 0x24
	BOOL _hasScheduledFailedLogsBlock;	// 37 = 0x25
	NSRecursiveLock *_schedulingLock;	// 40 = 0x28
	NSLock *_pendingLocationsLock;	// 44 = 0x2c
	BOOL _importOnlyActiveStores;	// 48 = 0x30
	BOOL _throttleNotifications;	// 49 = 0x31
	unsigned _numPendingNotifications;	// 52 = 0x34
	NSMutableDictionary *_pendingNotificationUserInfo;	// 56 = 0x38
	BOOL _allowBaselineRoll;	// 60 = 0x3c
	unsigned _pendingImportOperationsCount;	// 64 = 0x40
	NSSet *_failedPendingTransactionLogLocations;	// 68 = 0x44
}
@property(assign) BOOL allowBaselineRoll;	// G=0x3634fcd1; S=0x3634fce9; @synthesize=_allowBaselineRoll
@property(readonly, assign) NSSet *failedPendingTransactionLogLocations;	// G=0x3634fd15; @synthesize=_failedPendingTransactionLogLocations
@property(assign) BOOL importOnlyActiveStores;	// G=0x3634fca1; S=0x3634fcb9; @synthesize=_importOnlyActiveStores
@property(readonly, assign) NSOperationQueue *importQueue;	// G=0x3634fbe1; @synthesize=_importQueue
@property(readonly, assign) BOOL isMonitoring;	// G=0x3634fc09; @synthesize=_isMonitoring
@property(readonly, assign) NSString *localPeerID;	// G=0x3634fbf5; @synthesize=_localPeerID
@property(assign) NSObject<OS_dispatch_source> *logRestartTimer;	// G=0x3634fc35; S=0x3634fc49; @synthesize=_logRestartTimer
@property(readonly, assign) NSSet *pendingTransactionLogLocations;	// G=0x3634fd01; @synthesize=_pendingTransactionLogLocations
@property(readonly, assign, nonatomic) NSRecursiveLock *schedulingLock;	// G=0x3634fc61; @synthesize=_schedulingLock
@property(assign) BOOL throttleNotifications;	// G=0x3634fc71; S=0x3634fc89; @synthesize=_throttleNotifications
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x3634fc21; @synthesize=_ubiquityRootLocation
+ (void)afterDelay:(double)delay executeBlockOnRootQueue:(id)queue;	// 0x3634fb99
+ (BOOL)canProcessContentsOfUbiquityRootPath:(id)ubiquityRootPath;	// 0x3634dfdd
+ (void)executeBlockOnRootQueue:(id)queue;	// 0x3634fb85
+ (void)initialize;	// 0x36347b59
- (id)init;	// 0x36347bcd
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x36347bd1
- (void)_applicationResumed:(id)resumed;	// 0x3634b7a9
// declared property getter: - (BOOL)allowBaselineRoll;	// 0x3634fcd1
- (void)awakeFromLaunch:(BOOL)launch;	// 0x36347fd5
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)state;	// 0x3634f085
- (void)baselineRollOperationWasUnableToLockPersistentStore:(id)lockPersistentStore;	// 0x3634f095
- (BOOL)canProcessTransactionLogWithScore:(id)score afterLogWithScore:(id)score2;	// 0x363496f9
- (BOOL)checkSchedulingContextForMissingLocalPeerOperations:(id)missingLocalPeerOperations error:(id *)error;	// 0x363498dd
- (int)compareScoreKnowledgeVector:(id)vector withScoreDictionary:(id)scoreDictionary;	// 0x3634dfc1
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x3634dfd9
- (id)createDictionaryOfStoreNameToLocations:(id)locations;	// 0x3634a28d
- (id)createSortedOperationsArrayForLogLocationsInContext:(id)context isFirstImport:(BOOL)import;	// 0x36347ff9
- (void)dealloc;	// 0x36347dd9
- (id)description;	// 0x36347f45
- (void)executeBlockOnPrivateQueue:(id)queue;	// 0x3634fb71
// declared property getter: - (id)failedPendingTransactionLogLocations;	// 0x3634fd15
- (void)filePresenter:(id)presenter wasNotifiedOfTransactionLogLocation:(id)transactionLogLocation;	// 0x3634a5e1
// declared property getter: - (BOOL)importOnlyActiveStores;	// 0x3634fca1
// declared property getter: - (id)importQueue;	// 0x3634fbe1
// declared property getter: - (BOOL)isMonitoring;	// 0x3634fc09
// declared property getter: - (id)localPeerID;	// 0x3634fbf5
// declared property getter: - (id)logRestartTimer;	// 0x3634fc35
- (void)metadataInconsistencyDetectedForStore:(id)store;	// 0x3634f559
- (void)operation:(id)operation failedWithError:(id)error;	// 0x3634c925
- (void)operationDidFinish:(id)operation;	// 0x3634c511
- (void)operationWasInterruptedDuringImport:(id)import;	// 0x3634cba1
// declared property getter: - (id)pendingTransactionLogLocations;	// 0x3634fd01
- (void)postImportNotificationForStoreName:(id)storeName andLocalPeerID:(id)anId withUserInfo:(id)userInfo;	// 0x3634c325
- (void)recoverFailedLogs;	// 0x3634abbd
- (void)recoveryOperation:(id)operation didReplaceLocalStoreFileWithBaseline:(id)baseline;	// 0x3634f0c5
- (void)recoveryOperation:(id)operation encounteredAnError:(id)error duringRecoveryOfBaseline:(id)baseline;	// 0x3634f549
- (void)requestBaselineRollForStore:(id)store;	// 0x3634e159
- (void)rollResponseOperation:(id)operation encounteredAnError:(id)error whileTryingToAdoptBaseline:(id)adoptBaseline;	// 0x3634f4b9
- (void)rollResponseOperation:(id)operation successfullyAdoptedBaseline:(id)baseline;	// 0x3634f2b9
- (void)scanOperation:(id)operation failedWithError:(id)error;	// 0x3634df41
- (BOOL)scanOperationFinished:(id)finished withDiscoveredLogLocation:(id)discoveredLogLocation error:(id *)error;	// 0x3634d23d
- (void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)activeBaselineOperation;	// 0x3634eea1
- (void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)location;	// 0x3634e579
- (void)schedulePendingLogs;	// 0x3634a8c9
- (void)scheduleRecoveryTimer;	// 0x3634cc01
- (BOOL)scheduleTransactionLogOperations:(id)operations synchronous:(BOOL)synchronous error:(id *)error;	// 0x36349e8d
- (BOOL)scheduleUbiquityRootScan:(BOOL)scan withLocalPeerLogs:(BOOL)localPeerLogs error:(id *)error;	// 0x3634ce39
// declared property getter: - (id)schedulingLock;	// 0x3634fc61
// declared property setter: - (void)setAllowBaselineRoll:(BOOL)roll;	// 0x3634fce9
// declared property setter: - (void)setImportOnlyActiveStores:(BOOL)stores;	// 0x3634fcb9
// declared property setter: - (void)setLogRestartTimer:(id)timer;	// 0x3634fc49
// declared property setter: - (void)setThrottleNotifications:(BOOL)notifications;	// 0x3634fc89
- (BOOL)shouldThrottleNotificationsWithOperation:(id)operation;	// 0x3634c321
- (BOOL)startMonitor:(id *)monitor;	// 0x3634a405
- (void)stopMonitor;	// 0x3634a53d
// declared property getter: - (BOOL)throttleNotifications;	// 0x3634fc71
- (void)ubiquityIdentityChanged:(id)changed;	// 0x3634bedd
// declared property getter: - (id)ubiquityRootLocation;	// 0x3634fc21
@end
