/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "SBKUniversalPlaybackPositionMediaItem.h"
#import </libobjc.A.h>

@class ATVPodcastGUID, NSNumber, ATVDataType, NSString, NSURL, NSDate;

@interface ATVUniversalPlaybackPositionRecord : NSObject <SBKUniversalPlaybackPositionMediaItem> {
	NSString *_itemIdentifier;	// 4 = 0x4
	ATVDataType *_mediaType;	// 8 = 0x8
	NSNumber *_bookmarkTime;	// 12 = 0xc
	NSNumber *_hasBeenPlayed;	// 16 = 0x10
	NSNumber *_playCount;	// 20 = 0x14
	NSDate *_timestamp;	// 24 = 0x18
	NSURL *_podcastURL;	// 28 = 0x1c
	ATVPodcastGUID *_podcastGUID;	// 32 = 0x20
}
@property(retain, nonatomic) NSNumber *bookmarkTime;	// G=0x30442b6d; S=0x30442b7d; @synthesize=_bookmarkTime
@property(retain, nonatomic) NSNumber *hasBeenPlayed;	// G=0x30442ba5; S=0x30442bb5; @synthesize=_hasBeenPlayed
@property(copy, nonatomic) NSString *itemIdentifier;	// G=0x30442b11; S=0x30442b25; @synthesize=_itemIdentifier
@property(retain, nonatomic) ATVDataType *mediaType;	// G=0x30442b35; S=0x30442b45; @synthesize=_mediaType
@property(retain, nonatomic) NSNumber *playCount;	// G=0x30442bdd; S=0x30442bed; @synthesize=_playCount
@property(retain, nonatomic) ATVPodcastGUID *podcastGUID;	// G=0x30442c85; S=0x30442c95; @synthesize=_podcastGUID
@property(retain, nonatomic) NSURL *podcastURL;	// G=0x30442c4d; S=0x30442c5d; @synthesize=_podcastURL
@property(retain, nonatomic) NSDate *timestamp;	// G=0x30442c15; S=0x30442c25; @synthesize=_timestamp
- (void).cxx_destruct;	// 0x30442cbd
- (id)_uppDictionary;	// 0x304426c1
// declared property getter: - (id)bookmarkTime;	// 0x30442b6d
- (id)description;	// 0x304422f9
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x304429c5
// declared property getter: - (id)hasBeenPlayed;	// 0x30442ba5
// declared property getter: - (id)itemIdentifier;	// 0x30442b11
- (void)markAsUnwatched;	// 0x304425b9
- (void)markAsWatched;	// 0x30442471
// declared property getter: - (id)mediaType;	// 0x30442b35
// declared property getter: - (id)playCount;	// 0x30442bdd
// declared property getter: - (id)podcastGUID;	// 0x30442c85
// declared property getter: - (id)podcastURL;	// 0x30442c4d
// declared property setter: - (void)setBookmarkTime:(id)time;	// 0x30442b7d
// declared property setter: - (void)setHasBeenPlayed:(id)played;	// 0x30442bb5
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x30442b25
// declared property setter: - (void)setMediaType:(id)type;	// 0x30442b45
// declared property setter: - (void)setPlayCount:(id)count;	// 0x30442bed
// declared property setter: - (void)setPodcastGUID:(id)guid;	// 0x30442c95
// declared property setter: - (void)setPodcastURL:(id)url;	// 0x30442c5d
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x30442c25
// declared property getter: - (id)timestamp;	// 0x30442c15
@end

