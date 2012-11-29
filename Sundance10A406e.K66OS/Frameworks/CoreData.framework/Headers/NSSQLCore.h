/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"
#import "CoreData-Structs.h"
#import "NSFilePresenter.h"

@class NSURL, NSOperationQueue, NSString, NSSaveChangesRequest, NSSQLAdapter, NSMutableArray, NSSQLModel, NSManagedObjectContext, NSMutableSet, NSSet, NSSQLConnection, NSSQLEntity, NSSQLRow, NSSQLRowCache, NSMutableDictionary;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter> {
	NSSQLModel *_model;	// 44 = 0x2c
	NSSQLAdapter *_adapter;	// 48 = 0x30
	NSSQLConnection *_connection;	// 52 = 0x34
	NSMutableArray *_channels;	// 56 = 0x38
	NSManagedObjectContext *_currentContext;	// 60 = 0x3c
	NSSQLEntity *_lastEntity;	// 64 = 0x40
	NSSQLRowCache *_rowCache;	// 68 = 0x44
	NSMutableDictionary *_uniqueTable;	// 72 = 0x48
	NSMutableArray *_toManyCache;	// 76 = 0x4c
	CFSetRef _deleteTable;	// 80 = 0x50
	NSSet *_lockedObjects;	// 84 = 0x54
	CFDictionaryRef _dbOperationsByGlobalID;	// 88 = 0x58
	NSSaveChangesRequest *_currentSaveRequest;	// 92 = 0x5c
	int _lazyFaultDebugLevel;	// 96 = 0x60
	NSMutableDictionary *_batchFaultBuffer;	// 100 = 0x64
	NSMutableDictionary *_batchToManyFaultBuffer;	// 104 = 0x68
	NSScalarObjectID *_currentGlobalID;	// 108 = 0x6c
	NSSQLRow *_currentRow;	// 112 = 0x70
	id _observer;	// 116 = 0x74
	NSMutableSet *_missingObjectGIDs;	// 120 = 0x78
	NSMutableDictionary *_storeMetadata;	// 124 = 0x7c
	NSMutableArray *_externalDataReferencesToSave;	// 128 = 0x80
	NSMutableSet *_externalDataReferencesToDelete;	// 132 = 0x84
	NSString *_externalDataReferencesDirectory;	// 136 = 0x88
	NSString *_externalDataLinksDirectory;	// 140 = 0x8c
	int _transactionInMemorySequence;	// 144 = 0x90
	int _debug;	// 148 = 0x94
	sqlCoreFlags _sqlCoreFlags;	// 152 = 0x98
}
@property(readonly, retain) NSSQLAdapter *adapter;	// G=0x33cc7b6d; converted property
@property(readonly, retain) NSMutableArray *channels;	// G=0x33cdb001; converted property
@property(readonly, retain) NSSQLConnection *connection;	// G=0x33cc7b15; converted property
@property(retain) NSManagedObjectContext *currentContext;	// G=0x33cdb1f9; S=0x33cd2391; converted property
@property(retain) id databaseUUID;	// G=0x33cce29d; S=0x33d6c7a1; converted property
@property(readonly, retain) NSString *externalDataLinksDirectory;	// G=0x33cccbe5; converted property
@property(readonly, retain) NSString *externalDataReferencesDirectory;	// G=0x33ccc7d5; converted property
@property(readonly, retain) NSMutableSet *externalDataReferencesToDelete;	// G=0x33d6b0ad; converted property
@property(readonly, retain) NSMutableArray *externalDataReferencesToSave;	// G=0x33d6b05d; converted property
@property(retain) id metadata;	// G=0x33ccd24d; S=0x33cce6d5; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x33cce269; converted property
@property(readonly, assign) NSOperationQueue *presentedItemOperationQueue;	// G=0x33d7336d; 
@property(readonly, assign) NSURL *presentedItemURL;	// G=0x33d7335d; 
@property(readonly, assign) NSURL *primaryPresentedItemURL;
@property(readonly, retain) NSSQLRowCache *rowCache;	// G=0x33cd2c35; converted property
+ (BOOL)SQLGenerationV1Default;	// 0x33cd32e1
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;	// 0x33d6f7c9
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)to;	// 0x33d6af51
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 error:(id *)error;	// 0x33d6f8bd
+ (BOOL)coloredLoggingDefault;	// 0x33cc7741
+ (int)debugDefault;	// 0x33cc7731
+ (void)initialize;	// 0x33cb84e9
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x33d6ef61
+ (Class)migrationManagerClass;	// 0x33d604a9
+ (BOOL)sanityCheckFileAtURL:(id)url error:(id *)error;	// 0x33d6ed5d
+ (void)setColoredLoggingDefault:(BOOL)aDefault;	// 0x33d60489
+ (void)setDebugDefault:(int)aDefault;	// 0x33d60479
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x33d6f4c9
+ (void)setSQLGenerationV1Default:(BOOL)aDefault;	// 0x33d60499
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x33cc0ee5
- (id)_addDatabaseContextStateToException:(id)exception;	// 0x33d637d5
- (void)_addDeletesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x33d68491
- (void)_addInsertsToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x33d68161
- (void)_addManyToManysToDatabaseOp:(id)databaseOp;	// 0x33d6856d
- (void)_addUpdatesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x33d67b25
- (void)_assertValidStateWithSelector:(SEL)selector;	// 0x33d636a9
- (id)_availableChannel;	// 0x33cdaecd
- (id)_availableChannelFromRegisteredChannels;	// 0x33cdaf81
- (void)_beginTransaction:(id)transaction;	// 0x33d61471
- (void)_checkAndRepairCorrelationTables:(BOOL)tables storeVersionNumber:(id)number;	// 0x33d6c5e1
- (void)_cleanUpAfterSave;	// 0x33d63759
- (void)_cleanUpAfterTransaction;	// 0x33d61759
- (id)_collectSkewedComponents:(id *)components;	// 0x33d6c099
- (void)_commitTransaction:(id)transaction;	// 0x33d617f9
- (id)_databaseContextState;	// 0x33d637b9
- (void)_disconnect;	// 0x33d60565
- (id)_dissectCorrelationTableCreationSQL:(id)sql;	// 0x33d6bf75
- (void)_ensureDatabaseMatchesModel;	// 0x33ccda19
- (id)_entityForObject:(id)object;	// 0x33d6944d
- (unsigned)_knownEntityKeyForObject:(id)object;	// 0x33d63b11
- (unsigned)_knownEntityKeyForObjectID:(id)objectID;	// 0x33d63a85
- (unsigned)_knownOrderKeyForObject:(id)object from:(id)from inverseToMany:(id)many;	// 0x33d63d05
- (unsigned)_knownOrderKeyForObject:(id)object from:(id)from orderedManyToMany:(id)many;	// 0x33d63de9
- (long long)_knownPrimaryKeyForObject:(id)object;	// 0x33d63a4d
- (long long)_knownPrimaryKeyForObjectID:(id)objectID;	// 0x33d639c5
- (id)_loadAndSetMetadata;	// 0x33cc7a05
- (id)_loadAndSetMetadataReadOnly;	// 0x33d6c78d
- (id)_newAdapterForModel:(id)model;	// 0x33cc7bb5
- (id)_newConflictRecordForObject:(id)object originalRow:(id)row newRow:(id)row3;	// 0x33d69e11
- (id)_newObjectGraphStyleForSQLRow:(id)sqlrow withObject:(id)object;	// 0x33d69bcd
- (id)_newObjectIDForEntity:(id)entity referenceData64:(unsigned long long)a64;	// 0x33d73289
- (id)_newReservedKeysForEntities:(id)entities counts:(id)counts;	// 0x33d72e51
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)relationship rowCacheOriginal:(id)original originalSnapshot:(id)snapshot value:(id)value added:(id)added deleted:(id)deleted sourceRowPK:(long long)pk properties:(id)properties sourceObject:(id)object newIndexes:(unsigned **)indexes reorderedIndexes:(char **)indexes11;	// 0x33d65689
- (id)_newRowsForFetchPlan:(id)fetchPlan selectedBy:(SEL)by withArgument:(id)argument;	// 0x33cd99b9
- (Class)_objectIDClass;	// 0x33cdcc4d
- (id)_obtainOpenChannel;	// 0x33cdaddd
- (unsigned)_orderKeyForObject:(id)object fromSourceObjectID:(id)sourceObjectID inverseRelationship:(id)relationship inOrderedSet:(id)orderedSet;	// 0x33d63cc1
- (void)_performChangesWithAdapterOps:(id)adapterOps;	// 0x33d6a241
- (id)_performExhaustiveConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x33d69ee5
- (BOOL)_performFastConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x33d6998d
- (void)_performPostSaveTasks;	// 0x33d728dd
- (void)_populateOrderKeysInOrderedSet:(id)orderedSet usingSourceObjectID:(id)anId inverseRelationship:(id)relationship newIndexes:(unsigned **)indexes reorderedIndexes:(char **)indexes5;	// 0x33d63b49
- (void)_populateRowForOp:(id)op withObject:(id)object;	// 0x33d63f99
- (id)_predicateForSelectingObjectForOperation:(id)operation;	// 0x33d67965
- (void)_prefetchRelationshipKey:(id)key sourceEntityDescription:(id)description sourceObjectIDs:(id)ids prefetchRelationshipKeys:(id)keys inContext:(id)context;	// 0x33d6fe69
- (void)_prefetchWithFetchRequest:(id)fetchRequest withObjectIDs:(id)objectIDs inContext:(id)context;	// 0x33d71c2d
- (id)_prepareDictionaryResultsFromResultSet:(XXStruct_FUWWfB *)resultSet usingFetchPlan:(id)plan;	// 0x33d625d1
- (id)_prepareResultsFromResultSet:(XXStruct_FUWWfB *)resultSet usingFetchPlan:(id)plan withMatchingRows:(id *)matchingRows;	// 0x33cdbd4d
- (void)_purgeRowCache;	// 0x33d728b5
- (void)_repairDatabaseCorrelationTables:(id)tables brokenHashModel:(id)model storeVersionNumber:(id)number recurse:(BOOL)recurse;	// 0x33d6b911
- (CFArrayRef)_rowsForConflictDetection:(id)conflictDetection withChannel:(id)channel;	// 0x33d69785
- (void)_setMetadata:(id)metadata;	// 0x33ccd1b9
- (id)_ubiquityDictionaryForAttribute:(id)attribute onObject:(id)object;	// 0x33d6b345
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)completionHandler;	// 0x33d7337d
// converted property getter: - (id)adapter;	// 0x33cc7b6d
- (id)availableChannel;	// 0x33d624e1
- (void)beginTransaction;	// 0x33d61619
- (void)beginTransaction_NotificationFree;	// 0x33d61609
- (void)beginTransaction_core;	// 0x33d615ad
// converted property getter: - (id)channels;	// 0x33cdb001
- (void)commitChanges:(id)changes;	// 0x33d6ab71
- (void)commitTransaction;	// 0x33d61ad5
- (void)commitTransaction_NotificationFree;	// 0x33d61ac5
- (void)commitTransaction_core;	// 0x33d61a65
// converted property getter: - (id)connection;	// 0x33cc7b15
- (id)countForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x33d63061
- (void)createAdapterOperationsForDatabaseOperation:(id)databaseOperation;	// 0x33d687d5
- (id)createChannel;	// 0x33d624dd
// converted property getter: - (id)currentContext;	// 0x33cdb1f9
- (id)databaseOperationForGlobalID:(id)globalID;	// 0x33d64ee9
- (id)databaseOperationForObject:(id)object;	// 0x33d64f71
// converted property getter: - (id)databaseUUID;	// 0x33cce29d
- (void)dealloc;	// 0x33d6066d
- (void)deleteExternalDataReferences:(id)references;	// 0x33d6b291
- (id)entityForEntityDescription:(id)entityDescription;	// 0x33d60535
- (id)entityForFetchRequest:(id)fetchRequest;	// 0x33cd305d
- (id)entityForObject:(id)object;	// 0x33d604c5
- (id)entityNameOrderingArrayForEntities:(id)entities;	// 0x33d689e5
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x33cd1f45
// converted property getter: - (id)externalDataLinksDirectory;	// 0x33cccbe5
// converted property getter: - (id)externalDataReferencesDirectory;	// 0x33ccc7d5
// converted property getter: - (id)externalDataReferencesToDelete;	// 0x33d6b0ad
// converted property getter: - (id)externalDataReferencesToSave;	// 0x33d6b05d
- (id)externalLocationForFileWithUUID:(id)uuid;	// 0x33d6b005
- (id)fetchRowForObjectID:(NSScalarObjectID *)objectID;	// 0x33d6c7ed
- (int)fileProtectionLevel;	// 0x33cc8aa9
- (void)forgetSnapshotForGlobalID:(id)globalID;	// 0x33d62301
- (void)forgetSnapshotsForGlobalIDs:(id)globalIDs;	// 0x33d6250d
- (void)generatePrimaryKeysForEntity:(id)entity;	// 0x33d68ee5
- (id)hackQueryForManyToManyPrefetching:(id)manyPrefetching andSourceObjectIDs:(id)ids orderColumnName:(id)name;	// 0x33d6d4c5
- (BOOL)handlesFetchRequest:(id)request;	// 0x33d68ec9
- (id)identifier;	// 0x33cce28d
- (void)insertEntity:(id)entity intoOrderingArray:(id)array withDependencies:(id)dependencies processingSet:(id)set;	// 0x33d688d9
- (void)invalidateObjectsWithGlobalIDs:(id)globalIDs;	// 0x33d63699
- (const id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x33d60ced
- (BOOL)load:(id *)load;	// 0x33ccd8dd
- (BOOL)loadMetadata:(id *)metadata;	// 0x33cc77bd
- (id)localSnapshotForGlobalID:(id)globalID;	// 0x33d623e9
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x33d609c9
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x33d60a91
// converted property getter: - (id)metadata;	// 0x33ccd24d
- (id)missingObjectGlobalIDs;	// 0x33d624bd
// converted property getter: - (id)model;	// 0x33cce269
- (id)newAdapterForModel:(id)model;	// 0x33d60991
- (id)newFaultingPredicateForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x33d6df59
- (id)newFetchedPKsForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x33d6e1c9
- (NSScalarObjectID *)newForeignKeyID:(long long)anId entity:(id)entity;	// 0x33d608ed
- (NSScalarObjectID *)newObjectIDForEntity:(id)entity pk:(long long)pk;	// 0x33d608ad
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)manyPrefetchingRequest andSourceObjectIDs:(id)ids orderColumnName:(id)name;	// 0x33d6d861
- (id)newRowsForFetchPlan:(id)fetchPlan;	// 0x33cd2e61
- (id)newSortDescriptorForOrderedRelationship:(id)orderedRelationship;	// 0x33d6dee5
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x33d60df9
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x33d60b59
- (id)objectIDFactoryForEntity:(id)entity;	// 0x33d60839
- (Class)objectIDFactoryForSQLEntity:(id)sqlentity;	// 0x33cdcb01
- (id)objectsForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x33cd23a5
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x33d71eb5
- (id)orderAdapterOperations;	// 0x33d689e9
- (BOOL)ownsGlobalID:(id)anId;	// 0x33d68dcd
- (BOOL)ownsObject:(id)object;	// 0x33d68e69
- (void)performChanges;	// 0x33d6a4d1
- (id)permanentObjectIDForObjectInTransaction:(id)transaction;	// 0x33d64f0d
- (void)prepareForSave:(id)save;	// 0x33d68fb1
// declared property getter: - (id)presentedItemOperationQueue;	// 0x33d7336d
// declared property getter: - (id)presentedItemURL;	// 0x33d7335d
- (id)rawSQLTextForToManyFaultStatement:(id)manyFaultStatement stripBindVariables:(BOOL)variables swapEKPK:(BOOL)ekpk;	// 0x33d6cfa1
- (void)recomputePrimaryKeyMaxForEntities:(id)entities;	// 0x33d72905
- (void)recordChangesInContext:(id)context;	// 0x33d6947d
- (void)recordDatabaseOperation:(id)operation;	// 0x33d64e8d
- (void)recordDeleteForObject:(id)object;	// 0x33d64b4d
- (void)recordPrimaryKey:(long long)key forInsertedObject:(id)insertedObject withSQLEntity:(id)sqlentity;	// 0x33d63ecd
- (void)recordSnapshot:(id)snapshot forObjectID:(id)objectID;	// 0x33d61e75
- (void)recordToMany:(id)many forSourceObjectID:(id)sourceObjectID relationshipName:(id)name orderKeys:(id)keys;	// 0x33d61f7d
- (void)recordToManyInsertsForObject:(id)object withOperation:(id)operation;	// 0x33d6524d
- (void)recordToManyUpdatesForObject:(id)object withOperation:(id)operation;	// 0x33d66c19
- (void)recordUpdateForObject:(id)object;	// 0x33d6785d
- (void)recordValuesForInsertedObject:(id)insertedObject;	// 0x33d67901
- (id)refreshObjects:(id)objects;	// 0x33d6b8fd
- (void)registerChannel:(id)channel;	// 0x33cdb0c5
- (void)rollbackChanges;	// 0x33d6a89d
- (void)rollbackTransaction;	// 0x33d61d35
- (void)rollbackTransaction_core;	// 0x33d61cc1
// converted property getter: - (id)rowCache;	// 0x33cd2c35
- (id)rowForObjectID:(id)objectID;	// 0x33d62489
- (id)rowForObjectID:(id)objectID after:(double)after;	// 0x33d62411
- (id)safeguardLocationForFileWithUUID:(id)uuid;	// 0x33d6b031
- (id)saveChanges:(id)changes;	// 0x33d6b4a9
// converted property setter: - (void)setCurrentContext:(id)context;	// 0x33cd2391
// converted property setter: - (void)setDatabaseUUID:(id)uuid;	// 0x33d6c7a1
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x33d60941
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x33cce6d5
- (void)setURL:(id)url;	// 0x33d607bd
- (id)type;	// 0x33ccd17d
- (void)unregisterChannel:(id)channel;	// 0x33d61399
- (void)willRemoveFromPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x33d605f1
- (id)writeExternalDataReferences;	// 0x33d6b0fd
@end
