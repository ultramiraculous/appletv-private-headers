/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableSet.h> // Unknown library


@interface NSCountedSet : NSMutableSet {
@private
	id _table;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
- (id)init;	// 0x3242e9c1
- (id)initWithArray:(id)array;	// 0x32495ba1
- (id)initWithCapacity:(unsigned)capacity;	// 0x3242e9d9
- (id)initWithCoder:(id)coder;	// 0x32496451
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x32495e6d
- (id)initWithSet:(id)set;	// 0x32495b75
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x3249632d
- (void)addObject:(id)object;	// 0x32442a55
- (id)allObjects;	// 0x32497289
- (id)anyObject;	// 0x324971a9
- (Class)classForCoder;	// 0x32495ae5
- (id)copyWithZone:(NSZone *)zone;	// 0x32496419
- (unsigned)count;	// 0x32442b29
- (unsigned)countForObject:(id)object;	// 0x324962fd
- (void)dealloc;	// 0x324261fd
- (id)descriptionWithLocale:(id)locale;	// 0x32496e7d
- (void)encodeWithCoder:(id)coder;	// 0x3249738d
- (void)intersectSet:(id)set;	// 0x32496729
- (BOOL)intersectsSet:(id)set;	// 0x32496d15
- (BOOL)isEqualToSet:(id)set;	// 0x32496ba5
- (BOOL)isSubsetOfSet:(id)set;	// 0x32496a35
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x32495d59
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x324968d5
- (id)member:(id)member;	// 0x32442aa5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32495b45
- (id)objectEnumerator;	// 0x3244d41d
- (void)removeAllObjects;	// 0x324966c9
- (void)removeObject:(id)object;	// 0x32442ad5
- (void)unionSet:(id)set;	// 0x32495a55
@end

