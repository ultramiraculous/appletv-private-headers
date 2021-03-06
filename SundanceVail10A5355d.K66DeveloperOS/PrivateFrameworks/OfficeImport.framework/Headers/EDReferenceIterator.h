/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDWorkbook, EDWorksheet, EDRowBlock, EDCollection, EDRowBlocks, EDReference;

@interface EDReferenceIterator : NSObject {
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
+ (id)referenceIteratorWithReference:(id)reference workbook:(id)workbook;	// 0x31daf799
+ (id)referenceIteratorWithReferenceArray:(id)referenceArray workbook:(id)workbook;	// 0x31cff2e5
- (id)initWithReference:(id)reference workbook:(id)workbook;	// 0x31daf775
- (id)initWithReferenceArray:(id)referenceArray reference:(id)reference workbook:(id)workbook;	// 0x31cff389
- (id)initWithReferenceArray:(id)referenceArray workbook:(id)workbook;	// 0x31cff335
- (unsigned)currentCellIndex;	// 0x31d06d91
- (void)dealloc;	// 0x31cffd25
- (EDCellHeader *)nextCell;	// 0x31cff93d
- (bool)nextReference;	// 0x31d06da1
- (bool)nextRow;	// 0x31cffb81
- (void)setCurrentSheet:(id)sheet;	// 0x31daf7e9
- (void)setReference:(id)reference;	// 0x31cff479
@end

