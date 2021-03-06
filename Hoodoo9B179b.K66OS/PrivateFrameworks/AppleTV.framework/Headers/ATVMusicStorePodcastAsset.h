/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRRSSMediaAsset.h"

@class ATVMusicStoreShowInfo, NSDictionary;

@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset {
@private
	NSDictionary *_feedInfo;	// 16 = 0x10
	ATVMusicStoreShowInfo *_showInfo;	// 20 = 0x14
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x3019d275; S=0x3019d175; converted property
@property(retain) NSDictionary *feedInfo;	// G=0x3019c9c5; S=0x3019c985; converted property
- (id)initWithFeedInfo:(id)feedInfo;	// 0x3019c869
- (id)_podcastID;	// 0x3019d429
- (id)_showInfo;	// 0x3019d485
- (id)artist;	// 0x3019cf6d
- (id)assetID;	// 0x3019c9d5
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x3019d275
- (id)cast;	// 0x3019cb09
- (id)copyright;	// 0x3019d005
- (id)coverArtID;	// 0x3019ccd5
- (id)dateAcquired;	// 0x3019cd8d
- (id)datePublished;	// 0x3019cd55
- (id)datePublishedString;	// 0x3019cf45
- (void)dealloc;	// 0x3019c925
- (id)description;	// 0x3019d051
- (id)directors;	// 0x3019cb89
- (long)duration;	// 0x3019ca8d
// converted property getter: - (id)feedInfo;	// 0x3019c9c5
- (id)genres;	// 0x3019ce9d
- (BOOL)hasCoverArt;	// 0x3019cca5
- (BOOL)hasVideoContent;	// 0x3019cec5
- (void)incrementPerformanceCount;	// 0x3019d109
- (BOOL)isExplicit;	// 0x3019d079
- (id)mediaDescription;	// 0x3019ca55
- (id)mediaSummary;	// 0x3019cff5
- (id)mediaType;	// 0x3019cd9d
- (id)mediaURL;	// 0x3019cbc1
- (long)performanceCount;	// 0x3019d0e1
- (id)previewURL;	// 0x3019cc29
- (id)primaryCollectionTitle;	// 0x3019cfb1
- (id)primaryGenre;	// 0x3019cdf1
- (id)primaryGenreAsString;	// 0x3019cdb9
- (id)producers;	// 0x3019cba5
- (id)publisher;	// 0x3019d04d
- (id)rating;	// 0x3019cec1
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x3019d175
// converted property setter: - (void)setFeedInfo:(id)info;	// 0x3019c985
- (void)setHasBeenPlayed:(BOOL)played;	// 0x3019d149
- (id)thumbnailArtID;	// 0x3019cd45
- (id)thumbnailURL;	// 0x3019d03d
- (id)title;	// 0x3019ca1d
- (float)userStarRating;	// 0x3019ceb9
- (void)willBeginPlayback;	// 0x3019d29d
@end

