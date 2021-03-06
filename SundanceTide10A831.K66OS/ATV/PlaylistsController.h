/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicCollectionController.h"

@class NSArray, ATVDataCollection, ATVDataType;

__attribute__((visibility("hidden")))
@interface PlaylistsController : MusicCollectionController {
	ATVDataType *_mediaTypeForQuery;	// 164 = 0xa4
	ATVDataCollection *_folder;	// 168 = 0xa8
	NSArray *_filteredPlaylists;	// 172 = 0xac
	Class _mediaTypeControllerClass;	// 176 = 0xb0
}
+ (id)playlistsControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type mediaType:(id)type3 mediaTypeControllerClass:(Class)aClass;	// 0x1cf371
- (id)initWithMediaType:(id)mediaType folder:(id)folder dataClient:(id)client dataClientType:(unsigned long)type mediaTypeControllerClass:(Class)aClass;	// 0x1cf3cd
- (BOOL)_cloudFolderHasPlaylist:(id)playlist inTree:(id)tree;	// 0x1d1401
- (void)_cloudPreparePlaylistHierarcy:(id)hierarcy;	// 0x1d0d4d
- (int)_firstLevelChildernOfPlaylistAtIndex:(int)index inArray:(id)array totalChildern:(int *)childern;	// 0x1d0bad
- (void)_preparePlaylistHierarcy:(id)hierarcy;	// 0x1d09d5
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1d08d1
- (BOOL)dataQueryComplete:(id)complete;	// 0x1cf781
- (void)dealloc;	// 0x1cf535
- (id)errorForNoContent;	// 0x1cfc29
- (id)filterForCurrentMediaType;	// 0x1d0929
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1cfd09
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1d0521
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1d0585
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1d0479
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1d002d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1cff71
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1cfde5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1d0489
- (id)newDataQuery;	// 0x1cf5ad
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1d011d
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1cfc49
- (long)numberOfSectionsInList:(id)list;	// 0x1d0485
- (void)playQueryComplete:(id)complete;	// 0x1d0399
- (id)providersForContextMenu;	// 0x1d0345
@end

