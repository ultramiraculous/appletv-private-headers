/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class NSMutableArray, OADTableProperties, OADTableGrid;

@interface OADTable : OADDrawable {
	OADTableProperties *mProperties;	// 24 = 0x18
	OADTableGrid *mGrid;	// 28 = 0x1c
	NSMutableArray *mRows;	// 32 = 0x20
}
- (id)init;	// 0x370895e5
- (id)addRow;	// 0x3708d515
- (id)cellAtPos:(OADTMatrixPos)pos;	// 0x3714f579
- (void)dealloc;	// 0x3708a68d
- (id)grid;	// 0x3708d34d
- (id)masterCellOfPos:(OADTMatrixPos)pos;	// 0x3714f635
- (OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)pos;	// 0x3714f5a5
- (id)rowAtIndex:(unsigned)index;	// 0x3708e0a1
- (unsigned)rowCount;	// 0x3708e081
- (void)setParentTextListStyle:(id)style;	// 0x3708dfc5
- (id)tableProperties;	// 0x370898c1
@end
