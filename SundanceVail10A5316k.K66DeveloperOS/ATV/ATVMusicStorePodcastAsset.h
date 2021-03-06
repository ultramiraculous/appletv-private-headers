/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRRSSMediaAsset.h"

@class ATVMusicStoreShowInfo, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset {
	NSDictionary *_feedInfo;	// 16 = 0x10
	ATVMusicStoreShowInfo *_showInfo;	// 20 = 0x14
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x1d5d31; S=0x1d5c31; converted property
@property(retain) NSDictionary *feedInfo;	// G=0x1d5479; S=0x1d543d; converted property
- (id)initWithFeedInfo:(id)feedInfo;	// 0x1d5381
- (id)_podcastID;	// 0x1d5e79
- (id)_showInfo;	// 0x1d5ed5
- (id)artist;	// 0x1d5a1d
- (id)assetID;	// 0x1d5489
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x1d5d31
- (id)cast;	// 0x1d55c1
- (id)copyright;	// 0x1d5abd
- (id)coverArtID;	// 0x1d5789
- (id)dateAcquired;	// 0x1d5841
- (id)datePublished;	// 0x1d5809
- (id)datePublishedString;	// 0x1d59f5
- (void)dealloc;	// 0x1d53d9
- (id)description;	// 0x1d5b09
- (id)directors;	// 0x1d5641
- (long)duration;	// 0x1d5541
// converted property getter: - (id)feedInfo;	// 0x1d5479
- (id)genres;	// 0x1d5951
- (BOOL)hasCoverArt;	// 0x1d575d
- (BOOL)hasVideoContent;	// 0x1d5979
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x1d5bc1
- (BOOL)isExplicit;	// 0x1d5b31
- (id)mediaDescription;	// 0x1d5509
- (id)mediaSummary;	// 0x1d5aad
- (id)mediaType;	// 0x1d5851
- (id)mediaURL;	// 0x1d5679
- (long)performanceCount;	// 0x1d5b99
- (id)previewURL;	// 0x1d56e1
- (id)primaryCollectionTitle;	// 0x1d5a65
- (id)primaryGenre;	// 0x1d58a5
- (id)primaryGenreAsString;	// 0x1d586d
- (id)producers;	// 0x1d565d
- (id)publisher;	// 0x1d5b05
- (id)rating;	// 0x1d5975
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x1d5c31
// converted property setter: - (void)setFeedInfo:(id)info;	// 0x1d543d
- (void)setHasBeenPlayed:(BOOL)played;	// 0x1d5c01
- (id)thumbnailArtID;	// 0x1d57f9
- (id)thumbnailURL;	// 0x1d5af5
- (id)title;	// 0x1d54d1
- (float)userStarRating;	// 0x1d596d
- (void)willBeginPlayback;	// 0x1d5d59
@end

