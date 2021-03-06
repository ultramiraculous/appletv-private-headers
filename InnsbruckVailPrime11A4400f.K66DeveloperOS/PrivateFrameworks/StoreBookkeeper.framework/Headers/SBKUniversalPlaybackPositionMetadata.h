/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "StoreBookkeeper-Structs.h"
#import "SBKSyncKeyValuePair.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKSyncKeyValuePair, NSCopying> {
	BOOL _hasBeenPlayed;	// 4 = 0x4
	NSString *_itemIdentifier;	// 8 = 0x8
	unsigned _playCount;	// 12 = 0xc
	double _timestamp;	// 16 = 0x10
	double _bookmarkTime;	// 24 = 0x18
}
@property(assign) double bookmarkTime;	// G=0x327b6119; S=0x327b614d; @synthesize=_bookmarkTime
@property(assign) BOOL hasBeenPlayed;	// G=0x327b6181; S=0x327b6199; @synthesize=_hasBeenPlayed
@property(copy) NSString *itemIdentifier;	// G=0x327b60f5; S=0x327b6109; @synthesize=_itemIdentifier
@property(assign) unsigned playCount;	// G=0x327b61b1; S=0x327b61c5; @synthesize=_playCount
@property(assign) double timestamp;	// G=0x327b489d; S=0x327b4849; @synthesize=_timestamp
+ (id)_testableMetadataItem_1;	// 0x327b43f5
+ (id)keyValueStoreItemIdentifierForItem:(id)item;	// 0x327b4add
+ (id)metadataWithItemIdentifier:(id)itemIdentifier keyValueStorePayload:(id)payload;	// 0x327b55ed
+ (id)metadataWithItemIdentifier:(id)itemIdentifier keyValueStorePayload:(id)payload failuresOkay:(BOOL)okay;	// 0x327b5631
+ (id)metadataWithValuesFromDataSourceItem:(id)dataSourceItem;	// 0x327b5209
- (id)init;	// 0x327b4321
- (id)initAsTestableItem;	// 0x327b434d
- (void).cxx_destruct;	// 0x327b61dd
// declared property getter: - (double)bookmarkTime;	// 0x327b6119
- (id)copyWithZone:(NSZone *)zone;	// 0x327b4741
- (id)description;	// 0x327b4421
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x327b6181
- (unsigned)hash;	// 0x327b48ed
- (BOOL)isEqual:(id)equal;	// 0x327b49d9
// declared property getter: - (id)itemIdentifier;	// 0x327b60f5
- (id)keyValueStorePayload;	// 0x327b5ed9
- (id)kvsKey;	// 0x327b60c5
- (id)kvsPayload;	// 0x327b60d5
- (id)kvsValueDescription;	// 0x327b60e5
// declared property getter: - (unsigned)playCount;	// 0x327b61b1
// declared property setter: - (void)setBookmarkTime:(double)time;	// 0x327b614d
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x327b6199
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x327b6109
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x327b61c5
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x327b4849
// declared property getter: - (double)timestamp;	// 0x327b489d
@end

