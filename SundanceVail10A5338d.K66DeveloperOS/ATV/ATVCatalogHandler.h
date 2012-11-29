/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVCatalogHandler : XXUnknownSuperclass <BRSelectionHandler> {
	NSDictionary *_item;	// 4 = 0x4
}
- (void)_confirmAction:(int)action withObject:(id)object;	// 0x1c437d
- (void)_confirmActionResponse:(id)response;	// 0x1c4f91
- (void)_downloadItem:(id)item;	// 0x1c5019
- (BOOL)_handleFavoriteListItemSelection:(id)selection listItem:(id)item;	// 0x1c4101
- (void)_parentalControlPasscodeSuccessful:(id)successful;	// 0x1c5211
- (void)_playOrPauseAsset:(id)asset;	// 0x1c3f25
- (void)_podcastItemSelected:(id)selected;	// 0x1c4059
- (void)_previewItemSelected:(id)selected;	// 0x1c3fad
- (void)_transactionConfirmedForItem:(id)item;	// 0x1c4c31
- (void)_warningForAction:(int)action withObject:(id)object;	// 0x1c420d
- (void)_warningForActionResponse:(id)actionResponse;	// 0x1c42a1
- (void)dealloc;	// 0x1c3501
- (BOOL)handlePlayForControl:(id)control;	// 0x1c3969
- (BOOL)handleSelectionForControl:(id)control;	// 0x1c357d
- (BOOL)handleStoreOfferItemSelection:(id)selection;	// 0x1c3b5d
@end
