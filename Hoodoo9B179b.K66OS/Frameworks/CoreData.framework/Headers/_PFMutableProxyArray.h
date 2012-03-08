/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableArray.h> // Unknown library

@class _PFArray;

__attribute__((visibility("hidden")))
@interface _PFMutableProxyArray : NSMutableArray {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _editCount;	// 8 = 0x8
	unsigned _offset;	// 12 = 0xc
	unsigned _limit;	// 16 = 0x10
	_PFArray *_originalArray;	// 20 = 0x14
	NSMutableArray *_updatedObjectsArray;	// 24 = 0x18
	CFArrayRef _indicesVeneer;	// 28 = 0x1c
}
- (id)initWithPFArray:(id)pfarray;	// 0x32b196fd
- (id)initWithPFArray:(id)pfarray inRange:(NSRange)range;	// 0x32b1b029
- (BOOL)_isDeallocating;	// 0x32b1ad79
- (void)_rehash;	// 0x32b1aab1
- (BOOL)_tryRetain;	// 0x32b1ada1
- (void)addObject:(id)object;	// 0x32b1a7c5
- (id)arrayFromObjectIDs;	// 0x32b1991d
- (unsigned)count;	// 0x32b1ad65
- (void)dealloc;	// 0x32b1a559
- (void)finalize;	// 0x32b1aeb5
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x32b19881
- (unsigned)indexOfObject:(id)object;	// 0x32b19739
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x32b19771
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x32b197a9
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x32b197e1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32b1a6c5
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x32b1a9a9
- (id)newArrayFromObjectIDs;	// 0x32b1a825
- (id)objectAtIndex:(unsigned)index;	// 0x32b1aa35
- (oneway void)release;	// 0x32b1adfd
- (void)removeLastObject;	// 0x32b1a72d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x32b1a635
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32b1a5cd
- (id)retain;	// 0x32b1ae7d
- (unsigned)retainCount;	// 0x32b18c5d
- (id)subarrayWithRange:(NSRange)range;	// 0x32b1aef9
@end
