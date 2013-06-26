/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"


__attribute__((visibility("hidden")))
@interface MusicVideosController : MusicController {
}
+ (id)musicVideoArtistsControllerWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x1a30a5
- (int)_headerCount;	// 0x1a3979
- (id)errorForNoContent;	// 0x1a35ad
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1a3769
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1a37f9
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1a3715
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1a35cd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1a3721
- (id)newDataQuery;	// 0x1a311d
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1a3361
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1a31f5
- (void)playQueryComplete:(id)complete;	// 0x1a348d
- (int)typeaheadSelectionOffset;	// 0x1a3969
@end
