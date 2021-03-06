/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVFeedTextTableDataSet, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedUniformTextTableViewController : NSObject {
@private
	int _cachedColumnCount;	// 4 = 0x4
	ATVFeedTextTableDataSet *_dataSet;	// 8 = 0x8
	NSDictionary *_headerTextAttributes;	// 12 = 0xc
	NSDictionary *_cellTextAttributes;	// 16 = 0x10
	float _cellHeight;	// 20 = 0x14
	float _cellWidth;	// 24 = 0x18
	float _headerHeight;	// 28 = 0x1c
	float _headerWidth;	// 32 = 0x20
}
@property(assign) float cellHeight;	// G=0x33182ce9; S=0x33182cf9; @synthesize=_cellHeight
@property(retain) NSDictionary *cellTextAttributes;	// G=0x33182cb1; S=0x33182cc5; @synthesize=_cellTextAttributes
@property(assign) float cellWidth;	// G=0x33182d09; S=0x33182d19; @synthesize=_cellWidth
@property(retain, nonatomic) ATVFeedTextTableDataSet *dataSet;	// G=0x331828a5; S=0x3318284d; @synthesize=_dataSet
@property(assign) float headerHeight;	// G=0x33182d29; S=0x33182d39; @synthesize=_headerHeight
@property(retain) NSDictionary *headerTextAttributes;	// G=0x33182c79; S=0x33182c8d; @synthesize=_headerTextAttributes
@property(assign) float headerWidth;	// G=0x33182d49; S=0x33182d59; @synthesize=_headerWidth
// declared property getter: - (float)cellHeight;	// 0x33182ce9
// declared property getter: - (id)cellTextAttributes;	// 0x33182cb1
// declared property getter: - (float)cellWidth;	// 0x33182d09
// declared property getter: - (id)dataSet;	// 0x331828a5
- (void)dealloc;	// 0x331827d9
// declared property getter: - (float)headerHeight;	// 0x33182d29
- (float)headerHeightForTableView:(id)tableView;	// 0x33182c59
// declared property getter: - (id)headerTextAttributes;	// 0x33182c79
// declared property getter: - (float)headerWidth;	// 0x33182d49
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x331828ed
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x331829b9
- (long)numberOfRowsInTableView:(id)tableView;	// 0x331828b5
// declared property setter: - (void)setCellHeight:(float)height;	// 0x33182cf9
// declared property setter: - (void)setCellTextAttributes:(id)attributes;	// 0x33182cc5
// declared property setter: - (void)setCellWidth:(float)width;	// 0x33182d19
// declared property setter: - (void)setDataSet:(id)set;	// 0x3318284d
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x33182d39
// declared property setter: - (void)setHeaderTextAttributes:(id)attributes;	// 0x33182c8d
// declared property setter: - (void)setHeaderWidth:(float)width;	// 0x33182d59
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x33182af9
- (float)tableView:(id)view heightForRow:(long)row;	// 0x33182c49
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x331829f1
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x33182c39
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x33182c69
@end

