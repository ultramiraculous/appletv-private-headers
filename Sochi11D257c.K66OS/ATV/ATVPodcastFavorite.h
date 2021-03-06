/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVStoreFavorite.h"

@class NSNumber, NSURL, NSArray;

__attribute__((visibility("hidden")))
@interface ATVPodcastFavorite : ATVStoreFavorite {
	NSURL *_podcastFeedURL;	// 60 = 0x3c
	NSArray *_childrenBookmarkKeys;	// 64 = 0x40
	NSNumber *_itemIDNumber;	// 68 = 0x44
}
@property(readonly, retain) NSURL *podcastFeedURL;	// G=0x255af9; converted property
+ (void)_clearPodcastFavoriteCache;	// 0x254229
+ (id)_noStyleNumberFormatter;	// 0x254321
+ (id)_podcastReleaseDateFormatter;	// 0x254245
+ (void)initialize;	// 0x254089
+ (id)podcastFavoriteWithCatalogItem:(id)catalogItem;	// 0x25416d
- (id)initWithCatalogItem:(id)catalogItem;	// 0x255381
- (id)initWithStoreItem:(id)storeItem;	// 0x2549a5
- (void).cxx_destruct;	// 0x255e4d
- (void)_cancelRefreshBackgroundTask;	// 0x255e49
- (id)_childrenKeysForStoreItem:(id)storeItem;	// 0x2543b1
- (void)_setupRefreshBackgroundTask;	// 0x255e45
- (id)autoBlueDotStartDate;	// 0x255a95
- (id)dateAdded;	// 0x255a31
- (id)description;	// 0x2558c1
- (BOOL)isSaved;	// 0x255949
// converted property getter: - (id)podcastFeedURL;	// 0x255af9
- (int)redDotCount;	// 0x255b0d
- (void)remove;	// 0x2559e9
- (void)save;	// 0x2559a1
- (void)updateWithPageDictionaryFromLatestSeason:(id)latestSeason;	// 0x255e41
@end

