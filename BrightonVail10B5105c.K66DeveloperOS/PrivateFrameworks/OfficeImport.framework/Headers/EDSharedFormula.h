/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFormula.h"

@class EDReference;

@interface EDSharedFormula : EDFormula {
	unsigned mBaseFormulaIndex;	// 8 = 0x8
	int mRowBaseOrOffset;	// 12 = 0xc
	int mColumnBaseOrOffset;	// 16 = 0x10
	EDReference *mBaseFormulaRange;	// 20 = 0x14
}
@property(assign) unsigned baseFormulaIndex;	// G=0x37ad2271; S=0x37954059; converted property
@property(assign) int columnBaseOrOffset;	// G=0x3795cb6d; S=0x37953a15; converted property
@property(assign) int rowBaseOrOffset;	// G=0x3795cb5d; S=0x37953a05; converted property
- (id)init;	// 0x37953955
- (id)initWithFormula:(id)formula;	// 0x37ad2215
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x37ad249d
// converted property getter: - (unsigned)baseFormulaIndex;	// 0x37ad2271
- (id)baseFormulaRange;	// 0x37ad2285
- (id)baseFormulaWithRowBlocks:(id)rowBlocks;	// 0x3795c3d5
// converted property getter: - (int)columnBaseOrOffset;	// 0x3795cb6d
- (void)dealloc;	// 0x379664c5
- (bool)isBaseFormula;	// 0x3795c175
- (bool)isSharedFormula;	// 0x37ad2281
// converted property getter: - (int)rowBaseOrOffset;	// 0x3795cb5d
// converted property setter: - (void)setBaseFormulaIndex:(unsigned)index;	// 0x37954059
// converted property setter: - (void)setColumnBaseOrOffset:(int)offset;	// 0x37953a15
// converted property setter: - (void)setRowBaseOrOffset:(int)offset;	// 0x37953a05
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x37ad238d
- (void)updateBaseFormulaRangeWithRow:(int)row column:(int)column;	// 0x37ad2295
- (id)warningWithRowBlocks:(id)rowBlocks;	// 0x3795c2d5
@end

