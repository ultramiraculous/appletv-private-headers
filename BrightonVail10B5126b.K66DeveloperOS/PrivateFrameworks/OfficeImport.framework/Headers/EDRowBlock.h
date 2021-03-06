/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EDRowBlock : NSObject {
	CFDataRef mPackedData;	// 4 = 0x4
	CFDataRef mCellOffsets;	// 8 = 0x8
}
@property(assign) unsigned index;	// G=0x348c32f9; S=0x348ac895; converted property
+ (id)rowBlock;	// 0x348ac7c9
- (id)init;	// 0x348ac811
- (EDCellHeader *)addCellWithColumnNumber:(unsigned)columnNumber type:(int)type isFormulaCell:(bool)cell rowInfo:(EDRowInfo **)info rowBlocks:(id)blocks;	// 0x348acec5
- (EDRowInfo *)addRowInfoWithRowNumber:(unsigned)rowNumber cellCountHint:(unsigned)hint;	// 0x348acae1
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x34a2b9b9
- (EDCellHeader *)cellAtIndex:(unsigned)index rowInfo:(EDRowInfo *)info;	// 0x348b81f5
- (EDCellHeader *)cellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x348bcc6d
- (void)checkCellOffsetOrThrow:(unsigned long)aThrow;	// 0x349c5f39
- (void)dealloc;	// 0x348c0449
- (void)doneWithContent;	// 0x348c0489
- (unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x348bcd01
- (unsigned)firstRowNumber;	// 0x348ad5f5
- (void)incrementIndex;	// 0x34a2ba1d
// converted property getter: - (unsigned)index;	// 0x348c32f9
- (unsigned)indexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x348bccad
- (unsigned)indexOfRowInfoWithRowNumber:(unsigned)rowNumber;	// 0x348aca59
- (unsigned)lastRowNumber;	// 0x348b8191
- (void)removeCellAtIndex:(unsigned)index rowInfo:(EDRowInfo **)info;	// 0x349c5de5
- (unsigned)rowCount;	// 0x348c4a3d
- (EDRowInfo *)rowInfoAtIndex:(unsigned)index;	// 0x348ad619
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber;	// 0x348ac9e9
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber createIfNil:(bool)aNil;	// 0x348ac9fd
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x348ac895
- (unsigned long)startOfCellsOrThrow;	// 0x348ad2ed
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x34a2b8dd
@end

