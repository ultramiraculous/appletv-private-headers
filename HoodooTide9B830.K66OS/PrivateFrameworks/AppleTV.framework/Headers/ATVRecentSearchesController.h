/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSArray, ATVSearchAgent;

__attribute__((visibility("hidden")))
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider> {
@private
	NSArray *_recentSearches;	// 160 = 0xa0
	ATVSearchAgent *_searchAgent;	// 164 = 0xa4
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x328f80f9
- (void)_populateRecentSearchesList;	// 0x328f8409
- (void)dealloc;	// 0x328f81a1
- (float)heightForRow:(long)row;	// 0x328f83a9
- (long)itemCount;	// 0x328f8331
- (id)itemForRow:(long)row;	// 0x328f82d9
- (void)itemSelected:(long)selected;	// 0x328f8201
- (id)previewControlForItem:(long)item;	// 0x328f8405
- (BOOL)rowSelectable:(long)selectable;	// 0x328f8401
- (id)titleForRow:(long)row;	// 0x328f8351
@end

