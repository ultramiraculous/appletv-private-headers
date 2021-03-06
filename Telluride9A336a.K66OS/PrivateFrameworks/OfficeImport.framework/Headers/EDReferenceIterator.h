/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDRowBlock, EDReference, EDWorkbook, EDWorksheet, EDRowBlocks, EDCollection;

__attribute__((visibility("hidden")))
@interface EDReferenceIterator : NSObject {
@private
	EDWorkbook *mWorkbook;	// 4 = 0x4
	EDWorksheet *mCurrentSheet;	// 8 = 0x8
	EDCollection *mReferences;	// 12 = 0xc
	EDReference *mReference;	// 16 = 0x10
	EDRowBlocks *mRowBlocks;	// 20 = 0x14
	EDRowBlock *mRowBlock;	// 24 = 0x18
	unsigned mRowBlockIndex;	// 28 = 0x1c
	EDRowInfo *mRowInfo;	// 32 = 0x20
	unsigned mRowInfoIndex;	// 36 = 0x24
	unsigned mCellIndex;	// 40 = 0x28
	unsigned mNextArrayIndex;	// 44 = 0x2c
	int mCurrentCellIndex;	// 48 = 0x30
	unsigned mPreviousColumnNumber;	// 52 = 0x34
}
+ (id)referenceIteratorWithReference:(id)reference workbook:(id)workbook;	// 0x34dda0b5
+ (id)referenceIteratorWithReferenceArray:(id)referenceArray workbook:(id)workbook;	// 0x34cf3ed5
- (id)initWithReference:(id)reference workbook:(id)workbook;	// 0x34dda14d
- (id)initWithReferenceArray:(id)referenceArray reference:(id)reference workbook:(id)workbook;	// 0x34cf3f79
- (id)initWithReferenceArray:(id)referenceArray workbook:(id)workbook;	// 0x34cf3f25
- (unsigned)currentCellIndex;	// 0x34d565e9
- (void)dealloc;	// 0x34cf4a65
- (EDCellHeader *)nextCell;	// 0x34cf442d
- (bool)nextReference;	// 0x34d6af3d
- (bool)nextRow;	// 0x34cf4715
- (void)setCurrentSheet:(id)sheet;	// 0x34dda105
- (void)setReference:(id)reference;	// 0x34cf4079
@end

