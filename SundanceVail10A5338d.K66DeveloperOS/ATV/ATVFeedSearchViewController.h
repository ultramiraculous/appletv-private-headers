/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchViewController.h"

@class ATVFeedDocument, NSDictionary, NSMutableDictionary, ATVMerchant, NSString, ATVFeedSearchResultsLoader;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchViewController : ATVSearchViewController {
	ATVMerchant *_merchant;	// 116 = 0x74
	ATVFeedSearchResultsLoader *_searchResultsLoader;	// 120 = 0x78
	NSString *_baseURLString;	// 124 = 0x7c
	NSDictionary *_results;	// 128 = 0x80
	NSMutableDictionary *_headerCache;	// 132 = 0x84
	ATVFeedDocument *_resultsFeedDocument;	// 136 = 0x88
}
@property(retain, nonatomic) ATVFeedDocument *resultsFeedDocument;	// G=0x13501d; S=0x13502d; @synthesize=_resultsFeedDocument
- (id)initWithDictionary:(id)dictionary;	// 0x1343f9
- (id)initWithFeedElement:(id)feedElement;	// 0x134101
- (id)_elementAtIndexPath:(id)indexPath;	// 0x1350f9
- (id)_indexPathForFirstItem;	// 0x1354a9
- (id)_itemAtIndexPath:(id)indexPath;	// 0x135215
- (long)_numberOfRowsInSection:(long)section;	// 0x1353ad
- (long)_numberOfSections;	// 0x135305
- (BOOL)_search:(id)search;	// 0x1348a9
- (void)_searchResultsReady:(id)ready;	// 0x13503d
- (void)_updateSearchResults:(id)results searchString:(id)string;	// 0x1349b5
- (void)dealloc;	// 0x134771
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x134ee9
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x134e55
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x134bc1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x134c85
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x134c99
- (long)numberOfSectionsInList:(id)list;	// 0x134c75
// declared property getter: - (id)resultsFeedDocument;	// 0x13501d
// declared property setter: - (void)setResultsFeedDocument:(id)document;	// 0x13502d
@end
