/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UITableViewDataSource.h"
#import "UIView.h"

@class NSMutableArray;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;

@interface UIPickerView : UIView <NSCoding, UITableViewDataSource> {
@private
	NSMutableArray *_tables;	// 48 = 0x30
	UIView *_topFrame;	// 52 = 0x34
	NSMutableArray *_dividers;	// 56 = 0x38
	NSMutableArray *_selectionBars;	// 60 = 0x3c
	id<UIPickerViewDataSource> _dataSource;	// 64 = 0x40
	id<UIPickerViewDelegate> _delegate;	// 68 = 0x44
	UIView *_backgroundView;	// 72 = 0x48
	int _numberOfComponents;	// 76 = 0x4c
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned delegateRespondsToCheckableForRow : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
		unsigned usesCheckedSelection : 1;
	} _pickerViewFlags;	// 80 = 0x50
}
@property(assign) BOOL allowsMultipleSelection;	// G=0x33b28905; S=0x33b28869; converted property
@property(assign, nonatomic) id<UIPickerViewDataSource> dataSource;	// G=0x33b289a9; S=0x33b06109; @synthesize=_dataSource
@property(assign, nonatomic) id<UIPickerViewDelegate> delegate;	// G=0x33b289b9; S=0x33b05f61; @synthesize=_delegate
@property(readonly, assign, nonatomic) int numberOfComponents;	// G=0x33b07485; @synthesize=_numberOfComponents
@property(assign, nonatomic) BOOL showsSelectionIndicator;	// G=0x33b28855; S=0x33b2880d; 
+ (CGSize)defaultSizeForCurrentOrientation;	// 0x33b05235
+ (CGSize)sizeForCurrentOrientationThatFits:(CGSize)currentOrientationThatFits;	// 0x33b05875
+ (CGSize)sizeThatFits:(CGSize)fits forInterfaceOrientation:(int)interfaceOrientation;	// 0x33b058cd
- (id)init;	// 0x33b27ff5
- (id)initWithCoder:(id)coder;	// 0x33b28029
- (id)initWithFrame:(CGRect)frame;	// 0x33b0574d
- (id)_createTableWithFrame:(CGRect)frame forComponent:(int)component;	// 0x33b0a579
- (id)_createViewForPickerPiece:(int)pickerPiece;	// 0x33b0867d
- (int)_delegateNumberOfComponents;	// 0x33b06b15
- (int)_delegateNumberOfRowsInComponent:(int)component;	// 0x33b0ac51
- (float)_delegateRowHeightForComponent:(int)component;	// 0x33b0aa3d
- (id)_delegateTitleForRow:(int)row forComponent:(int)component;	// 0x33b28499
- (float)_delegateWidthForComponent:(int)component ofCount:(int)count withSizeLeft:(float)sizeLeft;	// 0x33b08dc5
- (BOOL)_isLandscapeOrientation;	// 0x33b08afd
- (id)_orientationImageSuffix;	// 0x33b089cd
- (id)_popoverSuffix;	// 0x33b08bfd
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33b280f9
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x33b07519
- (CGRect)_selectionBarRectForHeight:(float)height;	// 0x33b0aa9d
- (id)_selectionBarSuffix;	// 0x33b08bcd
- (void)_sendCheckedRow:(int)row inTableView:(id)tableView checked:(BOOL)checked;	// 0x33b2840d
- (void)_sendSelectionChangedForComponent:(int)component;	// 0x33b10e41
- (void)_sendSelectionChangedFromTable:(id)table;	// 0x33b10d8d
- (void)_setUsesCheckedSelection:(BOOL)selection;	// 0x33b28919
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x33b06bf5
- (BOOL)_soundsEnabled;	// 0x33b107e5
- (float)_tableRowHeight;	// 0x33b27f9d
- (void)_updateSound;	// 0x33b0fd49
- (BOOL)_usesCheckSelection;	// 0x33b0d1f1
- (BOOL)_usesCheckedSelection;	// 0x33b2893d
- (float)_wheelShift;	// 0x33b0a255
// converted property getter: - (BOOL)allowsMultipleSelection;	// 0x33b28905
- (int)columnForTableView:(id)tableView;	// 0x33b0b6ed
- (id)createDividerWithFrame:(CGRect)frame;	// 0x33b0a295
// declared property getter: - (id)dataSource;	// 0x33b289a9
- (void)dealloc;	// 0x33b13e71
- (CGSize)defaultSize;	// 0x33b27e7d
// declared property getter: - (id)delegate;	// 0x33b289b9
- (void)didMoveToWindow;	// 0x33b0fd09
- (void)encodeWithCoder:(id)coder;	// 0x33b2823d
- (id)imageForPickerPiece:(int)pickerPiece;	// 0x33b08765
- (BOOL)isAccessibilityElementByDefault;	// 0x33c06609
- (void)layoutSubviews;	// 0x33b077ad
- (int)numberOfColumns;	// 0x33b285c5
// declared property getter: - (int)numberOfComponents;	// 0x33b07485
- (int)numberOfRowsInColumn:(int)column;	// 0x33b285b5
- (int)numberOfRowsInComponent:(int)component;	// 0x33b0f015
- (id)pickerImageNamePrefix;	// 0x33b089c1
- (void)reload;	// 0x33b28371
- (void)reloadAllComponents;	// 0x33b06a7d
- (void)reloadAllPickerPieces;	// 0x33b11855
- (void)reloadComponent:(int)component;	// 0x33b283a1
- (void)reloadData;	// 0x33b28381
- (void)reloadDataForColumn:(int)column;	// 0x33b28391
- (CGSize)rowSizeForComponent:(int)component;	// 0x33b284e1
- (double)scrollAnimationDuration;	// 0x33b28485
- (void)selectRow:(int)row inColumn:(int)column animated:(BOOL)animated;	// 0x33b28985
- (void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated;	// 0x33b28961
- (int)selectedRowForColumn:(int)column;	// 0x33b28951
- (int)selectedRowInComponent:(int)component;	// 0x33b0e0c9
// converted property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x33b28869
- (void)setAlpha:(float)alpha;	// 0x33b28331
- (void)setBounds:(CGRect)bounds;	// 0x33b286c9
// declared property setter: - (void)setDataSource:(id)source;	// 0x33b06109
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33b05f61
- (void)setFrame:(CGRect)frame;	// 0x33b05a79
- (void)setHidden:(BOOL)hidden;	// 0x33b282f1
- (void)setNeedsLayout;	// 0x33b05cd9
// declared property setter: - (void)setShowsSelectionIndicator:(BOOL)indicator;	// 0x33b2880d
- (void)setSoundsEnabled:(BOOL)enabled;	// 0x33b27fc9
// declared property getter: - (BOOL)showsSelectionIndicator;	// 0x33b28855
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33b283ed
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33b0b371
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33b0ab8d
- (id)tableViewForColumn:(int)column;	// 0x33b107c5
- (id)viewForRow:(int)row forComponent:(int)component;	// 0x33b0ec5d
- (NSRange)visibleRowsForColumn:(int)column;	// 0x33b0ec15
@end

