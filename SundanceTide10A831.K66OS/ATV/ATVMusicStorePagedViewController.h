/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePagedViewController : XXUnknownSuperclass {
	NSDictionary *_storeDict;	// 4 = 0x4
	NSMutableArray *_pages;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
}
+ (id)pagedViewControllerForStoreItem:(id)storeItem;	// 0x1d20d1
- (id)init;	// 0x1d218d
- (id)initWithStoreItem:(id)storeItem;	// 0x1d2191
- (long)_itemsPerPage;	// 0x1d2ca9
- (long)_pageCount;	// 0x1d2cad
- (BOOL)datasourceShouldBeRetainedByPagedView:(id)datasource;	// 0x1d28b5
- (void)dealloc;	// 0x1d2445
- (BOOL)delegateShouldBeRetainedByPagedView:(id)delegate;	// 0x1d28b1
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x1d2c9d
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x1d294d
- (long)numberOfItemsInGrid:(id)grid;	// 0x1d28b9
- (long)pageCountForPagedView:(id)pagedView;	// 0x1d2725
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1d28ad
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x1d25b1
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1d2735
- (void)toggleCursorMode:(id)mode;	// 0x1d24e9
- (id)view;	// 0x1d25ad
@end
