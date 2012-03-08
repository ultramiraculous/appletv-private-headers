/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScroller.h"

@class UIFloatArray, NSMutableArray, _UITableReorderingSupport, _UITableDeleteAnimationSupport, UITableCountView;

@interface UITable : UIScroller {
	id _dataSource;	// 348 = 0x15c
	NSMutableArray *_tableColumns;	// 352 = 0x160
	SEL _doubleAction;	// 356 = 0x164
	UIFloatArray *_rowHeights;	// 360 = 0x168
	NSRange _visibleRows;	// 364 = 0x16c
	NSRange _visibleCols;	// 372 = 0x174
	NSMutableArray *_visibleCells;	// 380 = 0x17c
	_UITableDeleteAnimationSupport *_deleteAnimationSupport;	// 384 = 0x180
	unsigned _selectedRow;	// 388 = 0x184
	unsigned _lastHighlightedRow;	// 392 = 0x188
	int _rowCount;	// 396 = 0x18c
	int _tableReloadingSuspendedCount;	// 400 = 0x190
	float _padding;	// 404 = 0x194
	UIView *_accessoryView;	// 408 = 0x198
	UITableCountView *_countLabel;	// 412 = 0x19c
	NSMutableArray *_reusableTableCells;	// 416 = 0x1a0
	int _reusableCapacity;	// 420 = 0x1a4
	NSMutableArray *_extraSeparators;	// 424 = 0x1a8
	int _swipeToDeleteRow;	// 428 = 0x1ac
	struct {
		unsigned separatorStyle : 3;
		unsigned rowDeletionEnabled : 1;
		unsigned allowSelectionDuringRowDeletion : 1;
		unsigned dataSourceHeightForRow : 1;
		unsigned dataSourceSetObjectValue : 1;
		unsigned dataShowDisclosureForRow : 1;
		unsigned dataDisclosureClickableForRow : 1;
		unsigned dataSourceWantsHints : 1;
		unsigned dataSourceCanDeleteRow : 1;
		unsigned dataSourceConfirmDeleteRow : 1;
		unsigned delegateTableSelectionDidChange : 1;
		unsigned scrollsToSelection : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned reuseTableCells : 1;
		unsigned delegateUpdateVisibleCellsNote : 1;
		unsigned delegateTableRowSelected : 1;
		unsigned rowAlreadyHighlighted : 1;
		unsigned needsReload : 1;
		unsigned delegateCanSwipe : 1;
		unsigned updatingVisibleCellsManually : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned warnForForcedCellUpdateDisabled : 1;
		unsigned delaySendingSelectionChanged : 1;
		unsigned dataSourceCanInsertAtRow : 1;
		unsigned shouldDisplayTopSeparator : 1;
		unsigned displayTopSeparator : 1;
		unsigned needToAdjustExtraSeparators : 1;
		unsigned ignoreDragSwipe : 1;
		unsigned lastHighlightedRowActive : 1;
		unsigned reloading : 1;
		unsigned countStringInsignificantRowCount : 4;
		unsigned dataSourceCanReuseCell : 1;
		unsigned reserved : 27;
	} _tableFlags;	// 432 = 0x1b0
	_UITableReorderingSupport *_reorderingSupport;	// 440 = 0x1b8
}
@property(retain) UIView *accessoryView;	// G=0x32ec7a29; S=0x32ec7939; converted property
@property(retain) id dataSource;	// G=0x32ec2d85; S=0x32ec2bad; converted property
@property(assign) int deleteConfirmationRow;	// G=0x32ec4dd1; S=0x32ec4ed1; converted property
@property(assign) SEL doubleAction;	// G=0x32ec4789; S=0x32ec4779; converted property
@property(assign) float rowHeight;	// G=0x32ec3161; S=0x32ec30b5; converted property
@property(assign) int separatorStyle;	// G=0x32ec6f41; S=0x32ec6f09; converted property
@property(readonly, retain) NSMutableArray *tableColumns;	// G=0x32ec2eb1; converted property
@property(readonly, retain) NSMutableArray *visibleCells;	// G=0x32ec5fcd; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x32ec25dd
- (void)_addSubview:(id)subview atTop:(BOOL)top;	// 0x32ec7ebd
- (void)_adjustCountLabel;	// 0x32ecf35d
- (void)_adjustExtraSeparators;	// 0x32ecef91
- (void)_adjustReusableTableCells;	// 0x32ecf3f1
- (void)_animateNewCells:(id)cells bySlidingDownAmount:(float)amount;	// 0x32ecc671
- (void)_animateNewCells:(id)cells bySlidingUpAmount:(float)amount;	// 0x32ecc521
- (void)_animateRemovalOfCell:(id)cell atRow:(int)row col:(int)col viaEdge:(int)edge withAmountToSlideUp:(float *)slideUp;	// 0x32ecc179
- (void)_animateRemovalOfVisibleRows:(id)visibleRows viaEdge:(int)edge withAmountToSlideUp:(float *)slideUp;	// 0x32ecc341
- (void)_animateRowsForDeletionOfRow:(int)row withSep:(id)sep;	// 0x32ecafcd
- (void)_autoscroll:(id)autoscroll;	// 0x32ec8591
- (void)_beginReorderingForCell:(id)cell;	// 0x32ec8081
- (BOOL)_checkCanSelectRow:(int)row view:(id)view;	// 0x32ec72e9
- (unsigned)_countStringRowCount;	// 0x32ecf2d9
- (void)_delaySendSelectionDidChange;	// 0x32ec66b9
- (void)_deleteRowAlertDidEndContinuation:(id)_deleteRowAlert;	// 0x32ecadf9
- (void)_deleteRowAlertDidEndWithResult:(BOOL)_deleteRowAlert contextInfo:(id)info;	// 0x32ecad31
- (void)_didDeleteRowForTableCell:(id)tableCell;	// 0x32ecec9d
- (void)_didInsertRowForTableCell:(id)tableCell;	// 0x32ececa1
- (void)_disableInteraction;	// 0x32ec5295
- (void)_enableAndRestoreTableStateAfterAnimation;	// 0x32ecec01
- (void)_enableInteraction;	// 0x32ec52b5
- (void)_enableRowDeletion:(BOOL)deletion forCell:(id)cell atRow:(int)row allowInsert:(BOOL)insert allowReorder:(BOOL)reorder animated:(BOOL)animated;	// 0x32ec4b95
- (void)_endCellReorderAnimation;	// 0x32ec9259
- (void)_endReorderingForCell:(id)cell;	// 0x32ec9771
- (void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x32ecd361
- (void)_finishedAnimatingCellReorder:(id)reorder finished:(id)finished context:(id)context;	// 0x32ec9199
- (void)_finishedRemovingRemovalButtonForTableCell:(id)tableCell;	// 0x32ecec31
- (void)_getRowCount:(int *)count andHeight:(float *)height beforeVisibleCellsForRows:(id)rows;	// 0x32ecc081
- (float)_partOfRow:(int)row thatIsHidden:(BOOL)hidden;	// 0x32ecc7c1
- (CGRect)_rectOfRow:(int)row usingRowHeights:(id)heights;	// 0x32ec5d09
- (void)_reloadRowHeights;	// 0x32ec7ddd
- (void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x32ec5281
- (int)_removeFromVisibleRows:(id)visibleRows;	// 0x32ecbf51
- (void)_reorderPositionChangedForCell:(id)cell;	// 0x32ec8859
- (void)_restoreTableStateAfterAnimation;	// 0x32ecbe1d
- (id)_resuableObjectForTableCell:(id)tableCell;	// 0x32ec5775
- (void)_resumeReloads;	// 0x32ecac3d
- (int)_rowForTableCell:(id)tableCell;	// 0x32ecaca1
- (void)_saveTableStateBeforeAnimationForRow:(int)row;	// 0x32ecbd71
- (void)_scheduleAdjustExtraSeparators;	// 0x32ecef59
- (id)_scriptingInfo;	// 0x32ecf549
- (void)_selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible withSelectionNotifications:(BOOL)selectionNotifications;	// 0x32ec683d
- (void)_sendSelectionDidChange;	// 0x32ec661d
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update;	// 0x32ec9ae9
- (void)_setRowCount:(int)count;	// 0x32ecf305
- (BOOL)_shouldDeleteRowForTableCell:(id)tableCell;	// 0x32ecae5d
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x32ecef55
- (void)_stopAutoscrollTimer;	// 0x32ec8025
- (void)_suspendReloads;	// 0x32ecac29
- (void)_tableCellAnimationDidStop:(id)_tableCellAnimation finished:(id)finished;	// 0x32ec9761
- (void)_updateContentSize;	// 0x32ec7c31
- (void)_updateOriginOfCells:(NSRange)cells;	// 0x32ec32cd
- (void)_updateVisibleCellsImmediatelyIfNecessary;	// 0x32ecabf9
- (void)_updateVisibleCellsNow;	// 0x32ec9e9d
- (BOOL)_userCanDeleteRows;	// 0x32ec4b65
- (void)_userSelectRow:(int)row;	// 0x32ec65ad
- (void)_willDeleteRow:(int)row forTableCell:(id)tableCell viaEdge:(int)edge animateOthers:(BOOL)others;	// 0x32ece3b9
// converted property getter: - (id)accessoryView;	// 0x32ec7a29
- (void)addTableColumn:(id)column;	// 0x32ec2f61
- (UIEdgeInsets)adornmentMargins;	// 0x32ec6ff9
- (void)animateDeletionOfCellAtRow:(int)row column:(int)column viaEdge:(int)edge;	// 0x32ec498d
- (void)animateDeletionOfRowWithCell:(id)cell;	// 0x32ec4ab1
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;	// 0x32ec4a8d
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge animatingOthersUp:(BOOL)up;	// 0x32ec4a41
- (float)animationDuration;	// 0x32ec37d1
- (BOOL)canDeleteRow:(int)row;	// 0x32ec4ac9
- (BOOL)canHandleSwipes;	// 0x32ec9b41
- (BOOL)canInsertAtRow:(int)row;	// 0x32ec4b0d
- (BOOL)canSelectRow:(int)row;	// 0x32ec728d
- (BOOL)cancelMouseTracking;	// 0x32ec674d
- (BOOL)cancelTouchTracking;	// 0x32ec67b9
- (id)cellAtRow:(int)row column:(int)column;	// 0x32ec5515
- (void)clearAllData;	// 0x32ec329d
- (int)columnAtPoint:(CGPoint)point;	// 0x32ec5f65
- (int)columnWithIdentifier:(id)identifier;	// 0x32ec2fe5
- (NSRange)columnsInRect:(CGRect)rect;	// 0x32ec5e5d
- (void)completeRowDeletionAnimation;	// 0x32ec4ac5
- (void)contentMouseUpInView:(id)view withEvent:(GSEventRef)event;	// 0x32ec7361
- (id)createPreparedCellForRow:(int)row column:(int)column;	// 0x32ec5779
// converted property getter: - (id)dataSource;	// 0x32ec2d85
- (id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;	// 0x32ec5699
- (int)dataSourceGetRowCount;	// 0x32ec2ee1
- (BOOL)dataSourceSupportsVariableRowHeights;	// 0x32ec2f01
- (void)dealloc;	// 0x32ec2779
// converted property getter: - (int)deleteConfirmationRow;	// 0x32ec4dd1
- (void)deleteRows:(id)rows viaEdge:(int)edge;	// 0x32ecc881
- (void)deleteRows:(id)rows viaEdge:(int)edge animated:(BOOL)animated;	// 0x32ecc871
// converted property getter: - (SEL)doubleAction;	// 0x32ec4789
- (void)drawExtraSeparator:(CGRect)separator;	// 0x32ec7a39
- (void)enableRowDeletion:(BOOL)deletion;	// 0x32ec4b51
- (void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;	// 0x32ec5095
- (void)floatArray:(id)array getValueCount:(int *)count gapIndexCount:(int *)count3;	// 0x32ec7dbd
- (BOOL)floatArray:(id)array loadValues:(float *)values count:(int)count;	// 0x32ec7d45
- (CGRect)frameOfCellAtColumn:(int)column row:(int)row;	// 0x32ec541d
- (CGRect)frameOfCellAtRow:(int)row column:(int)column;	// 0x32ec53ed
- (BOOL)getRow:(int *)row column:(int *)column ofTableCell:(id)tableCell;	// 0x32ec6095
- (BOOL)highlightNextRowByDelta:(int)delta;	// 0x32ec6d91
- (BOOL)highlightRow:(int)row;	// 0x32ec6d45
- (void)highlightView:(id)view state:(BOOL)state;	// 0x32ec7715
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32ec7109
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32ec7251
- (void)insertRows:(id)rows deleteRows:(id)rows2 reloadRows:(id)rows3;	// 0x32ecd3f5
- (BOOL)isRowDeletionEnabled;	// 0x32ec52d5
- (int)lastHighlightedRow;	// 0x32ec6d35
- (void)layoutSubviews;	// 0x32ec7f59
- (void)mouseDown:(GSEventRef)down;	// 0x32eced09
- (void)mouseDragged:(GSEventRef)dragged;	// 0x32eced4d
- (void)noteNumberOfRowsChanged;	// 0x32ec463d
- (int)numberOfColumns;	// 0x32ec2ec1
- (int)numberOfRows;	// 0x32ec2f15
- (UIEdgeInsets)pressedAdornmentMargins;	// 0x32ec7081
- (CGRect)rectOfColumn:(int)column;	// 0x32ec5ce5
- (CGRect)rectOfRow:(int)row;	// 0x32ec5ddd
- (CGRect)rectOfViewAtColumn:(int)column row:(int)row;	// 0x32ec544d
- (void)reloadCellAtRow:(int)row column:(int)column animated:(BOOL)animated;	// 0x32ec35b9
- (void)reloadData;	// 0x32ec43e5
- (void)reloadDataForInsertionOfRows:(NSRange)rows;	// 0x32ec3595
- (void)reloadDataForInsertionOfRows:(NSRange)rows animated:(BOOL)animated;	// 0x32ec37dd
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x32ec5005
- (void)removeFromSuperview;	// 0x32ec66e9
- (void)removeTableColumn:(id)column;	// 0x32ec2fc5
- (int)rowAtPoint:(CGPoint)point;	// 0x32ec5f6d
// converted property getter: - (float)rowHeight;	// 0x32ec3161
- (NSRange)rowsInRect:(CGRect)rect;	// 0x32ec5e69
- (void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;	// 0x32ec7ab5
- (void)scrollRowToVisible:(int)visible;	// 0x32ec31b5
- (void)selectCell:(id)cell inRow:(int)row column:(int)column withFade:(BOOL)fade;	// 0x32ec6825
- (BOOL)selectHighlightedRow;	// 0x32ec6e5d
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection;	// 0x32ec65e9
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;	// 0x32ec6cd1
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible;	// 0x32ec6c8d
- (int)selectedRow;	// 0x32ec6d25
// converted property getter: - (int)separatorStyle;	// 0x32ec6f41
// converted property setter: - (void)setAccessoryView:(id)view;	// 0x32ec7939
- (void)setAllowSelectionDuringRowDeletion:(BOOL)deletion;	// 0x32ec52e9
- (void)setAllowsReordering:(BOOL)reordering;	// 0x32ec5585
- (void)setCountString:(id)string;	// 0x32ec4809
- (void)setCountStringInsignificantRowCount:(unsigned)count;	// 0x32ec4799
// converted property setter: - (void)setDataSource:(id)source;	// 0x32ec2bad
- (void)setDelegate:(id)delegate;	// 0x32ec2d95
// converted property setter: - (void)setDeleteConfirmationRow:(int)row;	// 0x32ec4ed1
// converted property setter: - (void)setDoubleAction:(SEL)action;	// 0x32ec4779
- (void)setFrame:(CGRect)frame;	// 0x32ec632d
- (void)setNeedsDisplayInRowRange:(NSRange)rowRange;	// 0x32ec46a9
- (void)setOffset:(CGPoint)offset;	// 0x32ec6199
- (void)setPadding:(float)padding;	// 0x32ec6f55
- (void)setResusesTableCells:(BOOL)cells;	// 0x32ec7a6d
- (void)setReusesTableCells:(BOOL)cells;	// 0x32ec7a7d
// converted property setter: - (void)setRowHeight:(float)height;	// 0x32ec30b5
- (void)setScrollsToSelection:(BOOL)selection;	// 0x32ec6ef1
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x32ec6f09
- (BOOL)shouldDelaySendingSelectionChanged;	// 0x32ec6d0d
- (BOOL)shouldIndentRow:(int)row;	// 0x32ec571d
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x32ec9b45
- (id)tableColumnWithIdentifier:(id)identifier;	// 0x32ec306d
// converted property getter: - (id)tableColumns;	// 0x32ec2eb1
- (void)updateDisclosures;	// 0x32ec5301
- (BOOL)validateDataSource;	// 0x32ec2b2d
- (id)viewAtColumn:(int)column row:(int)row;	// 0x32ec54fd
- (id)visibleCellForRow:(int)row column:(int)column;	// 0x32ec5ffd
// converted property getter: - (id)visibleCells;	// 0x32ec5fcd
- (id)visibleCellsWithoutUpdatingLayout;	// 0x32ec5fbd
- (NSRange)visibleRowsInRect:(CGRect)rect;	// 0x32ec615d
@end
