/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSArray, BRMediaMenuView, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVMusicController : BRViewController {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	NSArray *_unvalidatedRootMenus;	// 108 = 0x6c
	BOOL _waitPromptShowing;	// 112 = 0x70
	NSTimer *_waitPromptTimer;	// 116 = 0x74
	NSArray *_rootMenus;	// 120 = 0x78
}
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x3e269d; converted property
@property(retain, nonatomic) NSArray *rootMenus;	// G=0x3e3d55; S=0x3e3d65; @synthesize=_rootMenus
+ (void)initialize;	// 0x3e2581
- (id)init;	// 0x3e26b1
- (void).cxx_destruct;	// 0x3e3d8d
- (void)_favoriteAdded:(id)added;	// 0x3e3c9d
- (void)_favoriteRemoved:(id)removed;	// 0x3e3cf9
- (id)_favorites;	// 0x3e3991
- (id)_favoritesArtwork;	// 0x3e39e5
- (void)_reload;	// 0x3e3881
- (void)_showWaitPrompt;	// 0x3e34c9
- (void)_storeMenuLoaded:(id)loaded;	// 0x3e35f1
- (void)_updateRootMenus;	// 0x3e3309
- (id)_validatedRootMenus:(id)menus;	// 0x3e30dd
- (void)_waitForStore;	// 0x3e340d
- (void)dealloc;	// 0x3e28b1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3e2bb1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3e2d29
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3e2a55
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3e2b91
// converted property getter: - (id)mediaMenuView;	// 0x3e269d
// declared property getter: - (id)rootMenus;	// 0x3e3d55
// declared property setter: - (void)setRootMenus:(id)menus;	// 0x3e3d65
- (void)wasPushed;	// 0x3e297d
@end

