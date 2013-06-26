/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSString, NSArray, NSManagedObjectContext, NSFetchRequest;
@protocol NSFetchedResultsControllerDelegate;

@interface NSFetchedResultsController : NSObject {
	NSFetchRequest *_fetchRequest;	// 4 = 0x4
	NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
	NSString *_sectionNameKeyPath;	// 12 = 0xc
	NSString *_sectionNameKey;	// 16 = 0x10
	NSString *_cacheName;	// 20 = 0x14
	void *_cache;	// 24 = 0x18
	fetchResultsControllerFlags _flags;	// 28 = 0x1c
	id _delegate;	// 32 = 0x20
	id _sortKeys;	// 36 = 0x24
	id _fetchedObjects;	// 40 = 0x28
	id _sections;	// 44 = 0x2c
	id _sectionsByName;	// 48 = 0x30
	id _sectionIndexTitles;	// 52 = 0x34
	id _sectionIndexTitlesSections;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) NSString *cacheName;	// G=0x30f761f1; @synthesize=_cacheName
@property(assign, nonatomic) id<NSFetchedResultsControllerDelegate> delegate;	// G=0x30f76201; S=0x30f7537d; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSFetchRequest *fetchRequest;	// G=0x30f761c1; @synthesize=_fetchRequest
@property(readonly, assign, nonatomic) NSArray *fetchedObjects;	// G=0x30f75b0d; 
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x30f761d1; @synthesize=_managedObjectContext
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x30f75e2d; 
@property(readonly, assign, nonatomic) NSString *sectionNameKeyPath;	// G=0x30f761e1; @synthesize=_sectionNameKeyPath
@property(readonly, assign, nonatomic) NSArray *sections;	// G=0x30f76011; 
+ (id)_CoreDataSectionCachesPath;	// 0x30f7c2d1
+ (unsigned)_insertIndexForObject:(id)object inArray:(id)array lowIdx:(unsigned)idx highIdx:(unsigned)idx4 sortDescriptors:(id)descriptors;	// 0x30f7c50d
+ (void)deleteCacheWithName:(id)name;	// 0x30f7614d
+ (void)initialize;	// 0x30f74ac5
- (id)initWithFetchRequest:(id)fetchRequest managedObjectContext:(id)context sectionNameKeyPath:(id)path cacheName:(id)name;	// 0x30f74ae1
- (void)_appendAffectedStoreInfoToData:(id)data adjustedOffset:(long long *)offset;	// 0x30f7b409
- (BOOL)_computeSectionInfo:(id)info error:(id *)error;	// 0x30f76d4d
- (BOOL)_computeSectionInfoWithGroupBy:(id)groupBy error:(id *)error;	// 0x30f775c1
- (id)_createNewSectionForObject:(id)object;	// 0x30f78e59
- (BOOL)_didFailPostprocessing;	// 0x30f7c4ed
- (BOOL)_didUpdateOnlyStoreInfo;	// 0x30f7c4dd
- (BOOL)_didUseCachedSectionInfo;	// 0x30f7c4cd
- (BOOL)_didUseGroupBy;	// 0x30f7c4fd
- (void)_dumpSectionInfo;	// 0x30f7c655
- (id)_fetchedObjectsArrayOfObjectIDs;	// 0x30f78259
- (BOOL)_hasFetchedObjects;	// 0x30f76211
- (unsigned)_indexOfFetchedID:(id)fetchedID;	// 0x30f783c1
- (id)_indexPathForIndex:(unsigned)index;	// 0x30f78699
- (void)_insertObjectInFetchedObjects:(id)fetchedObjects atIndex:(unsigned)index;	// 0x30f784f1
- (BOOL)_keyPathContainsNonPersistedProperties:(id)properties;	// 0x30f7c7b9
- (void)_makeMutableFetchedObjects;	// 0x30f7811d
- (void)_managedObjectContextDidChange:(id)_managedObjectContext;	// 0x30f7a121
- (void)_managedObjectContextDidSave:(id)_managedObjectContext;	// 0x30f7b7d9
- (BOOL)_objectInResults:(id)results;	// 0x30f787c1
- (BOOL)_postprocessDeletedObjects:(id)objects;	// 0x30f794a5
- (BOOL)_postprocessInsertedObjects:(id)objects;	// 0x30f78bf5
- (BOOL)_postprocessUpdatedObjects:(id)objects;	// 0x30f79e55
- (void)_preprocessDeletedObjects:(id)objects deletesInfo:(id)info sectionsWithDeletes:(id)deletes;	// 0x30f79209
- (void)_preprocessInsertedObjects:(id)objects insertsInfo:(id)info newSectionNames:(id)names;	// 0x30f788f1
- (void)_preprocessUpdatedObjects:(id)objects insertsInfo:(id)info deletesInfo:(id)info3 updatesInfo:(id)info4 sectionsWithDeletes:(id)deletes newSectionNames:(id)names treatAsRefreshes:(BOOL)refreshes;	// 0x30f797e1
- (void)_removeObjectInFetchedObjectsAtIndex:(unsigned)index;	// 0x30f78549
- (id)_resolveSectionIndexTitleForSectionName:(id)sectionName;	// 0x30f7c759
- (BOOL)_restoreCachedSectionInfo;	// 0x30f76265
- (id)_sectionCachePath;	// 0x30f7c25d
- (id)_sectionNameForObject:(id)object;	// 0x30f76229
- (unsigned)_sectionNumberForIndex:(unsigned)index;	// 0x30f7859d
- (void)_updateCachedStoreInfo;	// 0x30f7b611
- (void)_updateSectionOffsetsStartingAtSection:(id)section;	// 0x30f78831
// declared property getter: - (id)cacheName;	// 0x30f761f1
- (void)dealloc;	// 0x30f751e5
// declared property getter: - (id)delegate;	// 0x30f76201
// declared property getter: - (id)fetchRequest;	// 0x30f761c1
// declared property getter: - (id)fetchedObjects;	// 0x30f75b0d
- (id)indexPathForObject:(id)object;	// 0x30f75cc1
// declared property getter: - (id)managedObjectContext;	// 0x30f761d1
- (id)objectAtIndexPath:(id)indexPath;	// 0x30f75b1d
- (BOOL)performFetch:(id *)fetch;	// 0x30f75605
- (int)sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;	// 0x30f76021
- (id)sectionIndexTitleForSectionName:(id)sectionName;	// 0x30f75db9
// declared property getter: - (id)sectionIndexTitles;	// 0x30f75e2d
// declared property getter: - (id)sectionNameKeyPath;	// 0x30f761e1
// declared property getter: - (id)sections;	// 0x30f76011
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30f7537d
@end
