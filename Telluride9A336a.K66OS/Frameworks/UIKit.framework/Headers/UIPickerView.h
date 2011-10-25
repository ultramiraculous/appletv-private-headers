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
@property(assign) BOOL allowsMultipleSelection;	// G=0x35262905; S=0x35262869; converted property
@property(assign, nonatomic) id<UIPickerViewDataSource> dataSource;	// G=0x352629a9; S=0x35240109; @synthesize=_dataSource
@property(assign, nonatomic) id<UIPickerViewDelegate> delegate;	// G=0x352629b9; S=0x3523ff61; @synthesize=_delegate
@property(readonly, assign, nonatomic) int numberOfComponents;	// G=0x35241485; @synthesize=_numberOfComponents
@property(assign, nonatomic) BOOL showsSelectionIndicator;	// G=0x35262855; S=0x3526280d; 
+ (CGSize)defaultSizeForCurrentOrientation;	// 0x3523f235
+ (CGSize)sizeForCurrentOrientationThatFits:(CGSize)currentOrientationThatFits;	// 0x3523f875
+ (CGSize)sizeThatFits:(CGSize)fits forInterfaceOrientation:(int)interfaceOrientation;	// 0x3523f8cd
- (id)init;	// 0x35261ff5
- (id)initWithCoder:(id)coder;	// 0x35262029
- (id)initWithFrame:(CGRect)frame;	// 0x3523f74d
- (id)_createTableWithFrame:(CGRect)frame forComponent:(int)component;	// 0x35244579
- (id)_createViewForPickerPiece:(int)pickerPiece;	// 0x3524267d
- (int)_delegateNumberOfComponents;	// 0x35240b15
- (int)_delegateNumberOfRowsInComponent:(int)component;	// 0x35244c51
- (float)_delegateRowHeightForComponent:(int)component;	// 0x35244a3d
- (id)_delegateTitleForRow:(int)row forComponent:(int)component;	// 0x35262499
- (float)_delegateWidthForComponent:(int)component ofCount:(int)count withSizeLeft:(float)sizeLeft;	// 0x35242dc5
- (BOOL)_isLandscapeOrientation;	// 0x35242afd
- (id)_orientationImageSuffix;	// 0x352429cd
- (id)_popoverSuffix;	// 0x35242bfd
- (void)_populateArchivedSubviews:(id)subviews;	// 0x352620f9
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x35241519
- (CGRect)_selectionBarRectForHeight:(float)height;	// 0x35244a9d
- (id)_selectionBarSuffix;	// 0x35242bcd
- (void)_sendCheckedRow:(int)row inTableView:(id)tableView checked:(BOOL)checked;	// 0x3526240d
- (void)_sendSelectionChangedForComponent:(int)component;	// 0x3524ae41
- (void)_sendSelectionChangedFromTable:(id)table;	// 0x3524ad8d
- (void)_setUsesCheckedSelection:(BOOL)selection;	// 0x35262919
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x35240bf5
- (BOOL)_soundsEnabled;	// 0x3524a7e5
- (float)_tableRowHeight;	// 0x35261f9d
- (void)_updateSound;	// 0x35249d49
- (BOOL)_usesCheckSelection;	// 0x352471f1
- (BOOL)_usesCheckedSelection;	// 0x3526293d
- (float)_wheelShift;	// 0x35244255
// converted property getter: - (BOOL)allowsMultipleSelection;	// 0x35262905
- (int)columnForTableView:(id)tableView;	// 0x352456ed
- (id)createDividerWithFrame:(CGRect)frame;	// 0x35244295
// declared property getter: - (id)dataSource;	// 0x352629a9
- (void)dealloc;	// 0x3524de71
- (CGSize)defaultSize;	// 0x35261e7d
// declared property getter: - (id)delegate;	// 0x352629b9
- (void)didMoveToWindow;	// 0x35249d09
- (void)encodeWithCoder:(id)coder;	// 0x3526223d
- (id)imageForPickerPiece:(int)pickerPiece;	// 0x35242765
- (BOOL)isAccessibilityElementByDefault;	// 0x35340609
- (void)layoutSubviews;	// 0x352417ad
- (int)numberOfColumns;	// 0x352625c5
// declared property getter: - (int)numberOfComponents;	// 0x35241485
- (int)numberOfRowsInColumn:(int)column;	// 0x352625b5
- (int)numberOfRowsInComponent:(int)component;	// 0x35249015
- (id)pickerImageNamePrefix;	// 0x352429c1
- (void)reload;	// 0x35262371
- (void)reloadAllComponents;	// 0x35240a7d
- (void)reloadAllPickerPieces;	// 0x3524b855
- (void)reloadComponent:(int)component;	// 0x352623a1
- (void)reloadData;	// 0x35262381
- (void)reloadDataForColumn:(int)column;	// 0x35262391
- (CGSize)rowSizeForComponent:(int)component;	// 0x352624e1
- (double)scrollAnimationDuration;	// 0x35262485
- (void)selectRow:(int)row inColumn:(int)column animated:(BOOL)animated;	// 0x35262985
- (void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated;	// 0x35262961
- (int)selectedRowForColumn:(int)column;	// 0x35262951
- (int)selectedRowInComponent:(int)component;	// 0x352480c9
// converted property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x35262869
- (void)setAlpha:(float)alpha;	// 0x35262331
- (void)setBounds:(CGRect)bounds;	// 0x352626c9
// declared property setter: - (void)setDataSource:(id)source;	// 0x35240109
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3523ff61
- (void)setFrame:(CGRect)frame;	// 0x3523fa79
- (void)setHidden:(BOOL)hidden;	// 0x352622f1
- (void)setNeedsLayout;	// 0x3523fcd9
// declared property setter: - (void)setShowsSelectionIndicator:(BOOL)indicator;	// 0x3526280d
- (void)setSoundsEnabled:(BOOL)enabled;	// 0x35261fc9
// declared property getter: - (BOOL)showsSelectionIndicator;	// 0x35262855
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x352623ed
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x35245371
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x35244b8d
- (id)tableViewForColumn:(int)column;	// 0x3524a7c5
- (id)viewForRow:(int)row forComponent:(int)component;	// 0x35248c5d
- (NSRange)visibleRowsForColumn:(int)column;	// 0x35248c15
@end

