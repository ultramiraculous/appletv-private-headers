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
@property(assign) unsigned index;	// G=0x34c84c59; S=0x34c6ee49; converted property
+ (id)rowBlock;	// 0x34c6ed6d
- (id)init;	// 0x34c6edb5
- (EDCellHeader *)addCellWithColumnNumber:(unsigned)columnNumber type:(int)type isFormulaCell:(bool)cell rowInfo:(EDRowInfo **)info rowBlocks:(id)blocks;	// 0x34c6f5c1
- (EDRowInfo *)addRowInfoWithRowNumber:(unsigned)rowNumber cellCountHint:(unsigned)hint;	// 0x34c6f151
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x34de7261
- (EDCellHeader *)cellAtIndex:(unsigned)index rowInfo:(EDRowInfo *)info;	// 0x34c76ba1
- (EDCellHeader *)cellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x34c78c6d
- (void)checkCellOffsetOrThrow:(unsigned long)aThrow;	// 0x34de6f11
- (void)dealloc;	// 0x34c8f425
- (void)doneWithContent;	// 0x34c8f465
- (unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x34c78cfd
- (unsigned)firstRowNumber;	// 0x34c6fda5
- (void)incrementIndex;	// 0x34de702d
// converted property getter: - (unsigned)index;	// 0x34c84c59
- (unsigned)indexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x34c78ca9
- (unsigned)indexOfRowInfoWithRowNumber:(unsigned)rowNumber;	// 0x34c6f0ad
- (unsigned)lastRowNumber;	// 0x34c76b21
- (void)removeCellAtIndex:(unsigned)index rowInfo:(EDRowInfo **)info;	// 0x34de7091
- (unsigned)rowCount;	// 0x34c8861d
- (EDRowInfo *)rowInfoAtIndex:(unsigned)index;	// 0x34c6fdc9
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber;	// 0x34c6f041
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber createIfNil:(bool)aNil;	// 0x34c6f055
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x34c6ee49
- (unsigned long)startOfCellsOrThrow;	// 0x34de6e41
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x34de71d5
@end

