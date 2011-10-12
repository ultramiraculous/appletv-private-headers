/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"

@class EDName, EDFormula, EDSheet, EDRowBlocks;

__attribute__((visibility("hidden")))
@interface EPFormulaCleaner : EDProcessor {
@private
	EDSheet *mCurrentSheet;	// 16 = 0x10
	EDFormula *mFormula;	// 20 = 0x14
	EDFormula *mTokensToClean;	// 24 = 0x18
	EDName *mParentName;	// 28 = 0x1c
	int mRowOffset;	// 32 = 0x20
	int mColumnOffset;	// 36 = 0x24
	EDRowBlocks *mBaseFormulaRowBlocks;	// 40 = 0x28
}
- (void)addOffsetsToRow:(int *)row rowRelative:(bool)relative column:(int *)column columnRelative:(bool)relative4;	// 0x355f0e75
- (void)applyMaxCellsInName:(id)name;	// 0x3574a831
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x355f073d
- (bool)checkCustomFunction:(unsigned)function;	// 0x3574a9c1
- (bool)checkFunctionId:(int)anId tokenIndex:(unsigned)index;	// 0x35660d45
- (bool)checkSupportedAddInName:(id)name externalLink:(bool)link;	// 0x3574a82d
- (bool)cleanArea3D:(unsigned)d;	// 0x356531b5
- (bool)cleanArea:(unsigned)area;	// 0x356b8469
- (bool)cleanArray:(unsigned)array;	// 0x3574a855
- (void)cleanFormula:(id)formula name:(id)name;	// 0x3574a835
- (void)cleanFormula:(id)formula sheet:(id)sheet;	// 0x355f074d
- (void)cleanFormula:(id)formula sheet:(id)sheet name:(id)name;	// 0x355f0771
- (bool)cleanFunc:(unsigned)func;	// 0x35660e55
- (bool)cleanFuncVar:(unsigned)var;	// 0x35660d01
- (bool)cleanName:(unsigned)name;	// 0x356f06f5
- (bool)cleanName:(unsigned)name nameIndex:(unsigned)index sheetIndex:(unsigned)index3;	// 0x356e8409
- (bool)cleanNameX:(unsigned)x;	// 0x356e8275
- (bool)cleanRange:(unsigned)range removedTokenCount:(unsigned *)count;	// 0x3574a871
- (bool)cleanRef3D:(unsigned)d;	// 0x356b5361
- (bool)cleanRef:(unsigned)ref;	// 0x355f0ca1
- (bool)cleanTokenAtIndex:(unsigned)index removedTokenCount:(unsigned *)count;	// 0x355f0a71
- (bool)cleanUnion:(unsigned)aUnion;	// 0x356b5471
- (bool)combineCellReferences:(unsigned)references removedTokenCount:(unsigned *)count;	// 0x3574ad61
- (void)dealloc;	// 0x355d86ed
- (id)extractFormulaToCleanFromSharedFormula:(id)sharedFormula;	// 0x356c9b09
- (bool)isLinkReferenceIndexSupported:(unsigned)supported allowExternal:(bool)external;	// 0x35653365
- (bool)isObjectSupported:(id)supported;	// 0x355ef781
- (bool)isReferenceValidInLassoForRow:(int)row rowRelative:(bool)relative column:(int)column columnRelative:(bool)relative4;	// 0x355f0e11
- (bool)isReferenceValidInLassoForSheet:(id)sheet rowMin:(int)min rowMinRelative:(bool)relative rowMax:(int)max rowMaxRelative:(bool)relative5 columnMin:(int)min6 columnMinRelative:(bool)relative7 columnMax:(int)max8 columnMaxRelative:(bool)relative9;	// 0x3574ac15
- (void)prepareToProcessFormula:(id)processFormula sheet:(id)sheet name:(id)name;	// 0x355f08b1
- (void)reportWarning:(int)warning;	// 0x35694b81
- (void)reportWarning:(int)warning parameter:(id)parameter;	// 0x35694b95
- (void)reset;	// 0x355f099d
- (void)updateSheet:(id)sheet row:(int)row rowRelative:(bool)relative column:(int)column columnRelative:(bool)relative5;	// 0x355f0ea9
- (void)updateSheet:(id)sheet rowMin:(int)min rowMinRelative:(bool)relative rowMax:(int)max rowMaxRelative:(bool)relative5 columnMin:(int)min6 columnMinRelative:(bool)relative7 columnMax:(int)max8 columnMaxRelative:(bool)relative9;	// 0x3574acd1
- (void)updateWorksheet:(id)worksheet row:(int)row column:(int)column inDictionary:(id)dictionary;	// 0x3574aba1
- (bool)useEvaluationStackToCheckFunctionId:(int)checkFunctionId functionName:(id)name tokenIndex:(unsigned)index;	// 0x3574b1e9
- (unsigned)useEvaluationStackToGetParameter:(unsigned)getParameter tokenIndex:(unsigned)index;	// 0x356b561d
- (id)useEvaluationStackToGetParameter:(unsigned)getParameter tokenIndex:(unsigned)index allReferencesAllowed:(bool)allowed success:(bool *)success;	// 0x3574b839
- (id)worksheetFromLinkReferenceIndex:(unsigned)linkReferenceIndex loadIfNeeded:(bool)needed;	// 0x35653579
@end

