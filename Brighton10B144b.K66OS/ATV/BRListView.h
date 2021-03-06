/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRGridView.h"
#import "AppleTV-Structs.h"
#import "BRRandomNavigationSupportP.h"

@class ListViewAnimationDelegate, BRBlueGlowSelectionLozengeLayer, NSTimer;

__attribute__((visibility("hidden")))
@interface BRListView : BRGridView <BRRandomNavigationSupportP> {
	BRBlueGlowSelectionLozengeLayer *_cursor;	// 208 = 0xd0
	ListViewAnimationDelegate *_animationDelegate;	// 212 = 0xd4
	NSTimer *_pokeTimer;	// 216 = 0xd8
	NSTimer *_delayTimer;	// 220 = 0xdc
	NSTimer *_repeatTimer;	// 224 = 0xe0
	double _repeatStart;	// 228 = 0xe4
	double _repeatAccumulator;	// 236 = 0xec
	long _scrollSelection;	// 244 = 0xf4
	long _savedSelection;	// 248 = 0xf8
	BOOL _turboEngaged;	// 252 = 0xfc
	BOOL _movingDown;	// 253 = 0xfd
	BOOL _selectionEntered;	// 254 = 0xfe
}
@property(retain) BRBlueGlowSelectionLozengeLayer *cursor;	// G=0x2ef7f1; S=0x2ef5b1; converted property
@property(assign) BOOL lastItemCentered;	// G=0x2ef995; S=0x2ef991; converted property
- (id)init;	// 0x2ef029
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x2f0c31
- (double)_calculateRepeatRate;	// 0x2f1739
- (unsigned)_countOfHeadersInRange:(NSRange)range;	// 0x2f07d1
- (long)_dataIndexFromGridIndex:(long)gridIndex;	// 0x2f1de1
- (id)_dataIndexPathFromGridIndex:(long)gridIndex sectionIndex:(long *)index;	// 0x2f1cbd
- (void)_ensureSelectionFocusable;	// 0x2f0bc5
- (void)_enterCurrentSelection;	// 0x2f17b1
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x2f0cbd
- (long)_gridIndexForDataIndex:(long)dataIndex;	// 0x2f1ea5
- (long)_gridIndexForDataIndexPath:(id)dataIndexPath;	// 0x2f1f69
- (void)_leaveCurrentSelection;	// 0x2f1851
- (void)_listScrollingCompleted:(id)completed;	// 0x2f1c69
- (void)_listScrollingInitiated:(id)initiated;	// 0x2f1c15
- (void)_performScrollInitiationActivities;	// 0x2f1bf1
- (void)_performScrollTerminationActivities;	// 0x2f1c11
- (void)_pokeTimerFired:(id)fired;	// 0x2f16f1
- (void)_postSelectionFinalizedNotification;	// 0x2f1885
- (void)_repeatDownTimerFired:(id)fired;	// 0x2f1451
- (void)_repeatUpTimerFired:(id)fired;	// 0x2f15a1
- (void)_restoreCurrentSelectionIndex;	// 0x2f1af1
- (void)_saveCurrentSelectionIndex;	// 0x2f1ad1
- (BOOL)_scrollDown:(id)down;	// 0x2f0ae1
- (BOOL)_scrollUp:(id)up;	// 0x2f09fd
- (void)_setNewScrollIndex:(long)index;	// 0x2f0d45
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x2f1231
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x2f0fb1
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x2f0ed1
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x2f10f1
- (void)_stopRepeatTimer;	// 0x2f13e1
- (void)_updateCursor:(id)cursor withCursorFrame:(CGRect)cursorFrame;	// 0x2f1a15
- (void)_updateCursorFrame;	// 0x2f1889
- (void)_updateScrollPosition;	// 0x2f0dc1
- (id)accessibilityControls;	// 0x2f06b5
- (id)accessibilityLabel;	// 0x2f0589
- (BOOL)brEventAction:(id)action;	// 0x2ef1c5
- (void)controlWasActivated;	// 0x2efa09
- (void)controlWasFocused;	// 0x2efa81
- (void)controlWasUnfocused;	// 0x2efae1
- (unsigned)countOfCells;	// 0x2f06d1
// converted property getter: - (id)cursor;	// 0x2ef7f1
- (void)dealloc;	// 0x2ef121
- (void)didFocusItemAtIndex:(long)index;	// 0x2f02f9
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x2f04d5
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x2f0461
- (void)didUnFocusItemAtIndex:(long)index;	// 0x2f03e9
- (void)focusDirectlyOnControl:(id)control;	// 0x2efcb1
- (float)heightForItemAtIndex:(long)index;	// 0x2f00b5
- (long)indexForItemID:(id)itemID;	// 0x2f003d
- (unsigned)indexInCellsOfObject:(id)object;	// 0x2f08fd
- (BOOL)isAccessibilityElement;	// 0x2f0621
- (id)itemAtIndex:(long)index;	// 0x2eff25
- (id)itemIDAtIndex:(long)index;	// 0x2effc5
// converted property getter: - (BOOL)lastItemCentered;	// 0x2ef995
- (void)layoutSubcontrols;	// 0x2efb55
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2f0575
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x2f0585
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2f0581
- (void)list:(id)list didUnFocusItemAtIndexPath:(id)indexPath;	// 0x2f057d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2f0569
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x2f0565
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x2f055d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x2f0559
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2f0549
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2f0551
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2f0555
- (void)list:(id)list willDisplayItemAtIndexPath:(id)indexPath;	// 0x2f056d
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x2f0571
- (void)list:(id)list willUnFocusItemAtIndexPath:(id)indexPath;	// 0x2f0579
- (float)listHeightToMaximum:(float)maximum;	// 0x2ef925
- (void)listWasActivated:(id)activated;	// 0x2f0561
- (long)numberOfSectionsInList:(id)list;	// 0x2f054d
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x2f0979
- (void)populateDataCache:(id)cache;	// 0x2efd0d
- (void)reload;	// 0x2ef4c5
- (void)reloadItemAtIndexPath:(id)indexPath;	// 0x2ef9d9
- (void)selectItemAtIndex:(long)index;	// 0x2efef1
- (void)selectRowAtIndexPath:(id)indexPath;	// 0x2ef811
- (long)selectedIndex;	// 0x2efee1
- (id)selectedIndexPath;	// 0x2ef905
- (long)selection;	// 0x2ef801
// converted property setter: - (void)setCursor:(id)cursor;	// 0x2ef5b1
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x2ef991
- (id)visibleRowAtIndexPath:(id)indexPath;	// 0x2ef999
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x2ef9c9
- (void)willDisplayItemAtIndex:(long)index;	// 0x2f01f1
- (long)willFocusItemAtIndex:(long)index;	// 0x2f026d
- (void)willUnFocusItemAtIndex:(long)index;	// 0x2f0371
@end

