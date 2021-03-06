/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRProviderGroup, NSString;

@interface BRGridControl : BRControl {
@private
	BRProviderGroup *_group;	// 48 = 0x30
	BRControl *_requester;	// 52 = 0x34
	NSRange _range;	// 56 = 0x38
	float _lastGapHeight;	// 64 = 0x40
	double _heightToRange;	// 68 = 0x44
	double _allRowsHeight;	// 76 = 0x4c
	float _singleControlHeight;	// 84 = 0x54
	BOOL _allRowsAreSameHeight;	// 88 = 0x58
	float _allColumnWidths;	// 92 = 0x5c
	long _columnCount;	// 96 = 0x60
	float _horizontalGap;	// 100 = 0x64
	float _verticalGap;	// 104 = 0x68
	float _leftMargin;	// 108 = 0x6c
	float _rightMargin;	// 112 = 0x70
	float _bottomMargin;	// 116 = 0x74
	float _bottomMarginFactor;	// 120 = 0x78
	float _topMargin;	// 124 = 0x7c
	float _topMarginFactor;	// 128 = 0x80
	BOOL _wrapsNavigation;	// 132 = 0x84
	BOOL _explicitlyAcceptsFocus;	// 133 = 0x85
	NSString *_accessibilityLabel;	// 136 = 0x88
}
@property(retain) NSString *accessibilityLabel;	// G=0x330701d9; S=0x33070195; converted property
@property(assign) BOOL allRowsAreSameHeight;	// G=0x3306fb31; S=0x3306fb21; converted property
@property(assign) long columnCount;	// G=0x3306f2c9; S=0x3306f295; converted property
@property(assign) float horizontalGap;	// G=0x3306f321; S=0x3306f2d9; converted property
@property(assign) float leftMargin;	// G=0x3306f40d; S=0x3306f3cd; converted property
@property(retain) id providerRequester;	// G=0x3306f47d; S=0x3306f46d; converted property
@property(retain) id providers;	// G=0x3306f1e5; S=0x3306efdd; converted property
@property(assign) float rightMargin;	// G=0x3306f45d; S=0x3306f41d; converted property
@property(assign) float verticalGap;	// G=0x3306f389; S=0x3306f331; converted property
@property(assign) BOOL wrapsNavigation;	// G=0x3306f9e9; S=0x3306f9d9; converted property
- (id)init;	// 0x3306ee25
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x33071675
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x3307122d
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x33071309
- (id)_controlsInRange:(NSRange)range;	// 0x33071501
- (id)_createControlsInRange:(NSRange)range;	// 0x33071435
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x33070cc1
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x33070e11
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x33070ec5
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x33071011
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x3307117d
- (double)_heightToRange;	// 0x33070ad1
- (long)_indexOfFocusedControl;	// 0x330713d9
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x33070bb9
- (void)_providerDataSetChanged:(id)changed;	// 0x330717f5
- (void)_providerModified:(id)modified;	// 0x33071865
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x33070f69
- (void)_sceneBoundsChanged:(id)changed;	// 0x330719cd
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x330708c9
- (double)_totalHeight;	// 0x330709d9
- (void)_updateControlsInRange:(NSRange)range controls:(id)controls;	// 0x330716f1
- (id)accessibilityControls;	// 0x330701e9
// converted property getter: - (id)accessibilityLabel;	// 0x330701d9
// converted property getter: - (BOOL)allRowsAreSameHeight;	// 0x3306fb31
- (BOOL)brEventAction:(id)action;	// 0x3306f681
// converted property getter: - (long)columnCount;	// 0x3306f2c9
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x33070365
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x330705c9
- (CGRect)controlFrameAtIndex:(long)index;	// 0x330704d1
- (unsigned)countOfCells;	// 0x33070205
- (long)dataCount;	// 0x3306f205
- (void)dealloc;	// 0x3306ef0d
- (void)focusControlAtIndex:(long)index;	// 0x330703a9
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x3306f7a9
- (float)heightOfControlAtIndex:(long)index;	// 0x3306f64d
- (float)heightToMaximum:(float)maximum;	// 0x3306f531
// converted property getter: - (float)horizontalGap;	// 0x3306f321
- (unsigned)indexInCellsOfObject:(id)object;	// 0x33070215
- (id)initialFocus;	// 0x33070295
- (void)layoutSubcontrols;	// 0x3306fb51
// converted property getter: - (float)leftMargin;	// 0x3306f40d
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x33070255
- (float)positionOfColumn:(long)column;	// 0x3306f5f5
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x3306f225
// converted property getter: - (id)providerRequester;	// 0x3306f47d
// converted property getter: - (id)providers;	// 0x3306f1e5
- (void)reloadData;	// 0x33070705
// converted property getter: - (float)rightMargin;	// 0x3306f45d
- (long)rowCount;	// 0x3306f245
- (void)setAcceptsFocus:(BOOL)focus;	// 0x3307069d
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x33070195
- (void)setAllColumnWidths:(float)widths;	// 0x3306f285
// converted property setter: - (void)setAllRowsAreSameHeight:(BOOL)height;	// 0x3306fb21
- (void)setBottomMargin:(float)margin;	// 0x3306f9f9
// converted property setter: - (void)setColumnCount:(long)count;	// 0x3306f295
// converted property setter: - (void)setHorizontalGap:(float)gap;	// 0x3306f2d9
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x3306f3cd
- (void)setProvider:(id)provider;	// 0x3306ef9d
// converted property setter: - (void)setProviderRequester:(id)requester;	// 0x3306f46d
// converted property setter: - (void)setProviders:(id)providers;	// 0x3306efdd
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x3306f41d
- (void)setTopMargin:(float)margin;	// 0x3306fa8d
// converted property setter: - (void)setVerticalGap:(float)gap;	// 0x3306f331
- (void)setVerticalMargins:(float)margins;	// 0x3306f399
// converted property setter: - (void)setWrapsNavigation:(BOOL)navigation;	// 0x3306f9d9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33070099
// converted property getter: - (float)verticalGap;	// 0x3306f389
- (id)visibleControlAtIndex:(long)index;	// 0x3306f4e5
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x3306f48d
- (NSRange)visibleRange;	// 0x3306f4c9
- (void)visibleScrollRectChanged;	// 0x3306fb41
// converted property getter: - (BOOL)wrapsNavigation;	// 0x3306f9e9
@end

