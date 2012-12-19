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
+ (void)initialize;	// 0x30f2a5bd
- (id)initWithStore:(id)store;	// 0x30f2a5d9
- (id)initWithStore:(id)store fromArchivedData:(id)archivedData;	// 0x30f2ab11
- (id)initWithStore:(id)store fromPath:(id)path;	// 0x30f2a5ed
- (id)_archivedData;	// 0x30f2be99
- (id)_nodeFromObject:(id)object objectIDMap:(id)map;	// 0x30f2b2b5
- (id)_theDictionary;	// 0x30f2aee5
- (void)addObject:(id)object objectIDMap:(id)map;	// 0x30f2b8d1
- (id)dataForKey:(id)key;	// 0x30f2b8b1
- (void)dealloc;	// 0x30f2b265
- (id)handleFetchRequest:(id)request;	// 0x30f2bc29
- (void)removeObject:(id)object objectIDMap:(id)map;	// 0x30f2b95d
- (id)retainedObjectIDsForRelationship:(id)relationship forObjectID:(id)objectID;	// 0x30f2bb01
- (void)saveToPath:(id)path;	// 0x30f2aef5
- (void)updateObject:(id)object objectIDMap:(id)map;	// 0x30f2b9a9
@end
