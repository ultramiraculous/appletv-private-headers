/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTableRowProperties, WDTable, NSMutableArray;

@interface WDTableRow : NSObject {
	int mIndex;	// 4 = 0x4
	WDTable *mTable;	// 8 = 0x8
	WDTableRowProperties *mProperties;	// 12 = 0xc
	NSMutableArray *mCells;	// 16 = 0x10
}
- (id)initWithTable:(id)table at:(int)at;	// 0x348ee6dd
- (id)addCell;	// 0x348eece1
- (id)addCellWithIndex:(int)index;	// 0x34abbc09
- (id)cellAt:(int)at;	// 0x34900b01
- (int)cellCount;	// 0x34900ae1
- (id)cellIterator;	// 0x34abbc99
- (void)dealloc;	// 0x34905dc1
- (int)index;	// 0x34abbbf9
- (id)newCellIterator;	// 0x34abbced
- (id)properties;	// 0x348ee9f9
- (id)table;	// 0x348eea09
@end

