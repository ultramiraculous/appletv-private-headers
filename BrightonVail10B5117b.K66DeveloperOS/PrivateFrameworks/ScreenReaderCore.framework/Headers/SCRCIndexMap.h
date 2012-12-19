/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface SCRCIndexMap : NSObject <NSCopying> {
	CFDictionaryRef _map;	// 4 = 0x4
}
- (id)init;	// 0x355ef67d
- (id)initWithObjects:(id *)objects andIndexes:(unsigned *)indexes count:(unsigned long)count;	// 0x355ef5b5
- (unsigned *)_createIndexesWithSize:(unsigned *)size;	// 0x355ef86d
- (id)_initAndDeepCopyIndexMap:(id)map;	// 0x355ef751
- (id)_initWithIndexMap:(id)indexMap;	// 0x355efbed
- (void)addObjectsFromIndexMap:(id)indexMap;	// 0x355f08e9
- (id)copyWithZone:(NSZone *)zone;	// 0x355efbb5
- (unsigned long)count;	// 0x355f2561
- (void)dealloc;	// 0x355ef9d1
- (id)deepCopyWithZone:(NSZone *)zone;	// 0x355ef719
- (id)description;	// 0x355f2609
- (id)indexes;	// 0x355f2575
- (id)objectForIndex:(unsigned long)index;	// 0x355ef669
- (void)removeAllObjects;	// 0x355efc5d
- (void)removeObjectForIndex:(unsigned long)index;	// 0x355f0e21
- (void)setObject:(id)object forIndex:(unsigned long)index;	// 0x355ef6fd
@end
