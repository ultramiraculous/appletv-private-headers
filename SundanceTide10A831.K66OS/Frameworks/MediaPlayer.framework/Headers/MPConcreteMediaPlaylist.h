/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPlaylist.h"
#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSMutableDictionary, MPMediaQuery, NSObject;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCoding, NSCopying> {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	NSMutableDictionary *_properties;	// 8 = 0x8
	MPMediaQuery *_itemsQuery;	// 12 = 0xc
	void *_clusterPlaylist;	// 16 = 0x10
}
- (id)initWithCoder:(id)coder;	// 0x36f3c2d9
- (id)initWithProperties:(id)properties itemsQuery:(id)query;	// 0x36f3c099
- (void)_updateLibraryForPlaylistEdit:(id)playlistEdit;	// 0x36f3cfe9
- (void)addItem:(id)item completionBlock:(id)block;	// 0x36f3d079
- (void)addItems:(id)items completionBlock:(id)block;	// 0x36f3d21d
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)seedItems error:(id *)error;	// 0x36f3dc1d
- (id)copyWithZone:(NSZone *)zone;	// 0x36f3c27d
- (unsigned)count;	// 0x36f3c685
- (void)dealloc;	// 0x36f3c12d
- (void)encodeWithCoder:(id)coder;	// 0x36f3c3cd
- (void)endGeneratingGeniusClusterItems;	// 0x36f3de4d
- (BOOL)existsInLibrary;	// 0x36f3c441
- (id)geniusClusterItemsWithCount:(unsigned)count error:(id *)error;	// 0x36f3dd45
- (unsigned)hash;	// 0x36f3c25d
- (BOOL)isEqual:(id)equal;	// 0x36f3c1e5
- (id)items;	// 0x36f3c61d
- (int)mediaTypes;	// 0x36f3c6ad
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 completionBlock:(id)block;	// 0x36f3d7b1
- (void)populateWithSeedItem:(id)seedItem completionBlock:(id)block;	// 0x36f3d939
- (void)populateWithSeedItem:(id)seedItem queue:(id)queue completionBlock:(id)block;	// 0x36f3d965
- (void)removeAllItems;	// 0x36f3d711
- (void)removeItems:(id)items atFilteredIndexes:(id)filteredIndexes completionBlock:(id)block;	// 0x36f3d49d
- (id)representativeItem;	// 0x36f3c63d
- (void)setValue:(id)value forProperty:(id)property;	// 0x36f3c491
- (id)valueForProperty:(id)property;	// 0x36f3c79d
@end

