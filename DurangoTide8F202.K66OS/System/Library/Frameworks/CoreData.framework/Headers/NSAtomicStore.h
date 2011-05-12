/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"

@class NSMutableDictionary;

@interface NSAtomicStore : NSPersistentStore {
@private
	NSMutableDictionary *_nodeCache;	// 44 = 0x2c
	NSMutableDictionary *_entityCache;	// 48 = 0x30
	NSMutableDictionary *_storeMetadata;	// 52 = 0x34
	int _nextReference;	// 56 = 0x38
	void *_reserved4;	// 60 = 0x3c
	void *_reserved5;	// 64 = 0x40
}
@property(retain) id metadata;	// G=0x33121125; S=0x3312154d; converted property
+ (void)initialize;	// 0x33121259
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x3312150d
- (id)init;	// 0x331214cd
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x3312166d
- (void)_addObject:(id)object;	// 0x33120bd1
- (void)_deleteNodeFromEntityCache:(id)entityCache;	// 0x33120dc1
- (void)_deleteNodeFromMainCache:(id)mainCache;	// 0x33120e6d
- (void)_didLoadMetadata;	// 0x33120d41
- (id)_getNewIDForObject:(id)object;	// 0x33120c0d
- (void)_insertNodeIntoEntityCache:(id)cache;	// 0x33120ea5
- (void)_insertNodeIntoMainCache:(id)cache;	// 0x33120f81
- (void)_registerCacheNode:(id)node;	// 0x331210f9
- (void)_removeObject:(id)object;	// 0x33120b91
- (id)_retainedObjectIDForEntity:(id)entity referenceObject:(id)object;	// 0x33120b5d
- (id)_retrieveNodeForObject:(id)object;	// 0x33120fbd
- (id)_retrieveNodeForObjectID:(id)objectID;	// 0x33120ff5
- (id)_retrieveNodesSatisfyingRequest:(id)request;	// 0x3312182d
- (void)_storeNextReferenceInMetadata;	// 0x33120c85
- (void)_updateObject:(id)object;	// 0x331223c1
- (void)addCacheNodes:(id)nodes;	// 0x33122009
- (id)cacheNodeForObjectID:(id)objectID;	// 0x331211f9
- (id)cacheNodes;	// 0x33121219
- (void)dealloc;	// 0x331215e1
- (id)executeCountRequest:(id)request withContext:(id)context;	// 0x33121015
- (id)executeFetchRequest:(id)request withContext:(id)context;	// 0x331224c1
- (id)executeRefreshRequest:(id)request withContext:(id)context;	// 0x33120b51
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x33121279
- (id)executeSaveChangesRequest:(id)request withContext:(id)context;	// 0x33121ab9
- (BOOL)load:(id *)load;	// 0x3312144d
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x33120b55
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x33120b59
// converted property getter: - (id)metadata;	// 0x33121125
- (id)newCacheNodeForManagedObject:(id)managedObject;	// 0x3312140d
- (id)newReferenceObjectForManagedObject:(id)managedObject;	// 0x3312221d
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x33122269
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x33120d9d
- (id)objectIDForEntity:(id)entity referenceObject:(id)object;	// 0x331211a5
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x33121705
- (id)referenceObjectForObjectID:(id)objectID;	// 0x33121359
- (BOOL)save:(id *)save;	// 0x3312148d
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x3312154d
- (void)updateCacheNode:(id)node fromManagedObject:(id)managedObject;	// 0x331213cd
- (void)willRemoveCacheNodes:(id)nodes;	// 0x33120b4d
@end
