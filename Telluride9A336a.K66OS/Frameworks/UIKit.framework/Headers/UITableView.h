/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollView.h"

@class UISwipeGestureRecognizer, NSMutableArray, NSIndexPath, NSMutableDictionary, NSArray, NSTimer, UIColor, UIGestureRecognizer, UITableViewCell, UILongPressGestureRecognizer;
@protocol UITableViewDataSource, UITableViewDelegate;

@interface UITableView : UIScrollView <UIGestureRecognizerDelegate, NSCoding> {
@private
	int _style;	// 404 = 0x194
	id<UITableViewDataSource> _dataSource;	// 408 = 0x198
	id _rowData;	// 412 = 0x19c
	float _rowHeight;	// 416 = 0x1a0
	float _sectionHeaderHeight;	// 420 = 0x1a4
	float _sectionFooterHeight;	// 424 = 0x1a8
	CGRect _visibleBounds;	// 428 = 0x1ac
	NSRange _visibleRows;	// 444 = 0x1bc
	NSMutableArray *_visibleCells;	// 452 = 0x1c4
	NSIndexPath *_firstResponderIndexPath;	// 456 = 0x1c8
	UIView *_firstResponderView;	// 460 = 0x1cc
	unsigned _firstResponderViewType;	// 464 = 0x1d0
	NSMutableDictionary *_reusableTableCells;	// 468 = 0x1d4
	NSMutableDictionary *_nibMap;	// 472 = 0x1d8
	NSMutableDictionary *_nibExternalObjectsTables;	// 476 = 0x1dc
	UITableViewCell *_topSeparatorCell;	// 480 = 0x1e0
	id _topSeparator;	// 484 = 0x1e4
	NSMutableArray *_extraSeparators;	// 488 = 0x1e8
	CFDictionaryRef _visibleHeaderViews;	// 492 = 0x1ec
	CFDictionaryRef _visibleFooterViews;	// 496 = 0x1f0
	NSMutableArray *_reusableHeaderViews;	// 500 = 0x1f4
	NSMutableArray *_reusableFooterViews;	// 504 = 0x1f8
	NSMutableArray *_reusableTransparentHeaderViews;	// 508 = 0x1fc
	NSMutableArray *_reusableTransparentFooterViews;	// 512 = 0x200
	NSMutableArray *_highlightedIndexPaths;	// 516 = 0x204
	NSMutableArray *_selectedIndexPaths;	// 520 = 0x208
	int _swipeToDeleteSection;	// 524 = 0x20c
	int _swipeToDeleteRow;	// 528 = 0x210
	NSIndexPath *_pendingSelectionIndexPath;	// 532 = 0x214
	NSArray *_pendingDeselectionIndexPaths;	// 536 = 0x218
	UIView *_touchedContentView;	// 540 = 0x21c
	UIView *_newContentView;	// 544 = 0x220
	id _deleteAnimationSupport;	// 548 = 0x224
	id _reorderingSupport;	// 552 = 0x228
	UIView *_backgroundView;	// 556 = 0x22c
	UIView *_index;	// 560 = 0x230
	UIView *_tableHeaderBackgroundView;	// 564 = 0x234
	UIView *_tableHeaderView;	// 568 = 0x238
	UIView *_tableFooterView;	// 572 = 0x23c
	id _countLabel;	// 576 = 0x240
	int _tableReloadingSuspendedCount;	// 580 = 0x244
	int _tableDisplaySuspendedCount;	// 584 = 0x248
	int _sectionIndexMinimumDisplayRowCount;	// 588 = 0x24c
	int _itemCountFooterMinimumDisplayRowCount;	// 592 = 0x250
	NSMutableArray *_insertItems;	// 596 = 0x254
	NSMutableArray *_deleteItems;	// 600 = 0x258
	NSMutableArray *_reloadItems;	// 604 = 0x25c
	NSMutableArray *_moveItems;	// 608 = 0x260
	UIColor *_separatorColor;	// 612 = 0x264
	UIColor *_separatorTopShadowColor;	// 616 = 0x268
	UIColor *_separatorBottomShadowColor;	// 620 = 0x26c
	UIColor *_checkmarkColor;	// 624 = 0x270
	UIColor *_sectionBorderColor;	// 628 = 0x274
	UIColor *_indexColor;	// 632 = 0x278
	UIColor *_indexBackgroundColor;	// 636 = 0x27c
	NSArray *_defaultSectionIndexTitles;	// 640 = 0x280
	UISwipeGestureRecognizer *_swipeGestureRecognizer;	// 644 = 0x284
	UIGestureRecognizer *_gobblerGestureRecognizer;	// 648 = 0x288
	int _updateCount;	// 652 = 0x28c
	NSIndexPath *_displayingCellContentStringIndexPath;	// 656 = 0x290
	UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 660 = 0x294
	NSTimer *_longPressAutoscrollTimer;	// 664 = 0x298
	int _longPressAutoscrollDirection;	// 668 = 0x29c
	UIEdgeInsets _sectionContentInset;	// 672 = 0x2a0
	id _reserved;	// 688 = 0x2b0
	struct {
		unsigned dataSourceNumberOfRowsInSection : 1;
		unsigned dataSourceCellForRow : 1;
		unsigned dataSourceNumberOfSectionsInTableView : 1;
		unsigned dataSourceTitleForHeaderInSection : 1;
		unsigned dataSourceTitleForFooterInSection : 1;
		unsigned dataSourceDetailTextForHeaderInSection : 1;
		unsigned dataSourceCommitEditingStyle : 1;
		unsigned dataSourceSectionIndexTitlesForTableView : 1;
		unsigned dataSourceSectionForSectionIndexTitle : 1;
		unsigned dataSourceCanEditRow : 1;
		unsigned dataSourceCanMoveRow : 1;
		unsigned dataSourceCanUpdateRow : 1;
		unsigned dataSourceShouldShowMenu : 1;
		unsigned dataSourceCanPerformAction : 1;
		unsigned dataSourcePerformAction : 1;
		unsigned dataSourceIndexPathForSectionIndexTitle : 1;
		unsigned delegateEditingStyleForRowAtIndexPath : 1;
		unsigned delegateTitleForDeleteConfirmationButtonForRowAtIndexPath : 1;
		unsigned delegateShouldIndentWhileEditing : 1;
		unsigned dataSourceMoveRow : 1;
		unsigned delegateCellForRow : 1;
		unsigned delegateWillDisplayCell : 1;
		unsigned delegateHeightForRow : 1;
		unsigned delegateHeightForSectionHeader : 1;
		unsigned delegateTitleWidthForSectionHeader : 1;
		unsigned delegateHeightForSectionFooter : 1;
		unsigned delegateTitleWidthForSectionFooter : 1;
		unsigned delegateViewForHeaderInSection : 1;
		unsigned delegateViewForFooterInSection : 1;
		unsigned delegateDisplayedItemCountForRowCount : 1;
		unsigned delegateDisplayStringForRowCount : 1;
		unsigned delegateAccessoryTypeForRow : 1;
		unsigned delegateAccessoryButtonTappedForRow : 1;
		unsigned delegateWillSelectRow : 1;
		unsigned delegateWillDeselectRow : 1;
		unsigned delegateDidSelectRow : 1;
		unsigned delegateDidDeselectRow : 1;
		unsigned delegateWillBeginEditing : 1;
		unsigned delegateDidEndEditing : 1;
		unsigned delegateWillMoveToRow : 1;
		unsigned delegateIndentationLevelForRow : 1;
		unsigned delegateWantsHeaderForSection : 1;
		unsigned delegateHeightForRowsInSection : 1;
		unsigned delegateMargin : 1;
		unsigned delegateHeaderTitleAlignment : 1;
		unsigned delegateFooterTitleAlignment : 1;
		unsigned delegateFrameForSectionIndexGivenProposedFrame : 1;
		unsigned delegateDidFinishReload : 1;
		unsigned delegateHeightForHeader : 1;
		unsigned delegateHeightForFooter : 1;
		unsigned delegateViewForHeader : 1;
		unsigned delegateViewForFooter : 1;
		unsigned delegateCalloutTargetRectForCell;
		unsigned delegateShouldShowMenu : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateWillBeginReordering : 1;
		unsigned delegateDidEndReordering : 1;
		unsigned delegateDidCancelReordering : 1;
		unsigned style : 1;
		unsigned separatorStyle : 3;
		unsigned wasEditing : 1;
		unsigned isEditing : 1;
		unsigned scrollsToSelection : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned updating : 1;
		unsigned displaySkippedDuringSuspension : 1;
		unsigned needsReload : 1;
		unsigned updatingVisibleCellsManually : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned scheduledUpdateVisibleCellsFrames : 1;
		unsigned warnForForcedCellUpdateDisabled : 1;
		unsigned displayTopSeparator : 1;
		unsigned countStringInsignificantRowCount : 4;
		unsigned needToAdjustExtraSeparators : 1;
		unsigned overlapsSectionHeaderViews : 1;
		unsigned ignoreDragSwipe : 1;
		unsigned ignoreTouchSelect : 1;
		unsigned lastHighlightedRowActive : 1;
		unsigned reloading : 1;
		unsigned allowsSelection : 1;
		unsigned allowsSelectionDuringEditing : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowsMultipleSelectionDuringEditing : 1;
		unsigned showsSelectionImmediatelyOnTouchBegin : 1;
		unsigned indexHidden : 1;
		unsigned indexHiddenForSearch : 1;
		unsigned defaultShowsHorizontalScrollIndicator : 1;
		unsigned defaultShowsVerticalScrollIndicator : 1;
		unsigned sectionIndexTitlesLoaded : 1;
		unsigned tableHeaderViewShouldAutoHide : 1;
		unsigned tableHeaderViewIsHidden : 1;
		unsigned tableHeaderViewWasHidden : 1;
		unsigned hideScrollIndicators : 1;
		unsigned sendReloadFinished : 1;
		unsigned keepFirstResponderWhenInteractionDisabled : 1;
		unsigned keepFirstResponderVisibleOnBoundsChange : 1;
		unsigned dontDrawTopShadowInGroupedSections : 1;
		unsigned forceStaticHeadersAndFooters;
		unsigned displaysCellContentStringsOnTapAndHold : 1;
		unsigned displayingCellContentStringCallout : 1;
		unsigned longPressAutoscrollingActive : 1;
		unsigned adjustsRowHeightsForSectionLocation : 1;
		unsigned customSectionContentInsetSet : 1;
	} _tableFlags;	// 692 = 0x2b4
	unsigned _selectedSection;	// 720 = 0x2d0
	unsigned _selectedRow;	// 724 = 0x2d4
	unsigned _lastSelectedSection;	// 728 = 0x2d8
	unsigned _lastSelectedRow;	// 732 = 0x2dc
}
@property(assign, nonatomic, getter=_adjustsRowHeightsForSectionLocation, setter=_setAdjustsRowHeightsForSectionLocation:) BOOL adjustsRowHeightsForSectionLocation;	// G=0x351074e9; S=0x3528723d; 
@property(assign, nonatomic) BOOL allowsMultipleSelection;	// G=0x351226c1; S=0x35244e49; 
@property(assign, nonatomic) BOOL allowsMultipleSelectionDuringEditing;	// G=0x351e35c5; S=0x350fe399; 
@property(assign, nonatomic) BOOL allowsSelection;	// G=0x35168749; S=0x350fd0f5; 
@property(assign, nonatomic) BOOL allowsSelectionDuringEditing;	// G=0x35250f29; S=0x350fe349; 
@property(retain, nonatomic) UIView *backgroundView;	// G=0x351e1141; S=0x35186ee9; 
@property(assign, nonatomic) id<UITableViewDataSource> dataSource;	// G=0x351050c5; S=0x350fe4c1; 
@property(assign, nonatomic) id<UITableViewDelegate> delegate;	// G=0x350feded; S=0x350fe7e1; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x351353a1; S=0x35286f15; 
@property(assign, nonatomic, getter=_keepsFirstResponderVisibleOnBoundsChange, setter=_setKeepsFirstResponderVisibleOnBoundsChange:) BOOL keepsFirstResponderVisibleOnBoundsChange;	// G=0x35287bd9; S=0x3523f069; 
@property(retain) id multiselectCheckmarkColor;	// G=0x35284ba9; S=0x35284ad9; converted property
@property(assign) BOOL overlapsSectionHeaderViews;	// G=0x35107485; S=0x35286491; converted property
@property(assign, nonatomic) float rowHeight;	// G=0x35105281; S=0x350fd251; 
@property(retain, nonatomic) id scrollTestParameters;	// G=0x35261979; S=0x351f1b51; @synthesize=_reserved
@property(retain) UIColor *sectionBorderColor;	// G=0x3511de55; S=0x35284be1; converted property
@property(assign, nonatomic, getter=_sectionContentInset, setter=_setSectionContentInset:) UIEdgeInsets sectionContentInset;	// G=0x35107501; S=0x35287265; @synthesize=_sectionContentInset
@property(assign, nonatomic) float sectionFooterHeight;	// G=0x35188441; S=0x350fd305; 
@property(assign, nonatomic) float sectionHeaderHeight;	// G=0x3516a3c9; S=0x350fd2c9; 
@property(assign, nonatomic) int sectionIndexMinimumDisplayRowCount;	// G=0x352872a9; S=0x3516a425; @synthesize=_sectionIndexMinimumDisplayRowCount
@property(retain) UIColor *separatorBottomShadowColor;	// G=0x3511dd1d; S=0x3514ae7d; converted property
@property(retain, nonatomic) UIColor *separatorColor;	// G=0x3511d691; S=0x350fe12d; 
@property(assign, nonatomic) int separatorStyle;	// G=0x351226a9; S=0x350fd141; 
@property(retain) UIColor *separatorTopShadowColor;	// G=0x3511d765; S=0x3514acb9; converted property
@property(assign) BOOL showsSelectionImmediatelyOnTouchBegin;	// G=0x3528697d; S=0x3528685d; converted property
@property(readonly, assign, nonatomic) int style;	// G=0x35105481; 
@property(retain, nonatomic) UIView *tableFooterView;	// G=0x35104f65; S=0x35238fbd; 
@property(retain) id tableHeaderBackgroundColor;	// G=0x35284ab9; S=0x351252f5; converted property
@property(retain, nonatomic) UIView *tableHeaderView;	// G=0x351049c9; S=0x3510446d; 
@property(assign) BOOL tableHeaderViewShouldAutoHide;	// G=0x3516a475; S=0x3516a48d; converted property
@property(assign) BOOL usesVariableMargins;	// G=0x35251539; S=0x35286a25; converted property
@property(readonly, retain) NSMutableArray *visibleCells;	// G=0x351e24fd; converted property
+ (void)_beginIgnoringResponderChanges;	// 0x352878c5
+ (void)_endIgnoringResponderChanges;	// 0x352878d5
- (id)initWithCoder:(id)coder;	// 0x352859ed
- (id)initWithFrame:(CGRect)frame;	// 0x35129dbd
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x350fac81
- (void)_accessoryButtonAction:(id)action;	// 0x351fc961
- (int)_accessoryTypeForCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x35284d09
- (void)_addContentSubview:(id)subview atBack:(BOOL)back;	// 0x35104689
- (void)_adjustCountLabel;	// 0x35107ca9
- (void)_adjustExtraSeparators;	// 0x351142b1
- (void)_adjustForAutomaticKeyboardInfo:(id)automaticKeyboardInfo animated:(BOOL)animated lastAdjustment:(float *)adjustment;	// 0x351f5ab5
- (void)_adjustReusableTableCells;	// 0x35105291
- (void)_adjustTableHeaderAndFooterViews;	// 0x35107be1
// declared property getter: - (BOOL)_adjustsRowHeightsForSectionLocation;	// 0x351074e9
- (float)_animationDuration;	// 0x35284aad
- (id)_arrayForUpdateAction:(int)updateAction;	// 0x3516b499
- (void)_autoscrollForLongPress:(id)longPress;	// 0x3528883d
- (void)_autoscrollForReordering:(id)reordering;	// 0x351f9595
- (void)_backgroundColorAnimationDidStop;	// 0x350fde69
- (float)_backgroundInset;	// 0x35122425
- (void)_beginDisplayingCellContentStringCallout;	// 0x35287bf1
- (void)_beginReorderAnimationForCell:(id)cell;	// 0x352874c5
- (void)_beginReorderingForCell:(id)cell;	// 0x351f75f5
- (void)_beginTouchesInContentView:(id)contentView touches:(id)touches withEvent:(id)event;	// 0x35286c51
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x351d6c81
- (CGRect)_calloutTargetRectForCell:(id)cell;	// 0x35287b25
- (BOOL)_canEditRowAtIndexPath:(id)indexPath;	// 0x3511e93d
- (BOOL)_canMoveRowAtIndexPath:(id)indexPath;	// 0x351e2e95
- (BOOL)_canPerformAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x352879b5
- (BOOL)_canSelectRowContainingHitView:(id)view;	// 0x351dde41
- (void)_cancelCellReorder:(BOOL)reorder;	// 0x3518f5f9
- (BOOL)_cancelContentTouchWithEvent:(id)event forced:(BOOL)forced;	// 0x351f8121
- (id)_cellAfterIndexPath:(id)path;	// 0x352875ad
- (CGSize)_contentSize;	// 0x351e1219
- (float)_contentWidthForCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x35287065
- (unsigned)_countStringRowCount;	// 0x351076f5
- (id)_createPreparedCellForGlobalRow:(int)globalRow;	// 0x351156d5
- (id)_createPreparedCellForGlobalRow:(int)globalRow withIndexPath:(id)indexPath;	// 0x351157a9
- (id)_createPreparedCellForRowAtIndexPath:(id)indexPath;	// 0x3524fbf5
- (BOOL)_dataSourceImplementsCanUpdateRowAtIndexPath;	// 0x352872b9
- (BOOL)_dataSourceImplementsDetailTextForHeaderInSection;	// 0x35250f71
- (BOOL)_dataSourceImplementsNumberOfSectionsInTableView;	// 0x351050b1
- (BOOL)_dataSourceImplementsTitleForFooterInSection;	// 0x3525f1b9
- (BOOL)_dataSourceImplementsTitleForHeaderInSection;	// 0x35250f5d
- (id)_defaultBackgroundView;	// 0x35285589
- (BOOL)_delegateImplementsAlignmentForFooterInSection;	// 0x3525ee59
- (BOOL)_delegateImplementsAlignmentForHeaderInSection;	// 0x35152149
- (BOOL)_delegateImplementsHeightForFooterInSection;	// 0x3525ee85
- (BOOL)_delegateImplementsHeightForHeaderInSection;	// 0x35152179
- (BOOL)_delegateImplementsHeightForRowAtIndexPath;	// 0x351074b5
- (BOOL)_delegateImplementsHeightForRowsInSection;	// 0x3510749d
- (BOOL)_delegateImplementsMarginForTableView;	// 0x3518db01
- (BOOL)_delegateImplementsTitleWidthForFooterInSection;	// 0x3525ee71
- (BOOL)_delegateImplementsTitleWidthForHeaderInSection;	// 0x35152161
- (BOOL)_delegateImplementsViewForFooterInSection;	// 0x3525f1a5
- (BOOL)_delegateImplementsViewForHeaderInSection;	// 0x35251b95
- (BOOL)_delegateWantsCustomFooterForSection:(int)section;	// 0x352872cd
- (BOOL)_delegateWantsFooterForSection:(int)section;	// 0x35106a6d
- (BOOL)_delegateWantsFooterTitleForSection:(int)section;	// 0x35106c19
- (BOOL)_delegateWantsHeaderForSection:(int)section;	// 0x35106831
- (BOOL)_delegateWantsHeaderTitleForSection:(int)section;	// 0x35106a11
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)animated;	// 0x3528738d
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x35194089
- (void)_deselectRowAtIndexPath:(id)indexPath animated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x3510e199
- (void)_didInsertRowForTableCell:(id)tableCell;	// 0x352518b9
- (BOOL)_displayingCellContentStringCallout;	// 0x3528812d
- (BOOL)_displaysCellContentStringsOnTapAndHold;	// 0x35284a95
- (void)_drawExtraSeparator:(CGRect)separator;	// 0x35182341
- (BOOL)_drawsTopShadowInGroupedSections;	// 0x3511d85d
- (int)_editingStyleForRowAtIndexPath:(id)indexPath;	// 0x351e2da1
- (void)_endCellAnimationsWithContext:(id)context;	// 0x3516b671
- (void)_endCellReorderAnimation:(BOOL)animation;	// 0x351fad15
- (void)_endDisplayingCellContentStringCallout;	// 0x350dd371
- (void)_endReorderAnimations;	// 0x35287591
- (void)_endReorderingForCell:(id)cell wasCancelled:(BOOL)cancelled animated:(BOOL)animated;	// 0x351f9fe9
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)_endSwipeToDeleteRow;	// 0x351fc775
- (void)_ensureRowDataIsLoaded;	// 0x35104cd1
- (void)_finishedAnimatingCellReorder:(id)reorder finished:(id)finished context:(id)context;	// 0x352873a1
- (void)_finishedRemovingRemovalButtonForTableCell:(id)tableCell;	// 0x35287859
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x351d8e19
- (int)_globalReorderingRow;	// 0x35287651
- (BOOL)_hasSwipeToDeleteRow;	// 0x351e21c5
- (BOOL)_headerAndFooterViewsFloat;	// 0x35153045
- (float)_heightForSeparator;	// 0x35122649
- (id)_indexPathForSwipeRowAtPoint:(CGPoint)point;	// 0x3523ceed
- (CGRect)_indexRect;	// 0x35154821
- (void)_installTableViewGestureRecognizers;	// 0x350fcacd
- (BOOL)_isCellReorderable:(id)reorderable;	// 0x352876fd
- (BOOL)_isEditingRowAtIndexPath:(id)indexPath;	// 0x351712b5
- (BOOL)_isEditingWithNoSwipedCell;	// 0x351e5db5
- (BOOL)_isLastRowForIndexPath:(id)indexPath;	// 0x3528772d
- (BOOL)_isRowMultiSelect:(id)select;	// 0x35168691
- (BOOL)_isShowingIndex;	// 0x351226d9
- (BOOL)_isTableHeaderViewHidden;	// 0x3523c879
// declared property getter: - (BOOL)_keepsFirstResponderVisibleOnBoundsChange;	// 0x35287bd9
- (void)_languageChanged;	// 0x35285075
- (id)_newSectionViewWithFrame:(CGRect)frame forSection:(int)section isHeader:(BOOL)header;	// 0x3516a5ed
- (void)_numberOfRowsDidChange;	// 0x35108291
- (void)_performAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x35287a6d
- (void)_performCellContentStringCalloutCleanupHidingMenu:(BOOL)menu;	// 0x350dd385
- (void)_performScrollTest:(id)test iterations:(int)iterations delta:(int)delta;	// 0x352617c5
- (void)_performScrollTest:(id)test iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x352849b9
- (id)_popReusableHeaderView:(BOOL)view opaque:(BOOL)opaque;	// 0x3516a51d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x35285861
- (void)_rectChangedWithNewSize:(CGSize)newSize oldSize:(CGSize)size;	// 0x350fb4e1
- (CGRect)_rectForTableFooterView;	// 0x352865f5
- (CGRect)_rectForTableHeaderView;	// 0x352865c1
- (void)_reloadDataIfNeeded;	// 0x3511426d
- (void)_removeTableViewGestureRecognizers;	// 0x350fc9d1
- (void)_removeWasCanceledForCell:(id)cell;	// 0x35287845
- (void)_reorderPositionChangedForCell:(id)cell;	// 0x351f84e1
- (void)_reorderPositionChangedForCell:(id)cell withScrollFactorPercentage:(float)scrollFactorPercentage;	// 0x351f84f5
- (id)_reorderingCell;	// 0x3517149d
- (id)_reorderingIndexPath;	// 0x3518f729
- (id)_reorderingSupport;	// 0x35115685
- (void)_resumeReloads;	// 0x35108295
- (void)_reuseFooterView:(id)view forSection:(int)section;	// 0x35284d65
- (void)_reuseHeaderView:(id)view forSection:(int)section;	// 0x351dc431
- (void)_reuseTableViewCell:(id)cell;	// 0x3518f74d
- (id)_rowData;	// 0x35287901
- (void)_scheduleAdjustExtraSeparators;	// 0x350fd28d
- (id)_scriptingInfo;	// 0x351fdd7d
- (void)_scroll;	// 0x35261999
- (void)_scrollFirstResponderCellToVisible:(BOOL)visible;	// 0x351f5e4d
- (BOOL)_scrollToTop;	// 0x3528553d
- (void)_scrollToTopHidingTableHeader:(BOOL)topHidingTableHeader;	// 0x35111e39
- (void)_scrollToTopHidingTableHeaderIfNecessary:(BOOL)topHidingTableHeaderIfNecessary;	// 0x3516a465
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x351dabd5
- (void)_scrollViewWillEndDraggingWithVelocity:(CGPoint)_scrollView targetContentOffset:(CGPoint *)offset;	// 0x351da95d
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x351f370d
// declared property getter: - (UIEdgeInsets)_sectionContentInset;	// 0x35107501
- (id)_sectionFooterViewWithFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;	// 0x3518da51
- (int)_sectionForFooterView:(id)footerView;	// 0x3528566d
- (int)_sectionForHeaderView:(id)headerView;	// 0x352855f1
- (id)_sectionHeaderView:(BOOL)view withFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;	// 0x351532d1
- (id)_sectionHeaderViewWithFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;	// 0x35153291
- (void)_sectionIndexChanged:(id)changed;	// 0x351dc7ed
- (id)_sectionIndexColor;	// 0x352856e9
- (id)_sectionIndexTrackingBackgroundColor;	// 0x3528578d
- (void)_selectAllSelectedRows;	// 0x35286885
- (void)_selectRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position notifyDelegate:(BOOL)delegate;	// 0x351681b5
- (void)_sendDidEndEditingForIndexPath:(id)_send;	// 0x3525adad
- (void)_sendWillBeginEditingForIndexPath:(id)_send;	// 0x3525ad69
// declared property setter: - (void)_setAdjustsRowHeightsForSectionLocation:(BOOL)sectionLocation;	// 0x3528723d
- (void)_setBackgroundColor:(id)color animated:(BOOL)animated;	// 0x350fd529
- (void)_setDisplaysCellContentStringsOnTapAndHold:(BOOL)hold;	// 0x3516a3d9
- (void)_setDrawsTopShadowInGroupedSections:(BOOL)groupedSections;	// 0x3514b041
- (void)_setExternalObjectTable:(id)table forNibLoadingOfCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x35286ff5
- (void)_setHeaderAndFooterViewsFloat:(BOOL)aFloat;	// 0x35285831
- (void)_setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;	// 0x3516a435
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x351f28e1
// declared property setter: - (void)_setKeepsFirstResponderVisibleOnBoundsChange:(BOOL)change;	// 0x3523f069
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update withFrames:(BOOL)frames;	// 0x350fb6d1
- (void)_setRowCount:(int)count;	// 0x350fe79d
// declared property setter: - (void)_setSectionContentInset:(UIEdgeInsets)inset;	// 0x35287265
- (void)_setSectionIndexColor:(id)color;	// 0x35285721
- (void)_setSectionIndexTrackingBackgroundColor:(id)color;	// 0x352857c5
- (void)_setTopSeparatorCell:(id)cell;	// 0x351f9d21
- (void)_setupCell:(id)cell forEditing:(BOOL)editing atIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x3511e7e5
- (void)_setupCell:(id)cell forEditing:(BOOL)editing canEdit:(BOOL)edit editingStyle:(int)style shouldIndentWhileEditing:(BOOL)editing5 showsReorderControl:(BOOL)control accessoryType:(int)type animated:(BOOL)animated;	// 0x3511e985
- (void)_setupCellAnimations;	// 0x3516b319
- (void)_setupTableViewCommon;	// 0x350fcdc9
- (float)_shadowHeightOffset;	// 0x352877b1
- (BOOL)_shouldDisplayExtraSeparatorsAtOffset:(float *)offset;	// 0x35185c3d
- (BOOL)_shouldDisplayTopSeparator;	// 0x35168c21
- (BOOL)_shouldHighlightInsteadOfSelectRowAtIndexPath:(id)indexPath;	// 0x351de8fd
- (BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)indexPath;	// 0x351e2df9
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;	// 0x352878e5
- (BOOL)_shouldShowMenuForCell:(id)cell;	// 0x35287911
- (BOOL)_shouldUnionVisibleBounds;	// 0x350fb799
- (float)_spacingForExtraSeparators;	// 0x35185d5d
- (void)_stopAutoscrollTimer;	// 0x351f1af1
- (void)_stopLongPressAutoscrollTimer;	// 0x352886a5
- (void)_suspendReloads;	// 0x3510729d
- (id)_swipeGestureRecognizer;	// 0x350fca39
- (void)_tableCellAnimationDidStop:(id)_tableCellAnimation finished:(id)finished;	// 0x351fad01
- (void)_tableFooterHeightDidChangeToHeight:(float)_tableFooterHeight;	// 0x351e2979
- (id)_tableFooterView:(BOOL)view;	// 0x351e6db1
- (void)_tableHeaderHeightDidChangeToHeight:(float)_tableHeaderHeight;	// 0x35287695
- (id)_tableHeaderView:(BOOL)view;	// 0x351e23d1
- (id)_tableViewCellForContentView:(id)contentView;	// 0x3521d25d
- (void)_tableViewDeferredTouchesBegan:(id)began;	// 0x35286a2d
- (id)_targetIndexPathAtPoint:(CGPoint)point;	// 0x351f901d
- (id)_titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;	// 0x351fb53d
- (void)_updateAnimationDidStop:(id)_updateAnimation finished:(id)finished context:(id)context;	// 0x351779e9
- (void)_updateBackgroundView;	// 0x350de455
- (void)_updateBackgroundViewFrame;	// 0x35186fd1
- (void)_updateCellContentStringCallout:(id)callout;	// 0x35287c61
- (void)_updateContentSize;	// 0x351055dd
- (void)_updateIndex;	// 0x35108071
- (void)_updateIndexFrame;	// 0x35107d5d
- (void)_updateIndexFrameSuppressingChangeNotification:(BOOL)notification;	// 0x35107d71
- (void)_updateIndexTitles:(id)titles;	// 0x35152cf5
- (void)_updateRowData;	// 0x35104cfd
- (void)_updateRowsAtIndexPaths:(id)indexPaths updateAction:(int)action withRowAnimation:(int)rowAnimation;	// 0x3516b391
- (void)_updateSections:(id)sections updateAction:(int)action withRowAnimation:(int)rowAnimation;	// 0x351e2795
- (void)_updateShowScrollIndicatorsFlag;	// 0x35107901
- (void)_updateTableHeaderViewForAutoHideWithVelocity:(float)velocity targetOffset:(CGPoint *)offset;	// 0x351da975
- (void)_updateTableHeadersAndFootersNow:(BOOL)now;	// 0x3511f841
- (void)_updateTableViewGestureRecognizersForEditing;	// 0x351e2931
- (void)_updateVisibleCellsImmediatelyIfNecessary;	// 0x35195f99
- (void)_updateVisibleCellsNow:(BOOL)now;	// 0x35114675
- (void)_updateVisibleHeadersAndFootersNow:(BOOL)now;	// 0x3511fa19
- (void)_updateWithItems:(id)items updateSupport:(id)support;	// 0x3516e545
- (void)_userSelectRowAtPendingSelectionIndexPath:(id)pendingSelectionIndexPath;	// 0x351e0c49
- (BOOL)_usesNewHeaderFooterBehavior;	// 0x350de0b9
- (void)_validateCells;	// 0x352850b9
- (void)_validateSectionHeadersAndFooters;	// 0x352851c1
- (CGRect)_visibleBounds;	// 0x351145c1
- (CGRect)_visibleBoundsIncludingRowsOnly;	// 0x35288709
- (id)_visibleCellForGlobalRow:(int)globalRow;	// 0x35171285
- (id)_visibleCells;	// 0x351e250d
- (id)_visibleFooterViewForSection:(int)section;	// 0x3517548d
- (NSRange)_visibleGlobalRows;	// 0x3516d51d
- (NSRange)_visibleGlobalRowsInRect:(CGRect)rect;	// 0x35114f8d
- (id)_visibleHeaderViewForSection:(int)section;	// 0x35175479
- (BOOL)_wantsSwipes;	// 0x3523cd55
- (BOOL)_wasEditing;	// 0x351e43f9
- (BOOL)_wasEditingRowAtIndexPath:(id)indexPath;	// 0x351e78e9
- (void)adjustIndexPaths:(id)paths forMoveOfIndexPath:(id)indexPath toIndexPath:(id)indexPath3;	// 0x351faac5
- (BOOL)allowsFooterViewsToFloat;	// 0x351754a1
- (BOOL)allowsHeaderViewsToFloat;	// 0x3515302d
// declared property getter: - (BOOL)allowsMultipleSelection;	// 0x351226c1
// declared property getter: - (BOOL)allowsMultipleSelectionDuringEditing;	// 0x351e35c5
// declared property getter: - (BOOL)allowsSelection;	// 0x35168749
// declared property getter: - (BOOL)allowsSelectionDuringEditing;	// 0x35250f29
- (void)animateDeletionOfRowWithCell:(id)cell;	// 0x351fc705
// declared property getter: - (id)backgroundView;	// 0x351e1141
- (void)beginUpdates;	// 0x3516b2e5
- (BOOL)canHandleSwipes;	// 0x350dd2b5
- (BOOL)cancelTouchTracking;	// 0x351f7e5d
- (id)cellForRowAtIndexPath:(id)indexPath;	// 0x35177de1
// declared property getter: - (id)dataSource;	// 0x351050c5
- (void)dealloc;	// 0x351f1071
// declared property getter: - (id)delegate;	// 0x350feded
- (id)deleteConfirmationIndexPath;	// 0x35217af5
- (void)deleteRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;	// 0x351e2911
- (void)deleteSections:(id)sections withRowAnimation:(int)rowAnimation;	// 0x351e28d1
- (id)dequeueReusableCellWithIdentifier:(id)identifier;	// 0x3511615d
- (void)deselectRowAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x3510e175
- (void)didMoveToWindow;	// 0x350dd309
- (void)encodeWithCoder:(id)coder;	// 0x35286019
- (void)endUpdates;	// 0x3516b625
- (void)endUpdatesWithContext:(id)context;	// 0x3516b639
- (void)flashScrollIndicators;	// 0x351253c1
- (int)globalRowForRowAtIndexPath:(id)indexPath;	// 0x350e300d
- (void)handleSwipe:(id)swipe;	// 0x3525aad5
- (float)heightForAutohidingTableHeaderView;	// 0x350ddf55
- (float)heightForTableHeaderViewHiding;	// 0x3510782d
- (void)highlightRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position;	// 0x351de665
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x35286e71
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x351d6bdd
- (CGRect)indexFrame;	// 0x35104b29
- (id)indexPathForCell:(id)cell;	// 0x351e67c1
- (id)indexPathForRowAtGlobalRow:(int)globalRow;	// 0x3511570d
- (id)indexPathForRowAtPoint:(CGPoint)point;	// 0x351ddf2d
- (id)indexPathForSelectedRow;	// 0x350e2edd
- (id)indexPathsForRowsInRect:(CGRect)rect;	// 0x351ddf7d
- (id)indexPathsForSelectedRows;	// 0x35286809
- (id)indexPathsForVisibleRows;	// 0x35239179
- (void)insertRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;	// 0x351e28f1
- (void)insertSections:(id)sections withRowAnimation:(int)rowAnimation;	// 0x351e2775
// declared property getter: - (BOOL)isEditing;	// 0x351353a1
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x35340639
- (BOOL)isIndexHidden;	// 0x351f3291
- (void)layoutSubviews;	// 0x35114165
- (void)longPress:(id)press;	// 0x35288251
- (BOOL)longPressGestureWithinAutoscrollZone;	// 0x35288145
- (unsigned)maximumNumberOfSectionIndexTitlesWithoutTruncation;	// 0x35286995
- (void)mouseDown:(GSEventRef)down;	// 0x35286ca9
- (void)mouseDragged:(GSEventRef)dragged;	// 0x35286d41
- (void)mouseUp:(GSEventRef)up;	// 0x35286dd9
- (void)moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath2;	// 0x35286749
- (void)moveSection:(int)section toSection:(int)section2;	// 0x3528664d
// converted property getter: - (id)multiselectCheckmarkColor;	// 0x35284ba9
- (void)noteNumberOfRowsChanged;	// 0x351072fd
- (int)numberOfRowsInSection:(int)section;	// 0x35180f0d
- (int)numberOfSections;	// 0x35186525
// converted property getter: - (BOOL)overlapsSectionHeaderViews;	// 0x35107485
- (CGRect)rectForFooterInSection:(int)section;	// 0x35286571
- (CGRect)rectForHeaderInSection:(int)section;	// 0x35286521
- (CGRect)rectForRowAtIndexPath:(id)indexPath;	// 0x35119c8d
- (CGRect)rectForSection:(int)section;	// 0x352864d1
- (void)registerNib:(id)nib forCellReuseIdentifier:(id)cellReuseIdentifier;	// 0x35286f29
- (void)reloadData;	// 0x35106c75
- (void)reloadRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;	// 0x3516b36d
- (void)reloadSectionIndexTitles;	// 0x35286469
- (void)reloadSections:(id)sections withRowAnimation:(int)rowAnimation;	// 0x35286629
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x35111d5d
// declared property getter: - (float)rowHeight;	// 0x35105281
// declared property getter: - (id)scrollTestParameters;	// 0x35261979
- (void)scrollToNearestSelectedRowAtScrollPosition:(int)scrollPosition animated:(BOOL)animated;	// 0x3525502d
- (void)scrollToRowAtIndexPath:(id)indexPath atScrollPosition:(int)scrollPosition animated:(BOOL)animated;	// 0x35182385
// converted property getter: - (id)sectionBorderColor;	// 0x3511de55
// declared property getter: - (float)sectionFooterHeight;	// 0x35188441
// declared property getter: - (float)sectionHeaderHeight;	// 0x3516a3c9
// declared property getter: - (int)sectionIndexMinimumDisplayRowCount;	// 0x352872a9
- (void)selectRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position;	// 0x35168191
// converted property getter: - (id)separatorBottomShadowColor;	// 0x3511dd1d
// declared property getter: - (id)separatorColor;	// 0x3511d691
// declared property getter: - (int)separatorStyle;	// 0x351226a9
// converted property getter: - (id)separatorTopShadowColor;	// 0x3511d765
// declared property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x35244e49
// declared property setter: - (void)setAllowsMultipleSelectionDuringEditing:(BOOL)editing;	// 0x350fe399
// declared property setter: - (void)setAllowsSelection:(BOOL)selection;	// 0x350fd0f5
// declared property setter: - (void)setAllowsSelectionDuringEditing:(BOOL)editing;	// 0x350fe349
- (void)setBackgroundColor:(id)color;	// 0x350fd515
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x35186ee9
- (void)setBounds:(CGRect)bounds;	// 0x3510e335
- (void)setContentInset:(UIEdgeInsets)inset;	// 0x3512af3d
- (void)setContentOffset:(CGPoint)offset;	// 0x350dddb5
- (void)setCountString:(id)string;	// 0x351521b1
- (void)setCountStringInsignificantRowCount:(unsigned)count;	// 0x35151d49
// declared property setter: - (void)setDataSource:(id)source;	// 0x350fe4c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x350fe7e1
- (void)setDeleteConfirmationIndexPath:(id)path animated:(BOOL)animated;	// 0x35285339
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x35286f15
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x35187b31
- (void)setFrame:(CGRect)frame;	// 0x350fb19d
- (void)setIndexHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x35151db9
- (void)setIndexHiddenForSearch:(BOOL)search;	// 0x351f32a9
// converted property setter: - (void)setMultiselectCheckmarkColor:(id)color;	// 0x35284ad9
// converted property setter: - (void)setOverlapsSectionHeaderViews:(BOOL)views;	// 0x35286491
// declared property setter: - (void)setRowHeight:(float)height;	// 0x350fd251
// declared property setter: - (void)setScrollTestParameters:(id)parameters;	// 0x351f1b51
// converted property setter: - (void)setSectionBorderColor:(id)color;	// 0x35284be1
// declared property setter: - (void)setSectionFooterHeight:(float)height;	// 0x350fd305
// declared property setter: - (void)setSectionHeaderHeight:(float)height;	// 0x350fd2c9
// declared property setter: - (void)setSectionIndexMinimumDisplayRowCount:(int)count;	// 0x3516a425
// converted property setter: - (void)setSeparatorBottomShadowColor:(id)color;	// 0x3514ae7d
// declared property setter: - (void)setSeparatorColor:(id)color;	// 0x350fe12d
// declared property setter: - (void)setSeparatorStyle:(int)style;	// 0x350fd141
// converted property setter: - (void)setSeparatorTopShadowColor:(id)color;	// 0x3514acb9
- (void)setShowsHorizontalScrollIndicator:(BOOL)indicator;	// 0x351f84a9
// converted property setter: - (void)setShowsSelectionImmediatelyOnTouchBegin:(BOOL)begin;	// 0x3528685d
- (void)setShowsVerticalScrollIndicator:(BOOL)indicator;	// 0x35185e6d
// declared property setter: - (void)setTableFooterView:(id)view;	// 0x35238fbd
// converted property setter: - (void)setTableHeaderBackgroundColor:(id)color;	// 0x351252f5
// declared property setter: - (void)setTableHeaderView:(id)view;	// 0x3510446d
// converted property setter: - (void)setTableHeaderViewShouldAutoHide:(BOOL)autoHide;	// 0x3516a48d
- (void)setUsesGestureRecognizers:(BOOL)recognizers;	// 0x350fb88d
// converted property setter: - (void)setUsesVariableMargins:(BOOL)margins;	// 0x35286a25
// converted property getter: - (BOOL)showsSelectionImmediatelyOnTouchBegin;	// 0x3528697d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3524e615
// declared property getter: - (int)style;	// 0x35105481
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x35286a29
- (int)swipeCell:(int)cell atPoint:(CGPoint)point;	// 0x3525abd5
// declared property getter: - (id)tableFooterView;	// 0x35104f65
// converted property getter: - (id)tableHeaderBackgroundColor;	// 0x35284ab9
// declared property getter: - (id)tableHeaderView;	// 0x351049c9
// converted property getter: - (BOOL)tableHeaderViewShouldAutoHide;	// 0x3516a475
- (id)titleForDeleteConfirmationButton:(id)deleteConfirmationButton;	// 0x351fb50d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x351dd865
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35214b25
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x351dfd7d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3523ca5d
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x3521d15d
- (void)unhighlightRowAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x351e0d05
// converted property getter: - (BOOL)usesVariableMargins;	// 0x35251539
// converted property getter: - (id)visibleCells;	// 0x351e24fd
@end

