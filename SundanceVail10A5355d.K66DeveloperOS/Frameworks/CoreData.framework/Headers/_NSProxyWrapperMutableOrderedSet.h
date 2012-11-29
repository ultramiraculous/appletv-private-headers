/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "_NSNotifyingWrapperMutableOrderedSet.h"
#import "CoreData-Structs.h"

@class _NSFaultingMutableOrderedSetMutationMethods;

@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet {
	_NSFaultingMutableOrderedSetMutationMethods *_mutationMethods;	// 16 = 0x10
}
- (id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set mutationMethods:(id)methods;	// 0x33577001
- (void)addObject:(id)object;	// 0x335773f1
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x33577549
- (void)addObjectsFromArray:(id)array;	// 0x33577785
- (void)dealloc;	// 0x33576fb1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3357705d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x33577975
- (void)insertObjects:(id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x33577841
- (void)intersectOrderedSet:(id)set;	// 0x33578029
- (void)intersectSet:(id)set;	// 0x335783a9
- (void)minusOrderedSet:(id)set;	// 0x33578195
- (void)minusSet:(id)set;	// 0x33578511
- (void)removeAllObjects;	// 0x33577dc9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x335771d1
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x33577c6d
- (void)removeObjectsInArray:(id)array;	// 0x33577ec5
- (void)removeObjectsInRange:(NSRange)range;	// 0x33577b85
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x33577281
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x33578791
- (void)sortUsingComparator:(id)comparator;	// 0x33578735
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x33578761
- (void)unionOrderedSet:(id)set;	// 0x335782ed
- (void)unionSet:(id)set;	// 0x33578679
@end
