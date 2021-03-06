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
- (id)init;	// 0x3347b67d
- (id)initWithObjects:(id *)objects andIndexes:(unsigned *)indexes count:(unsigned long)count;	// 0x3347b5b5
- (unsigned *)_createIndexesWithSize:(unsigned *)size;	// 0x3347b86d
- (id)_initAndDeepCopyIndexMap:(id)map;	// 0x3347b751
- (id)_initWithIndexMap:(id)indexMap;	// 0x3347bbed
- (void)addObjectsFromIndexMap:(id)indexMap;	// 0x3347c8e9
- (id)copyWithZone:(NSZone *)zone;	// 0x3347bbb5
- (unsigned long)count;	// 0x3347e561
- (void)dealloc;	// 0x3347b9d1
- (id)deepCopyWithZone:(NSZone *)zone;	// 0x3347b719
- (id)description;	// 0x3347e609
- (id)indexes;	// 0x3347e575
- (id)objectForIndex:(unsigned long)index;	// 0x3347b669
- (void)removeAllObjects;	// 0x3347bc5d
- (void)removeObjectForIndex:(unsigned long)index;	// 0x3347ce21
- (void)setObject:(id)object forIndex:(unsigned long)index;	// 0x3347b6fd
@end

