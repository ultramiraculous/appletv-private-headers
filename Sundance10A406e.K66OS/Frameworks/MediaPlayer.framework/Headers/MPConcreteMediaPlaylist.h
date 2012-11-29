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
- (id)initWithCoder:(id)coder;	// 0x35d34ba9
- (id)initWithProperties:(id)properties itemsQuery:(id)query;	// 0x35d34969
- (void)_updateLibraryForPlaylistEdit:(id)playlistEdit;	// 0x35d358b9
- (void)addItem:(id)item completionBlock:(id)block;	// 0x35d35949
- (void)addItems:(id)items completionBlock:(id)block;	// 0x35d35aed
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)seedItems error:(id *)error;	// 0x35d364ed
- (id)copyWithZone:(NSZone *)zone;	// 0x35d34b4d
- (unsigned)count;	// 0x35d34f55
- (void)dealloc;	// 0x35d349fd
- (void)encodeWithCoder:(id)coder;	// 0x35d34c9d
- (void)endGeneratingGeniusClusterItems;	// 0x35d3671d
- (BOOL)existsInLibrary;	// 0x35d34d11
- (id)geniusClusterItemsWithCount:(unsigned)count error:(id *)error;	// 0x35d36615
- (unsigned)hash;	// 0x35d34b2d
- (BOOL)isEqual:(id)equal;	// 0x35d34ab5
- (id)items;	// 0x35d34eed
- (int)mediaTypes;	// 0x35d34f7d
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 completionBlock:(id)block;	// 0x35d36081
- (void)populateWithSeedItem:(id)seedItem completionBlock:(id)block;	// 0x35d36209
- (void)populateWithSeedItem:(id)seedItem queue:(id)queue completionBlock:(id)block;	// 0x35d36235
- (void)removeAllItems;	// 0x35d35fe1
- (void)removeItems:(id)items atFilteredIndexes:(id)filteredIndexes completionBlock:(id)block;	// 0x35d35d6d
- (id)representativeItem;	// 0x35d34f0d
- (void)setValue:(id)value forProperty:(id)property;	// 0x35d34d61
- (id)valueForProperty:(id)property;	// 0x35d3506d
@end
