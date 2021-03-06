/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, YTAccountFeedRequest, YTAuthenticatedAccountPost, NSURL;
@protocol YTFavoritesControllerDelegate;

@interface YTFavoritesController : NSObject {
	NSMutableArray *_pendingFavoritesShortIDs;	// 4 = 0x4
	NSMutableArray *_mergedFavorites;	// 8 = 0x8
	YTAuthenticatedAccountPost *_accountPost;	// 12 = 0xc
	YTAccountFeedRequest *_accountFeedRequest;	// 16 = 0x10
	BOOL _usingAccountFavorites;	// 20 = 0x14
	BOOL _shouldOfferMergeOfLocalBookmarks;	// 21 = 0x15
	NSURL *_batchURL;	// 24 = 0x18
	NSMutableArray *_bookmarkVideos;	// 28 = 0x1c
	NSMutableArray *_bookmarkShortIDs;	// 32 = 0x20
	id<YTFavoritesControllerDelegate> _mergeBookmarksDelegate;	// 36 = 0x24
}
@property(retain) NSURL *batchURL;	// G=0x370691e1; S=0x37069189; converted property
@property(readonly, assign) BOOL shouldOfferMergeOfLocalBookmarks;	// G=0x370687c5; converted property
@property(assign) BOOL usingAccountFavorites;	// G=0x37068745; S=0x37068755; converted property
+ (id)sharedFavoritesController;	// 0x370686b1
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x370691f1
- (void)_bookmarksDidChangeNotifyObservers:(BOOL)_bookmarks;	// 0x37068a59
- (void)_loadBookmarks;	// 0x37068ba1
- (void)_processNextPendingFavoritesBatch;	// 0x37068899
- (void)_saveBookmarks;	// 0x37068b15
- (void)accountFeedRequest:(id)request didFailWithError:(id)error;	// 0x37069535
- (void)accountFeedRequest:(id)request receivedVideos:(id)videos;	// 0x3706923d
- (void)addFavoriteForVideo:(id)video;	// 0x37068f4d
- (void)addLocalBookmarkForVideo:(id)video;	// 0x37068e81
// converted property getter: - (id)batchURL;	// 0x370691e1
- (id)bookmarkedShortIDs;	// 0x37068e4d
- (id)bookmarkedVideos;	// 0x37068da5
- (void)bookmarksSearchRequestInterrupted;	// 0x37068e21
- (void)dealloc;	// 0x370686f9
- (void)mergeLocalBookmarksToAccountFavoritesWithDelegate:(id)delegate;	// 0x37068989
- (void)removeFavoriteForVideo:(id)video;	// 0x37069031
- (void)saveBookmarksIfNeeded;	// 0x37069165
- (void)searchRequestReturnedVideos:(id)videos;	// 0x37068db5
// converted property setter: - (void)setBatchURL:(id)url;	// 0x37069189
- (void)setLocalBookmarksMergeOffered:(BOOL)offered;	// 0x37068831
// converted property setter: - (void)setUsingAccountFavorites:(BOOL)favorites;	// 0x37068755
// converted property getter: - (BOOL)shouldOfferMergeOfLocalBookmarks;	// 0x370687c5
// converted property getter: - (BOOL)usingAccountFavorites;	// 0x37068745
@end

