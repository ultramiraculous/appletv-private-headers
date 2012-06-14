/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"

@class NSMutableArray, NSDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface BRMediaShelfView : BRControl <BRContainerViewCell> {
	id _dataSource;	// 80 = 0x50
	id _delegate;	// 84 = 0x54
	NSDictionary *_controlActions;	// 88 = 0x58
	NSDictionary *_titleActions;	// 92 = 0x5c
	BOOL _centered;	// 96 = 0x60
	BOOL _scrollable;	// 97 = 0x61
	NSRange _flatRange;	// 100 = 0x64
	CATransform3D _leftTransform;	// 108 = 0x6c
	CATransform3D _rightTransform;	// 172 = 0xac
	NSMutableArray *_cells;	// 236 = 0xec
	NSMutableArray *_titles;	// 240 = 0xf0
	NSTimer *_scrollTimer;	// 244 = 0xf4
	BOOL _scrolling;	// 248 = 0xf8
	int _collapsedState;	// 252 = 0xfc
	BOOL _ordered;	// 256 = 0x100
	BOOL _needToReloadDataOnActivate;	// 257 = 0x101
	long _numberOfItems;	// 260 = 0x104
	NSRange _refillVisibleRange;	// 264 = 0x108
	BOOL _restoreLastFocus;	// 272 = 0x110
	NSTimer *_forceDisplayTimer;	// 276 = 0x114
	id _loadCompletionBlock;	// 280 = 0x118
	BOOL _okToLoad;	// 284 = 0x11c
	BOOL _displayComplete;	// 285 = 0x11d
	BOOL _explicitlyAcceptsFocus;	// 286 = 0x11e
	long _columnCount;	// 288 = 0x120
	XXStruct_qlg9jA _horizontalGap;	// 292 = 0x124
	float _coverflowMargin;	// 296 = 0x128
	BOOL antialiasCoverflowPosters;	// 300 = 0x12c
}
@property(assign, nonatomic) BOOL antialiasCoverflowPosters;	// G=0x269fe1; S=0x269ff1; @synthesize
@property(assign) BOOL centered;	// G=0x269309; S=0x2692dd; converted property
@property(assign) int collapsedState;	// G=0x269819; S=0x2697f1; converted property
@property(assign, nonatomic) long columnCount;	// G=0x269f95; S=0x26901d; @synthesize=_columnCount
@property(assign, nonatomic) float coverflowMargin;	// G=0x269fc1; S=0x269fd1; @synthesize=_coverflowMargin
@property(retain) id dataSource;	// G=0x2691b9; S=0x269105; converted property
@property(assign) id delegate;	// G=0x2691d9; S=0x2691c9; converted property
@property(retain) id focusedIndexPath;	// G=0x269675; S=0x2696f1; converted property
@property(assign, nonatomic) XXStruct_qlg9jA horizontalGap;	// G=0x269fa5; S=0x269049; @synthesize=_horizontalGap
@property(assign) BOOL ordered;	// G=0x269345; S=0x269319; converted property
@property(assign) BOOL scrollable;	// G=0x2692cd; S=0x269285; converted property
- (id)init;	// 0x268a81
- (long)_columnCount;	// 0x26a0e1
- (id)_controlActions;	// 0x26bd79
- (id)_controlsInRange:(NSRange)range oldRange:(NSRange)range2;	// 0x26c3a1
- (float)_coverflowMargin;	// 0x26a1c9
- (id)_createControlAtIndex:(int)index;	// 0x26c11d
- (id)_createControlsInRange:(NSRange)range;	// 0x26c4fd
- (void)_displayCellsForce:(BOOL)force;	// 0x26c979
- (NSRange)_dividedRangeForRange:(NSRange)range andDirection:(int)direction;	// 0x26cb9d
- (unsigned)_dividerCountInRange:(NSRange)range;	// 0x26ccc5
- (unsigned)_firstScrollableIndex;	// 0x26a335
- (void)_focusChanged:(id)changed;	// 0x26a275
- (void)_forceDisplayTimerFired:(id)fired;	// 0x26cb79
- (float)_horizontalGap;	// 0x26a141
- (long)_indexFromIndexPath:(id)indexPath;	// 0x26d18d
- (id)_indexPathFromIndex:(long)index sectionIndex:(long *)index2;	// 0x26d255
- (BOOL)_isDividerAtIndex:(long)index;	// 0x26cd11
- (unsigned)_lastScrollableIndex;	// 0x26a2fd
- (void)_layoutShelfContents;	// 0x26a8c1
- (BOOL)_leftButtonEvent;	// 0x26a41d
- (void)_loadControlWithStartIndex:(long)startIndex start:(BOOL)start;	// 0x26c681
- (void)_loadControlsInRange:(NSRange)range;	// 0x26c5dd
- (unsigned)_nextFocusableIndexInDirection:(int)direction;	// 0x26a345
- (long)_numberOfItems;	// 0x26d099
- (void)_purgeControls;	// 0x26a091
- (void)_refillShelf;	// 0x26a001
- (void)_reloadTitles;	// 0x26cda9
- (void)_removeSectionHeaderTitleControls;	// 0x26cff1
- (BOOL)_rightButtonEvent;	// 0x26a3bd
- (BOOL)_scrollInDirection:(int)direction;	// 0x26a47d
- (BOOL)_scrollIndexToVisible:(long)visible;	// 0x26a885
- (BOOL)_scrollLeft;	// 0x26a679
- (BOOL)_scrollRight;	// 0x26a661
- (long)_sectionIndexForIndex:(long)index;	// 0x26d395
- (id)_setControlRange:(NSRange)range oldRange:(NSRange)range2;	// 0x26c1a5
- (void)_setDimness:(float)dimness forLayer:(id)layer;	// 0x26bc39
- (void)_setFlatRange:(NSRange)range delayedLayout:(BOOL)layout;	// 0x26bfd5
- (void)_stopForceDisplayTimer;	// 0x26cb45
- (id)_titleActions;	// 0x26ced1
- (id)_updateFlatRangeForScrollDirection:(int)scrollDirection;	// 0x26bf11
- (void)_updateSublayerTransform;	// 0x26a75d
- (NSRange)_visibleRange;	// 0x26a695
- (id)accessibilityControls;	// 0x2699ad
- (id)accessibilityLabel;	// 0x26d459
// declared property getter: - (BOOL)antialiasCoverflowPosters;	// 0x269fe1
- (BOOL)brEventAction:(id)action;	// 0x269355
- (void)cancelContainerViewLoad;	// 0x269ccd
// converted property getter: - (BOOL)centered;	// 0x269309
// converted property getter: - (int)collapsedState;	// 0x269819
// declared property getter: - (long)columnCount;	// 0x269f95
- (void)controlWasActivated;	// 0x268db1
- (void)controlWasDeactivated;	// 0x268e61
- (unsigned)countOfCells;	// 0x2699c9
// declared property getter: - (float)coverflowMargin;	// 0x269fc1
- (long)dataCount;	// 0x2691e9
// converted property getter: - (id)dataSource;	// 0x2691b9
- (void)dealloc;	// 0x268c9d
// converted property getter: - (id)delegate;	// 0x2691d9
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x269909
// converted property getter: - (id)focusedIndexPath;	// 0x269675
// declared property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x269fa5
- (unsigned)indexInCellsOfObject:(id)object;	// 0x269a55
- (void)layoutSubcontrols;	// 0x269829
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x269c35
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x269b39
// converted property getter: - (BOOL)ordered;	// 0x269345
- (void)reloadData;	// 0x269081
- (BOOL)restorePersistentSavedSelection;	// 0x269d21
// converted property getter: - (BOOL)scrollable;	// 0x2692cd
- (void)scrollingCompleted;	// 0x269bf5
- (id)selectedControl;	// 0x2697e1
- (void)setAcceptsFocus:(BOOL)focus;	// 0x268d69
// declared property setter: - (void)setAntialiasCoverflowPosters:(BOOL)posters;	// 0x269ff1
// converted property setter: - (void)setCentered:(BOOL)centered;	// 0x2692dd
// converted property setter: - (void)setCollapsedState:(int)state;	// 0x2697f1
// declared property setter: - (void)setColumnCount:(long)count;	// 0x26901d
// declared property setter: - (void)setCoverflowMargin:(float)margin;	// 0x269fd1
// converted property setter: - (void)setDataSource:(id)source;	// 0x269105
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2691c9
// converted property setter: - (void)setFocusedIndexPath:(id)path;	// 0x2696f1
// declared property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x269049
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x269cfd
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x269d11
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x269319
- (void)setReadyToDisplay;	// 0x269cf9
// converted property setter: - (void)setScrollable:(BOOL)scrollable;	// 0x269285
- (void)updatePersistentSavedSelection;	// 0x269e65
- (void)visibleScrollRectChanged;	// 0x269b89
- (void)windowMaxBoundsChanged;	// 0x268fa9
@end

