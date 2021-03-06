/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UISectionRowData : NSObject <NSCopying> {
@private
	BOOL _valid;	// 4 = 0x4
	float _headerHeight;	// 8 = 0x8
	float _maxHeaderTitleWidth;	// 12 = 0xc
	float _footerHeight;	// 16 = 0x10
	float _maxFooterTitleWidth;	// 20 = 0x14
	float _headerOffset;	// 24 = 0x18
	float _footerOffset;	// 28 = 0x1c
	int _numRows;	// 32 = 0x20
	int _arrayLength;	// 36 = 0x24
	float *_rowHeights;	// 40 = 0x28
	float *_rowOffsets;	// 44 = 0x2c
	float _sectionHeight;	// 48 = 0x30
	int _headerAlignment;	// 52 = 0x34
	int _footerAlignment;	// 56 = 0x38
	BOOL _sectionOffsetValid;	// 60 = 0x3c
	float _sectionOffset;	// 64 = 0x40
	int _sectionRowOffset;	// 68 = 0x44
}
- (float)_defaultSectionFooterHeightForSection:(int)section tableView:(id)view tableViewRowData:(id)data;	// 0x3525ee99
- (float)_defaultSectionHeaderHeightForSection:(int)section tableView:(id)view tableViewRowData:(id)data;	// 0x35185ec5
- (float)_headerOrFooterSizeForTable:(id)table title:(id)title detailText:(id)text isHeader:(BOOL)header;	// 0x35250f85
- (int)_rowForPoint:(CGPoint)point beginningWithRow:(int)row numberOfRows:(int)rows;	// 0x351de555
- (void)addOffset:(float)offset fromRow:(int)row;	// 0x351f7b75
- (id)copyWithZone:(NSZone *)zone;	// 0x3516d1b1
- (void)dealloc;	// 0x351781b1
- (void)deleteRowAtIndex:(int)index;	// 0x351f799d
- (void)insertRowAtIndex:(int)index inSection:(int)section rowHeight:(float)height tableViewRowData:(id)data;	// 0x351fa5d5
- (void)invalidate;	// 0x3510524d
- (void)invalidateSectionOffset;	// 0x3510526d
- (void)refreshWithSection:(int)section tableView:(id)view tableViewRowData:(id)data;	// 0x35105af5
- (int)rowForPoint:(CGPoint)point;	// 0x351de525
- (int)sectionLocationForReorderedRow:(int)reorderedRow;	// 0x351f9f4d
- (int)sectionLocationForRow:(int)row;	// 0x3511dff5
- (void)setHeight:(float)height forRow:(int)row;	// 0x35312251
@end

