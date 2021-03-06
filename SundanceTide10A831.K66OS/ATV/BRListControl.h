/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSArray, ListAnimationDelegate, BRSelectionLozengeLayer, BRScrollControl, BRGridControl, NSTimer;

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
@property(retain) id datasource;	// G=0x2dc05d; S=0x2dbfd9; converted property
@property(assign) BOOL displaysSelectionWidget;	// G=0x2dbd61; S=0x2dbca5; converted property
@property(assign) BOOL firstDividerVisible;	// G=0x2dbc2d; S=0x2dbc01; converted property
@property(assign) BOOL lastItemCentered;	// G=0x2db585; S=0x2db4d1; converted property
@property(retain) NSArray *providers;	// G=0x2daeed; S=0x2dae9d; converted property
@property(readonly, assign) BRScrollControl *scrollControl;	// G=0x2dbb8d; @synthesize=_scroller
@property(assign) long selection;	// G=0x2db355; S=0x2db261; converted property
@property(assign) int selectionLozengeStyle;	// G=0x2db251; S=0x2daf91; converted property
@property(assign) BOOL showsDividers;	// G=0x2dbbf1; S=0x2dbba1; converted property
@property(assign) BOOL showsWidgetBackingLayer;	// G=0x2db4c1; S=0x2db45d; converted property
- (id)init;	// 0x2da819
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x2dc8e9
- (double)_calculateRepeatRate;	// 0x2dd959
- (long)_dataIndexFromScrollIndex:(long)scrollIndex;	// 0x2dcdf1
- (void)_ensureSelectionFocusable;	// 0x2dc87d
- (void)_enterCurrentSelection;	// 0x2ddb29
- (id)_findDividerProviderForProvider:(id)provider;	// 0x2dcd55
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x2dc989
- (void)_gridDataUpdated:(id)updated;	// 0x2dc0d5
- (void)_gridDataWillBeUpdated:(id)_gridData;	// 0x2dc08d
- (void)_hideFirstDividerInDividedProviders:(id)dividedProviders;	// 0x2dcaf5
- (void)_leaveCurrentSelection;	// 0x2ddc11
- (id)_legacyProvider;	// 0x2dccf1
- (void)_listScrollingCompleted:(id)completed;	// 0x2dd0ad
- (void)_listScrollingInitiated:(id)initiated;	// 0x2dd08d
- (float)_maxWidgetBottomGlowHeight;	// 0x2de0e1
- (float)_maxWidgetEdgeGlowWidth;	// 0x2de139
- (float)_maxWidgetTopGlowHeight;	// 0x2de089
- (void)_performScrollInitiationActivities;	// 0x2dcfe5
- (void)_performScrollTerminationActivities;	// 0x2dd049
- (void)_pokeTimerFired:(id)fired;	// 0x2dd911
- (void)_postSelectionFinalizedNotification;	// 0x2ddbc5
- (void)_refillList;	// 0x2dca25
- (void)_repeatDownTimerFired:(id)fired;	// 0x2dd691
- (void)_repeatUpTimerFired:(id)fired;	// 0x2dd7d1
- (void)_restoreCurrentSelectionIndex;	// 0x2dda09
- (void)_restorePersistentSavedSelection;	// 0x2dc39d
- (void)_saveCurrentSelectionIndex;	// 0x2dd9d1
- (BOOL)_scrollDown:(id)down;	// 0x2dc79d
- (long)_scrollIndexForDataIndex:(long)dataIndex;	// 0x2dcee1
- (BOOL)_scrollUp:(id)up;	// 0x2dc6bd
- (void)_setNewScrollIndex:(long)index;	// 0x2dca89
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x2dd429
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x2dd1a9
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x2dd0cd
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x2dd2e9
- (void)_stopRepeatTimer;	// 0x2dd61d
- (void)_updateGrid;	// 0x2dc24d
- (void)_updatePersistentSavedSelection;	// 0x2dc5b9
- (void)_updateProviders;	// 0x2dcb95
- (void)_updateScrollPosition;	// 0x2ddc51
- (void)_updateWidgetFrame;	// 0x2ddde5
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x2ddf89
- (id)accessibilityLabel;	// 0x2dbc6d
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x2dbd79
- (BOOL)brEventAction:(id)action;	// 0x2dab71
- (void)clearSavedSelection;	// 0x2db899
- (void)controlWasActivated;	// 0x2db5b5
- (void)controlWasDeactivated;	// 0x2db61d
- (void)controlWasFocused;	// 0x2db671
- (void)controlWasUnfocused;	// 0x2db6e9
- (long)dataCount;	// 0x2daefd
// converted property getter: - (id)datasource;	// 0x2dc05d
- (void)dealloc;	// 0x2daa69
// converted property getter: - (BOOL)displaysSelectionWidget;	// 0x2dbd61
// converted property getter: - (BOOL)firstDividerVisible;	// 0x2dbc2d
// converted property getter: - (BOOL)lastItemCentered;	// 0x2db585
- (void)layoutSubcontrols;	// 0x2db925
- (float)listHeightToMaximum:(float)maximum;	// 0x2db3d5
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x2daf41
// converted property getter: - (id)providers;	// 0x2daeed
- (void)reload;	// 0x2dbed5
- (void)removeDividerAtIndex:(long)index;	// 0x2dbdf9
- (void)removeDividers;	// 0x2dbe69
// declared property getter: - (id)scrollControl;	// 0x2dbb8d
- (id)selectedObject;	// 0x2db375
// converted property getter: - (long)selection;	// 0x2db355
// converted property getter: - (int)selectionLozengeStyle;	// 0x2db251
- (void)setBottomMargin:(float)margin;	// 0x2db8e5
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x2dbfd9
// converted property setter: - (void)setDisplaysSelectionWidget:(BOOL)widget;	// 0x2dbca5
// converted property setter: - (void)setFirstDividerVisible:(BOOL)visible;	// 0x2dbc01
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x2db4d1
- (void)setName:(id)name forProvider:(id)provider;	// 0x2dbc3d
- (void)setProvider:(id)provider;	// 0x2dae5d
// converted property setter: - (void)setProviders:(id)providers;	// 0x2dae9d
// converted property setter: - (void)setSelection:(long)selection;	// 0x2db261
// converted property setter: - (void)setSelectionLozengeStyle:(int)style;	// 0x2daf91
// converted property setter: - (void)setShowsDividers:(BOOL)dividers;	// 0x2dbba1
// converted property setter: - (void)setShowsWidgetBackingLayer:(BOOL)layer;	// 0x2db45d
- (void)setTopMargin:(float)margin;	// 0x2db905
// converted property getter: - (BOOL)showsDividers;	// 0x2dbbf1
// converted property getter: - (BOOL)showsWidgetBackingLayer;	// 0x2db4c1
- (void)updateSavedSelection;	// 0x2db8d5
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x2db775
@end

