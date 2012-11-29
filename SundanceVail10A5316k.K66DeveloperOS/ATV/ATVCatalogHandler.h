/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVCatalogHandler : XXUnknownSuperclass <BRSelectionHandler> {
	NSDictionary *_item;	// 4 = 0x4
}
- (void)_confirmAction:(int)action withObject:(id)object;	// 0x1be5e5
- (void)_confirmActionResponse:(id)response;	// 0x1bf231
- (void)_downloadItem:(id)item;	// 0x1bf2b9
- (BOOL)_handleFavoriteListItemSelection:(id)selection listItem:(id)item;	// 0x1be369
- (void)_parentalControlPasscodeSuccessful:(id)successful;	// 0x1bf4b1
- (void)_playOrPauseAsset:(id)asset;	// 0x1be18d
- (void)_podcastItemSelected:(id)selected;	// 0x1be2c1
- (void)_previewItemSelected:(id)selected;	// 0x1be215
- (void)_transactionConfirmedForItem:(id)item;	// 0x1beed1
- (void)_warningForAction:(int)action withObject:(id)object;	// 0x1be475
- (void)_warningForActionResponse:(id)actionResponse;	// 0x1be509
- (void)dealloc;	// 0x1bd729
- (BOOL)handlePlayForControl:(id)control;	// 0x1bdb91
- (BOOL)handleSelectionForControl:(id)control;	// 0x1bd7a5
- (BOOL)handleStoreOfferItemSelection:(id)selection;	// 0x1bdd85
@end
