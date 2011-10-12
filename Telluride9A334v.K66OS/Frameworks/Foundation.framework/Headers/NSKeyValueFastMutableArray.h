/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableArray.h"
#import "Foundation-Structs.h"

@class NSKeyValueMutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray : NSKeyValueMutableArray {
@private
	NSKeyValueMutatingArrayMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x30676441
- (void)_proxyNonGCFinalize;	// 0x306764a9
- (void)addObject:(id)object;	// 0x306764fd
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x30676531
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x30676625
- (void)removeLastObject;	// 0x3067668d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x306766bd
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x30676769
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x306767c9
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x306768f1
@end

