/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class BRMetadataPreviewControl, BRMediaMenuView, NSArray;

__attribute__((visibility("hidden")))
@interface ATVPodcastFilteredStationController : BRViewController {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	BRMetadataPreviewControl *_metadataControl;	// 108 = 0x6c
	NSArray *_shows;	// 112 = 0x70
}
@property(copy, nonatomic) NSArray *shows;	// G=0x1fc115; S=0x1fbb75; @synthesize=_shows
- (id)init;	// 0x1fb945
- (id)initWithTitle:(id)title shows:(id)shows;	// 0x1fb961
- (void).cxx_destruct;	// 0x1fc129
- (void)_updateDetail:(id)detail;	// 0x1fbc45
- (void)controlWasActivated;	// 0x1fbbd9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1fc0b5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1fbda9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1fbdb5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1fc095
- (long)numberOfSectionsInList:(id)list;	// 0x1fc091
// declared property setter: - (void)setShows:(id)shows;	// 0x1fbb75
// declared property getter: - (id)shows;	// 0x1fc115
@end
