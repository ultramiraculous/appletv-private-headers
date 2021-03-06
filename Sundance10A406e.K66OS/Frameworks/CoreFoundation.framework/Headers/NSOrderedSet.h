/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"
#import "NSFastEnumeration.h"


@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x33a94709
+ (id)newOrderedSetWithObjects:(const id *)objects count:(unsigned)count;	// 0x33b223e9
+ (id)orderedSet;	// 0x33aa2675
+ (id)orderedSetWithArray:(id)array;	// 0x33b22f15
+ (id)orderedSetWithArray:(id)array copyItems:(BOOL)items;	// 0x33b22ead
+ (id)orderedSetWithArray:(id)array range:(NSRange)range;	// 0x33b22e61
+ (id)orderedSetWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x33b22e15
+ (id)orderedSetWithObject:(id)object;	// 0x33b223a9
+ (id)orderedSetWithObjects:(id)objects;	// 0x33b227f1
+ (id)orderedSetWithObjects:(const id *)objects count:(unsigned)count;	// 0x33b22369
+ (id)orderedSetWithOrderedSet:(id)orderedSet;	// 0x33b230d1
+ (id)orderedSetWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x33b23069
+ (id)orderedSetWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x33b2301d
+ (id)orderedSetWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x33aa1c65
+ (id)orderedSetWithSet:(id)set;	// 0x33b23409
+ (id)orderedSetWithSet:(id)set copyItems:(BOOL)items;	// 0x33b233c9
+ (BOOL)supportsSecureCoding;	// 0x33b234a1
- (id)initWithArray:(id)array;	// 0x33b22dd9
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x33b22d91
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x33b22d6d
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x33b22a35
- (id)initWithCoder:(id)coder;	// 0x33b23629
- (id)initWithObject:(id)object;	// 0x33b22349
- (id)initWithObjects:(id)objects;	// 0x33b225a1
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x33b22325
- (id)initWithOrderedSet:(id)orderedSet;	// 0x33b22fe1
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x33b22f99
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x33b22f75
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x33aa1cb1
- (id)initWithSet:(id)set;	// 0x33b233b5
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x33b23131
- (id)allObjects;	// 0x33b1f471
- (id)array;	// 0x33a956a1
- (Class)classForCoder;	// 0x33b23955
- (BOOL)containsObject:(id)object;	// 0x33a95d4d
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x33b1f60d
- (id)copyWithZone:(NSZone *)zone;	// 0x33b23449
- (unsigned)count;	// 0x33b1f405
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33a95abd
- (unsigned)countForObject:(id)object;	// 0x33aa6569
- (unsigned)countForObject:(id)object inRange:(NSRange)range;	// 0x33b1f6fd
- (id)description;	// 0x33b22311
- (id)descriptionWithLocale:(id)locale;	// 0x33b222fd
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x33b21fa5
- (void)encodeWithCoder:(id)coder;	// 0x33b234a5
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x33b1f7ed
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x33a96209
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x33a96295
- (id)firstObject;	// 0x33aa5f05
- (void)getObjects:(id *)objects;	// 0x33aa5f3d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x33b1fd9d
- (unsigned)hash;	// 0x33b1ff15
- (unsigned)indexOfObject:(id)object;	// 0x33b1f429
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x33b1ff25
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x33b2001d
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x33b20329
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x33b20851
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x33b2079d
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x33b208dd
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x33b20ea1
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x33b20ded
- (BOOL)intersectsOrderedSet:(id)set;	// 0x33b20f2d
- (BOOL)intersectsSet:(id)set;	// 0x33b210c9
- (BOOL)isEqual:(id)equal;	// 0x33b21421
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x33b21265
- (BOOL)isNSOrderedSet__;	// 0x33aa2671
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x33b21469
- (BOOL)isSubsetOfSet:(id)set;	// 0x33b215d9
- (id)lastObject;	// 0x33b21749
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33aa658d
- (id)objectAtIndex:(unsigned)index;	// 0x33b1f44d
- (id)objectAtIndexedSubscript:(unsigned)indexedSubscript;	// 0x33b21781
- (id)objectEnumerator;	// 0x33aa0a1d
- (id)objectsAtIndexes:(id)indexes;	// 0x33aa220d
- (id)objectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x33b21791
- (id)objectsPassingTest:(id)test;	// 0x33b21989
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x33b218c9
- (id)reverseObjectEnumerator;	// 0x33b21a15
- (id)reversedOrderedSet;	// 0x33b21a5d
- (id)set;	// 0x33b21aa5
- (id)sortedArrayFromRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x33b21aed
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x33b21efd
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x33b21e4d
@end

