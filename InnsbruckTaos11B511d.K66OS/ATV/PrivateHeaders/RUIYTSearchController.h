/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "RUIYTListDataSourceAspectDelegate.h"
#import "ATVSearchViewController.h"

@class RUIYTDocumentLoader, RUIYTSearchResultsLoader, RUIYTListDataSourceAspect;

__attribute__((visibility("hidden")))
@interface RUIYTSearchController : ATVSearchViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 120 = 0x78
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 124 = 0x7c
	RUIYTSearchResultsLoader *_searchResultsLoader;	// 128 = 0x80
}
- (id)init;	// 0x29f561
- (void).cxx_destruct;	// 0x2a0519
- (BOOL)_search:(id)search;	// 0x2a0181
- (void)_searchResultsDidLoad:(id)_searchResults;	// 0x2a0561
- (void)_updateSearchResults:(id)results searchString:(id)string;	// 0x2a0295
- (void)dealloc;	// 0x29f8ad
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x29fd2d
- (BOOL)isNetworkDependent;	// 0x29fcc5
- (BOOL)listDataSourceAspect:(id)aspect loadMoreItemsForSection:(unsigned)section count:(unsigned)count;	// 0x29fedd
- (void)searchView:(id)view focusDidChangeToControl:(int)focus;	// 0x29fcc9
- (void)wasPushed;	// 0x29f94d
@end

