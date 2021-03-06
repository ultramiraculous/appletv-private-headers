/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class UITableView, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UITableViewRowData : NSObject <NSCopying> {
@private
	UITableView *_tableView;	// 4 = 0x4
	int _numSections;	// 8 = 0x8
	int _sectionRowDataCapacity;	// 12 = 0xc
	id *_sectionRowData;	// 16 = 0x10
	float _minimumRowHeight;	// 20 = 0x14
	float _tableViewWidth;	// 24 = 0x18
	BOOL _tableHeaderHeightValid;	// 28 = 0x1c
	float _tableHeaderHeight;	// 32 = 0x20
	BOOL _tableFooterHeightValid;	// 36 = 0x24
	float _tableFooterHeight;	// 40 = 0x28
	float _heightForTableHeaderViewHiding;	// 44 = 0x2c
	float _tableTopPadding;	// 48 = 0x30
	float _tableBottomPadding;	// 52 = 0x34
	BOOL _tableSidePaddingValid;	// 56 = 0x38
	float _tableSidePadding;	// 60 = 0x3c
	NSIndexPath *_reorderedIndexPath;	// 64 = 0x40
	NSIndexPath *_gapIndexPath;	// 68 = 0x44
	float _reorderedRowHeight;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) float heightForAutohidingTableHeaderView;	// G=0x3569cf75; 
@property(readonly, assign, nonatomic) float heightForTableHeaderViewHiding;	// G=0x356c684d; 
@property(assign, nonatomic) float minimumRowHeight;	// G=0x356c64c9; S=0x356c64d9; @synthesize=_minimumRowHeight
@property(retain) NSIndexPath *reorderedIndexPath;	// G=0x3573024d; S=0x3574e3b9; converted property
@property(assign, nonatomic) float tableBottomPadding;	// G=0x358d15cd; S=0x3581e195; @synthesize=_tableBottomPadding
@property(assign, nonatomic) float tableSidePadding;	// G=0x356e1445; S=0x358d14bd; 
@property(assign, nonatomic) float tableTopPadding;	// G=0x358d15bd; S=0x357451e5; @synthesize=_tableTopPadding
- (id)initWithTableView:(id)tableView;	// 0x356c3dc9
- (void)_ensureSectionOffsetIsValidForSection:(int)section;	// 0x356c6525
- (int)_sectionForPoint:(CGPoint)point beginningWithSection:(int)section numberOfSections:(int)sections;	// 0x356df80d
- (int)_sectionRowForGlobalRow:(int)globalRow inSection:(int *)section;	// 0x356d42fd
- (void)_updateNumSections;	// 0x356c4045
- (void)_updateSectionRowDataArrayForNumSections:(int)numSections;	// 0x356c40d5
- (void)addReorderGapFromIndexPath:(id)indexPath;	// 0x357b6a75
- (id)copyWithZone:(NSZone *)zone;	// 0x3572bfd5
- (void)dealloc;	// 0x35737101
- (void)ensureAllSectionsAreValid;	// 0x3572c2e9
- (CGRect)floatingRectForFooterInSection:(int)section visibleRect:(CGRect)rect;	// 0x35741f35
- (CGRect)floatingRectForHeaderInSection:(int)section visibleRect:(CGRect)rect;	// 0x35712069
- (int)footerAlignmentForSection:(int)section;	// 0x3581e311
- (int)globalRowForRowAtIndexPath:(id)indexPath;	// 0x356a202d
- (NSRange)globalRowsInRect:(CGRect)rect;	// 0x356d402d
- (BOOL)hasFooterForSection:(int)section;	// 0x357420c1
- (BOOL)hasHeaderForSection:(int)section;	// 0x357121f5
- (int)headerAlignmentForSection:(int)section;	// 0x357298a9
// declared property getter: - (float)heightForAutohidingTableHeaderView;	// 0x3569cf75
- (float)heightForFooterInSection:(int)section;	// 0x357a44c5
- (float)heightForHeaderInSection:(int)section;	// 0x357a443d
- (float)heightForRow:(int)row inSection:(int)section;	// 0x357b99c1
- (float)heightForSection:(int)section;	// 0x357a43b5
- (float)heightForTable;	// 0x356c4875
- (float)heightForTableFooterView;	// 0x356c6739
- (float)heightForTableHeaderView;	// 0x3569cfc5
// declared property getter: - (float)heightForTableHeaderViewHiding;	// 0x356c684d
- (id)indexPathForRowAtGlobalRow:(int)globalRow;	// 0x356d472d
- (id)indexPathsForRowsInRect:(CGRect)rect;	// 0x3579cfb9
- (void)invalidateAllSections;	// 0x356c3f9d
- (void)invalidateSection:(int)section;	// 0x358d1449
- (float)maxFooterTitleWidthForSection:(int)section;	// 0x3581e27d
- (float)maxHeaderTitleWidthForSection:(int)section;	// 0x35729805
// declared property getter: - (float)minimumRowHeight;	// 0x356c64c9
- (void)moveRowAtIndexPathFrom:(id)from toIndexPath:(id)indexPath;	// 0x357b9835
- (int)numberOfRows;	// 0x356c63b5
- (int)numberOfRowsBeforeSection:(int)rowsBeforeSection;	// 0x357a1a29
- (int)numberOfRowsInSection:(int)section;	// 0x356a20c1
- (int)numberOfSections;	// 0x3572cca1
- (CGRect)rectForFooterInSection:(int)section;	// 0x356c4921
- (CGRect)rectForGlobalRow:(int)globalRow;	// 0x356d4271
- (CGRect)rectForHeaderInSection:(int)section;	// 0x356df925
- (CGRect)rectForRow:(int)row inSection:(int)section;	// 0x356d43e9
- (CGRect)rectForSection:(int)section;	// 0x356df609
- (CGRect)rectForTable;	// 0x3572ec25
- (CGRect)rectForTableFooterView;	// 0x35734981
- (CGRect)rectForTableHeaderView;	// 0x356c4499
- (void)removeReorderGapFromIndexPath:(id)indexPath;	// 0x357b8dc1
// converted property getter: - (id)reorderedIndexPath;	// 0x3573024d
- (int)sectionForPoint:(CGPoint)point;	// 0x356df7dd
- (int)sectionLocationForReorderedRow:(int)reorderedRow inSection:(int)section;	// 0x357b8eb5
- (int)sectionLocationForRow:(int)row inSection:(int)section;	// 0x356dcf15
- (NSRange)sectionsInRect:(CGRect)rect;	// 0x356df3e1
- (void)setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;	// 0x35729455
// declared property setter: - (void)setMinimumRowHeight:(float)height;	// 0x356c64d9
// converted property setter: - (void)setReorderedIndexPath:(id)path;	// 0x3574e3b9
// declared property setter: - (void)setTableBottomPadding:(float)padding;	// 0x3581e195
// declared property setter: - (void)setTableSidePadding:(float)padding;	// 0x358d14bd
// declared property setter: - (void)setTableTopPadding:(float)padding;	// 0x357451e5
// declared property getter: - (float)tableBottomPadding;	// 0x358d15cd
- (void)tableFooterHeightDidChangeToHeight:(float)tableFooterHeight;	// 0x357a19e1
- (void)tableHeaderHeightDidChangeToHeight:(float)tableHeaderHeight;	// 0x356c4309
// declared property getter: - (float)tableSidePadding;	// 0x356e1445
// declared property getter: - (float)tableTopPadding;	// 0x358d15bd
- (void)tableViewWidthDidChangeToWidth:(float)tableViewWidth;	// 0x35747451
- (id)targetIndexPathForPoint:(CGPoint)point;	// 0x357b807d
@end

