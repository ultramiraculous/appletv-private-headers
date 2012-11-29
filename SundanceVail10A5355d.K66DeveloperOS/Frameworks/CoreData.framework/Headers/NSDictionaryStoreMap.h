/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStoreMap.h"

@class NSMutableDictionary;

@interface NSDictionaryStoreMap : NSPersistentStoreMap {
	NSMutableDictionary *_theMap;	// 28 = 0x1c
}
+ (void)initialize;	// 0x334c5d01
- (id)initWithStore:(id)store;	// 0x334c5d1d
- (id)initWithStore:(id)store fromArchivedData:(id)archivedData;	// 0x334c6255
- (id)initWithStore:(id)store fromPath:(id)path;	// 0x334c5d31
- (id)_archivedData;	// 0x334c75dd
- (id)_nodeFromObject:(id)object objectIDMap:(id)map;	// 0x334c69f9
- (id)_theDictionary;	// 0x334c6629
- (void)addObject:(id)object objectIDMap:(id)map;	// 0x334c7015
- (id)dataForKey:(id)key;	// 0x334c6ff5
- (void)dealloc;	// 0x334c69a9
- (id)handleFetchRequest:(id)request;	// 0x334c736d
- (void)removeObject:(id)object objectIDMap:(id)map;	// 0x334c70a1
- (id)retainedObjectIDsForRelationship:(id)relationship forObjectID:(id)objectID;	// 0x334c7245
- (void)saveToPath:(id)path;	// 0x334c6639
- (void)updateObject:(id)object objectIDMap:(id)map;	// 0x334c70ed
@end
