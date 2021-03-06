/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDRowBlock : NSObject {
@private
	CFDataRef mPackedData;	// 4 = 0x4
	CFDataRef mCellOffsets;	// 8 = 0x8
}
@property(assign) unsigned index;	// G=0x3447ac59; S=0x34464e49; converted property
+ (id)rowBlock;	// 0x34464d6d
- (id)init;	// 0x34464db5
- (EDCellHeader *)addCellWithColumnNumber:(unsigned)columnNumber type:(int)type isFormulaCell:(bool)cell rowInfo:(EDRowInfo **)info rowBlocks:(id)blocks;	// 0x344655c1
- (EDRowInfo *)addRowInfoWithRowNumber:(unsigned)rowNumber cellCountHint:(unsigned)hint;	// 0x34465151
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x345dd261
- (EDCellHeader *)cellAtIndex:(unsigned)index rowInfo:(EDRowInfo *)info;	// 0x3446cba1
- (EDCellHeader *)cellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x3446ec6d
- (void)checkCellOffsetOrThrow:(unsigned long)aThrow;	// 0x345dcf11
- (void)dealloc;	// 0x34485425
- (void)doneWithContent;	// 0x34485465
- (unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x3446ecfd
- (unsigned)firstRowNumber;	// 0x34465da5
- (void)incrementIndex;	// 0x345dd02d
// converted property getter: - (unsigned)index;	// 0x3447ac59
- (unsigned)indexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x3446eca9
- (unsigned)indexOfRowInfoWithRowNumber:(unsigned)rowNumber;	// 0x344650ad
- (unsigned)lastRowNumber;	// 0x3446cb21
- (void)removeCellAtIndex:(unsigned)index rowInfo:(EDRowInfo **)info;	// 0x345dd091
- (unsigned)rowCount;	// 0x3447e61d
- (EDRowInfo *)rowInfoAtIndex:(unsigned)index;	// 0x34465dc9
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber;	// 0x34465041
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber createIfNil:(bool)aNil;	// 0x34465055
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x34464e49
- (unsigned long)startOfCellsOrThrow;	// 0x345dce41
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x345dd1d5
@end

