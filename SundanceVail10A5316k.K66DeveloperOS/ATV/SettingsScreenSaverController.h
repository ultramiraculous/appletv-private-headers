/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SettingsScreenSaverController : BRViewController {
	NSMutableArray *_slideshowThemeTitles;	// 100 = 0x64
}
- (id)init;	// 0x9f2a9
- (void).cxx_destruct;	// 0x9f84d
- (void)_handleScreenSaverSelectionAtRow:(long)row;	// 0x9fe71
- (void)_handleSettingsSelectionAtRow:(long)row;	// 0x9fd75
- (void)_incrementTimeout;	// 0xa0311
- (id)_screenSaverItemAtRow:(long)row;	// 0x9fac5
- (void)_screenSaverPrefetchStarted:(id)started;	// 0xa0585
- (void)_screenSaverPrefetchStopped:(id)stopped;	// 0xa063d
- (id)_settingsItemAtRow:(long)row;	// 0x9f861
- (void)_showChoosePhotos;	// 0xa0441
- (id)_slideshowIdentifierForTitle:(id)title;	// 0xa08b1
- (id)_slideshowThemeTitles;	// 0xa06f5
- (id)_timeoutString;	// 0xa024d
- (void)_toggleMusicPref;	// 0xa04d1
- (void)dealloc;	// 0x9f535
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x9f7d5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x9f621
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x9f6b9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x9f759
- (long)numberOfSectionsInList:(id)list;	// 0x9f6b5
- (void)wasExhumed;	// 0x9f5a1
@end

