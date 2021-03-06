/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface UISectionRowData : NSObject <NSCopying> {
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
- (float)_defaultSectionFooterHeightForSection:(int)section tableView:(id)view tableViewRowData:(id)data;	// 0x32cade21
- (float)_defaultSectionHeaderHeightForSection:(int)section tableView:(id)view tableViewRowData:(id)data;	// 0x32ba6759
- (float)_headerOrFooterSizeForTable:(id)table title:(id)title detailText:(id)text isHeader:(BOOL)header;	// 0x32ba6b35
- (int)_rowForPoint:(CGPoint)point beginningWithRow:(int)row numberOfRows:(int)rows;	// 0x32ba4b95
- (void)addOffset:(float)offset fromRow:(int)row;	// 0x32c8e4ad
- (id)copyWithZone:(NSZone *)zone;	// 0x32b170a5
- (void)dealloc;	// 0x32b762cd
- (void)deleteRowAtIndex:(int)index;	// 0x32c8e2cd
- (void)insertRowAtIndex:(int)index inSection:(int)section rowHeight:(float)height tableViewRowData:(id)data;	// 0x32c8fb81
- (void)invalidate;	// 0x32b17481
- (void)invalidateSectionOffset;	// 0x32b174a1
- (void)refreshWithSection:(int)section tableView:(id)view tableViewRowData:(id)data;	// 0x32b17581
- (int)rowForPoint:(CGPoint)point;	// 0x32ba4b65
- (int)sectionLocationForReorderedRow:(int)reorderedRow;	// 0x32d56c75
- (int)sectionLocationForRow:(int)row;	// 0x32b1dab5
- (void)setHeight:(float)height forRow:(int)row;	// 0x32d56bc5
@end

