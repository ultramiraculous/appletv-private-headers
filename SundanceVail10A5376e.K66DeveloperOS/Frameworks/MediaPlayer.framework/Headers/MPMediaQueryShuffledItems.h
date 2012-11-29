/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray, MPReshuffledArrayIndexMap, NSArray, MPMediaQuery;

@interface MPMediaQueryShuffledItems : NSObject <NSCoding, NSCopying> {
	unsigned _activeShuffleType;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	NSMutableArray *_orderedArray;	// 12 = 0xc
	MPReshuffledArrayIndexMap *_indexMap;	// 16 = 0x10
	MPMediaQuery *_sourceMediaQuery;	// 20 = 0x14
	NSArray *_sourceMediaQueryItems;	// 24 = 0x18
}
@property(assign, nonatomic) NSRange focusedRange;	// G=0x36d28871; S=0x36d28851; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x36d28535; 
@property(readonly, assign, nonatomic) unsigned realShuffleType;	// G=0x36d28121; 
@property(readonly, assign, nonatomic) MPMediaQuery *sourceMediaQuery;	// G=0x36d297ad; @synthesize=_sourceMediaQuery
- (id)initWithCoder:(id)coder;	// 0x36d27e85
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery;	// 0x36d27dd5
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery orderedItems:(id)items indexMap:(id)map shuffleType:(unsigned)type;	// 0x36d27cad
- (BOOL)_getFixedItemCount:(unsigned *)count;	// 0x36d28131
- (id)_includeInShuffleItemsForQuery:(id)query;	// 0x36d28c4d
- (void)_rebuildCaches;	// 0x36d28cc9
- (void)_rebuildCachesWithInitialSourceIndex:(unsigned)initialSourceIndex;	// 0x36d28cdd
- (void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned)initialSourceItemIndex;	// 0x36d28d7d
- (void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned)initialSourceItemIndex;	// 0x36d29359
- (void)_resetCaches;	// 0x36d29665
- (void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned)initialIndex;	// 0x36d296b9
- (id)copyWithZone:(NSZone *)zone;	// 0x36d28099
- (unsigned)count;	// 0x36d28395
- (void)dealloc;	// 0x36d27df9
- (void)encodeWithCoder:(id)coder;	// 0x36d27fdd
// declared property getter: - (NSRange)focusedRange;	// 0x36d28871
- (unsigned)indexOfItemWithPersistentID:(unsigned long long)persistentID;	// 0x36d28439
- (unsigned)indexOfItemWithPersistentID:(unsigned long long)persistentID greaterThanOrEqualToIndex:(unsigned)index;	// 0x36d283c1
- (unsigned)indexOfObject:(id)object;	// 0x36d284d5
- (unsigned)indexOfObject:(id)object greaterThanOrEqualToIndex:(unsigned)index;	// 0x36d2845d
- (void)invalidateSourceMediaQueryAndLoadItems;	// 0x36d284e9
// declared property getter: - (id)items;	// 0x36d28535
- (unsigned)nonGrowingCount;	// 0x36d28335
- (unsigned)nonRepeatingCount;	// 0x36d28209
- (id)objectAtIndex:(unsigned)index;	// 0x36d2869d
// declared property getter: - (unsigned)realShuffleType;	// 0x36d28121
// declared property setter: - (void)setFocusedRange:(NSRange)range;	// 0x36d28851
- (void)shuffleAlbumsWithInitialIndex:(unsigned)initialIndex;	// 0x36d288a1
- (void)shuffleItemsWithInitialIndex:(unsigned)initialIndex;	// 0x36d28a95
// declared property getter: - (id)sourceMediaQuery;	// 0x36d297ad
- (void)unshuffle;	// 0x36d28c2d
@end
