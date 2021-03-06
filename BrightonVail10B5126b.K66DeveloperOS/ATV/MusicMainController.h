/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class BRControl, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface MusicMainController : MusicController {
	BRControl *_allSongsPreview;	// 164 = 0xa4
	BOOL _displayNowPlaying;	// 168 = 0xa8
	BOOL _displayUpNext;	// 169 = 0xa9
	NSArray *_controllerMenuItems;	// 172 = 0xac
	NSString *_textEntryClient;	// 176 = 0xb0
}
@property(retain, nonatomic) NSArray *controllerMenuItems;	// G=0x1d4861; S=0x1d4871; @synthesize=_controllerMenuItems
@property(retain, nonatomic) NSString *textEntryClient;	// G=0x1d4881; S=0x1d4891; @synthesize=_textEntryClient
+ (void)initialize;	// 0x1d3841
- (id)_indexPathForTitleKey:(id)titleKey;	// 0x1d4955
- (unsigned)_menuItemForRow:(unsigned)row;	// 0x1d48a1
- (id)_menuItemTitleKeyForIndexPath:(id)indexPath;	// 0x1d48d9
- (void)_networkStateChanged:(id)changed;	// 0x1d4d11
- (void)_playerStateChanged:(id)changed;	// 0x1d4cc9
- (void)_updateHeaderItems;	// 0x1d4a9d
- (void)controlWasActivated;	// 0x1d3a15
// declared property getter: - (id)controllerMenuItems;	// 0x1d4861
- (void)dealloc;	// 0x1d3971
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1d3de9
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1d45b5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1d40d9
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1d3ddd
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x1d3d91
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1d44b5
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1d44a1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1d3c21
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1d3d05
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x1d3d55
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1d4689
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1d44c9
- (long)numberOfSectionsInList:(id)list;	// 0x1d3d01
- (void)playQueryComplete:(id)complete;	// 0x1d475d
// declared property setter: - (void)setControllerMenuItems:(id)items;	// 0x1d4871
// declared property setter: - (void)setTextEntryClient:(id)client;	// 0x1d4891
// declared property getter: - (id)textEntryClient;	// 0x1d4881
- (void)wasPopped;	// 0x1d3bb5
- (void)wasPushed;	// 0x1d3ab5
@end

