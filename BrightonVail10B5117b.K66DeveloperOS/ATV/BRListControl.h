/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class ListAnimationDelegate, BRSelectionLozengeLayer, NSTimer, NSArray, BRScrollControl, BRGridControl;

__attribute__((visibility("hidden")))
@interface BRListControl : BRControl {
	NSArray *_providers;	// 84 = 0x54
	BRSelectionLozengeLayer *_topWidget;	// 88 = 0x58
	BRSelectionLozengeLayer *_bottomWidget;	// 92 = 0x5c
	BRScrollControl *_scroller;	// 96 = 0x60
	BRGridControl *_list;	// 100 = 0x64
	ListAnimationDelegate *_animationDelegate;	// 104 = 0x68
	NSTimer *_pokeTimer;	// 108 = 0x6c
	NSTimer *_delayTimer;	// 112 = 0x70
	NSTimer *_repeatTimer;	// 116 = 0x74
	double _repeatStart;	// 120 = 0x78
	double _repeatAccumulator;	// 128 = 0x80
	long _scrollSelection;	// 136 = 0x88
	long _savedSelection;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	BOOL _handlingProviderChange;	// 148 = 0x94
	BOOL _showsDividers;	// 149 = 0x95
	BOOL _firstDividerVisible;	// 150 = 0x96
	BOOL _showBackingLayer;	// 151 = 0x97
	BOOL _selectionEntered;	// 152 = 0x98
	BOOL _widgetHidden;	// 153 = 0x99
	BOOL _needsUpdate;	// 154 = 0x9a
	BOOL _turboEngaged;	// 155 = 0x9b
	BOOL _movingDown;	// 156 = 0x9c
}
@property(retain) id datasource;	// G=0x2e5a3d; S=0x2e59b9; converted property
@property(assign) BOOL displaysSelectionWidget;	// G=0x2e5741; S=0x2e5685; converted property
@property(assign) BOOL firstDividerVisible;	// G=0x2e560d; S=0x2e55e1; converted property
@property(assign) BOOL lastItemCentered;	// G=0x2e4f65; S=0x2e4eb1; converted property
@property(retain) NSArray *providers;	// G=0x2e48cd; S=0x2e487d; converted property
@property(readonly, assign) BRScrollControl *scrollControl;	// G=0x2e556d; @synthesize=_scroller
@property(assign) long selection;	// G=0x2e4d35; S=0x2e4c41; converted property
@property(assign) int selectionLozengeStyle;	// G=0x2e4c31; S=0x2e4971; converted property
@property(assign) BOOL showsDividers;	// G=0x2e55d1; S=0x2e5581; converted property
@property(assign) BOOL showsWidgetBackingLayer;	// G=0x2e4ea1; S=0x2e4e3d; converted property
- (id)init;	// 0x2e41f9
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x2e62c9
- (double)_calculateRepeatRate;	// 0x2e7339
- (long)_dataIndexFromScrollIndex:(long)scrollIndex;	// 0x2e67d1
- (void)_ensureSelectionFocusable;	// 0x2e625d
- (void)_enterCurrentSelection;	// 0x2e7509
- (id)_findDividerProviderForProvider:(id)provider;	// 0x2e6735
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x2e6369
- (void)_gridDataUpdated:(id)updated;	// 0x2e5ab5
- (void)_gridDataWillBeUpdated:(id)_gridData;	// 0x2e5a6d
- (void)_hideFirstDividerInDividedProviders:(id)dividedProviders;	// 0x2e64d5
- (void)_leaveCurrentSelection;	// 0x2e75f1
- (id)_legacyProvider;	// 0x2e66d1
- (void)_listScrollingCompleted:(id)completed;	// 0x2e6a8d
- (void)_listScrollingInitiated:(id)initiated;	// 0x2e6a6d
- (float)_maxWidgetBottomGlowHeight;	// 0x2e7ac1
- (float)_maxWidgetEdgeGlowWidth;	// 0x2e7b19
- (float)_maxWidgetTopGlowHeight;	// 0x2e7a69
- (void)_performScrollInitiationActivities;	// 0x2e69c5
- (void)_performScrollTerminationActivities;	// 0x2e6a29
- (void)_pokeTimerFired:(id)fired;	// 0x2e72f1
- (void)_postSelectionFinalizedNotification;	// 0x2e75a5
- (void)_refillList;	// 0x2e6405
- (void)_repeatDownTimerFired:(id)fired;	// 0x2e7071
- (void)_repeatUpTimerFired:(id)fired;	// 0x2e71b1
- (void)_restoreCurrentSelectionIndex;	// 0x2e73e9
- (void)_restorePersistentSavedSelection;	// 0x2e5d7d
- (void)_saveCurrentSelectionIndex;	// 0x2e73b1
- (BOOL)_scrollDown:(id)down;	// 0x2e617d
- (long)_scrollIndexForDataIndex:(long)dataIndex;	// 0x2e68c1
- (BOOL)_scrollUp:(id)up;	// 0x2e609d
- (void)_setNewScrollIndex:(long)index;	// 0x2e6469
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x2e6e09
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x2e6b89
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x2e6aad
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x2e6cc9
- (void)_stopRepeatTimer;	// 0x2e6ffd
- (void)_updateGrid;	// 0x2e5c2d
- (void)_updatePersistentSavedSelection;	// 0x2e5f99
- (void)_updateProviders;	// 0x2e6575
- (void)_updateScrollPosition;	// 0x2e7631
- (void)_updateWidgetFrame;	// 0x2e77c5
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x2e7969
- (id)accessibilityLabel;	// 0x2e564d
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x2e5759
- (BOOL)brEventAction:(id)action;	// 0x2e4551
- (void)clearSavedSelection;	// 0x2e5279
- (void)controlWasActivated;	// 0x2e4f95
- (void)controlWasDeactivated;	// 0x2e4ffd
- (void)controlWasFocused;	// 0x2e5051
- (void)controlWasUnfocused;	// 0x2e50c9
- (long)dataCount;	// 0x2e48dd
// converted property getter: - (id)datasource;	// 0x2e5a3d
- (void)dealloc;	// 0x2e4449
// converted property getter: - (BOOL)displaysSelectionWidget;	// 0x2e5741
// converted property getter: - (BOOL)firstDividerVisible;	// 0x2e560d
// converted property getter: - (BOOL)lastItemCentered;	// 0x2e4f65
- (void)layoutSubcontrols;	// 0x2e5305
- (float)listHeightToMaximum:(float)maximum;	// 0x2e4db5
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x2e4921
// converted property getter: - (id)providers;	// 0x2e48cd
- (void)reload;	// 0x2e58b5
- (void)removeDividerAtIndex:(long)index;	// 0x2e57d9
- (void)removeDividers;	// 0x2e5849
// declared property getter: - (id)scrollControl;	// 0x2e556d
- (id)selectedObject;	// 0x2e4d55
// converted property getter: - (long)selection;	// 0x2e4d35
// converted property getter: - (int)selectionLozengeStyle;	// 0x2e4c31
- (void)setBottomMargin:(float)margin;	// 0x2e52c5
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x2e59b9
// converted property setter: - (void)setDisplaysSelectionWidget:(BOOL)widget;	// 0x2e5685
// converted property setter: - (void)setFirstDividerVisible:(BOOL)visible;	// 0x2e55e1
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x2e4eb1
- (void)setName:(id)name forProvider:(id)provider;	// 0x2e561d
- (void)setProvider:(id)provider;	// 0x2e483d
// converted property setter: - (void)setProviders:(id)providers;	// 0x2e487d
// converted property setter: - (void)setSelection:(long)selection;	// 0x2e4c41
// converted property setter: - (void)setSelectionLozengeStyle:(int)style;	// 0x2e4971
// converted property setter: - (void)setShowsDividers:(BOOL)dividers;	// 0x2e5581
// converted property setter: - (void)setShowsWidgetBackingLayer:(BOOL)layer;	// 0x2e4e3d
- (void)setTopMargin:(float)margin;	// 0x2e52e5
// converted property getter: - (BOOL)showsDividers;	// 0x2e55d1
// converted property getter: - (BOOL)showsWidgetBackingLayer;	// 0x2e4ea1
- (void)updateSavedSelection;	// 0x2e52b5
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x2e5155
@end

