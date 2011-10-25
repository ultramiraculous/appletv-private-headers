/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "TSUFlushable.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSMutableArray, EDWorksheet, NSString, EDCollection;

__attribute__((visibility("hidden")))
@interface EDRowBlocks : NSObject <TSUFlushable> {
@private
	EDWorksheet *mWorksheet;	// 4 = 0x4
	NSMutableArray *mRowBlocks;	// 8 = 0x8
	EDCollection *mFormulas;	// 12 = 0xc
	unsigned mMaxPopulatedRow;	// 16 = 0x10
	unsigned mMaxPopulatedColumn;	// 20 = 0x14
	NSString *mFileName;	// 24 = 0x18
	int mLockCount;	// 28 = 0x1c
	NSRecursiveLock *mSaveLoadLock;	// 32 = 0x20
}
- (id)initWithWorksheet:(id)worksheet;	// 0x34c6ba81
- (EDCellHeader *)cellWithRowNumber:(unsigned)rowNumber columnNumber:(int)number;	// 0x34cf87b5
- (Class)classForFormulaType:(unsigned char)formulaType;	// 0x34dda3ed
- (void)dealloc;	// 0x34c8f365
- (unsigned)expectedIndexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x34c6ec35
- (id)fileNameForPersistingRowBlocks;	// 0x34dda1fd
- (void)flush;	// 0x34dda365
- (unsigned char)formulaTypeForFormula:(id)formula;	// 0x34dda375
- (id)formulas;	// 0x34c756dd
- (unsigned)indexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x34dda1a1
- (void)load;	// 0x34c6c519
- (void)lock;	// 0x34c6bce5
- (unsigned)maxPopulatedColumn;	// 0x34dda191
- (unsigned)maxPopulatedRow;	// 0x34c76b11
- (void)removeRowBlockAtIndex:(unsigned)index;	// 0x34dda1d9
- (id)rowBlockAtIndex:(unsigned)index;	// 0x34c6ed25
- (unsigned)rowBlockCount;	// 0x34c6ed05
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block;	// 0x34cf880d
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block createIfNil:(bool)aNil;	// 0x34c6ea51
- (void)save;	// 0x34dda445
- (bool)spaceForRowNumber:(unsigned)rowNumber rowBlock:(id)block;	// 0x34c6fe49
- (void)unlock;	// 0x34c7021d
- (void)updateMaxPopulatedRow:(unsigned)row column:(unsigned)column;	// 0x34c6fbe5
@end

