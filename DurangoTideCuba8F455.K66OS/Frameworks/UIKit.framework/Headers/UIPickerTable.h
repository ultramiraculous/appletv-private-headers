/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITable.h"

@class UIPickerScrollAnimation;

__attribute__((visibility("hidden")))
@interface UIPickerTable : UITable {
@private
	CGRect _selectionBarRect;	// 440 = 0x1b8
	UIPickerScrollAnimation *_scrollAnimation;	// 456 = 0x1c8
	int _selectionBarRow;	// 460 = 0x1cc
	CGPoint _lastOffset;	// 464 = 0x1d0
	int _lastClickRow;	// 472 = 0x1d8
	unsigned _allowSelectingCells : 1;	// 476 = 0x1dc
	unsigned _allowsMultipleSelection : 1;	// 476 = 0x1dc
	unsigned _lastShouldStick : 1;	// 476 = 0x1dc
	unsigned _disableDidSelect : 1;	// 476 = 0x1dc
}
@property(assign) BOOL allowsMultipleSelection;	// G=0x301ccbf1; S=0x301369ad; converted property
@property(assign) int lastClickRow;	// G=0x30138191; S=0x30143e25; converted property
@property(assign) CGRect selectionBarRect;	// G=0x30143e09; S=0x30135619; converted property
@property(readonly, assign) int selectionBarRow;	// G=0x3013890d; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x30133705
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x30138c6d
- (void)_pickerScrollAnimationEnded;	// 0x301cd1bd
- (id)_resuableObjectForTableCell:(id)tableCell;	// 0x301441f5
- (void)_scrollSelectionBarRect:(CGRect)rect animated:(BOOL)animated notify:(BOOL)notify;	// 0x30137635
// converted property getter: - (BOOL)allowsMultipleSelection;	// 0x301ccbf1
- (void)animationSetOffset:(CGPoint)offset;	// 0x301cd1e9
- (BOOL)canHandleSwipes;	// 0x30138d79
- (void)contentMouseUpInView:(id)view withEvent:(GSEventRef)event;	// 0x301cd5e9
- (BOOL)didSelectDisabled:(BOOL)disabled;	// 0x30148249
- (BOOL)fixupCenterCellToSelectionBar:(BOOL)selectionBar;	// 0x30146bcd
// converted property getter: - (int)lastClickRow;	// 0x30138191
- (void)mouseDown:(GSEventRef)down;	// 0x30141f71
- (void)mouseUp:(GSEventRef)up;	// 0x30144271
- (CGPoint)newOffsetWithCenteredRectFromOffset:(CGPoint)offset;	// 0x30146a21
- (void)removeFromSuperview;	// 0x30148fed
- (BOOL)scrollCenterCellToSelectionBar;	// 0x3014a09d
- (void)selectCell:(id)cell inRow:(int)row column:(int)column withFade:(BOOL)fade;	// 0x301cd20d
- (void)selectRow:(int)row animated:(BOOL)animated notify:(BOOL)notify;	// 0x30137509
- (id)selectedTableCell;	// 0x3014748d
// converted property getter: - (CGRect)selectionBarRect;	// 0x30143e09
// converted property getter: - (int)selectionBarRow;	// 0x3013890d
// converted property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x301369ad
- (void)setAllowsSelectingRows:(BOOL)rows;	// 0x30136991
// converted property setter: - (void)setLastClickRow:(int)row;	// 0x30143e25
- (void)setRowHeight:(float)height;	// 0x30134129
// converted property setter: - (void)setSelectionBarRect:(CGRect)rect;	// 0x30135619
- (void)updateSelectionBarRow;	// 0x301381a1
@end

