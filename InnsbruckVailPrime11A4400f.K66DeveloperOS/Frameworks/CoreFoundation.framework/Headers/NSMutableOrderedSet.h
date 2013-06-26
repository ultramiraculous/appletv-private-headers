/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSOrderedSet.h"
#import "CoreFoundation-Structs.h"


@interface NSMutableOrderedSet : NSOrderedSet {
}
+ (id)orderedSetWithCapacity:(unsigned)capacity;	// 0x2d284ab1
- (id)initWithCapacity:(unsigned)capacity;	// 0x2d328c61
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x2d328c85
- (void)_mutate;	// 0x2d3222c9
- (void)addObject:(id)object;	// 0x2d284bc1
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x2d3222cd
- (void)addObjectsFromArray:(id)array;	// 0x2d294a39
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x2d322439
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x2d322791
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x2d3225e5
- (void)addObjectsFromSet:(id)set;	// 0x2d322895
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x2d322981
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x2d32225d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x2d3236e9
- (void)insertObjects:(const id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x2d294e75
- (void)insertObjectsFromArray:(id)array atIndex:(unsigned)index;	// 0x2d322b69
- (void)insertObjectsFromArray:(id)array range:(NSRange)range atIndex:(unsigned)index;	// 0x2d294b3d
- (void)insertObjectsFromOrderedSet:(id)orderedSet atIndex:(unsigned)index;	// 0x2d323165
- (void)insertObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range atIndex:(unsigned)index;	// 0x2d322e2d
- (void)insertObjectsFromSet:(id)set atIndex:(unsigned)index;	// 0x2d323429
- (void)intersectOrderedSet:(id)set;	// 0x2d323af9
- (void)intersectSet:(id)set;	// 0x2d323dc5
- (void)minusOrderedSet:(id)set;	// 0x2d324469
- (void)minusSet:(id)set;	// 0x2d32461d
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x2d324089
- (void)removeAllObjects;	// 0x2d3247b9
- (void)removeFirstObject;	// 0x2d32480d
- (void)removeLastObject;	// 0x2d324855
- (void)removeObject:(id)object;	// 0x2d2909c9
- (void)removeObject:(id)object inRange:(NSRange)range;	// 0x2d324999
- (void)removeObjectAtIndex:(unsigned)index;	// 0x2d322281
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x2d324ab9
- (void)removeObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d32613d
- (void)removeObjectsInArray:(id)array;	// 0x2d32537d
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x2d325195
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x2d325c3d
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x2d325a8d
- (void)removeObjectsInRange:(NSRange)range;	// 0x2d32489d
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array;	// 0x2d324f31
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array range:(NSRange)range3;	// 0x2d324cc9
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet;	// 0x2d3258d9
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x2d32550d
- (void)removeObjectsInRange:(NSRange)range inSet:(id)set;	// 0x2d325d49
- (void)removeObjectsInSet:(id)set;	// 0x2d325fad
- (void)removeObjectsPassingTest:(id)test;	// 0x2d326401
- (void)removeObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d3262d1
- (void)replaceObject:(id)object;	// 0x2d32661d
- (void)replaceObject:(id)object inRange:(NSRange)range;	// 0x2d32648d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x2d3222a5
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x2d32698d
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x2d3266e1
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array;	// 0x2d32712d
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array range:(NSRange)range3;	// 0x2d326df9
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet;	// 0x2d32774d
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x2d327419
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromSet:(id)set;	// 0x2d327a39
- (void)rollObjectsInRange:(NSRange)range by:(int)by;	// 0x2d327d29
- (void)setArray:(id)array;	// 0x2d3282e9
- (void)setObject:(id)object;	// 0x2d328209
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x2d32807d
- (void)setObject:(id)object atIndexedSubscript:(unsigned)indexedSubscript;	// 0x2d3281f9
- (void)setOrderedSet:(id)set;	// 0x2d3283d9
- (void)setSet:(id)set;	// 0x2d3284d1
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x2d3285c1
- (void)sortUsingComparator:(id)comparator;	// 0x2d328a0d
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x2d328949
- (void)unionOrderedSet:(id)set;	// 0x2d2954c9
- (void)unionSet:(id)set;	// 0x2d328ac5
@end
