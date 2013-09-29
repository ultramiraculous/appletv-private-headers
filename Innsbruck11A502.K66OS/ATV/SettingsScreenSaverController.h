/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, SettingsChooseAlbumArtworkController;

__attribute__((visibility("hidden")))
@interface SettingsScreenSaverController : BRViewController {
	BOOL _screensaverThemeItemsRequireRefreshing;	// 104 = 0x68
	NSArray *_screensaverThemeItems;	// 108 = 0x6c
	SettingsChooseAlbumArtworkController *_albumArtworkController;	// 112 = 0x70
}
@property(retain, nonatomic) SettingsChooseAlbumArtworkController *albumArtworkController;	// G=0x2f3859; S=0x2f3869; @synthesize=_albumArtworkController
@property(copy, nonatomic) NSArray *screensaverThemeItems;	// G=0x2f3815; S=0x2f3829; @synthesize=_screensaverThemeItems
@property(assign, nonatomic) BOOL screensaverThemeItemsRequireRefreshing;	// G=0x2f3839; S=0x2f3849; @synthesize=_screensaverThemeItemsRequireRefreshing
- (id)init;	// 0x2f3285
- (void).cxx_destruct;	// 0x2f3891
- (void)_dataServersChanged:(id)changed;	// 0x2f4d19
- (void)_handleScreenSaverSelectionAtRow:(long)row;	// 0x2f3fc9
- (void)_handleSettingsSelectionAtRow:(long)row;	// 0x2f3e71
- (void)_incrementTimeout;	// 0x2f44b5
- (BOOL)_isAlbumArtSelected;	// 0x2f4d29
- (id)_prefetchIndicatorIndexPath;	// 0x2f485d
- (void)_reloadListByRefreshingScreensaverThemeItems;	// 0x2f4dc5
- (id)_screenSaverItemAtRow:(long)row;	// 0x2f3ba9
- (void)_screenSaverPrefetchStarted:(id)started;	// 0x2f470d
- (void)_screenSaverPrefetchStopped:(id)stopped;	// 0x2f47b5
- (id)_settingsItemAtRow:(long)row;	// 0x2f38c5
- (void)_showChoosePhotos;	// 0x2f45e5
- (id)_slideshowThemeItems;	// 0x2f487d
- (id)_timeoutString;	// 0x2f43f1
- (void)_toggleMusicPref;	// 0x2f4659
// declared property getter: - (id)albumArtworkController;	// 0x2f3859
- (void)dealloc;	// 0x2f356d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2f379d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2f3619
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2f36a9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2f3715
- (long)numberOfSectionsInList:(id)list;	// 0x2f36a5
// declared property getter: - (id)screensaverThemeItems;	// 0x2f3815
// declared property getter: - (BOOL)screensaverThemeItemsRequireRefreshing;	// 0x2f3839
// declared property setter: - (void)setAlbumArtworkController:(id)controller;	// 0x2f3869
// declared property setter: - (void)setScreensaverThemeItems:(id)items;	// 0x2f3829
// declared property setter: - (void)setScreensaverThemeItemsRequireRefreshing:(BOOL)refreshing;	// 0x2f3849
- (void)wasExhumed;	// 0x2f35d9
@end
