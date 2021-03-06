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
+ (id)pagedViewControllerForStoreItem:(id)storeItem;	// 0x1c4135
- (id)init;	// 0x1c41f1
- (id)initWithStoreItem:(id)storeItem;	// 0x1c41f5
- (long)_itemsPerPage;	// 0x1c4d0d
- (long)_pageCount;	// 0x1c4d11
- (BOOL)datasourceShouldBeRetainedByPagedView:(id)datasource;	// 0x1c4919
- (void)dealloc;	// 0x1c44a9
- (BOOL)delegateShouldBeRetainedByPagedView:(id)delegate;	// 0x1c4915
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x1c4d01
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x1c49b1
- (long)numberOfItemsInGrid:(id)grid;	// 0x1c491d
- (long)pageCountForPagedView:(id)pagedView;	// 0x1c4789
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1c4911
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x1c4615
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1c4799
- (void)toggleCursorMode:(id)mode;	// 0x1c454d
- (id)view;	// 0x1c4611
@end

