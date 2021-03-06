/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreControlPopulator : XXUnknownSuperclass {
	unsigned _matchOrder;	// 4 = 0x4
}
@property(readonly, assign) unsigned matchOrder;	// G=0x1f851d; @synthesize=_matchOrder
+ (BOOL)canHandleData:(id)data;	// 0x1f6091
- (id)init;	// 0x1f60d1
- (float)_shelfBoxTitleHeightForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related;	// 0x1f8a11
- (float)_shelfTitleWidthScaleForCollectionType:(id)collectionType featured:(BOOL)featured moreInfoContent:(BOOL)content showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles related:(BOOL)related;	// 0x1f8b79
- (float)_shelfWidthForData:(id)data;	// 0x1f8a79
- (id)buttonForData:(id)data;	// 0x1f6189
- (float)buttonHeightForData:(id)data;	// 0x1f8191
- (id)coverArtURLForData:(id)data thumbnail:(BOOL)thumbnail;	// 0x1f8531
- (id)gridForData:(id)data;	// 0x1f7299
- (float)gridHeightForData:(id)data;	// 0x1f83bd
- (id)listForData:(id)data;	// 0x1f764d
- (float)listHeightForData:(id)data;	// 0x1f83c1
- (id)listRowForData:(id)data;	// 0x1f78fd
- (float)listRowHeightForData:(id)data;	// 0x1f83c5
- (id)mainMenuButtonForData:(id)data;	// 0x1f691d
// declared property getter: - (unsigned)matchOrder;	// 0x1f851d
- (id)mediaPreviewControlForData:(id)data;	// 0x1f7e5d
- (float)mediaPreviewHeightForData:(id)data;	// 0x1f850d
- (id)pagedViewForData:(id)data;	// 0x1f815d
- (float)pagedViewHeightForData:(id)data;	// 0x1f8511
- (id)placeholderImageForData:(id)data;	// 0x1f863d
- (id)placeholderImageForMenuItemData:(id)menuItemData;	// 0x1f8991
- (id)placeholderImageForShelfData:(id)shelfData;	// 0x1f8859
- (id)playButtonEnabledMenuItem;	// 0x1f8dc9
- (id)shelfForData:(id)data;	// 0x1f6ab9
- (float)shelfHeightForData:(id)data;	// 0x1f82a1
@end

