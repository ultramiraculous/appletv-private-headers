/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITable.h"

@class UIPreferencesTableCell, UIKeyboard, NSMutableArray;

@interface UIPreferencesTable : UITable {
@private
	UIPreferencesTableCell *_editingCell;	// 440 = 0x1b8
	int _editingCellRow;	// 444 = 0x1bc
	NSMutableArray *_groupItems;	// 448 = 0x1c0
	UIKeyboard *_keyboard;	// 452 = 0x1c4
	float _textOffset;	// 456 = 0x1c8
	CFDictionaryRef _piecesForCell;	// 460 = 0x1cc
	unsigned _datasourceCellForGroup : 1;	// 464 = 0x1d0
	unsigned _datasourceIsRadioGroup : 1;	// 464 = 0x1d0
	unsigned _datasourceIsLabelGroup : 1;	// 464 = 0x1d0
	unsigned _datasourceIsRowCheckedInRadioGroup : 1;	// 464 = 0x1d0
	unsigned _centersContent : 1;	// 464 = 0x1d0
	unsigned _reserved : 27;	// 464 = 0x1d0
}
@property(readonly, retain) UIKeyboard *keyboard;	// G=0x30731bed; converted property
@property(assign) BOOL keyboardVisible;	// G=0x30731bd9; S=0x30732165; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x30732e41
- (void)_animatePiecesOfCell:(id)cell isFirstItemInGroup:(BOOL)group isDeletion:(BOOL)deletion isDestinationRowFrame:(CGRect)frame;	// 0x30735805
- (BOOL)_beginEditingNextCell;	// 0x30731d11
- (int)_cellOutlineForRow:(int)row withChildCount:(int)childCount isLabelGroup:(BOOL)group;	// 0x30731b95
- (id)_copyPieceOfCell:(id)cell withContentsPosition:(int)contentsPosition;	// 0x30732ff9
- (id)_editingCell;	// 0x30731c01
- (id)_existingPieceForCell:(id)cell;	// 0x30733c2d
- (void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x30733ebd
- (void)_fadeCellOutAnimationDidStopAndFixOutlines:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x30733c85
- (void)_fadeCellSelection;	// 0x30732a4d
- (id)_groupItemForTableRow:(int)tableRow andGroupIndex:(int *)index andRow:(int *)row;	// 0x30732909
- (id)_groupItemForTableRow:(int)tableRow andGroupIndex:(int *)index andRow:(int *)row inGroups:(id)groups;	// 0x30732951
- (void)_keyboardRemoveAnimationCompleted:(id)completed;	// 0x3073217d
- (int)_paddingForCenteringContent;	// 0x30733881
- (void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x30732245
- (void)_removePiecesFromSuperview:(id)superview;	// 0x30733e39
- (void)_removePiecesFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x3073222d
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x30731bfd
- (void)_setAlpha:(float)alpha forSubviewsOf:(id)of;	// 0x3073229d
- (void)_setEditingCell:(id)cell;	// 0x30731f9d
- (void)_updateContentSize;	// 0x307323f9
- (void)_updatePaddingForCenteringContent;	// 0x307324b9
- (BOOL)_userCanDeleteRows;	// 0x307321b9
- (id)_visibleCheckedCellInTableRowRange:(NSRange)tableRowRange;	// 0x30733f65
- (void)addTableColumn:(id)column;	// 0x30733821
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;	// 0x307330f9
- (float)animationDuration;	// 0x30731bd1
- (BOOL)canDeleteRow:(int)row;	// 0x30732b69
- (BOOL)canHandleSwipes;	// 0x30731b91
- (BOOL)canInsertAtRow:(int)row;	// 0x30732b01
- (BOOL)canSelectRow:(int)row;	// 0x30732a71
- (id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;	// 0x30733281
- (int)dataSourceGetRowCount;	// 0x30732501
- (BOOL)dataSourceSupportsVariableRowHeights;	// 0x30731bcd
- (void)dealloc;	// 0x30732bd1
- (void)deleteItems:(id)items;	// 0x3073225d
- (void)deleteRows:(id)rows viaEdge:(int)edge;	// 0x307337fd
- (int)editingRow;	// 0x30731c11
- (void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;	// 0x307339cd
- (BOOL)floatArray:(id)array loadValues:(float *)values count:(int)count;	// 0x30735fa1
- (CGRect)frameOfPreferencesCellAtRow:(int)row inGroup:(int)group;	// 0x30733241
- (BOOL)getGroup:(int *)group row:(int *)row forTableRow:(int)tableRow;	// 0x30732871
- (BOOL)getGroup:(int *)group row:(int *)row ofPreferencesTableCell:(id)preferencesTableCell;	// 0x307328bd
- (int)groupForTableRow:(int)tableRow;	// 0x30732899
- (void)insertItems:(id)items;	// 0x3073227d
- (void)insertItems:(id)items deleteItems:(id)items2 andReloadIndexes:(id)indexes;	// 0x30734291
// converted property getter: - (id)keyboard;	// 0x30731bed
// converted property getter: - (BOOL)keyboardVisible;	// 0x30731bd9
- (void)reloadData;	// 0x30731c7d
- (void)resumeWithNotification:(id)notification;	// 0x30732131
- (void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;	// 0x30731c21
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;	// 0x30734059
- (void)setBottomBufferHeight:(float)height;	// 0x307320f5
- (void)setCentersContent:(BOOL)content;	// 0x30732461
- (void)setDataSource:(id)source;	// 0x30732759
- (void)setFrame:(CGRect)frame;	// 0x3073576d
// converted property setter: - (void)setKeyboardVisible:(BOOL)visible;	// 0x30732165
- (void)setKeyboardVisible:(BOOL)visible animated:(BOOL)animated;	// 0x30735bc1
- (BOOL)shouldIndentRow:(int)row;	// 0x30732305
- (int)tableRowForRow:(int)row inGroup:(int)group;	// 0x30732a05
- (BOOL)validateDataSource;	// 0x30732705
- (id)visiblePreferencesCellForRow:(int)row inGroup:(int)group;	// 0x307323cd
@end
