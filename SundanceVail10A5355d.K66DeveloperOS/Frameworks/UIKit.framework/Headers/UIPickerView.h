/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewDelegate.h"
#import "NSCoding.h"
#import "UITableViewDataSource.h"
#import "UIView.h"
#import "UIKit-Structs.h"

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
@property(assign, nonatomic, setter=_setInLayoutSubviews:) BOOL _isInLayoutSubviews;	// G=0x33b7e8a1; S=0x33b7e8b1; @synthesize
@property(assign) BOOL allowsMultipleSelection;	// G=0x33b7e68d; S=0x33b7e5f1; converted property
@property(assign, nonatomic) id<UIPickerViewDataSource> dataSource;	// G=0x33b7e881; S=0x33b64581; @synthesize=_dataSource
@property(assign, nonatomic) id<UIPickerViewDelegate> delegate;	// G=0x33b7e891; S=0x33b643dd; @synthesize=_delegate
@property(readonly, assign, nonatomic) int numberOfComponents;	// G=0x33b649bd; @synthesize=_numberOfComponents
@property(assign, nonatomic) BOOL showsSelectionIndicator;	// G=0x33b7e5d9; S=0x33b7e599; 
+ (CGSize)defaultSizeForCurrentOrientation;	// 0x33b63c99
+ (CGSize)sizeForCurrentOrientationThatFits:(CGSize)currentOrientationThatFits;	// 0x33b64131
+ (CGSize)sizeThatFits:(CGSize)fits forInterfaceOrientation:(int)interfaceOrientation;	// 0x33b64189
- (id)init;	// 0x33b7da5d
- (id)initWithCoder:(id)coder;	// 0x33b7da91
- (id)initWithFrame:(CGRect)frame;	// 0x33b63ffd
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x33b7df0d
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x33b7df11
- (id)_createTableWithFrame:(CGRect)frame forComponent:(int)component;	// 0x33b66395
- (id)_createViewForPickerPiece:(int)pickerPiece;	// 0x33b65921
- (id)_delegateAttributedTitleForRow:(int)row forComponent:(int)component;	// 0x33b7e049
- (int)_delegateNumberOfComponents;	// 0x33b647c9
- (int)_delegateNumberOfRowsInComponent:(int)component;	// 0x33b66a41
- (float)_delegateRowHeightForComponent:(int)component;	// 0x33b66861
- (id)_delegateTitleForRow:(int)row forComponent:(int)component;	// 0x33b7dffd
- (float)_delegateWidthForComponent:(int)component ofCount:(int)count withSizeLeft:(float)sizeLeft;	// 0x33b65fe5
- (BOOL)_drawsBackground;	// 0x33b7e765
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x33b7df15
// declared property getter: - (BOOL)_isInLayoutSubviews;	// 0x33b7e8a1
- (BOOL)_isLandscapeOrientation;	// 0x33b65d1d
- (id)_orientationImageSuffix;	// 0x33b65bed
- (id)_popoverSuffix;	// 0x33b65e25
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33b7db9d
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x33b64a05
- (CGRect)_selectionBarRectForHeight:(float)height;	// 0x33b668b1
- (int)_selectionBarRowInComponent:(int)component;	// 0x33b7e77d
- (id)_selectionBarSuffix;	// 0x33b65df5
- (void)_sendCheckedRow:(int)row inTableView:(id)tableView checked:(BOOL)checked;	// 0x33b7df65
- (void)_sendSelectionChangedForComponent:(int)component;	// 0x33b6985d
- (void)_sendSelectionChangedFromTable:(id)table;	// 0x33b69765
- (void)_setDrawsBackground:(BOOL)background;	// 0x33b7e6dd
// declared property setter: - (void)_setInLayoutSubviews:(BOOL)layoutSubviews;	// 0x33b7e8b1
- (void)_setUsesCheckedSelection:(BOOL)selection;	// 0x33b7e6a5
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x33b64821
- (BOOL)_soundsEnabled;	// 0x33b692fd
- (float)_tableRowHeight;	// 0x33b7d9fd
- (void)_updateSound;	// 0x33b68c49
- (void)_updateWithOldSize:(CGSize)oldSize newSize:(CGSize)size;	// 0x33b7e1a5
- (BOOL)_usesCheckSelection;	// 0x33b68481
- (BOOL)_usesCheckedSelection;	// 0x33b7e6c9
- (float)_wheelShift;	// 0x33b66079
// converted property getter: - (BOOL)allowsMultipleSelection;	// 0x33b7e68d
- (int)columnForTableView:(id)tableView;	// 0x33b67545
- (id)createDividerWithFrame:(CGRect)frame;	// 0x33b660b9
// declared property getter: - (id)dataSource;	// 0x33b7e881
- (void)dealloc;	// 0x33b6badd
- (CGSize)defaultSize;	// 0x33b7d8dd
// declared property getter: - (id)delegate;	// 0x33b7e891
- (void)didMoveToWindow;	// 0x33b68c09
- (void)encodeWithCoder:(id)coder;	// 0x33b7dd25
- (id)imageForPickerPiece:(int)pickerPiece;	// 0x33b65a09
- (BOOL)isAccessibilityElementByDefault;	// 0x33c62f01
- (void)layoutSubviews;	// 0x33b64ad5
- (int)numberOfColumns;	// 0x33b7e195
// declared property getter: - (int)numberOfComponents;	// 0x33b649bd
- (int)numberOfRowsInColumn:(int)column;	// 0x33b7e185
- (int)numberOfRowsInComponent:(int)component;	// 0x33b68b39
- (id)pickerImageNamePrefix;	// 0x33b65be1
- (void)reload;	// 0x33b7de89
- (void)reloadAllComponents;	// 0x33b64721
- (void)reloadAllPickerPieces;	// 0x33b6a03d
- (void)reloadComponent:(int)component;	// 0x33b7debd
- (void)reloadData;	// 0x33b7de99
- (void)reloadDataForColumn:(int)column;	// 0x33b7dead
- (CGSize)rowSizeForComponent:(int)component;	// 0x33b7e099
- (double)scrollAnimationDuration;	// 0x33b7dfe1
- (void)selectRow:(int)row inColumn:(int)column animated:(BOOL)animated;	// 0x33b7e859
- (void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated;	// 0x33b7e7f5
- (int)selectedRowForColumn:(int)column;	// 0x33b7e7e5
- (int)selectedRowInComponent:(int)component;	// 0x33b68619
// converted property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x33b7e5f1
- (void)setAlpha:(float)alpha;	// 0x33b7de49
- (void)setBounds:(CGRect)bounds;	// 0x33b7e3f1
// declared property setter: - (void)setDataSource:(id)source;	// 0x33b64581
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33b643dd
- (void)setFrame:(CGRect)frame;	// 0x33b64239
- (void)setHidden:(BOOL)hidden;	// 0x33b7de09
- (void)setNeedsLayout;	// 0x33b64391
// declared property setter: - (void)setShowsSelectionIndicator:(BOOL)indicator;	// 0x33b7e599
- (void)setSoundsEnabled:(BOOL)enabled;	// 0x33b7da31
// declared property getter: - (BOOL)showsSelectionIndicator;	// 0x33b7e5d9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33b7df35
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33b67111
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33b6697d
- (id)tableViewForColumn:(int)column;	// 0x33b692dd
- (id)viewForRow:(int)row forComponent:(int)component;	// 0x33b68a41
- (NSRange)visibleRowsForColumn:(int)column;	// 0x33b689f5
@end
