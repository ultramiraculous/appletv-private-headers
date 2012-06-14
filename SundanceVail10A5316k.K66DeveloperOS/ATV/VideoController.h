/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class ATVDataCollection;

__attribute__((visibility("hidden")))
@interface VideoController : BRDataQueryController {
	ATVDataCollection *_mediaItemsCollection;	// 156 = 0x9c
	BOOL _displayPlaylistsMenuItem;	// 160 = 0xa0
}
@property(assign) BOOL displayPlaylistsMenuItem;	// G=0x829dd; S=0x829cd; converted property
@property(retain) ATVDataCollection *mediaItemsCollection;	// G=0x829b9; S=0x82991; converted property
+ (int)getWatchedState:(id)state;	// 0x828f1
- (void).cxx_destruct;	// 0x83321
- (void)_handleContextMenuMarkUnwatchedSelection:(id)selection;	// 0x8340d
- (void)_handleContextMenuMarkWatchedSelection:(id)selection;	// 0x83335
- (id)_listIdentifier;	// 0x834e5
- (id)controllerIdentifier;	// 0x82f8d
- (id)currentItems;	// 0x82e95
// converted property getter: - (BOOL)displayPlaylistsMenuItem;	// 0x829dd
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x831ad
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x83025
// converted property getter: - (id)mediaItemsCollection;	// 0x829b9
- (id)providersForContextMenu;	// 0x829ed
// converted property setter: - (void)setDisplayPlaylistsMenuItem:(BOOL)item;	// 0x829cd
// converted property setter: - (void)setMediaItemsCollection:(id)collection;	// 0x82991
- (id)unwatchedItems;	// 0x82e99
@end

