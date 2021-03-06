/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "NSCoding.h"
#import "UITableViewDataSource.h"
#import "UIView.h"

@class NSMutableArray;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;

@interface UIPickerView : UIView <UITableViewDelegate, NSCoding, UITableViewDataSource> {
	NSMutableArray *_tables;	// 84 = 0x54
	UIView *_topFrame;	// 88 = 0x58
	NSMutableArray *_dividers;	// 92 = 0x5c
	NSMutableArray *_selectionBars;	// 96 = 0x60
	id<UIPickerViewDataSource> _dataSource;	// 100 = 0x64
	id<UIPickerViewDelegate> _delegate;	// 104 = 0x68
	UIView *_backgroundView;	// 108 = 0x6c
	int _numberOfComponents;	// 112 = 0x70
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToAttributedTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned delegateRespondsToCheckableForRow : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
		unsigned usesCheckedSelection : 1;
		unsigned skipsBackground : 1;
	} _pickerViewFlags;	// 116 = 0x74
	BOOL _isInLayoutSubviews;	// 118 = 0x76
}
@property(assign, nonatomic, setter=_setInLayoutSubviews:) BOOL _isInLayoutSubviews;	// G=0x3470a8cd; S=0x3470a8dd; @synthesize
@property(assign) BOOL allowsMultipleSelection;	// G=0x3470a795; S=0x3470a6f9; converted property
@property(assign, nonatomic) id<UIPickerViewDataSource> dataSource;	// G=0x3470a8ad; S=0x346e0609; @synthesize=_dataSource
@property(assign, nonatomic) id<UIPickerViewDelegate> delegate;	// G=0x3470a8bd; S=0x346e0795; @synthesize=_delegate
@property(readonly, assign, nonatomic) int numberOfComponents;	// G=0x346f5ba5; @synthesize=_numberOfComponents
@property(assign, nonatomic) BOOL showsSelectionIndicator;	// G=0x3470a6e1; S=0x3470a6a1; 
+ (CGSize)defaultSizeForCurrentOrientation;	// 0x346ec5a1
+ (CGSize)sizeForCurrentOrientationThatFits:(CGSize)currentOrientationThatFits;	// 0x346ecc29
+ (CGSize)sizeThatFits:(CGSize)fits forInterfaceOrientation:(int)interfaceOrientation;	// 0x346ecc81
- (id)init;	// 0x34709bfd
- (id)initWithCoder:(id)coder;	// 0x346ddd71
- (id)initWithFrame:(CGRect)frame;	// 0x346ecaf5
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x34709ecd
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x34709ed1
- (id)_createTableWithFrame:(CGRect)frame forComponent:(int)component;	// 0x346f1cc5
- (id)_createViewForPickerPiece:(int)pickerPiece;	// 0x346ef7c9
- (id)_delegateAttributedTitleForRow:(int)row forComponent:(int)component;	// 0x3470a009
- (int)_delegateNumberOfComponents;	// 0x346ee501
- (int)_delegateNumberOfRowsInComponent:(int)component;	// 0x346f23a9
- (float)_delegateRowHeightForComponent:(int)component;	// 0x346f2199
- (id)_delegateTitleForRow:(int)row forComponent:(int)component;	// 0x34709fbd
- (float)_delegateWidthForComponent:(int)component ofCount:(int)count withSizeLeft:(float)sizeLeft;	// 0x346eff25
- (BOOL)_drawsBackground;	// 0x346ef7ad
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x34709ed5
// declared property getter: - (BOOL)_isInLayoutSubviews;	// 0x3470a8cd
- (BOOL)_isLandscapeOrientation;	// 0x346efc5d
- (id)_orientationImageSuffix;	// 0x346efb2d
- (id)_popoverSuffix;	// 0x346efd65
- (void)_populateArchivedSubviews:(id)subviews;	// 0x34709c2d
- (void)_resetSelectionOfTables;	// 0x3470a1c5
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x346f55f9
- (CGRect)_selectionBarRectForHeight:(float)height;	// 0x346f2211
- (id)_selectionBarSuffix;	// 0x346efd35
- (void)_sendCheckedRow:(int)row inTableView:(id)tableView checked:(BOOL)checked;	// 0x34709f25
- (void)_sendSelectionChangedForComponent:(int)component;	// 0x346f651d
- (void)_sendSelectionChangedFromTable:(id)table;	// 0x346f6425
- (void)_setDrawsBackground:(BOOL)background;	// 0x3470a7e5
// declared property setter: - (void)_setInLayoutSubviews:(BOOL)layoutSubviews;	// 0x3470a8dd
- (void)_setUsesCheckedSelection:(BOOL)selection;	// 0x3470a7ad
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x346f6a99
- (BOOL)_soundsEnabled;	// 0x346ee875
- (float)_tableRowHeight;	// 0x34709bcd
- (void)_updateSound;	// 0x346de019
- (void)_updateWithOldSize:(CGSize)oldSize newSize:(CGSize)size;	// 0x3470a2ad
- (BOOL)_usesCheckSelection;	// 0x346f5039
- (BOOL)_usesCheckedSelection;	// 0x3470a7d1
- (float)_wheelShift;	// 0x346f19a9
// converted property getter: - (BOOL)allowsMultipleSelection;	// 0x3470a795
- (int)columnForTableView:(id)tableView;	// 0x346f2ff9
- (id)createDividerWithFrame:(CGRect)frame;	// 0x346f19e9
// declared property getter: - (id)dataSource;	// 0x3470a8ad
- (void)dealloc;	// 0x346e345d
- (CGSize)defaultSize;	// 0x34709aad
// declared property getter: - (id)delegate;	// 0x3470a8bd
- (void)didMoveToWindow;	// 0x346f67a1
- (void)encodeWithCoder:(id)coder;	// 0x34709db5
- (id)imageForPickerPiece:(int)pickerPiece;	// 0x346ef8b1
- (BOOL)isAccessibilityElementByDefault;	// 0x347db229
- (void)layoutSubviews;	// 0x346eea35
- (int)numberOfColumns;	// 0x3470a1b5
// declared property getter: - (int)numberOfComponents;	// 0x346f5ba5
- (int)numberOfRowsInColumn:(int)column;	// 0x3470a1a5
- (int)numberOfRowsInComponent:(int)component;	// 0x3470a141
- (id)pickerImageNamePrefix;	// 0x346efb21
- (void)reload;	// 0x34709e99
- (void)reloadAllComponents;	// 0x346ee459
- (void)reloadAllPickerPieces;	// 0x346ee195
- (void)reloadComponent:(int)component;	// 0x346f5ded
- (void)reloadData;	// 0x34709ea9
- (void)reloadDataForColumn:(int)column;	// 0x34709ebd
- (CGSize)rowSizeForComponent:(int)component;	// 0x3470a059
- (double)scrollAnimationDuration;	// 0x34709fa1
- (void)selectRow:(int)row inColumn:(int)column animated:(BOOL)animated;	// 0x3470a885
- (void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated;	// 0x346f5571
- (int)selectedRowForColumn:(int)column;	// 0x3470a871
- (int)selectedRowInComponent:(int)component;	// 0x346ee8bd
// converted property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x3470a6f9
- (void)setAlpha:(float)alpha;	// 0x346de0d9
- (void)setBounds:(CGRect)bounds;	// 0x3470a4f9
// declared property setter: - (void)setDataSource:(id)source;	// 0x346e0609
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x346e0795
- (void)setFrame:(CGRect)frame;	// 0x346dde81
- (void)setHidden:(BOOL)hidden;	// 0x346ddfd9
- (void)setNeedsLayout;	// 0x346e0749
// declared property setter: - (void)setShowsSelectionIndicator:(BOOL)indicator;	// 0x3470a6a1
- (void)setSoundsEnabled:(BOOL)enabled;	// 0x346ee891
// declared property getter: - (BOOL)showsSelectionIndicator;	// 0x3470a6e1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34709ef5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x346f2bc5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x346f22e1
- (id)tableViewForColumn:(int)column;	// 0x346f4819
- (id)viewForRow:(int)row forComponent:(int)component;	// 0x346f5c39
- (NSRange)visibleRowsForColumn:(int)column;	// 0x346f5bed
@end

