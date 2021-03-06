/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTopShelfController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVMusicStorePresentsProvider, NSArray, BRTopShelfView;

__attribute__((visibility("hidden")))
@interface TVTopShelfController : XXUnknownSuperclass <BRTopShelfController> {
	ATVMusicStorePresentsProvider *_topTVShows;	// 4 = 0x4
	ATVMusicStorePresentsProvider *_purchasedTVShows;	// 8 = 0x8
	double _lastPurchasedUpateTime;	// 12 = 0xc
	BRTopShelfView *_topShelf;	// 20 = 0x14
	BOOL _shouldUseRecents;	// 24 = 0x18
	NSArray *_recents;	// 28 = 0x1c
}
@property(copy, nonatomic) NSArray *recents;	// G=0x272ed1; S=0x271ac1; @synthesize=_recents
@property(assign, nonatomic) BOOL shouldUseRecents;	// G=0x272ee5; S=0x271a99; @synthesize=_shouldUseRecents
- (id)init;	// 0x271755
- (void).cxx_destruct;	// 0x272ef5
- (void)_addedRecents:(id)recents;	// 0x272ec1
- (void)_attemptToUseRecents;	// 0x272da5
- (void)_dataSourceWillBeUpdated:(id)_dataSource;	// 0x272da9
- (void)_fetchRecents;	// 0x272d09
- (void)_internetAvailabilityChanged:(id)changed;	// 0x272eb1
- (void)_networkStateChanged:(id)changed;	// 0x272ea1
- (void)_purchasedTVShowsUpdated:(id)updated;	// 0x272e55
- (void)_reloadShelf;	// 0x272c51
- (void)_topTVShowsUpdated:(id)updated;	// 0x272e45
- (void)_validateTopShelf;	// 0x272a25
- (float)coverflowMarginForMediaShelf:(id)mediaShelf;	// 0x272a19
- (void)dealloc;	// 0x271af9
- (float)horizontalGapForMediaShelf:(id)mediaShelf;	// 0x272a0d
- (id)mainMenuShelfView;	// 0x271b65
- (void)mediaShelf:(id)shelf didFocusItemAtIndexPath:(id)indexPath;	// 0x272a09
- (id)mediaShelf:(id)shelf indexPathForItemID:(id)itemID;	// 0x271f8d
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x272389
- (id)mediaShelf:(id)shelf itemIDForIndexPath:(id)indexPath;	// 0x271d61
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x2726ad
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x272731
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x2727c9
- (long)numberOfFlatColumnsInMediaShelf:(id)mediaShelf;	// 0x2726a5
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x2726a9
// declared property getter: - (id)recents;	// 0x272ed1
- (void)refresh;	// 0x271c41
- (void)selectCategoryWithIdentifier:(id)identifier;	// 0x271c81
// declared property setter: - (void)setRecents:(id)recents;	// 0x271ac1
// declared property setter: - (void)setShouldUseRecents:(BOOL)useRecents;	// 0x271a99
// declared property getter: - (BOOL)shouldUseRecents;	// 0x272ee5
- (void)willBeShown;	// 0x271c85
@end

