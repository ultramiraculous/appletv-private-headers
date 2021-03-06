/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectID.h"
#import "CoreData-Structs.h"


@interface _NSCoreManagedObjectID : NSManagedObjectID {
}
+ (void)_release_1;	// 0x33d2f089
+ (id)_retain_1;	// 0x33d2f069
+ (void)_setStoreInfo1:(id)a1;	// 0x33d2f10d
+ (void)_storeDeallocated;	// 0x33d51121
+ (id)_storeInfo1;	// 0x33d2f0f9
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33d50d0d
+ (id)alloc;	// 0x33d50d05
+ (id)allocWithZone:(NSZone *)zone;	// 0x33d50cfd
+ (unsigned)allocateBatch:(id *)batch count:(unsigned)count;	// 0x33d2f11d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33d50c59
+ (Class)classWithStore:(id)store andEntity:(id)entity;	// 0x33d2ec69
+ (char *)generatedNameSuffix;	// 0x33d50c5d
+ (void)initialize;	// 0x33d0a27d
+ (id)managedObjectIDFromURIRepresentation:(id)urirepresentation;	// 0x33d50eb5
+ (id)managedObjectIDFromUTF8String:(const char *)utf8String length:(unsigned)length;	// 0x33d50d25
+ (void)release;	// 0x33d50d21
+ (id)retain;	// 0x33d50d1d
+ (void)setObjectStoreIdentifier:(id)identifier;	// 0x33d510d9
+ (int)version;	// 0x33d50d11
- (id)URIRepresentation;	// 0x33d512b9
- (BOOL)_isPersistentStoreAlive;	// 0x33d51281
- (id)_storeIdentifier;	// 0x33d51205
- (id)_storeInfo1;	// 0x33d51265
- (id)entity;	// 0x33d2ff49
- (void)finalize;	// 0x33d511b5
- (unsigned)hash;	// 0x33d514bd
- (BOOL)isEqual:(id)equal;	// 0x33d5152d
- (BOOL)isTemporaryID;	// 0x33d304c9
- (id)persistentStore;	// 0x33d511e9
- (void)release;	// 0x33d51171
- (id)retain;	// 0x33d51151
- (unsigned)retainCount;	// 0x33d512a5
@end

