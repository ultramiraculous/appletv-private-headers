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
+ (id)alloc;	// 0x35505495
+ (id)allocWithZone:(NSZone *)zone;	// 0x35577cb5
+ (id)hashTableWithOptions:(unsigned)options;	// 0x35577d29
+ (id)hashTableWithWeakObjects;	// 0x35577ce1
+ (id)weakObjectsHashTable;	// 0x3554f80d
- (id)init;	// 0x35577e69
- (id)initWithCoder:(id)coder;	// 0x35577d75
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x35577dd1
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x35577f21
- (void)addObject:(id)object;	// 0x35577ed9
- (id)allObjects;	// 0x35577eb1
- (id)anyObject;	// 0x35577f49
- (BOOL)containsObject:(id)object;	// 0x35505b49
- (id)copy;	// 0x35577efd
- (id)copyWithZone:(NSZone *)zone;	// 0x35578749
- (unsigned)count;	// 0x35577ea5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35577e99
- (id)description;	// 0x35577e75
- (void)encodeWithCoder:(id)coder;	// 0x35577e8d
- (void *)getItem:(const void *)item;	// 0x35577ecd
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x35577f15
- (void)insertKnownAbsentItem:(const void *)item;	// 0x35577ee5
- (void)intersectHashTable:(id)table;	// 0x35578215
- (BOOL)intersectsHashTable:(id)table;	// 0x35577fa5
- (BOOL)isEqualToHashTable:(id)hashTable;	// 0x35578065
- (BOOL)isSubsetOfHashTable:(id)hashTable;	// 0x35578155
- (id)member:(id)member;	// 0x35504411
- (void)minusHashTable:(id)table;	// 0x355784d1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35578759
- (id)mutableSet;	// 0x355785a1
- (id)objectEnumerator;	// 0x35577e81
- (id)pointerFunctions;	// 0x35577f2d
- (void)removeAllItems;	// 0x35577f09
- (void)removeAllObjects;	// 0x35577f39
- (void)removeItem:(const void *)item;	// 0x35577ef1
- (void)removeObject:(id)object;	// 0x35505a81
- (id)setRepresentation;	// 0x35578675
- (void)unionHashTable:(id)table;	// 0x35578415
- (unsigned)weakCount;	// 0x35577ebd
@end

