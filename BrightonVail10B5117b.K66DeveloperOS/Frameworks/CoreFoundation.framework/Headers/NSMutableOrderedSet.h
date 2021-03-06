/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSOrderedSet.h"


@interface NSMutableOrderedSet : NSOrderedSet {
}
+ (id)orderedSetWithCapacity:(unsigned)capacity;	// 0x310f0dd9
- (id)initWithCapacity:(unsigned)capacity;	// 0x31184fe9
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3118500d
- (void)_mutate;	// 0x3117e9dd
- (void)addObject:(id)object;	// 0x310f0ef9
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x3117e9e1
- (void)addObjectsFromArray:(id)array;	// 0x31100895
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x3117eb49
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x3117eea1
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3117ecf5
- (void)addObjectsFromSet:(id)set;	// 0x3117efa5
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x3117f095
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3117e971
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x3117fdcd
- (void)insertObjects:(const id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x31100cc9
- (void)insertObjectsFromArray:(id)array atIndex:(unsigned)index;	// 0x3117f279
- (void)insertObjectsFromArray:(id)array range:(NSRange)range atIndex:(unsigned)index;	// 0x31100999
- (void)insertObjectsFromOrderedSet:(id)orderedSet atIndex:(unsigned)index;	// 0x3117f861
- (void)insertObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range atIndex:(unsigned)index;	// 0x3117f531
- (void)insertObjectsFromSet:(id)set atIndex:(unsigned)index;	// 0x3117fb19
- (void)intersectOrderedSet:(id)set;	// 0x311801d1
- (void)intersectSet:(id)set;	// 0x311804c1
- (void)minusOrderedSet:(id)set;	// 0x31180b71
- (void)minusSet:(id)set;	// 0x31180d25
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x311807a5
- (void)removeAllObjects;	// 0x31180ec1
- (void)removeFirstObject;	// 0x31180f15
- (void)removeLastObject;	// 0x31180f5d
- (void)removeObject:(id)object;	// 0x310fcaf9
- (void)removeObject:(id)object inRange:(NSRange)range;	// 0x311810a1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3117e995
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x311811bd
- (void)removeObjectsInArray:(id)array;	// 0x31181a7d
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x31181895
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x31182325
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x31182175
- (void)removeObjectsInRange:(NSRange)range;	// 0x31180fa5
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array;	// 0x31181635
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array range:(NSRange)range3;	// 0x311813cd
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet;	// 0x31181fc1
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x31181c0d
- (void)removeObjectsInRange:(NSRange)range inSet:(id)set;	// 0x31182431
- (void)removeObjectsInSet:(id)set;	// 0x31182691
- (void)replaceObject:(id)object;	// 0x311829b1
- (void)replaceObject:(id)object inRange:(NSRange)range;	// 0x31182821
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3117e9b9
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x31182d15
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x31182a75
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array;	// 0x311834b5
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array range:(NSRange)range3;	// 0x31183171
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet;	// 0x31183aed
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x311837a9
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromSet:(id)set;	// 0x31183de1
- (void)rollObjectsInRange:(NSRange)range by:(int)by;	// 0x311840cd
- (void)setArray:(id)array;	// 0x31184675
- (void)setObject:(id)object;	// 0x31184595
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x3118440d
- (void)setObject:(id)object atIndexedSubscript:(unsigned)indexedSubscript;	// 0x31184585
- (void)setOrderedSet:(id)set;	// 0x31184769
- (void)setSet:(id)set;	// 0x31184861
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x31184955
- (void)sortUsingComparator:(id)comparator;	// 0x31184d95
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x31184cd1
- (void)unionOrderedSet:(id)set;	// 0x31101311
- (void)unionSet:(id)set;	// 0x31184e4d
@end

