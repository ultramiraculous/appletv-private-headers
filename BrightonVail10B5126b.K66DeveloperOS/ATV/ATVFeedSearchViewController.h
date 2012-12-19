/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchViewController.h"

@class NSString, NSDictionary, NSMutableDictionary, ATVMerchant, ATVFeedSearchResultsLoader, ATVFeedDocument;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchViewController : ATVSearchViewController {
	ATVMerchant *_merchant;	// 120 = 0x78
	ATVFeedSearchResultsLoader *_searchResultsLoader;	// 124 = 0x7c
	NSString *_baseURLString;	// 128 = 0x80
	NSDictionary *_results;	// 132 = 0x84
	NSMutableDictionary *_headerCache;	// 136 = 0x88
	ATVFeedDocument *_resultsFeedDocument;	// 140 = 0x8c
}
@property(retain, nonatomic) ATVFeedDocument *resultsFeedDocument;	// G=0x1582b9; S=0x1582c9; @synthesize=_resultsFeedDocument
- (id)initWithDictionary:(id)dictionary;	// 0x157695
- (id)initWithFeedElement:(id)feedElement;	// 0x15739d
- (id)_elementAtIndexPath:(id)indexPath;	// 0x158395
- (id)_indexPathForFirstItem;	// 0x158745
- (id)_itemAtIndexPath:(id)indexPath;	// 0x1584b1
- (long)_numberOfRowsInSection:(long)section;	// 0x158649
- (long)_numberOfSections;	// 0x1585a1
- (BOOL)_search:(id)search;	// 0x157b45
- (void)_searchResultsReady:(id)ready;	// 0x1582d9
- (void)_updateSearchResults:(id)results searchString:(id)string;	// 0x157c51
- (void)dealloc;	// 0x157a0d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x158185
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1580f1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x157e5d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x157f21
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x157f35
- (long)numberOfSectionsInList:(id)list;	// 0x157f11
// declared property getter: - (id)resultsFeedDocument;	// 0x1582b9
// declared property setter: - (void)setResultsFeedDocument:(id)document;	// 0x1582c9
@end
