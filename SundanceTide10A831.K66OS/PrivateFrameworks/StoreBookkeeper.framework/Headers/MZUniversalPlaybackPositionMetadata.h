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
@property(assign, nonatomic) double bookmarkTime;	// G=0x364ddccd; S=0x364ddce5; @synthesize=_bookmarkTime
@property(assign, nonatomic) BOOL hasBeenPlayed;	// G=0x364ddcf9; S=0x364ddd09; @synthesize=_hasBeenPlayed
@property(copy, nonatomic) NSString *itemIdentifier;	// G=0x364ddc7d; S=0x364ddc91; @synthesize=_itemIdentifier
@property(assign, nonatomic) unsigned playCount;	// G=0x364ddd19; S=0x364ddd29; @synthesize=_playCount
@property(assign, nonatomic) double timestamp;	// G=0x364ddca1; S=0x364ddcb9; @synthesize=_timestamp
+ (id)keyValueStoreItemIdentifierForItem:(id)item;	// 0x364dcd49
+ (id)metadataWithValuesFromDataSourceItem:(id)dataSourceItem;	// 0x364dd289
+ (id)metadataWithValuesItemIdentifier:(id)valuesItemIdentifier keyValueStorePayload:(id)payload;	// 0x364dd5a1
- (id)init;	// 0x364dc871
// declared property getter: - (double)bookmarkTime;	// 0x364ddccd
- (id)copyWithZone:(NSZone *)zone;	// 0x364dca51
- (void)dealloc;	// 0x364dccfd
- (id)description;	// 0x364dc8a1
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x364ddcf9
- (unsigned)hash;	// 0x364dcb4d
- (BOOL)isEqual:(id)equal;	// 0x364dcc19
// declared property getter: - (id)itemIdentifier;	// 0x364ddc7d
- (id)keyValueStorePayload;	// 0x364ddae9
// declared property getter: - (unsigned)playCount;	// 0x364ddd19
// declared property setter: - (void)setBookmarkTime:(double)time;	// 0x364ddce5
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x364ddd09
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x364ddc91
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x364ddd29
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x364ddcb9
// declared property getter: - (double)timestamp;	// 0x364ddca1
@end

