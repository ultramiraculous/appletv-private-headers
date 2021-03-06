/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRControllerStack, NSArray, NSMutableIndexSet, BRControl, BRListView, NSIndexPath;
@protocol RUIYTListDataSourceAspectDelegate;

__attribute__((visibility("hidden")))
@interface RUIYTListDataSourceAspect : XXUnknownSuperclass {
	NSMutableIndexSet *_sectionsBeingLoaded;	// 4 = 0x4
	BRControllerStack *_controllerStack;	// 8 = 0x8
	NSIndexPath *_spinningRow;	// 12 = 0xc
	int _spinningRowAction;	// 16 = 0x10
	BRListView *_listView;	// 20 = 0x14
	id _sectionHandlerSelecting;	// 24 = 0x18
	NSArray *_sections;	// 28 = 0x1c
	id<RUIYTListDataSourceAspectDelegate> _delegate;	// 32 = 0x20
	BRControl *_defaultPreviewControl;	// 36 = 0x24
	id _previewSetting;	// 40 = 0x28
}
@property(retain) BRControl *defaultPreviewControl;	// G=0x272425; S=0x272439; @synthesize=_defaultPreviewControl
@property(assign, nonatomic) __weak id<RUIYTListDataSourceAspectDelegate> delegate;	// G=0x272405; S=0x2711dd; @synthesize=_delegate
@property(readonly, assign) BRListView *listView;	// G=0x2723b1; @synthesize=_listView
@property(copy) id previewSetting;	// G=0x272449; S=0x27245d; @synthesize=_previewSetting
@property(copy) id sectionHandlerSelecting;	// G=0x2723d1; S=0x2723e5; @synthesize=_sectionHandlerSelecting
@property(retain, nonatomic) NSArray *sections;	// G=0x2723f5; S=0x2711f1; @synthesize=_sections
- (id)initWithListView:(id)listView controllerStack:(id)stack;	// 0x2710d9
- (void).cxx_destruct;	// 0x27246d
- (BOOL)_canLoadMoreItemsForAssetsSection:(id)assetsSection;	// 0x2728d5
- (float)_heightForAsset:(id)asset type:(int)type;	// 0x272529
- (id)_itemIDForItem:(id)item;	// 0x272579
- (void)_itemSelected:(id)selected action:(int)action;	// 0x273179
- (BOOL)_loadMoreItemsForAssetsSection:(unsigned)assetsSection count:(unsigned)count;	// 0x272d29
- (void)_loadPreviewForItem:(id)item;	// 0x2733d9
- (id)_moreItemForAssetsSection:(id)assetsSection;	// 0x2729d1
- (long)_numberOfRowsInSection:(long)section;	// 0x272719
- (id)_resourceForKey:(id)key forSection:(id)section;	// 0x273631
- (void)_setSpinningRow:(id)row action:(int)action;	// 0x273019
- (BOOL)_shouldDisplayMoreItemForAssetsSection:(id)assetsSection;	// 0x272859
- (void)_showError:(id)error;	// 0x272f0d
// declared property getter: - (id)defaultPreviewControl;	// 0x272425
// declared property getter: - (id)delegate;	// 0x272405
- (void)discardPendingAction;	// 0x271d59
- (id)indexForItemID:(id)itemID;	// 0x271445
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x272349
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x27239d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x272389
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x272161
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x27214d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x272139
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x271e45
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x272029
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x27203d
// declared property getter: - (id)listView;	// 0x2723b1
- (BOOL)loadMoreItemsForSection:(unsigned)section;	// 0x27160d
- (void)moreAssetsAvailable:(id)available forSection:(unsigned)section;	// 0x271631
- (void)moreAssetsFailed:(id)failed forSection:(unsigned)section timeStamp:(id)stamp;	// 0x271ad1
- (long)numberOfSectionsInList:(id)list;	// 0x271fed
// declared property getter: - (id)previewSetting;	// 0x272449
- (void)resolvePendingActionsForIndex:(id)index;	// 0x271d6d
// declared property getter: - (id)sectionHandlerSelecting;	// 0x2723d1
// declared property getter: - (id)sections;	// 0x2723f5
- (void)selectItemAtIndex:(id)index;	// 0x271569
- (void)selectItemAtIndex:(id)index action:(int)action;	// 0x2715bd
// declared property setter: - (void)setDefaultPreviewControl:(id)control;	// 0x272439
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2711dd
// declared property setter: - (void)setPreviewSetting:(id)setting;	// 0x27245d
// declared property setter: - (void)setSectionHandlerSelecting:(id)selecting;	// 0x2723e5
// declared property setter: - (void)setSections:(id)sections;	// 0x2711f1
@end

