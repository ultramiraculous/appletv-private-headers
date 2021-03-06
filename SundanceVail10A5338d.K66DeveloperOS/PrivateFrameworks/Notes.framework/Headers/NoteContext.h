/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSObject.h> // Unknown library
#import "Notes-Structs.h"

@class NSNumber, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSPredicate, CPExclusiveLock, NoteStoreObject, NoteAccountObject, NSMutableDictionary, NSString;

@interface NoteContext : NSObject {
	NSManagedObjectModel *_managedObjectModel;	// 4 = 0x4
	NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 12 = 0xc
@private
	NSPredicate *_searchPredicate;	// 16 = 0x10
	NoteStoreObject *_localStore;	// 20 = 0x14
@protected
	NoteAccountObject *_localAccount;	// 24 = 0x18
	CXIndexRef __SharedNoteStoreSearchIndex;	// 28 = 0x1c
	CPExclusiveLock *__SharedNoteStoreSearchIndexLock;	// 32 = 0x20
	int __SharedNoteStoreSearchIndexCount;	// 36 = 0x24
	BOOL _isIndexing;	// 40 = 0x28
	NSManagedObjectContext *_nextIdContext;	// 44 = 0x2c
	CPExclusiveLock *_nextIdLock;	// 48 = 0x30
	NSNumber *_nextId;	// 52 = 0x34
	CPExclusiveLock *_objectCreationLock;	// 56 = 0x38
	unsigned _notificationCount;	// 60 = 0x3c
	BOOL _logChanges;	// 64 = 0x40
	BOOL _indexInBatches;	// 65 = 0x41
	BOOL _hasPriorityInSaveConflicts;	// 66 = 0x42
	BOOL _inMigrator;	// 67 = 0x43
	NSString *_testingFilePrefix;	// 68 = 0x44
	NSString *_testingFilePath;	// 72 = 0x48
@private
	NSMutableDictionary *_notePropertyObjectsRealized;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) BOOL isIndexing;	// G=0x3642cf2d; @synthesize=_isIndexing
@property(readonly, retain) NoteAccountObject *localAccount;	// G=0x36425211; converted property
@property(readonly, retain) NoteStoreObject *localStore;	// G=0x36425179; converted property
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x36427e91; 
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x36428039; converted property
@property(readonly, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x36428259; converted property
+ (BOOL)databaseIsCorrupt:(id)corrupt;	// 0x3641fa89
+ (BOOL)shouldLogIndexing;	// 0x3641fa09
- (id)init;	// 0x36421bf9
- (id)initForMigrator;	// 0x3642184d
- (id)initWithTestingFilePrefix:(id)testingFilePrefix;	// 0x364218b1
- (id)initWithTestingFilePrefix:(id)testingFilePrefix atPath:(id)path inMigrator:(BOOL)migrator;	// 0x36421921
- (id)initWithTestingFilePrefix:(id)testingFilePrefix inMigrator:(BOOL)migrator;	// 0x364217c5
- (void).cxx_destruct;	// 0x3642cf4d
- (void)_createLocalAccount:(id *)account andStore:(id *)store;	// 0x3641fd69
- (id)_notePropertyObjectForKey:(id)key;	// 0x36425a91
- (id)accountForAccountId:(id)accountId;	// 0x36424d45
- (id)allAccounts;	// 0x364249e5
- (id)allNotes;	// 0x36423c0d
- (id)allNotesInCollection:(id)collection;	// 0x36423d1d
- (id)allNotesMatchingPredicate:(id)predicate;	// 0x36423df5
- (id)allNotesWithoutBodiesInCollection:(id)collection;	// 0x36424161
- (id)allStores;	// 0x364244d1
- (id)allVisibleNotes;	// 0x3642345d
- (id)allVisibleNotesInCollection:(id)collection;	// 0x364234a5
- (id)allVisibleNotesMatchingPredicate:(id)predicate;	// 0x3642357d
- (void)cleanUpLocks;	// 0x3642cc49
- (void)clearCaches;	// 0x36422325
- (id)collectionForInfo:(id)info;	// 0x364242b5
- (id)collectionForObjectID:(id)objectID;	// 0x3642256d
- (id)copyNotesForSearch:(void *)search complete:(char *)complete;	// 0x3642c26d
- (id)copyNotesForSearch:(void *)search predicate:(id)predicate complete:(char *)complete;	// 0x3642c2a5
- (unsigned)countOfNotes;	// 0x36423c9d
- (unsigned)countOfNotesInCollection:(id)collection;	// 0x36423d8d
- (unsigned)countOfNotesMatchingPredicate:(id)notesMatchingPredicate;	// 0x36423ead
- (unsigned)countOfStores;	// 0x364247bd
- (unsigned)countOfVisibleNotes;	// 0x36423481
- (unsigned)countOfVisibleNotesInCollection:(id)collection;	// 0x36423515
- (unsigned)countOfVisibleNotesMatchingPredicate:(id)visibleNotesMatchingPredicate;	// 0x36423709
- (void)dealloc;	// 0x36421c59
- (id)defaultStoreForNewNote;	// 0x3642503d
- (BOOL)deleteAccount:(id)account;	// 0x36425691
- (void)deleteChanges:(id)changes;	// 0x3642294d
- (BOOL)deleteIndexFile;	// 0x3642ceb1
- (void)deleteNote:(id)note;	// 0x3642269d
- (void)deleteNoteRegardlessOfConstraints:(id)constraints;	// 0x364228f9
- (BOOL)deleteStore:(id)store;	// 0x3642571d
- (void)destroySearchIndex;	// 0x36429959
- (void)enableChangeLogging:(BOOL)logging;	// 0x36422aa5
- (id)findNotesWithText:(id)text betweenDate:(id)date andDate:(id)date3;	// 0x3642c619
- (BOOL)forceDeleteAccount:(id)account;	// 0x364254ed
- (void)forceSetUpUniqueObjects;	// 0x3642090d
- (id)getNextIdObject;	// 0x36426dcd
- (void)handleMigration;	// 0x36425fa9
- (BOOL)handleSaveErrors:(id)errors;	// 0x36422cf1
- (BOOL)hasMultipleEnabledStores;	// 0x364259c1
- (void)indexInBatches:(BOOL)batches;	// 0x36429e81
- (void)indexNotes:(id)notes;	// 0x36428b69
- (void)invalidate;	// 0x36422ac9
// declared property getter: - (BOOL)isIndexing;	// 0x3642cf2d
- (id)liveNotesNeedingBodiesPredicate;	// 0x36421d61
// converted property getter: - (id)localAccount;	// 0x36425211
// converted property getter: - (id)localStore;	// 0x36425179
// declared property getter: - (id)managedObjectContext;	// 0x36427e91
// converted property getter: - (id)managedObjectModel;	// 0x36428039
- (id)newFRCForCollection:(id)collection delegate:(id)delegate;	// 0x36421de5
- (id)newFetchRequestForNotes;	// 0x36422189
- (void *)newSearchContextWithText:(id)text;	// 0x3642c1e1
- (id)newlyAddedAccount;	// 0x36424cd1
- (id)newlyAddedNote;	// 0x3642240d
- (id)newlyAddedStore;	// 0x3642445d
- (id)nextIndex;	// 0x36427505
- (id)noteChangeWithType:(int)type store:(id)store;	// 0x3642ad99
- (id)noteForObjectID:(id)objectID;	// 0x36423f55
- (BOOL)noteIsSafeToAccess:(id)access;	// 0x3642ccbd
- (id)notesForIntegerIds:(id)integerIds;	// 0x36423fed
- (id)notesToResumeIndexing;	// 0x36428a5d
- (id)pathForIndex;	// 0x36427bd1
- (id)pathForPersistentStore;	// 0x36427a65
// converted property getter: - (id)persistentStoreCoordinator;	// 0x36428259
- (id)propertyValueForKey:(id)key;	// 0x36425f41
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)changeLogging;	// 0x36429ea5
- (void)removeConflictingSqliteAndIdxFiles;	// 0x364212f9
- (void)removeSqliteAndIdxFiles;	// 0x36421079
- (void)resetNotificationCount;	// 0x36429fd1
- (void)resumeIndexing;	// 0x36429d45
- (id)rootDirectory;	// 0x36427a31
- (BOOL)save:(id *)save;	// 0x36422b89
- (void)saveNotesToResumeIndexing:(id)resumeIndexing;	// 0x3642878d
- (BOOL)saveOutsideApp:(id *)app;	// 0x36422b61
- (BOOL)saveSilently:(id *)silently;	// 0x364232b9
- (CXIndexRef)searchIndex:(char *)index;	// 0x3642932d
- (void)setHasPriorityInSaveConflicts:(BOOL)saveConflicts;	// 0x36427da5
- (void)setPropertyValue:(id)value forKey:(id)key;	// 0x36425e15
- (void)setUpCoreDataStack;	// 0x36421429
- (BOOL)setUpLastIndexTid;	// 0x36420419
- (BOOL)setUpLocalAccountAndStore;	// 0x3641fee1
- (void)setUpUniqueObjects;	// 0x36420a59
- (BOOL)shouldDisableLocalStore;	// 0x36425915
- (BOOL)shouldResumeIndexing;	// 0x364289e1
- (void)sortNotes:(id)notes;	// 0x36422351
- (id)storeForObjectID:(id)objectID;	// 0x36422605
- (id)storeOptions;	// 0x3641fc1d
- (void)tearDownCoreDataStack;	// 0x364216ad
- (void)trackChanges:(id)changes;	// 0x3642af7d
- (void)updateSearchIndex:(id)index;	// 0x36429ff5
- (id)urlForPersistentStore;	// 0x36427d3d
- (id)visibleNoteForObjectID:(id)objectID;	// 0x36423885
- (id)visibleNotesForIntegerIds:(id)integerIds;	// 0x364239f1
- (id)visibleNotesPredicate;	// 0x36421ca9
- (void)wrapUpIndexing;	// 0x36429a49
@end

