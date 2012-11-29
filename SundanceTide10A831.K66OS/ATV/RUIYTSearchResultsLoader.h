/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString, RUIYTDocumentLoader, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RUIYTSearchResultsLoader : XXUnknownSuperclass <RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 4 = 0x4
	NSMutableDictionary *_loadingResults;	// 8 = 0x8
	NSString *_searchTerm;	// 12 = 0xc
}
@property(readonly, assign) NSDictionary *results;	// G=0x273f95; 
@property(readonly, assign) NSString *searchTerm;	// G=0x274395; @synthesize=_searchTerm
- (id)init;	// 0x273ea9
- (void).cxx_destruct;	// 0x2743b5
- (void)dealloc;	// 0x273f35
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x274211
- (void)loadResultsForSearchTerm:(id)searchTerm;	// 0x273fa9
// declared property getter: - (id)results;	// 0x273f95
// declared property getter: - (id)searchTerm;	// 0x274395
@end
