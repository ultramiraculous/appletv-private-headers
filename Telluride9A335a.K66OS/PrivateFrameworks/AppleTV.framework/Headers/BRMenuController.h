/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRListControl, BRTextControl, BRHeaderControl, BRListControlMonitor;

@interface BRMenuController : BRController {
@private
	BRListControl *_list;	// 80 = 0x50
	BRHeaderControl *_header;	// 84 = 0x54
	id _selectedObject;	// 88 = 0x58
	BOOL _clearSavedSelection;	// 92 = 0x5c
	BRListControlMonitor *_listControlMonitor;	// 96 = 0x60
	float _menuWidthFactor;	// 100 = 0x64
	float _headerWidthFactor;	// 104 = 0x68
	BOOL _useCenteredLayout;	// 108 = 0x6c
	BRTextControl *_primaryTextControl;	// 112 = 0x70
	BRTextControl *_secondaryTextControl;	// 116 = 0x74
	BRTextControl *_labelControl;	// 120 = 0x78
}
@property(readonly, retain) BRHeaderControl *header;	// G=0x341af389; converted property
@property(assign) float headerWidthFactor;	// G=0x341af3d5; S=0x341af399; converted property
@property(readonly, retain) BRListControl *list;	// G=0x341af2d1; converted property
@property(retain) id listIcon;	// G=0x341b0215; S=0x341b01ad; converted property
@property(assign) float listIconHorizontalOffset;	// G=0x341b0255; S=0x341b0235; converted property
@property(assign) float listIconKerningFactor;	// G=0x341b0295; S=0x341b0275; converted property
@property(retain) id listTitle;	// G=0x341b016d; S=0x341b00e9; converted property
@property(assign) float menuWidthFactor;	// G=0x341af379; S=0x341af2e1; converted property
@property(assign) long selectedItem;	// G=0x341b0429; S=0x341b0409; converted property
@property(retain) id selectedObject;	// G=0x341af595; S=0x341af555; converted property
- (id)init;	// 0x341aee39
- (BOOL)_itemSelected:(id)selected;	// 0x341b048d
- (id)accessibilityLabel;	// 0x341b0381
- (id)accessibilitySecondaryLabel;	// 0x341b03a1
- (void)cancelCurrentListMonitorLoads;	// 0x341af745
- (void)clearSavedSelection;	// 0x341af3e9
- (int)contextMenuDimOption;	// 0x341b037d
- (id)controlForContextMenuPositioning;	// 0x341b02b5
- (id)controlForContextMenuStart;	// 0x341b02c5
- (id)controlToDim;	// 0x341b02ed
- (void)controlWasActivated;	// 0x341af435
- (void)dealloc;	// 0x341aef99
- (long)defaultIndex;	// 0x341b0485
// converted property getter: - (id)header;	// 0x341af389
// converted property getter: - (float)headerWidthFactor;	// 0x341af3d5
- (BOOL)isCurrentSelectionValidForModelData:(id)modelData;	// 0x341af601
- (BOOL)isValidAfterDataUpdate;	// 0x341af699
- (BOOL)isVolatile;	// 0x341b0501
- (long)itemCount;	// 0x341b0449
- (void)itemSelected:(long)selected;	// 0x341b0481
- (void)layoutSubcontrols;	// 0x341af08d
- (void)layoutSubcontrolsUsingCenteredLayout;	// 0x341af7b9
// converted property getter: - (id)list;	// 0x341af2d1
// converted property getter: - (id)listIcon;	// 0x341b0215
// converted property getter: - (float)listIconHorizontalOffset;	// 0x341b0255
// converted property getter: - (float)listIconKerningFactor;	// 0x341b0295
// converted property getter: - (id)listTitle;	// 0x341b016d
- (float)listVerticalOffset;	// 0x341af3e5
- (id)loadModelData;	// 0x341af5a5
// converted property getter: - (float)menuWidthFactor;	// 0x341af379
- (id)primaryInfoTextControl;	// 0x341afdbd
- (void)refreshControllerForModelUpdate;	// 0x341af5a9
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x341af5ad
- (id)secondaryInfoTextControl;	// 0x341aff0d
// converted property getter: - (long)selectedItem;	// 0x341b0429
// converted property getter: - (id)selectedObject;	// 0x341af595
// converted property setter: - (void)setHeaderWidthFactor:(float)factor;	// 0x341af399
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x341afc25
- (void)setLabel:(id)label;	// 0x341aff1d
- (void)setLabel:(id)label withAttributes:(id)attributes;	// 0x341aff59
// converted property setter: - (void)setListIcon:(id)icon;	// 0x341b01ad
- (void)setListIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x341b018d
// converted property setter: - (void)setListIconHorizontalOffset:(float)offset;	// 0x341b0235
// converted property setter: - (void)setListIconKerningFactor:(float)factor;	// 0x341b0275
// converted property setter: - (void)setListTitle:(id)title;	// 0x341b00e9
- (void)setListTitle:(id)title withAttributes:(id)attributes;	// 0x341b0061
// converted property setter: - (void)setMenuWidthFactor:(float)factor;	// 0x341af2e1
- (void)setPrimaryInfoText:(id)text;	// 0x341afc7d
- (void)setPrimaryInfoText:(id)text withAttributes:(id)attributes;	// 0x341afc91
- (void)setSecondaryInfoText:(id)text;	// 0x341afdcd
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x341afde1
// converted property setter: - (void)setSelectedItem:(long)item;	// 0x341b0409
// converted property setter: - (void)setSelectedObject:(id)object;	// 0x341af555
- (void)setTitle:(id)title;	// 0x341afbe1
- (void)setUseCenteredLayout:(BOOL)layout;	// 0x341af765
- (BOOL)shouldRefreshForUpdateToObject:(id)object;	// 0x341af695
- (int)soundForSelectingItem:(long)selectingItem;	// 0x341b0489
- (void)wasPushed;	// 0x341af499
@end
