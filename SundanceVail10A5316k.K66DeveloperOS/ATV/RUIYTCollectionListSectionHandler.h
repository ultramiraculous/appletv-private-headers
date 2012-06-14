/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListSectionHandling.h"
#import "RUIYTDocumentLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRControllerStack, NSCache, NSMutableArray, RUIYTListDataSourceAspect, RUIYTDocumentLoader;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionListSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling, RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 4 = 0x4
	NSMutableArray *_resultsBeingLoaded;	// 8 = 0x8
	NSCache *_resultsCache;	// 12 = 0xc
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 16 = 0x10
	BRControllerStack *_controllerStack;	// 20 = 0x14
}
@property(readonly, assign) BRControllerStack *controllerStack;	// G=0x235395; @synthesize=_controllerStack
@property(readonly, assign, nonatomic) RUIYTListDataSourceAspect *listDataSourceAspect;	// G=0x235375; @synthesize=_listDataSourceAspect
- (id)initWithListDataSourceAspect:(id)listDataSourceAspect controllerStack:(id)stack;	// 0x234441
- (void).cxx_destruct;	// 0x2353b5
- (id)_cacheItemForItem:(id)item;	// 0x235591
- (id)_cachedResultsForItem:(id)item resultsFound:(BOOL *)found;	// 0x235421
- (void)_clearCachedResultsForItem:(id)item;	// 0x235545
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x2359f5
- (BOOL)_loadResultsForItem:(id)item;	// 0x23562d
- (void)_setCachedResults:(id)results forItem:(id)item timeInterval:(double)interval;	// 0x23547d
- (void)_showError;	// 0x2358a9
- (void)_showErrorWithText:(id)text;	// 0x2358e5
// declared property getter: - (id)controllerStack;	// 0x235395
- (void)dealloc;	// 0x2345f1
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x235095
- (BOOL)isItemPlayableAtIndex:(id)index;	// 0x234925
- (id)itemForIndex:(id)index;	// 0x23467d
- (id)itemIDForIndex:(id)index;	// 0x2347f9
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x234cbd
// declared property getter: - (id)listDataSourceAspect;	// 0x235375
- (id)previewForIndex:(id)index defer:(BOOL *)defer;	// 0x234a81
@end

