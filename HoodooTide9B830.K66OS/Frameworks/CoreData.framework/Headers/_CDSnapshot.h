/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
@private
	int _cd_rc;	// 4 = 0x4
	int _cd_version;	// 8 = 0x8
	NSManagedObjectID *_cd_objectID;	// 12 = 0xc
	snapshotFlags_st _cd_flags;	// 16 = 0x10
	unsigned _cd_nullFlags_;	// 20 = 0x14
}
+ (void)_entityDeallocated;	// 0x323607b5
+ (id)alloc;	// 0x32360901
+ (id)allocWithZone:(NSZone *)zone;	// 0x323608f9
+ (Class)classForEntity:(id)entity;	// 0x32274079
+ (void)initialize;	// 0x32286be1
+ (unsigned)newBatchAllocation:(id *)allocation count:(unsigned)count withOwnedObjectIDs:(id *)ownedObjectIDs;	// 0x32274999
- (id)initWithObjectID:(id)objectID;	// 0x3236137d
- (id)_descriptionValues;	// 0x32360c89
- (BOOL)_isDeallocating;	// 0x323611c1
- (BOOL)_tryRetain;	// 0x323611e9
- (id)copy;	// 0x32361321
- (id)copyWithZone:(NSZone *)zone;	// 0x3236136d
- (void)dealloc;	// 0x3227c70d
- (id)description;	// 0x32360bd5
- (id)entity;	// 0x32360909
- (void)finalize;	// 0x323608cd
- (unsigned)hash;	// 0x323607b9
- (BOOL)isEqual:(id)equal;	// 0x3236081d
- (id)mutableCopy;	// 0x32361245
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32361311
- (id)objectID;	// 0x3236083d
- (oneway void)release;	// 0x3227c2c1
- (id)retain;	// 0x3227ab09
- (unsigned)retainCount;	// 0x32360829
- (void)setValue:(id)value forKey:(id)key;	// 0x32360929
- (id)valueForKey:(id)key;	// 0x32360abd
@end

