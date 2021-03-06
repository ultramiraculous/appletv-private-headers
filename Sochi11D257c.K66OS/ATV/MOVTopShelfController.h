/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRTopShelfController.h"

@class BRTopShelfView, ATVMusicStorePresentsProvider, ATVRentedMediaProvider;

__attribute__((visibility("hidden")))
@interface MOVTopShelfController : XXUnknownSuperclass <BRTopShelfController> {
	ATVRentedMediaProvider *_rentals;	// 4 = 0x4
	ATVMusicStorePresentsProvider *_topMovies;	// 8 = 0x8
	ATVMusicStorePresentsProvider *_purchasedMovies;	// 12 = 0xc
	double _lastPurchasedUpateTime;	// 16 = 0x10
	BRTopShelfView *_mainMenuShelfView;	// 24 = 0x18
}
@property(readonly, retain) BRTopShelfView *mainMenuShelfView;	// G=0x2b407d; converted property
- (id)init;	// 0x2b3c71
- (void).cxx_destruct;	// 0x2b52ad
- (void)_dataSourceWillBeUpdated:(id)_dataSource;	// 0x2b5041
- (void)_internetAvailabilityChanged:(id)changed;	// 0x2b529d
- (void)_networkStateChanged:(id)changed;	// 0x2b528d
- (unsigned)_normalizedSectionIndex:(unsigned)index;	// 0x2b4e1d
- (void)_purchasedMoviesUpdated:(id)updated;	// 0x2b5031
- (void)_reloadShelf;	// 0x2b50dd
- (void)_rentalsUpdated:(id)updated;	// 0x2b5195
- (void)_topMoviesUpdated:(id)updated;	// 0x2b527d
- (void)_validateTopShelfView;	// 0x2b4e21
- (float)coverflowMarginForMediaShelf:(id)mediaShelf;	// 0x2b4e11
- (void)dealloc;	// 0x2b4011
- (float)horizontalGapForMediaShelf:(id)mediaShelf;	// 0x2b4e05
// converted property getter: - (id)mainMenuShelfView;	// 0x2b407d
- (void)mediaShelf:(id)shelf didFocusItemAtIndexPath:(id)indexPath;	// 0x2b4e01
- (id)mediaShelf:(id)shelf indexPathForItemID:(id)itemID;	// 0x2b44a1
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x2b4849
- (id)mediaShelf:(id)shelf itemIDForIndexPath:(id)indexPath;	// 0x2b4275
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x2b4a8d
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x2b4af1
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x2b4b89
- (long)numberOfFlatColumnsInMediaShelf:(id)mediaShelf;	// 0x2b4a85
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x2b4a89
- (void)refresh;	// 0x2b4189
- (void)selectCategoryWithIdentifier:(id)identifier;	// 0x2b41a9
- (void)willBeShown;	// 0x2b41ad
@end

