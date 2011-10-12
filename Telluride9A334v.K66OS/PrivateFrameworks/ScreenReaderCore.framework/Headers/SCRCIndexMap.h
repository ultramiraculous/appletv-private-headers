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
- (id)init;	// 0x3121ca89
- (id)initWithObjects:(id *)objects andIndexes:(unsigned *)indexes count:(unsigned long)count;	// 0x3121c9b9
- (unsigned *)_createIndexesWithSize:(unsigned *)size;	// 0x3121cc79
- (id)_initAndDeepCopyIndexMap:(id)map;	// 0x3121cb61
- (id)_initWithIndexMap:(id)indexMap;	// 0x3121d005
- (void)addObjectsFromIndexMap:(id)indexMap;	// 0x3121dd6d
- (id)copyWithZone:(NSZone *)zone;	// 0x3121cfcd
- (unsigned long)count;	// 0x3121f961
- (void)dealloc;	// 0x3121cde1
- (id)deepCopyWithZone:(NSZone *)zone;	// 0x3121cb29
- (id)description;	// 0x3121f7d9
- (id)indexes;	// 0x3121f8cd
- (id)objectForIndex:(unsigned long)index;	// 0x3121ca75
- (void)removeAllObjects;	// 0x3121d085
- (void)removeObjectForIndex:(unsigned long)index;	// 0x3121e285
- (void)setObject:(id)object forIndex:(unsigned long)index;	// 0x3121cb09
@end

