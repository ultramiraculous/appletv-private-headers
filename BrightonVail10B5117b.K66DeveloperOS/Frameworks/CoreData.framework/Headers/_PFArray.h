/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSArray.h> // Unknown library
#import "CoreData-Structs.h"


@interface _PFArray : NSArray {
	int _cd_rc;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	id *_array;	// 12 = 0xc
	PFArrayFlags _flags;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x30f15965; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x30f1524d
+ (void)initialize;	// 0x30f15231
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x30f15251
- (id)initWithObjects:(id *)objects count:(unsigned)count andFlags:(unsigned)flags;	// 0x30f15275
- (unsigned)_flags;	// 0x30f15d25
- (BOOL)_isDeallocating;	// 0x30f15cf9
- (id *)_objectsPointer;	// 0x30f15409
- (void)_setShouldRelease:(BOOL)_set;	// 0x30f15d6d
- (void)_setShouldUseExtendedRelease:(BOOL)_set;	// 0x30f15d99
- (BOOL)_tryRetain;	// 0x30f15ca9
- (id)arrayFromObjectIDs;	// 0x30f15419
- (id)copyWithZone:(NSZone *)zone;	// 0x30f15b3d
// converted property getter: - (unsigned)count;	// 0x30f15965
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30f159f9
- (void)dealloc;	// 0x30f15895
- (void)getObjects:(id *)objects;	// 0x30f15a6d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x30f15a95
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x30f1556d
- (unsigned)indexOfObject:(id)object;	// 0x30f15441
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x30f1548d
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x30f15509
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x30f15535
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x30f15621
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30f15b91
- (id)newArrayFromObjectIDs;	// 0x30f1575d
- (id)objectAtIndex:(unsigned)index;	// 0x30f15975
- (oneway void)release;	// 0x30f15c1d
- (id)retain;	// 0x30f15be5
- (unsigned)retainCount;	// 0x30f15c95
- (id)subarrayWithRange:(NSRange)range;	// 0x30f1569d
@end

