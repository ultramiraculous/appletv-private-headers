/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}
+ (id)alloc;	// 0x32506495
+ (id)allocWithZone:(NSZone *)zone;	// 0x32578cb5
+ (id)hashTableWithOptions:(unsigned)options;	// 0x32578d29
+ (id)hashTableWithWeakObjects;	// 0x32578ce1
+ (id)weakObjectsHashTable;	// 0x3255080d
- (id)init;	// 0x32578e69
- (id)initWithCoder:(id)coder;	// 0x32578d75
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x32578dd1
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x32578f21
- (void)addObject:(id)object;	// 0x32578ed9
- (id)allObjects;	// 0x32578eb1
- (id)anyObject;	// 0x32578f49
- (BOOL)containsObject:(id)object;	// 0x32506b49
- (id)copy;	// 0x32578efd
- (id)copyWithZone:(NSZone *)zone;	// 0x32579749
- (unsigned)count;	// 0x32578ea5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32578e99
- (id)description;	// 0x32578e75
- (void)encodeWithCoder:(id)coder;	// 0x32578e8d
- (void *)getItem:(const void *)item;	// 0x32578ecd
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x32578f15
- (void)insertKnownAbsentItem:(const void *)item;	// 0x32578ee5
- (void)intersectHashTable:(id)table;	// 0x32579215
- (BOOL)intersectsHashTable:(id)table;	// 0x32578fa5
- (BOOL)isEqualToHashTable:(id)hashTable;	// 0x32579065
- (BOOL)isSubsetOfHashTable:(id)hashTable;	// 0x32579155
- (id)member:(id)member;	// 0x32505411
- (void)minusHashTable:(id)table;	// 0x325794d1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32579759
- (id)mutableSet;	// 0x325795a1
- (id)objectEnumerator;	// 0x32578e81
- (id)pointerFunctions;	// 0x32578f2d
- (void)removeAllItems;	// 0x32578f09
- (void)removeAllObjects;	// 0x32578f39
- (void)removeItem:(const void *)item;	// 0x32578ef1
- (void)removeObject:(id)object;	// 0x32506a81
- (id)setRepresentation;	// 0x32579675
- (void)unionHashTable:(id)table;	// 0x32579415
- (unsigned)weakCount;	// 0x32578ebd
@end
