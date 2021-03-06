/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, PFUbiquityLocation, NSTimer, NSDate, NSPersistentStoreCoordinator, NSLock;

@interface _PFUbiquityRecordsExporter : NSObject {
	NSString *_localPeerID;	// 4 = 0x4
	NSTimer *_tempMoveTimer;	// 8 = 0x8
	NSDate *_lastTransactionDate;	// 12 = 0xc
	PFUbiquityLocation *_ubiquityRootLocation;	// 16 = 0x10
	NSPersistentStoreCoordinator *_monitoredPersistentStoreCoordinator;	// 20 = 0x14
	NSLock *_transactionLock;	// 24 = 0x18
	NSMutableDictionary *_pendingTransactionsToStoreNameAndTransactionNumber;	// 28 = 0x1c
}
@property(retain) NSDate *lastTransactionDate;	// G=0x30fa02ad; S=0x30fa02c1; @synthesize=_lastTransactionDate
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x30fa0269; @synthesize=_localPeerID
@property(retain) NSTimer *tempMoveTimer;	// G=0x30fa0289; S=0x30fa029d; @synthesize=_tempMoveTimer
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x30fa0279; @synthesize=_ubiquityRootLocation
- (id)init;	// 0x30f9c429
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x30f9c42d
- (void)beginWatchingForChangesFromStore:(id)store;	// 0x30f9c72d
- (void)cleanUpFromRolledbackPendingTransaction:(id)rolledbackPendingTransaction withNotification:(id)notification;	// 0x30f9cc51
- (id)createDictionaryForObjectsInSaveNotification:(id)saveNotification forTransactionOfType:(int)type withExportContext:(id)exportContext andSaveSnapshot:(id)snapshot;	// 0x30f9f035
- (id)createSetOfStoresToExportForNotification:(id)notification;	// 0x30f9caf5
- (void)dealloc;	// 0x30f9c545
- (id)description;	// 0x30f9c671
// declared property getter: - (id)lastTransactionDate;	// 0x30fa02ad
// declared property getter: - (id)localPeerID;	// 0x30fa0269
- (void)managedObjectContextDidSave:(id)managedObjectContext;	// 0x30f9d419
- (void)onlyExportFromPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x30f9f689
- (void)scheduleTempMoveTimerWithPeerURL:(id)peerURL;	// 0x30fa00f1
// declared property setter: - (void)setLastTransactionDate:(id)date;	// 0x30fa02c1
// declared property setter: - (void)setTempMoveTimer:(id)timer;	// 0x30fa029d
- (BOOL)shouldRespondToSaveNotification:(id)saveNotification;	// 0x30f9c785
// declared property getter: - (id)tempMoveTimer;	// 0x30fa0289
- (void)timerMoveLogsFromTempDirectory:(id)tempDirectory;	// 0x30f9f699
// declared property getter: - (id)ubiquityRootLocation;	// 0x30fa0279
@end

