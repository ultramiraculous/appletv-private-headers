/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSLocking.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "CoreData-Structs.h"

@class NSMutableSet, NSUndoManager;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
@private
	int _spinLock;	// 4 = 0x4
	id _parentObjectStore;	// 8 = 0x8
	NSUndoManager *_undoManager;	// 12 = 0xc
	void *_dispatchQueue;	// 16 = 0x10
	managedObjectContextFlags _flags;	// 20 = 0x14
	NSMutableSet *_unprocessedChanges;	// 24 = 0x18
	NSMutableSet *_unprocessedDeletes;	// 28 = 0x1c
	NSMutableSet *_unprocessedInserts;	// 32 = 0x20
	NSMutableSet *_insertedObjects;	// 36 = 0x24
	NSMutableSet *_deletedObjects;	// 40 = 0x28
	NSMutableSet *_changedObjects;	// 44 = 0x2c
	NSMutableSet *_lockedObjects;	// 48 = 0x30
	NSMutableSet *_refreshedObjects;	// 52 = 0x34
	id _infoByGID;	// 56 = 0x38
	id *_cachedObsInfoByEntity;	// 60 = 0x3c
	short _undoTransactionID;	// 64 = 0x40
	id _lock;	// 68 = 0x44
	long _lockCount;	// 72 = 0x48
	long _objectStoreLockCount;	// 76 = 0x4c
	double _fetchTimestamp;	// 80 = 0x50
	id _delegate;	// 88 = 0x58
	id _referenceQueue;	// 92 = 0x5c
	id _userinfo;	// 96 = 0x60
	id _mergePolicy;	// 100 = 0x64
	int _cd_rc;	// 104 = 0x68
	int _ignoreChangeNotification;	// 108 = 0x6c
	id _editors;	// 112 = 0x70
	id *_debuggingRecords;	// 116 = 0x74
	id _childObjectStores;	// 120 = 0x78
	id _reserved2;	// 124 = 0x7c
}
@property(readonly, retain) NSMutableSet *deletedObjects;	// G=0x32d746f1; converted property
@property(readonly, retain) NSMutableSet *insertedObjects;	// G=0x32d7462d; converted property
@property(retain) id mergePolicy;	// G=0x32d733bd; S=0x32d14941; converted property
@property(retain) id parentContext;	// G=0x32d79035; S=0x32d78ee5; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x32d14a99; S=0x32d147b5; converted property
@property(assign) BOOL propagatesDeletesAtEndOfEvent;	// G=0x32d747b5; S=0x32d747c9; converted property
@property(assign) BOOL retainsRegisteredObjects;	// G=0x32d73305; S=0x32d73265; converted property
@property(assign) double stalenessInterval;	// G=0x32d289b9; S=0x32d345b1; converted property
@property(retain) NSUndoManager *undoManager;	// G=0x32d74269; S=0x32d148cd; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x32d73039
+ (BOOL)_handleError:(id)error withError:(id *)error2;	// 0x32d7b93d
+ (void)_mergeChangesFromRemoteContextSave:(id)remoteContextSave intoContexts:(id)contexts;	// 0x32d82bd1
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32d73035
+ (void)initialize;	// 0x32d325e1
- (id)init;	// 0x32d02005
- (id)initWithCoder:(id)coder;	// 0x32d776f5
- (id)initWithConcurrencyType:(unsigned)concurrencyType;	// 0x32d02045
- (BOOL)_attemptCoalesceChangesForFetch;	// 0x32d7f1c5
- (unsigned)_batchRetainedObjects:(id *)objects forCount:(unsigned)count withIDs:(id *)ids optionalHandler:(id)handler withInlineStorage:(BOOL)inlineStorage;	// 0x32d7b125
- (void)_changeIDsForManagedObjects:(id)managedObjects toIDs:(id)ids;	// 0x32d7ac41
- (void)_clearChangedThisTransaction:(id)transaction;	// 0x32d7eac5
- (void)_clearDeletions;	// 0x32d7d0b1
- (void)_clearInsertions;	// 0x32d7cec1
- (void)_clearLockedObjects;	// 0x32d7d491
- (void)_clearOriginalSnapshotAndInitializeRec:(id)rec;	// 0x32d7d8ed
- (void)_clearOriginalSnapshotForObject:(id)object;	// 0x32d7d8b5
- (void)_clearRefreshedObjects;	// 0x32d7d4b1
- (void)_clearUnprocessedDeletions;	// 0x32d7d1a9
- (void)_clearUnprocessedInsertions;	// 0x32d7cfb9
- (void)_clearUnprocessedUpdates;	// 0x32d7d399
- (void)_clearUpdates;	// 0x32d7d2a1
- (id)_committedSnapshotForObject:(id)object;	// 0x32d7d95d
- (void)_copyChildObject:(id)object toParentObject:(id)parentObject fromChildContext:(id)childContext;	// 0x32d83e55
- (unsigned)_countWithMergedChangesForRequest:(id)request possibleChanges:(id)changes possibleDeletes:(id)deletes error:(id *)error;	// 0x32d79a91
- (unsigned)_countWithNoChangesForRequest:(id)request error:(id *)error;	// 0x32d79199
- (void)_createAndPostChangeNotification:(id)notification withDeletions:(id)deletions withUpdates:(id)updates withRefreshes:(id)refreshes;	// 0x32d80bdd
- (id)_createStoreFetchRequestForFetchRequest:(id)fetchRequest;	// 0x32d15e41
- (id)_currentEventSnapshotForObject:(id)object;	// 0x32d7d9c5
- (void)_dealloc__;	// 0x32d2996d
- (id)_debuggingOnly_localObjectForGlobalID:(id)globalID;	// 0x32d7d8a1
- (id)_delegate;	// 0x32d82b59
- (void)_didSaveChanges;	// 0x32d7c21d
- (void)_disableChangeNotifications;	// 0x32d2a7c5
- (BOOL)_disableDiscardEditing;	// 0x32d7da71
- (void)_dispose:(BOOL)dispose;	// 0x32d29df9
- (void)_disposeObjects:(id *)objects count:(unsigned long)count notifyParent:(BOOL)parent;	// 0x32d2a945
- (void)_enableChangeNotifications;	// 0x32d817e1
- (void)_enqueueEndOfEventNotification;	// 0x32d81451
- (void)_establishEventSnapshotsForObject:(id)object;	// 0x32d7dabd
- (void)_forceInsertionForObject:(id)object;	// 0x32d7e8b1
- (void)_forceRemoveFromDeletedObjects:(id)deletedObjects;	// 0x32d7e9fd
- (void)_forgetObject:(id)object propagateToObjectStore:(BOOL)objectStore;	// 0x32d7a3e5
- (void)_forgetObject:(id)object propagateToObjectStore:(BOOL)objectStore removeFromRegistry:(BOOL)registry;	// 0x32d7a405
- (id)_globalIDForObject:(id)object;	// 0x32d7d925
- (id)_globalIDsForObjects:(id)objects;	// 0x32d7b065
- (void)_growRegistrationCollectionForEntitySlot:(unsigned)entitySlot toSize:(unsigned)size;	// 0x32d7da05
- (BOOL)_handleError:(id)error withError:(id *)error2;	// 0x32d7b919
- (BOOL)_handleOptimisticLockingError:(id)error withError:(id *)error2;	// 0x32d7b8bd
- (BOOL)_ignoringChangeNotifications;	// 0x32d817c5
- (id)_implicitObservationInfoForEntity:(id)entity forResultingClass:(Class *)resultingClass;	// 0x32d821b5
- (void)_incrementUndoTransactionID;	// 0x32d7ea9d
- (void)_informParentStore:(id)store noLongerInterestedInObjects:(id)objects;	// 0x32d7d5f1
- (void)_informParentStore:(id)store ofInterestInObjects:(id)objects;	// 0x32d7d4d1
- (id)_initWithParentObjectStore:(unsigned long)parentObjectStore;	// 0x32d02161
- (void)_insertObjectWithGlobalID:(id)globalID globalID:(id)anId;	// 0x32d7b771
- (BOOL)_isDeallocating;	// 0x32d73435
- (BOOL)_isImportContext;	// 0x32d7da21
- (BOOL)_isPreflightSaveInProgress;	// 0x32d7da35
- (void)_lockObjectStore_oldSchool;	// 0x32d2f54d
- (void)_managedObjectContextEditor:(id)editor didCommit:(BOOL)commit contextInfo:(XXStruct_gOQQEC *)info;	// 0x32d82a75
- (void)_mergeChangesFromDidSaveDictionary:(id)_mergeChangesFrom usingObjectIDs:(BOOL)ids;	// 0x32d77bed
- (void)_mergeChangesFromRemoteContextSave:(id)remoteContextSave;	// 0x32d83a81
- (void)_mergeRefreshEpilogueForObject:(id)object mergeChanges:(BOOL)changes;	// 0x32d772fd
- (BOOL)_mergeRefreshObject:(id)object mergeChanges:(BOOL)changes withPersistentSnapshot:(id)persistentSnapshot;	// 0x32d76f19
- (id)_newSaveRequestForCurrentState;	// 0x32d7908d
- (id)_newUnchangedLockedObjects;	// 0x32d7b375
- (void)_noop:(id)noop;	// 0x32d80fed
- (void)_objectsChangedInStore:(id)store;	// 0x32d81861
- (id)_orderedSetWithResultsFromFetchRequest:(id)fetchRequest;	// 0x32d82b69
- (id)_parentObjectsForFetchRequest:(id)fetchRequest inContext:(id)context error:(id *)error;	// 0x32d846d5
- (BOOL)_parentObtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x32d858b5
- (id)_parentProcessSaveRequest:(id)request inContext:(id)context error:(id *)error;	// 0x32d8417d
- (id)_parentStore;	// 0x32d287c5
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)_postObjects;	// 0x32d81759
- (void)_postRefreshedObjectsNotificationAndClearList;	// 0x32d7eed1
- (BOOL)_postSaveNotifications;	// 0x32d7daa9
- (BOOL)_prepareForPushChanges:(id *)pushChanges;	// 0x32d7ef59
- (void)_processChangedStoreConfigurationNotification:(id)notification;	// 0x32d818f1
- (BOOL)_processDeletedObjects:(id *)objects;	// 0x32d80ff5
- (void)_processEndOfEventNotification:(id)eventNotification;	// 0x32d814cd
- (void)_processNotificationQueue;	// 0x32d8270d
- (void)_processObjectStoreChanges:(id)changes;	// 0x32d8144d
- (void)_processOwnedObjects:(id)objects set:(id)set boolean:(BOOL)boolean;	// 0x32d80ff1
- (id)_processPendingDeletions:(id)deletions withInsertions:(id)insertions withUpdates:(id)updates withNewlyForgottenList:(id)newlyForgottenList withRemovedChangedObjects:(id)removedChangedObjects;	// 0x32d80411
- (id)_processPendingInsertions:(id)insertions withDeletions:(id)deletions withUpdates:(id)updates;	// 0x32d80779
- (id)_processPendingUpdates:(id)updates;	// 0x32d80a01
- (BOOL)_processRecentChanges:(id *)changes;	// 0x32d7f23d
- (void)_processRecentlyForgottenObjects:(id)objects;	// 0x32d80ea9
- (void)_processReferenceQueue:(BOOL)queue;	// 0x32d2b381
- (void)_propagateDeletesUsingTable:(id)table;	// 0x32d81091
- (BOOL)_propagatePendingDeletesAtEndOfEvent:(id *)event;	// 0x32d80d21
- (void)_refaultObject:(id)object globalID:(id)anId boolean:(BOOL)boolean;	// 0x32d7b501
- (void)_registerClearStateWithUndoManager;	// 0x32d7ed6d
- (void)_registerForNotificationsWithCoordinator:(id)coordinator;	// 0x32d14871
- (void)_registerObject:(id)object withID:(id)anId;	// 0x32d25531
- (void)_registerUndoForDeletedObjects:(id)deletedObjects withDeletedChanges:(id)deletedChanges;	// 0x32d7e25d
- (void)_registerUndoForInsertedObjects:(id)insertedObjects;	// 0x32d7dd59
- (void)_registerUndoForModifiedObjects:(id)modifiedObjects;	// 0x32d7e649
- (void)_registerUndoForOperation:(SEL)operation withObjects:(id)objects withExtraArguments:(id)extraArguments;	// 0x32d7e67d
- (void)_resetAllChanges;	// 0x32d7ae2d
- (id)_retainedObjectWithID:(id)anId;	// 0x32d7ac31
- (id)_retainedObjectWithID:(id)anId error:(id *)error;	// 0x32d7a7d9
- (id)_retainedObjectWithID:(id)anId optionalHandler:(id)handler withInlineStorage:(BOOL)inlineStorage;	// 0x32d24259
- (id)_retainedObjectsFromRemovedStore:(id)removedStore;	// 0x32d7d711
- (id)_retainedRegisteredObjects;	// 0x32d7af6d
- (void)_sendCommitEditingSelectorToTarget:(id)target sender:(id)sender selector:(SEL)selector flag:(BOOL)flag contextInfo:(void *)info delayed:(BOOL)delayed;	// 0x32d82929
- (void)_sendOrEnqueueNotification:(id)notification selector:(SEL)selector;	// 0x32d82301
- (void)_setDelegate:(id)delegate;	// 0x32d82b49
- (void)_setDisableDiscardEditing:(BOOL)editing;	// 0x32d7da4d
- (void)_setIsUbiquityImportContext:(BOOL)context;	// 0x32d7da09
- (void)_setParentContext:(id)context;	// 0x32d78e51
- (void)_setPersistentStoreCoordinator:(id)coordinator;	// 0x32d7303d
- (void)_setPostSaveNotifications:(BOOL)notifications;	// 0x32d7da85
- (void)_setRetainsRegisteredObjects:(BOOL)objects;	// 0x32d73149
- (void)_setStopsValidationAfterFirstError:(BOOL)error;	// 0x32d7d879
- (void)_setUndoManager:(id)manager;	// 0x32d7419d
- (void)_startObservingUndoManagerNotifications;	// 0x32d817f5
- (void)_stopConflictDetectionForObject:(id)object;	// 0x32d82bb1
- (void)_stopObservingUndoManagerNotifications;	// 0x32d29cc1
- (BOOL)_stopsValidationAfterFirstError;	// 0x32d7d861
- (void)_storeConfigurationChanged:(id)changed;	// 0x32d818d5
- (BOOL)_tryRetain;	// 0x32d733e5
- (void)_undoDeletions:(id)deletions;	// 0x32d7de11
- (void)_undoDeletionsMovedToUpdates:(id)updates;	// 0x32d7dd8d
- (void)_undoInsertions:(id)insertions;	// 0x32d7db85
- (void)_undoManagerCheckpoint:(id)checkpoint;	// 0x32d80fc5
- (void)_undoUpdates:(id)updates;	// 0x32d7e48d
- (void)_unlockObjectStore_oldSchool;	// 0x32d31ed5
- (void)_unregisterForNotifications;	// 0x32d29c15
- (void)_updateUndoTransactionForThisEvent:(id)thisEvent withDeletions:(id)deletions withUpdates:(id)updates;	// 0x32d80e25
- (void)_updateUnprocessedOwnDestinations:(id)destinations;	// 0x32d7eecd
- (BOOL)_validateChangesForSave:(id *)save;	// 0x32d7ba91
- (BOOL)_validateDeletesUsingTable:(id)table withError:(id *)error;	// 0x32d7ba51
- (BOOL)_validateObjects:(id)objects forOperation:(unsigned)operation error:(id *)error exhaustive:(BOOL)exhaustive forSave:(BOOL)save;	// 0x32d7bc2d
- (void)assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x32d7428d
- (BOOL)commitEditing;	// 0x32d828b1
- (void)commitEditingWithDelegate:(id)delegate didCommitSelector:(SEL)selector contextInfo:(void *)info;	// 0x32d82a29
- (unsigned)concurrencyType;	// 0x32d79061
- (unsigned)countForFetchRequest:(id)fetchRequest error:(id *)error;	// 0x32d75cad
- (void)dealloc;	// 0x32d29909
- (void)deleteObject:(id)object;	// 0x32d74e0d
// converted property getter: - (id)deletedObjects;	// 0x32d746f1
- (void)detectConflictsForObject:(id)object;	// 0x32d779c5
- (void)discardEditing;	// 0x32d82841
- (void)encodeWithCoder:(id)coder;	// 0x32d778d1
- (id)executeFetchRequest:(id)request error:(id *)error;	// 0x32d14c65
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x32d8496d
- (id)existingObjectWithID:(id)anId error:(id *)error;	// 0x32d75b79
- (void)finalize;	// 0x32d73fad
- (BOOL)hasChanges;	// 0x32d15e29
- (void)insertObject:(id)object;	// 0x32d74d09
// converted property getter: - (id)insertedObjects;	// 0x32d7462d
- (BOOL)isEditing;	// 0x32d82b35
- (void)lock;	// 0x32d77a75
- (void)lockObjectStore;	// 0x32d15f3d
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x32d84dfd
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x32d84ed9
- (void)mergeChangesFromContextDidSaveNotification:(id)mergeChangesFromContext;	// 0x32d78ac9
// converted property getter: - (id)mergePolicy;	// 0x32d733bd
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x32d853d1
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x32d84fb5
- (void)objectDidBeginEditing:(id)object;	// 0x32d82711
- (void)objectDidEndEditing:(id)object;	// 0x32d827a9
- (id)objectRegisteredForID:(id)anId;	// 0x32d7488d
- (id)objectWithID:(id)anId;	// 0x32d75b09
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32d74ac5
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x32d74f85
// converted property getter: - (id)parentContext;	// 0x32d79035
- (void)performBlock:(id)block;	// 0x32d78b95
- (void)performBlockAndWait:(id)wait;	// 0x32d78d81
// converted property getter: - (id)persistentStoreCoordinator;	// 0x32d14a99
- (void)processPendingChanges;	// 0x32d74279
// converted property getter: - (BOOL)propagatesDeletesAtEndOfEvent;	// 0x32d747b5
- (void)redo;	// 0x32d77539
- (void)refreshObject:(id)object mergeChanges:(BOOL)changes;	// 0x32d76a75
- (id)registeredObjects;	// 0x32d74605
- (oneway void)release;	// 0x32d29891
- (void)reset;	// 0x32d73461
- (id)retain;	// 0x32d34641
- (unsigned)retainCount;	// 0x32d733d1
// converted property getter: - (BOOL)retainsRegisteredObjects;	// 0x32d73305
- (void)rollback;	// 0x32d76105
- (BOOL)save:(id *)save;	// 0x32d753cd
// converted property setter: - (void)setMergePolicy:(id)policy;	// 0x32d14941
// converted property setter: - (void)setParentContext:(id)context;	// 0x32d78ee5
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x32d147b5
// converted property setter: - (void)setPropagatesDeletesAtEndOfEvent:(BOOL)event;	// 0x32d747c9
// converted property setter: - (void)setRetainsRegisteredObjects:(BOOL)objects;	// 0x32d73265
// converted property setter: - (void)setStalenessInterval:(double)interval;	// 0x32d345b1
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x32d148cd
// converted property getter: - (double)stalenessInterval;	// 0x32d289b9
- (BOOL)tryLock;	// 0x32d77b09
- (void)undo;	// 0x32d7737d
// converted property getter: - (id)undoManager;	// 0x32d74269
- (void)unlock;	// 0x32d77ba5
- (void)unlockObjectStore;	// 0x32d214e9
- (id)updatedObjects;	// 0x32d74541
- (id)userInfo;	// 0x32d78e41
@end

