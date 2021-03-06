/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchViewController.h"

@class NSDictionary, ATVFeedDocument, NSMutableDictionary, NSString, ATVMerchant, ATVFeedSearchResultsLoader;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchViewController : ATVSearchViewController {
	ATVMerchant *_merchant;	// 116 = 0x74
	ATVFeedSearchResultsLoader *_searchResultsLoader;	// 120 = 0x78
	NSString *_baseURLString;	// 124 = 0x7c
	NSDictionary *_results;	// 128 = 0x80
	NSMutableDictionary *_headerCache;	// 132 = 0x84
	ATVFeedDocument *_resultsFeedDocument;	// 136 = 0x88
}
@property(retain, nonatomic) ATVFeedDocument *resultsFeedDocument;	// G=0x12fafd; S=0x12fb0d; @synthesize=_resultsFeedDocument
- (id)initWithDictionary:(id)dictionary;	// 0x12eed9
- (id)initWithFeedElement:(id)feedElement;	// 0x12ebe1
- (id)_elementAtIndexPath:(id)indexPath;	// 0x12fbd9
- (id)_indexPathForFirstItem;	// 0x12ff89
- (id)_itemAtIndexPath:(id)indexPath;	// 0x12fcf5
- (long)_numberOfRowsInSection:(long)section;	// 0x12fe8d
- (long)_numberOfSections;	// 0x12fde5
- (BOOL)_search:(id)search;	// 0x12f389
- (void)_searchResultsReady:(id)ready;	// 0x12fb1d
- (void)_updateSearchResults:(id)results searchString:(id)string;	// 0x12f495
- (void)dealloc;	// 0x12f251
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x12f9c9
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x12f935
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x12f6a1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x12f765
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x12f779
- (long)numberOfSectionsInList:(id)list;	// 0x12f755
// declared property getter: - (id)resultsFeedDocument;	// 0x12fafd
// declared property setter: - (void)setResultsFeedDocument:(id)document;	// 0x12fb0d
@end

