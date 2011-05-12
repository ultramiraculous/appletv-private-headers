/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectID.h"
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface _NSCoreManagedObjectID : NSManagedObjectID {
}
+ (void)_release_1;	// 0x330f9aa9
+ (id)_retain_1;	// 0x330f9a8d
+ (void)_setStoreInfo1:(id)a1;	// 0x330f9ab5
+ (void)_storeDeallocated;	// 0x33125685
+ (id)_storeInfo1;	// 0x330d8ebd
+ (BOOL)accessInstanceVariablesDirectly;	// 0x331250ed
+ (id)alloc;	// 0x3312566d
+ (id)allocWithZone:(NSZone *)zone;	// 0x33125679
+ (unsigned)allocateBatch:(id *)batch count:(unsigned)count;	// 0x330d8ecd
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x331250dd
+ (Class)classWithStore:(id)store andEntity:(id)entity;	// 0x330f96e1
+ (char *)generatedNameSuffix;	// 0x331250e1
+ (void)initialize;	// 0x330e86ed
+ (id)managedObjectIDFromURIRepresentation:(id)urirepresentation;	// 0x331253e9
+ (void)release;	// 0x331250fd
+ (id)retain;	// 0x331250f9
+ (void)setObjectStoreIdentifier:(id)identifier;	// 0x3312562d
+ (int)version;	// 0x331250f1
- (id)URIRepresentation;	// 0x3312533d
- (BOOL)_isPersistentStoreAlive;	// 0x330dc975
- (id)_storeIdentifier;	// 0x33125381
- (id)_storeInfo1;	// 0x33125101
- (id)entity;	// 0x330e1581
- (void)finalize;	// 0x3312515d
- (unsigned)hash;	// 0x331256e1
- (BOOL)isEqual:(id)equal;	// 0x331256ed
- (BOOL)isTemporaryID;	// 0x330d9899
- (id)persistentStore;	// 0x330dc951
- (void)release;	// 0x330d9671
- (id)retain;	// 0x330dde1d
- (unsigned)retainCount;	// 0x33125115
@end
