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
- (id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set mutationMethods:(id)methods;	// 0x30fe7f19
- (void)addObject:(id)object;	// 0x30fe8309
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x30fe8461
- (void)addObjectsFromArray:(id)array;	// 0x30fe869d
- (void)dealloc;	// 0x30fe7ec9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x30fe7f75
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x30fe888d
- (void)insertObjects:(id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x30fe8759
- (void)intersectOrderedSet:(id)set;	// 0x30fe8f41
- (void)intersectSet:(id)set;	// 0x30fe92c1
- (void)minusOrderedSet:(id)set;	// 0x30fe90ad
- (void)minusSet:(id)set;	// 0x30fe9429
- (void)removeAllObjects;	// 0x30fe8ce1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x30fe80e9
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x30fe8b85
- (void)removeObjectsInArray:(id)array;	// 0x30fe8ddd
- (void)removeObjectsInRange:(NSRange)range;	// 0x30fe8a9d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x30fe8199
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x30fe96a9
- (void)sortUsingComparator:(id)comparator;	// 0x30fe964d
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x30fe9679
- (void)unionOrderedSet:(id)set;	// 0x30fe9205
- (void)unionSet:(id)set;	// 0x30fe9591
@end

