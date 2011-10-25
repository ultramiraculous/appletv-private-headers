/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaMenuController.h"
#import "BRMenuListItemProvider.h"

@class ATVSearchAgent, NSArray;

__attribute__((visibility("hidden")))
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider> {
@private
	NSArray *_recentSearches;	// 156 = 0x9c
	ATVSearchAgent *_searchAgent;	// 160 = 0xa0
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x339a35b9
- (void)_populateRecentSearchesList;	// 0x339a38c9
- (void)dealloc;	// 0x339a3661
- (float)heightForRow:(long)row;	// 0x339a3869
- (long)itemCount;	// 0x339a37f1
- (id)itemForRow:(long)row;	// 0x339a3799
- (void)itemSelected:(long)selected;	// 0x339a36c1
- (id)previewControlForItem:(long)item;	// 0x339a38c5
- (BOOL)rowSelectable:(long)selectable;	// 0x339a38c1
- (id)titleForRow:(long)row;	// 0x339a3811
@end

