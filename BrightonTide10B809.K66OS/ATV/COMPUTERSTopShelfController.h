/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "BRTopShelfController.h"

@class NSString, NSTimer, BRBackgroundTask, BRTopShelfView, NSArray, ATVDataServer, PlayHandler, ATVDataQuery, ATVDataType;
@protocol BRProvider, BRControlFactory;

__attribute__((visibility("hidden")))
@interface COMPUTERSTopShelfController : BRSingleton <BRTopShelfController> {
	id<BRProvider> _nowPlayingProvider;	// 4 = 0x4
	ATVDataQuery *_homeShareDateAddedQuery;	// 8 = 0x8
	ATVDataQuery *_homeShareDatePlayedQuery;	// 12 = 0xc
	ATVDataQuery *_homeShareSongsToAlbumQuery;	// 16 = 0x10
	BOOL _queryResultsParsed;	// 20 = 0x14
	NSString *_homeShareTitle;	// 24 = 0x18
	NSArray *_homeShareItems;	// 28 = 0x1c
	long _numOfRentalsOnShelf;	// 32 = 0x20
	id<BRControlFactory> _homeShareFactory;	// 36 = 0x24
	BRTopShelfView *_topShelf;	// 40 = 0x28
	ATVDataType *_lastAccessedMediaType;	// 44 = 0x2c
	ATVDataServer *_lastAccessedDataServer;	// 48 = 0x30
	NSTimer *_homeShareRefreshDelayTimer;	// 52 = 0x34
	BRBackgroundTask *_homeShareRefreshTask;	// 56 = 0x38
	PlayHandler *_playHandler;	// 60 = 0x3c
}
@property(readonly, retain) ATVDataType *lastAccessedMediaType;	// G=0x8269d; converted property
+ (void)setSingleton:(id)singleton;	// 0x82109
+ (id)singleton;	// 0x820f9
- (id)init;	// 0x8212d
- (void).cxx_destruct;	// 0x834c1
- (void)_cancelHomeShareRefreshTask;	// 0x84985
- (void)_dataClientDataUpdated:(id)updated;	// 0x85519
- (void)_dataClientStatusChanged:(id)changed;	// 0x8531d
- (void)_dataServerStatusChanged:(id)changed;	// 0x85249
- (void)_handleWindowMaxBoundsChanged:(id)changed;	// 0x85229
- (void)_homeShareQueryComplete;	// 0x83f91
- (void)_homeShareRefreshDelayTimerFired:(id)fired;	// 0x848d5
- (void)_homeShareServersChanged:(id)changed;	// 0x84f1d
- (void)_nowPlayingProviderUpdated:(id)updated;	// 0x84ec1
- (void)_preferredAccountStateChanged:(id)changed;	// 0x85451
- (void)_reloadHomeShareItems;	// 0x83645
- (void)_scheduleHomeShareRefreshTask;	// 0x84909
- (id)_serverIDForMediaItem:(id)mediaItem;	// 0x835d1
- (void)_setLastAccessedMediaType:(id)type fromDataServer:(id)dataServer;	// 0x849c9
- (void)_songsToAlbumsQueryComplete;	// 0x847f5
- (void)_submitHomeShareDateAddedQuery:(id)query;	// 0x83cf9
- (void)_submitHomeShareDatePlayedQuery:(id)query;	// 0x83e5d
- (void)_submitSongsToAlbumsQuery:(id)albumsQuery forAlbumID:(id)albumID;	// 0x84689
- (void)_validateTopShelf;	// 0x84a49
- (void)_willWakeFromSleep:(id)sleep;	// 0x851c9
- (float)coverflowMarginForMediaShelf:(id)mediaShelf;	// 0x834b5
- (void)dealloc;	// 0x82525
- (float)horizontalGapForMediaShelf:(id)mediaShelf;	// 0x834a9
// converted property getter: - (id)lastAccessedMediaType;	// 0x8269d
- (id)mainMenuShelfView;	// 0x826f5
- (void)mediaShelf:(id)shelf didFocusItemAtIndexPath:(id)indexPath;	// 0x82dd9
- (void)mediaShelf:(id)shelf didPlayItemAtIndexPath:(id)indexPath;	// 0x83265
- (void)mediaShelf:(id)shelf didSelectItemAtIndexPath:(id)indexPath;	// 0x82ddd
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x8282d
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x82aad
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x82b0d
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x82ba5
- (id)newBaseQuery:(id)query;	// 0x83991
- (long)numberOfFlatColumnsInMediaShelf:(id)mediaShelf;	// 0x82a0d
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x82aa9
- (void)refresh;	// 0x82819
- (void)requeryHomeShare;	// 0x826c5
- (void)selectCategoryWithIdentifier:(id)identifier;	// 0x82829
- (void)setLastAccessedMediaType:(id)type fromDataServer:(id)dataServer;	// 0x82605
@end
