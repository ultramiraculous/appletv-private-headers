/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"

@class EDRowBlocks, EDName, EDFormula, EDSheet;

@interface EPFormulaCleaner : EDProcessor {
	EDSheet *mCurrentSheet;	// 16 = 0x10
	EDFormula *mFormula;	// 20 = 0x14
	EDFormula *mTokensToClean;	// 24 = 0x18
	EDName *mParentName;	// 28 = 0x1c
	int mRowOffset;	// 32 = 0x20
	int mColumnOffset;	// 36 = 0x24
	EDRowBlocks *mBaseFormulaRowBlocks;	// 40 = 0x28
}
- (void)addOffsetsToRow:(int *)row rowRelative:(bool)relative column:(int *)column columnRelative:(bool)relative4;	// 0x33a0befd
- (void)applyMaxCellsInName:(id)name;	// 0x33b053a5
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x33acd219
- (bool)checkCustomFunction:(unsigned)function;	// 0x33b83e89
- (bool)checkFunctionId:(int)anId tokenIndex:(unsigned)index;	// 0x33add53d
- (bool)checkSupportedAddInName:(id)name externalLink:(bool)link;	// 0x33b83e85
- (bool)cleanArea3D:(unsigned)d;	// 0x33acd3b1
- (bool)cleanArea:(unsigned)area;	// 0x33a0c2e9
- (bool)cleanArray:(unsigned)array;	// 0x33b1b9a1
- (void)cleanFormula:(id)formula name:(id)name;	// 0x33b8378d
- (void)cleanFormula:(id)formula sheet:(id)sheet;	// 0x33a0b521
- (void)cleanFormula:(id)formula sheet:(id)sheet name:(id)name;	// 0x33a0b545
- (bool)cleanFunc:(unsigned)func;	// 0x33afdccd
- (bool)cleanFuncVar:(unsigned)var;	// 0x33add4f9
- (bool)cleanName:(unsigned)name;	// 0x33b0cd81
- (bool)cleanName:(unsigned)name nameIndex:(unsigned)index sheetIndex:(unsigned)index3;	// 0x33b050a5
- (bool)cleanNameX:(unsigned)x;	// 0x33b04f19
- (bool)cleanRange:(unsigned)range removedTokenCount:(unsigned *)count;	// 0x33b8391d
- (bool)cleanRef3D:(unsigned)d;	// 0x33a23b11
- (bool)cleanRef:(unsigned)ref;	// 0x33a0bd19
- (bool)cleanTokenAtIndex:(unsigned)index removedTokenCount:(unsigned *)count;	// 0x33a0bad9
- (bool)cleanUnion:(unsigned)aUnion;	// 0x33b17681
- (bool)combineCellReferences:(unsigned)references removedTokenCount:(unsigned *)count;	// 0x33b83a45
- (void)dealloc;	// 0x33a0c4a5
- (id)extractFormulaToCleanFromSharedFormula:(id)sharedFormula;	// 0x33a0b829
- (bool)isLinkReferenceIndexSupported:(unsigned)supported allowExternal:(bool)external;	// 0x33a23c41
- (bool)isObjectSupported:(id)supported;	// 0x33ac9f7d
- (bool)isReferenceValidInLassoForRow:(int)row rowRelative:(bool)relative column:(int)column columnRelative:(bool)relative4;	// 0x33a0be99
- (bool)isReferenceValidInLassoForSheet:(id)sheet rowMin:(int)min rowMinRelative:(bool)relative rowMax:(int)max rowMaxRelative:(bool)relative5 columnMin:(int)min6 columnMinRelative:(bool)relative7 columnMax:(int)max8 columnMaxRelative:(bool)relative9;	// 0x33b837ad
- (bool)isThereContentOutsideOfLassoBoundsForSheet:(id)sheet rowMin:(int)min rowMax:(int)max columnMin:(int)min4 columnMax:(int)max5;	// 0x33b0cee5
- (void)prepareToProcessFormula:(id)processFormula sheet:(id)sheet name:(id)name;	// 0x33a0b681
- (void)reportWarning:(int)warning;	// 0x33a23e3d
- (void)reportWarning:(int)warning parameter:(id)parameter;	// 0x33a23e51
- (void)reset;	// 0x33a0b769
- (void)updateSheet:(id)sheet row:(int)row rowRelative:(bool)relative column:(int)column columnRelative:(bool)relative5;	// 0x33a0bf39
- (void)updateSheet:(id)sheet rowMin:(int)min rowMinRelative:(bool)relative rowMax:(int)max rowMaxRelative:(bool)relative5 columnMin:(int)min6 columnMinRelative:(bool)relative7 columnMax:(int)max8 columnMaxRelative:(bool)relative9;	// 0x33b83899
- (void)updateWorksheet:(id)worksheet row:(int)row column:(int)column inDictionary:(id)dictionary;	// 0x33b84071
- (bool)useEvaluationStackToCheckFunctionId:(int)checkFunctionId functionName:(id)name tokenIndex:(unsigned)index;	// 0x33b840ed
- (unsigned)useEvaluationStackToGetParameter:(unsigned)getParameter tokenIndex:(unsigned)index;	// 0x33b177fd
- (id)useEvaluationStackToGetParameter:(unsigned)getParameter tokenIndex:(unsigned)index allReferencesAllowed:(bool)allowed success:(bool *)success;	// 0x33b846d1
- (id)worksheetFromLinkReferenceIndex:(unsigned)linkReferenceIndex loadIfNeeded:(bool)needed;	// 0x33acd249
@end

