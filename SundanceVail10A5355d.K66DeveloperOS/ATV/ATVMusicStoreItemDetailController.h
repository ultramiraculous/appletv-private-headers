/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreCatalogItemController.h"

@class ATVDataItem, BRDetailedMediaControl, NSTimer, ATVDataQuery, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemDetailController : ATVMusicStoreCatalogItemController {
	BRScrollControl *_scrollControl;	// 108 = 0x6c
	BRDetailedMediaControl *_detailedControl;	// 112 = 0x70
	ATVDataQuery *_rentalQuery;	// 116 = 0x74
	ATVDataItem *_rentalItem;	// 120 = 0x78
	NSTimer *_expiryInfoTimer;	// 124 = 0x7c
	BOOL _isPurchased;	// 128 = 0x80
}
@property(readonly, retain) BRDetailedMediaControl *detailedControl;	// G=0x1d738d; converted property
@property(retain) id itemDictionary;	// G=0x1d7281; S=0x1d739d; converted property
- (id)init;	// 0x1d7031
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x1d7075
- (void)_cacheManagerStateChanged:(id)changed;	// 0x1d839d
- (void)_checkIfAlreadyRented;	// 0x1d83ad
- (BOOL)_checkIfPurchased;	// 0x1d80d9
- (id)_displayableItemAdjacentTo:(id)to forward:(BOOL)forward;	// 0x1d7f15
- (id)_displayableItemAfter:(id)after;	// 0x1d7eed
- (id)_displayableItemBefore:(id)before;	// 0x1d7f01
- (void)_expiryInfoTimerFired:(id)fired;	// 0x1d8a4d
- (id)_filterPreferredItemsFromDictionary:(id)dictionary;	// 0x1d7a35
- (void)_layoutControls;	// 0x1d7c15
- (void)_nextItemSelected;	// 0x1d745d
- (void)_nextItemSelected:(id)selected;	// 0x1d7ecd
- (void)_previousItemSelected;	// 0x1d74a9
- (void)_previousItemSelected:(id)selected;	// 0x1d7edd
- (void)_relatedContentControlCreated:(id)created;	// 0x1d77f5
- (void)_rentalQueryComplete;	// 0x1d85d5
- (void)_setCopyrightText;	// 0x1d7715
- (void)_setupDetailedControl;	// 0x1d74f5
- (void)_startExpiryInfoTimer;	// 0x1d8971
- (void)_stopExpiryInfoTimer;	// 0x1d8a21
- (void)_updateExpiryInfo;	// 0x1d8731
- (void)_updateFocus;	// 0x1d7e09
- (void)_updatePurchasedLoadingText;	// 0x1d8151
- (void)controlWasActivated;	// 0x1d72c5
- (void)controlWasDeactivated;	// 0x1d734d
- (void)dealloc;	// 0x1d71b5
// converted property getter: - (id)detailedControl;	// 0x1d738d
// converted property getter: - (id)itemDictionary;	// 0x1d7281
- (void)relatedContentLoaded:(id)loaded;	// 0x1d7771
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x1d739d
@end

