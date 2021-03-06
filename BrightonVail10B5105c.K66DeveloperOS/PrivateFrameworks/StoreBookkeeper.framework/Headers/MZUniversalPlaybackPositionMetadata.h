/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "StoreBookkeeper-Structs.h"

@class NSString;

@interface MZUniversalPlaybackPositionMetadata : NSObject <NSCopying> {
	NSString *_itemIdentifier;	// 4 = 0x4
	double _timestamp;	// 8 = 0x8
	double _bookmarkTime;	// 16 = 0x10
	BOOL _hasBeenPlayed;	// 24 = 0x18
	unsigned _playCount;	// 28 = 0x1c
}
@property(assign, nonatomic) double bookmarkTime;	// G=0x3751dc4d; S=0x3751dc65; @synthesize=_bookmarkTime
@property(assign, nonatomic) BOOL hasBeenPlayed;	// G=0x3751dc79; S=0x3751dc89; @synthesize=_hasBeenPlayed
@property(copy, nonatomic) NSString *itemIdentifier;	// G=0x3751dbfd; S=0x3751dc11; @synthesize=_itemIdentifier
@property(assign, nonatomic) unsigned playCount;	// G=0x3751dc99; S=0x3751dca9; @synthesize=_playCount
@property(assign, nonatomic) double timestamp;	// G=0x3751dc21; S=0x3751dc39; @synthesize=_timestamp
+ (id)keyValueStoreItemIdentifierForItem:(id)item;	// 0x3751ccc9
+ (id)metadataWithValuesFromDataSourceItem:(id)dataSourceItem;	// 0x3751d209
+ (id)metadataWithValuesItemIdentifier:(id)valuesItemIdentifier keyValueStorePayload:(id)payload;	// 0x3751d521
- (id)init;	// 0x3751c7f1
// declared property getter: - (double)bookmarkTime;	// 0x3751dc4d
- (id)copyWithZone:(NSZone *)zone;	// 0x3751c9d1
- (void)dealloc;	// 0x3751cc7d
- (id)description;	// 0x3751c821
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x3751dc79
- (unsigned)hash;	// 0x3751cacd
- (BOOL)isEqual:(id)equal;	// 0x3751cb99
// declared property getter: - (id)itemIdentifier;	// 0x3751dbfd
- (id)keyValueStorePayload;	// 0x3751da69
// declared property getter: - (unsigned)playCount;	// 0x3751dc99
// declared property setter: - (void)setBookmarkTime:(double)time;	// 0x3751dc65
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x3751dc89
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x3751dc11
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x3751dca9
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x3751dc39
// declared property getter: - (double)timestamp;	// 0x3751dc21
@end

