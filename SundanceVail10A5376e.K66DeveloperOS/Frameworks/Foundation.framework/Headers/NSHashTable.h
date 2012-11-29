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
+ (id)alloc;	// 0x34d314d5
+ (id)allocWithZone:(NSZone *)zone;	// 0x34da3cf5
+ (id)hashTableWithOptions:(unsigned)options;	// 0x34da3d69
+ (id)hashTableWithWeakObjects;	// 0x34da3d21
+ (id)weakObjectsHashTable;	// 0x34d7b84d
- (id)init;	// 0x34da3ea9
- (id)initWithCoder:(id)coder;	// 0x34da3db5
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x34da3e11
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x34da3f61
- (void)addObject:(id)object;	// 0x34da3f19
- (id)allObjects;	// 0x34da3ef1
- (id)anyObject;	// 0x34da3f89
- (BOOL)containsObject:(id)object;	// 0x34d31b89
- (id)copy;	// 0x34da3f3d
- (id)copyWithZone:(NSZone *)zone;	// 0x34da4789
- (unsigned)count;	// 0x34da3ee5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34da3ed9
- (id)description;	// 0x34da3eb5
- (void)encodeWithCoder:(id)coder;	// 0x34da3ecd
- (void *)getItem:(const void *)item;	// 0x34da3f0d
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x34da3f55
- (void)insertKnownAbsentItem:(const void *)item;	// 0x34da3f25
- (void)intersectHashTable:(id)table;	// 0x34da4255
- (BOOL)intersectsHashTable:(id)table;	// 0x34da3fe5
- (BOOL)isEqualToHashTable:(id)hashTable;	// 0x34da40a5
- (BOOL)isSubsetOfHashTable:(id)hashTable;	// 0x34da4195
- (id)member:(id)member;	// 0x34d30451
- (void)minusHashTable:(id)table;	// 0x34da4511
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34da4799
- (id)mutableSet;	// 0x34da45e1
- (id)objectEnumerator;	// 0x34da3ec1
- (id)pointerFunctions;	// 0x34da3f6d
- (void)removeAllItems;	// 0x34da3f49
- (void)removeAllObjects;	// 0x34da3f79
- (void)removeItem:(const void *)item;	// 0x34da3f31
- (void)removeObject:(id)object;	// 0x34d31ac1
- (id)setRepresentation;	// 0x34da46b5
- (void)unionHashTable:(id)table;	// 0x34da4455
- (unsigned)weakCount;	// 0x34da3efd
@end
