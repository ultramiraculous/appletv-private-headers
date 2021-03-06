/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRMediaMenuView, NSTimer, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMusicController : BRViewController {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	NSArray *_unvalidatedRootMenus;	// 108 = 0x6c
	BOOL _waitPromptShowing;	// 112 = 0x70
	NSTimer *_waitPromptTimer;	// 116 = 0x74
	NSArray *_rootMenus;	// 120 = 0x78
}
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x3dedb5; converted property
@property(retain, nonatomic) NSArray *rootMenus;	// G=0x3e046d; S=0x3e047d; @synthesize=_rootMenus
+ (void)initialize;	// 0x3dec99
- (id)init;	// 0x3dedc9
- (void).cxx_destruct;	// 0x3e04a5
- (void)_favoriteAdded:(id)added;	// 0x3e03b5
- (void)_favoriteRemoved:(id)removed;	// 0x3e0411
- (id)_favorites;	// 0x3e00a9
- (id)_favoritesArtwork;	// 0x3e00fd
- (void)_reload;	// 0x3dff99
- (void)_showWaitPrompt;	// 0x3dfbe1
- (void)_storeMenuLoaded:(id)loaded;	// 0x3dfd09
- (void)_updateRootMenus;	// 0x3dfa21
- (id)_validatedRootMenus:(id)menus;	// 0x3df7f5
- (void)_waitForStore;	// 0x3dfb25
- (void)dealloc;	// 0x3defc9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3df2c9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3df441
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3df16d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3df2a9
// converted property getter: - (id)mediaMenuView;	// 0x3dedb5
// declared property getter: - (id)rootMenus;	// 0x3e046d
// declared property setter: - (void)setRootMenus:(id)menus;	// 0x3e047d
- (void)wasPushed;	// 0x3df095
@end

