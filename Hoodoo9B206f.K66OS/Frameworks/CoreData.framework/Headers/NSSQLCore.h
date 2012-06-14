/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"
#import "CoreData-Structs.h"

@class NSString, NSMutableArray, NSMutableSet, NSSet, NSSaveChangesRequest, NSSQLAdapter, NSSQLModel, NSManagedObjectContext, NSMutableDictionary, NSSQLConnection, NSSQLEntity, NSSQLRow, NSSQLRowCache;

__attribute__((visibility("hidden")))
@interface NSSQLCore : NSPersistentStore {
@private
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
@property(readonly, retain) NSSQLAdapter *adapter;	// G=0x3622f65d; converted property
@property(readonly, retain) NSMutableArray *channels;	// G=0x36242e99; converted property
@property(readonly, retain) NSSQLConnection *connection;	// G=0x3622f60d; converted property
@property(retain) NSManagedObjectContext *currentContext;	// G=0x362430bd; S=0x36239265; converted property
@property(retain) id databaseUUID;	// G=0x36235e01; S=0x362d91a5; converted property
@property(readonly, retain) NSString *externalDataLinksDirectory;	// G=0x362341c9; converted property
@property(readonly, retain) NSString *externalDataReferencesDirectory;	// G=0x36233d95; converted property
@property(readonly, retain) NSMutableSet *externalDataReferencesToDelete;	// G=0x362d8fd9; converted property
@property(readonly, retain) NSMutableArray *externalDataReferencesToSave;	// G=0x362d8f8d; converted property
@property(retain) id metadata;	// G=0x36234871; S=0x36236215; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x36235dd1; converted property
@property(readonly, retain) NSSQLRowCache *rowCache;	// G=0x36239bdd; converted property
+ (BOOL)SQLGenerationV1Default;	// 0x3623a2b5
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;	// 0x362da6e5
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)to;	// 0x362d9835
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 error:(id *)error;	// 0x362d9afd
+ (BOOL)coloredLoggingDefault;	// 0x3622f249
+ (int)debugDefault;	// 0x3622f239
+ (void)initialize;	// 0x36256c19
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x362dab15
+ (Class)migrationManagerClass;	// 0x362d9819
+ (BOOL)sanityCheckFileAtURL:(id)url error:(id *)error;	// 0x362d98e5
+ (void)setColoredLoggingDefault:(BOOL)aDefault;	// 0x362d77c5
+ (void)setDebugDefault:(int)aDefault;	// 0x362d77b5
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x362da7cd
+ (void)setSQLGenerationV1Default:(BOOL)aDefault;	// 0x362d77d5
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x3622914d
- (id)_addDatabaseContextStateToException:(id)exception;	// 0x362d8169
- (void)_addDeletesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x362d87ad
- (void)_addInsertsToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x362e3931
- (void)_addManyToManysToDatabaseOp:(id)databaseOp;	// 0x362d9e85
- (void)_addUpdatesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x362e3c59
- (void)_assertValidStateWithSelector:(SEL)selector;	// 0x362e845d
- (id)_availableChannel;	// 0x36242d71
- (id)_availableChannelFromRegisteredChannels;	// 0x36242e21
- (void)_beginTransaction:(id)transaction;	// 0x362ea229
- (void)_checkAndRepairCorrelationTables:(BOOL)tables storeVersionNumber:(id)number;	// 0x362da1ad
- (void)_cleanUpAfterSave;	// 0x362d80ed
- (void)_cleanUpAfterTransaction;	// 0x362d7ac1
- (id)_collectSkewedComponents:(id *)components;	// 0x362e0139
- (void)_commitTransaction:(id)transaction;	// 0x362e9fcd
- (id)_databaseContextState;	// 0x362d814d
- (void)_disconnect;	// 0x362504cd
- (id)_dissectCorrelationTableCreationSQL:(id)sql;	// 0x362e0711
- (void)_ensureDatabaseMatchesModel;	// 0x3623545d
- (id)_entityForObject:(id)object;	// 0x362d8bb5
- (unsigned)_knownEntityKeyForObject:(id)object;	// 0x362d84b1
- (unsigned)_knownEntityKeyForObjectID:(id)objectID;	// 0x362d8415
- (unsigned)_knownOrderKeyForObject:(id)object from:(id)from inverseToMany:(id)many;	// 0x362e8371
- (unsigned)_knownOrderKeyForObject:(id)object from:(id)from orderedManyToMany:(id)many;	// 0x362e8285
- (long long)_knownPrimaryKeyForObject:(id)object;	// 0x362d83dd
- (long long)_knownPrimaryKeyForObjectID:(id)objectID;	// 0x362d8359
- (id)_loadAndSetMetadata;	// 0x3622f501
- (id)_loadAndSetMetadataReadOnly;	// 0x362d9195
- (id)_newAdapterForModel:(id)model;	// 0x3622f69d
- (id)_newConflictRecordForObject:(id)object originalRow:(id)row newRow:(id)row3;	// 0x362d8e61
- (id)_newObjectGraphStyleForSQLRow:(id)sqlrow withObject:(id)object;	// 0x362e28c1
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)relationship rowCacheOriginal:(id)original originalSnapshot:(id)snapshot value:(id)value added:(id)added deleted:(id)deleted sourceRowPK:(long long)pk properties:(id)properties sourceObject:(id)object reorderedIndexes:(char **)indexes;	// 0x362e4d85
- (id)_newRowsForFetchPlan:(id)fetchPlan selectedBy:(SEL)by withArgument:(id)argument;	// 0x3624191d
- (Class)_objectIDClass;	// 0x362455ed
- (id)_obtainOpenChannel;	// 0x36242c81
- (unsigned)_orderKeyForObject:(id)object fromSourceObjectID:(id)sourceObjectID inverseRelationship:(id)relationship inOrderedSet:(id)orderedSet;	// 0x362d85ed
- (void)_performChangesWithAdapterOps:(id)adapterOps;	// 0x362e22bd
- (id)_performExhaustiveConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x362e256d
- (BOOL)_performFastConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x362e2aed
- (void)_performPostSaveTasks;	// 0x362d97f1
- (void)_populateOrderKeysInOrderedSet:(id)orderedSet usingSourceObjectID:(id)anId inverseRelationship:(id)relationship reorderedIndexes:(char **)indexes;	// 0x362d84e9
- (void)_populateRowForOp:(id)op withObject:(id)object;	// 0x362e73d5
- (id)_predicateForSelectingObjectForOperation:(id)operation;	// 0x362d9cc1
- (void)_prefetchRelationshipKey:(id)key sourceEntityDescription:(id)description sourceObjectIDs:(id)ids prefetchRelationshipKeys:(id)keys inContext:(id)context;	// 0x362dc009
- (void)_prefetchWithFetchRequest:(id)fetchRequest withObjectIDs:(id)objectIDs inContext:(id)context;	// 0x362d9549
- (id)_prepareDictionaryResultsFromResultSet:(XXStruct_FUWWfB *)resultSet usingFetchPlan:(id)plan;	// 0x362e8bfd
- (id)_prepareResultsFromResultSet:(XXStruct_FUWWfB *)resultSet usingFetchPlan:(id)plan withMatchingRows:(id *)matchingRows;	// 0x36244499
- (void)_purgeRowCache;	// 0x362d97c9
- (void)_repairDatabaseCorrelationTables:(id)tables brokenHashModel:(id)model storeVersionNumber:(id)number recurse:(BOOL)recurse;	// 0x362e0845
- (CFArrayRef)_rowsForConflictDetection:(id)conflictDetection withChannel:(id)channel;	// 0x362d8be9
- (void)_setMetadata:(id)metadata;	// 0x362347d5
- (id)_ubiquityDictionaryForAttribute:(id)attribute onObject:(id)object;	// 0x362d9025
// converted property getter: - (id)adapter;	// 0x3622f65d
- (id)availableChannel;	// 0x362d80b1
- (void)beginTransaction;	// 0x362d7979
- (void)beginTransaction_NotificationFree;	// 0x362d7969
- (void)beginTransaction_core;	// 0x362d7911
// converted property getter: - (id)channels;	// 0x36242e99
- (void)commitChanges:(id)changes;	// 0x362e15a5
- (void)commitTransaction;	// 0x362d7bd1
- (void)commitTransaction_NotificationFree;	// 0x362d7bc1
- (void)commitTransaction_core;	// 0x362d7b65
// converted property getter: - (id)connection;	// 0x3622f60d
- (id)countForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x362e8511
- (void)createAdapterOperationsForDatabaseOperation:(id)databaseOperation;	// 0x362d888d
- (id)createChannel;	// 0x362d77e5
// converted property getter: - (id)currentContext;	// 0x362430bd
- (id)databaseOperationForGlobalID:(id)globalID;	// 0x362e7005
- (id)databaseOperationForObject:(id)object;	// 0x362da36d
// converted property getter: - (id)databaseUUID;	// 0x36235e01
- (void)dealloc;	// 0x36250d61
- (void)deleteExternalDataReferences:(id)references;	// 0x362e136d
- (id)entityForEntityDescription:(id)entityDescription;	// 0x362d9bed
- (id)entityForFetchRequest:(id)fetchRequest;	// 0x3623a009
- (id)entityForObject:(id)object;	// 0x362d9b7d
- (id)entityNameOrderingArrayForEntities:(id)entities;	// 0x362d77e9
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x36238ead
// converted property getter: - (id)externalDataLinksDirectory;	// 0x362341c9
// converted property getter: - (id)externalDataReferencesDirectory;	// 0x36233d95
// converted property getter: - (id)externalDataReferencesToDelete;	// 0x362d8fd9
// converted property getter: - (id)externalDataReferencesToSave;	// 0x362d8f8d
- (id)externalLocationForFileWithUUID:(id)uuid;	// 0x362d8f35
- (id)fetchRowForObjectID:(NSScalarObjectID *)objectID;	// 0x362df9e9
- (int)fileProtectionLevel;	// 0x36230525
- (void)forgetSnapshotForGlobalID:(id)globalID;	// 0x362e9899
- (void)forgetSnapshotsForGlobalIDs:(id)globalIDs;	// 0x362e97b1
- (void)generatePrimaryKeysForEntity:(id)entity;	// 0x362da0dd
- (id)hackQueryForManyToManyPrefetching:(id)manyPrefetching andSourceObjectIDs:(id)ids orderColumnName:(id)name;	// 0x362df13d
- (BOOL)handlesFetchRequest:(id)request;	// 0x362d8b95
- (id)identifier;	// 0x36235df1
- (void)insertEntity:(id)entity intoOrderingArray:(id)array withDependencies:(id)dependencies processingSet:(id)set;	// 0x362d898d
- (void)invalidateObjectsWithGlobalIDs:(id)globalIDs;	// 0x362d80dd
- (const id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x362eab65
- (BOOL)load:(id *)load;	// 0x36235319
- (BOOL)loadMetadata:(id *)metadata;	// 0x3622f2c5
- (id)localSnapshotForGlobalID:(id)globalID;	// 0x362e9871
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x362eac69
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x3624e535
// converted property getter: - (id)metadata;	// 0x36234871
- (id)missingObjectGlobalIDs;	// 0x362d8091
// converted property getter: - (id)model;	// 0x36235dd1
- (id)newAdapterForModel:(id)model;	// 0x362d78d9
- (id)newFaultingPredicateForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x362d92c1
- (id)newFetchedPKsForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x362ddf71
- (NSScalarObjectID *)newForeignKeyID:(long long)anId entity:(id)entity;	// 0x362d783d
- (NSScalarObjectID *)newObjectIDForEntity:(id)entity pk:(long long)pk;	// 0x362d77fd
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)manyPrefetchingRequest andSourceObjectIDs:(id)ids orderColumnName:(id)name;	// 0x362deae1
- (id)newRowsForFetchPlan:(id)fetchPlan;	// 0x36239ddd
- (id)newSortDescriptorForOrderedRelationship:(id)orderedRelationship;	// 0x362d924d
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x362ea441
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x3624bc59
- (id)objectIDFactoryForEntity:(id)entity;	// 0x362ead21
- (Class)objectIDFactoryForSQLEntity:(id)sqlentity;	// 0x3624549d
- (id)objectsForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x36239275
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x362db5a9
- (id)orderAdapterOperations;	// 0x362e344d
- (BOOL)ownsGlobalID:(id)anId;	// 0x362d8a89
- (BOOL)ownsObject:(id)object;	// 0x362d8b2d
- (void)performChanges;	// 0x362e1d5d
- (id)permanentObjectIDForObjectInTransaction:(id)transaction;	// 0x362d86ed
- (void)prepareForSave:(id)save;	// 0x362e2fc1
- (id)rawSQLTextForToManyFaultStatement:(id)manyFaultStatement stripBindVariables:(BOOL)variables swapEKPK:(BOOL)ekpk;	// 0x362df581
- (void)recomputePrimaryKeyMaxForEntities:(id)entities;	// 0x362db091
- (void)recordChangesInContext:(id)context;	// 0x362e2ca5
- (void)recordDatabaseOperation:(id)operation;	// 0x362e7029
- (void)recordDeleteForObject:(id)object;	// 0x362e7081
- (void)recordPrimaryKey:(long long)key forInsertedObject:(id)insertedObject withSQLEntity:(id)sqlentity;	// 0x362d862d
- (void)recordSnapshot:(id)snapshot forObjectID:(id)objectID;	// 0x362e9e71
- (void)recordToMany:(id)many forSourceObjectID:(id)sourceObjectID relationshipName:(id)name orderKeys:(id)keys;	// 0x362e99b5
- (void)recordToManyInsertsForObject:(id)object withOperation:(id)operation;	// 0x362e6ae5
- (void)recordToManyUpdatesForObject:(id)object withOperation:(id)operation;	// 0x362e40e1
- (void)recordUpdateForObject:(id)object;	// 0x362d9c21
- (void)recordValuesForInsertedObject:(id)insertedObject;	// 0x362d874d
- (id)refreshObjects:(id)objects;	// 0x362d77ed
- (void)registerChannel:(id)channel;	// 0x36242f59
- (void)rollbackChanges;	// 0x362e1a85
- (void)rollbackTransaction;	// 0x362d7e9d
- (void)rollbackTransaction_core;	// 0x362d7e31
// converted property getter: - (id)rowCache;	// 0x36239bdd
- (id)rowForObjectID:(id)objectID;	// 0x362d805d
- (id)rowForObjectID:(id)objectID after:(double)after;	// 0x362d7fe5
- (id)safeguardLocationForFileWithUUID:(id)uuid;	// 0x362d8f61
- (id)saveChanges:(id)changes;	// 0x362e0e91
// converted property setter: - (void)setCurrentContext:(id)context;	// 0x36239265
// converted property setter: - (void)setDatabaseUUID:(id)uuid;	// 0x362d91a5
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x362d7891
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x36236215
- (void)setURL:(id)url;	// 0x362ead91
- (id)type;	// 0x3623479d
- (void)unregisterChannel:(id)channel;	// 0x362ea369
- (void)willRemoveFromPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x36250189
- (id)writeExternalDataReferences;	// 0x362e1411
@end
