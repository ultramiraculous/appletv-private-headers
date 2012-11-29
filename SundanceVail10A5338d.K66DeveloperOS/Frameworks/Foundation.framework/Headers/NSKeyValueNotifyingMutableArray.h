/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableArray.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableArray : NSKeyValueMutableArray {
	NSMutableArray *_mutableArray;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x37389e85
+ (id)_proxyShare;	// 0x37389e95
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x37389ec5
- (void)_proxyNonGCFinalize;	// 0x37389f41
- (void)addObject:(id)object;	// 0x3738a025
- (unsigned)count;	// 0x37389f91
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x37389fb1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3738a10d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x3738a1dd
- (id)objectAtIndex:(unsigned)index;	// 0x37389fe5
- (id)objectsAtIndexes:(id)indexes;	// 0x3738a005
- (void)removeLastObject;	// 0x3738a269
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3738a34d
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x3738a419
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3738a4a1
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x3738a571
@end
