/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectContextFaultingDelegate.h"
#import "PFUbiquityImportOperation.h"

@class NSString, NSManagedObjectContext, NSPersistentStoreCoordinator, PFUbiquitySwitchboardEntry, NSMutableSet, NSObject, PFUbiquityTransactionLog, PFUbiquityKnowledgeVector, PFUbiquityImportContext, NSError, NSPersistentStore, NSMutableDictionary;
@protocol _PFUbiquityRecordImportOperationDelegate;

@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate> {
	NSManagedObjectContext *_moc;	// 24 = 0x18
	NSPersistentStoreCoordinator *_psc;	// 28 = 0x1c
	NSPersistentStore *_store;	// 32 = 0x20
	PFUbiquityTransactionLog *_transactionLog;	// 36 = 0x24
	PFUbiquitySwitchboardEntry *_entry;	// 40 = 0x28
	NSString *_localPeerID;	// 44 = 0x2c
	NSMutableSet *_insertedObjectIDs;	// 48 = 0x30
	NSMutableSet *_updatedObjectIDs;	// 52 = 0x34
	NSMutableSet *_deletedObjectIDs;	// 56 = 0x38
	PFUbiquityKnowledgeVector *_logScore;	// 60 = 0x3c
	NSMutableDictionary *_resolvedConflicts;	// 64 = 0x40
	BOOL _lockedExistingCoord;	// 68 = 0x44
	PFUbiquityKnowledgeVector *_initialStoreKnowledgeVector;	// 72 = 0x48
	PFUbiquityKnowledgeVector *_updatedStoreKnowledgeVector;	// 76 = 0x4c
	PFUbiquityImportContext *_importContext;	// 80 = 0x50
	BOOL _success;	// 84 = 0x54
	BOOL _transactionDidRollback;	// 85 = 0x55
	BOOL _wroteKV;	// 86 = 0x56
	int _inMemorySequenceNumber;	// 88 = 0x58
	NSError *_operationError;	// 92 = 0x5c
}
@property(assign) NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;	// G=0x30f95ad5; S=0x30f95aa9; 
@property(readonly, assign, nonatomic) NSMutableSet *deletedObjectIDs;	// G=0x30f9c311; @synthesize=_deletedObjectIDs
@property(retain, nonatomic) PFUbiquityImportContext *importContext;	// G=0x30f9c395; S=0x30f9c3a5; @synthesize=_importContext
@property(readonly, assign) PFUbiquityKnowledgeVector *initialStoreKnowledgeVector;	// G=0x30f9c381; @synthesize=_initialStoreKnowledgeVector
@property(readonly, assign, nonatomic) NSMutableSet *insertedObjectIDs;	// G=0x30f9c2f1; @synthesize=_insertedObjectIDs
@property(readonly, assign) NSString *localPeerID;	// G=0x30f9c2dd; @synthesize=_localPeerID
@property(assign) BOOL lockedExistingCoord;	// G=0x30f9c351; S=0x30f9c369; @synthesize=_lockedExistingCoord
@property(retain, nonatomic) PFUbiquityKnowledgeVector *logScore;	// G=0x30f9c331; S=0x30f9c341; @synthesize=_logScore
@property(readonly, assign) NSManagedObjectContext *moc;	// G=0x30f9c2a5; @synthesize=_moc
@property(readonly, assign, nonatomic) NSError *operationError;	// G=0x30f9c409; @synthesize=_operationError
@property(readonly, assign) NSPersistentStoreCoordinator *psc;	// G=0x30f9c2b9; @synthesize=_psc
@property(readonly, assign, nonatomic) NSMutableDictionary *resolvedConflicts;	// G=0x30f9c321; @synthesize=_resolvedConflicts
@property(readonly, assign) NSPersistentStore *store;	// G=0x30f9c3e5; @synthesize=_store
@property(readonly, assign, nonatomic) BOOL success;	// G=0x30f9c3f9; @synthesize=_success
@property(readonly, assign, nonatomic) BOOL transactionDidRollBack;	// G=0x30f9c3d5; @synthesize=_transactionDidRollback
@property(readonly, assign, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x30f9c2cd; @synthesize=_transactionLog
@property(readonly, assign, nonatomic) NSMutableSet *updatedObjectIDs;	// G=0x30f9c301; @synthesize=_updatedObjectIDs
@property(retain, nonatomic) PFUbiquityKnowledgeVector *updatedStoreKnowledgeVector;	// G=0x30f9c3b5; S=0x30f9c3c5; @synthesize=_updatedStoreKnowledgeVector
@property(readonly, assign, nonatomic) BOOL wroteKV;	// G=0x30f9c419; @synthesize=_wroteKV
- (id)init;	// 0x30f956dd
- (id)initWithTransactionLog:(id)transactionLog;	// 0x30f95861
- (id)initWithTransactionLog:(id)transactionLog withLocalPeerID:(id)localPeerID;	// 0x30f958a5
- (BOOL)applyChangesFromStoreSaveSnapshot:(id)storeSaveSnapshot withImportContext:(id)importContext withError:(id *)error;	// 0x30f95b79
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x30f9c199
- (void)coordinatorWillRemoveStore:(id)coordinator;	// 0x30f9c19d
- (id)copy;	// 0x30f95a45
- (void)dealloc;	// 0x30f958e9
// declared property getter: - (id)delegate;	// 0x30f95ad5
// declared property getter: - (id)deletedObjectIDs;	// 0x30f9c311
- (id)description;	// 0x30f9c0f5
- (BOOL)fillManagedObject:(id)object withGlobalID:(id)globalID fromUbiquityDictionary:(id)ubiquityDictionary missingObjects:(id)objects importContext:(id)context withError:(id *)error;	// 0x30f9b76d
// declared property getter: - (id)importContext;	// 0x30f9c395
// declared property getter: - (id)initialStoreKnowledgeVector;	// 0x30f9c381
// declared property getter: - (id)insertedObjectIDs;	// 0x30f9c2f1
// declared property getter: - (id)localPeerID;	// 0x30f9c2dd
// declared property getter: - (BOOL)lockedExistingCoord;	// 0x30f9c351
// declared property getter: - (id)logScore;	// 0x30f9c331
- (void)main;	// 0x30f9632d
// declared property getter: - (id)moc;	// 0x30f9c2a5
- (void)notifyDelegateOfError:(id)error;	// 0x30f95b2d
// declared property getter: - (id)operationError;	// 0x30f9c409
- (BOOL)processObjects:(id)objects withState:(int)state andImportContext:(id)context outError:(id *)error;	// 0x30f99725
// declared property getter: - (id)psc;	// 0x30f9c2b9
// declared property getter: - (id)resolvedConflicts;	// 0x30f9c321
- (void)respondToStoreTransactionStateChangeNotification:(id)storeTransactionStateChangeNotification;	// 0x30f9bd09
- (id)retainedDelegate;	// 0x30f95b01
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30f95aa9
// declared property setter: - (void)setImportContext:(id)context;	// 0x30f9c3a5
// declared property setter: - (void)setLockedExistingCoord:(BOOL)coord;	// 0x30f9c369
// declared property setter: - (void)setLogScore:(id)score;	// 0x30f9c341
// declared property setter: - (void)setUpdatedStoreKnowledgeVector:(id)vector;	// 0x30f9c3c5
// declared property getter: - (id)store;	// 0x30f9c3e5
// declared property getter: - (BOOL)success;	// 0x30f9c3f9
// declared property getter: - (BOOL)transactionDidRollBack;	// 0x30f9c3d5
// declared property getter: - (id)transactionLog;	// 0x30f9c2cd
// declared property getter: - (id)updatedObjectIDs;	// 0x30f9c301
// declared property getter: - (id)updatedStoreKnowledgeVector;	// 0x30f9c3b5
// declared property getter: - (BOOL)wroteKV;	// 0x30f9c419
@end

