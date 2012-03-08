/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class CPTable, CPZone;

@interface CPTableMaker : NSObject {
	CPZone *tableZone;	// 4 = 0x4
	CPTable *table;	// 8 = 0x8
	unsigned cellIndex;	// 12 = 0xc
	CGPoint *rowYIntervals;	// 16 = 0x10
	CGPoint *columnXIntervals;	// 20 = 0x14
}
+ (BOOL)isTable:(id)table;	// 0x31f76059
+ (void)makeTableFrom:(id)from;	// 0x31f75ffd
+ (void)makeTablesInPage:(id)page;	// 0x31f75ed1
+ (void)makeTablesInZone:(id)zone;	// 0x31f75f31
- (id)initWithZone:(id)zone;	// 0x31f75e79
- (void)dealloc;	// 0x31f76f9d
- (void)determineRowsAndColumns:(BOOL)columns;	// 0x31f76505
- (void)makeTable;	// 0x31f761ad
- (id)newBackgroundGraphicArrayFromRectangularZone:(id)rectangularZone;	// 0x31f76cb9
- (id)newTableCellFromZone:(id)zone;	// 0x31f76909
@end
