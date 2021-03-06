/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaItemCollection.h"

@class MPMediaItem, MPMediaQuery;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection {
@private
	long long _identifier;	// 20 = 0x14
	MPMediaQuery *_itemsQuery;	// 28 = 0x1c
	int _grouping;	// 32 = 0x20
	MPMediaItem *_representativeItem;	// 36 = 0x24
}
@property(readonly, retain) MPMediaQuery *itemsQuery;	// G=0x31a3c385; converted property
@property(readonly, retain) MPMediaItem *representativeItem;	// G=0x31a3c3dd; converted property
- (id)initWithCoder:(id)coder;	// 0x31a3be25
- (id)initWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQuery:(id)query grouping:(int)grouping representativeItemIdentifier:(long long)identifier5;	// 0x31a3bc2d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a3be15
- (unsigned)count;	// 0x31a3c5e5
- (void)dealloc;	// 0x31a3bdb5
- (void)encodeWithCoder:(id)coder;	// 0x31a3bee5
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x31a3bf95
- (unsigned)hash;	// 0x31a3bda5
- (BOOL)isEqual:(id)equal;	// 0x31a3bd21
- (id)items;	// 0x31a3c3bd
// converted property getter: - (id)itemsQuery;	// 0x31a3c385
- (id)mediaLibrary;	// 0x31a3c135
- (int)mediaTypes;	// 0x31a3c60d
- (unsigned long long)persistentID;	// 0x31a3c155
// converted property getter: - (id)representativeItem;	// 0x31a3c3dd
- (id)valueForProperty:(id)property;	// 0x31a3c16d
@end

