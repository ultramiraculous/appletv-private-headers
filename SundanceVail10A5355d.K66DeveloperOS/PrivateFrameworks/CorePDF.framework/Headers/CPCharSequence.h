/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "NSCopying.h"
#import "CPCopying.h"
#import <NSObject.h> // Unknown library

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {
	unsigned length;	// 4 = 0x4
	CPPDFChar **charArray;	// 8 = 0x8
	unsigned previousSize;	// 12 = 0xc
	unsigned size;	// 16 = 0x10
	CPMemoryOwner *sharedMemory;	// 20 = 0x14
	BOOL wasMerged;	// 24 = 0x18
}
@property(readonly, assign) CPPDFChar **charArray;	// G=0x34d04f8d; converted property
@property(readonly, assign) unsigned length;	// G=0x34d04f2d; converted property
@property(readonly, assign) BOOL wasMerged;	// G=0x34d05621; converted property
- (id)initSuper;	// 0x34d04c1d
- (id)initWithChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x34d04bc5
- (id)initWithSizeFor:(unsigned)aFor;	// 0x34d04b5d
- (void)addChar:(CPPDFChar *)aChar;	// 0x34d04f9d
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x34d05005
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34d05075
- (void)addCharsFromSequence:(id)sequence;	// 0x34d0510d
- (CGRect)bounds;	// 0x34d05e81
- (CGRect)boundsFrom:(unsigned)from length:(unsigned)length;	// 0x34d05ebd
// converted property getter: - (CPPDFChar **)charArray;	// 0x34d04f8d
- (CPPDFChar *)charAtIndex:(unsigned)index;	// 0x34d04f3d
- (void)copyToSubsequence:(id)subsequence from:(unsigned)from length:(unsigned)length;	// 0x34d05999
- (void)copyToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34d05a35
- (id)copyWithZone:(NSZone *)zone;	// 0x34d04d21
- (void)dealloc;	// 0x34d04cc1
- (void)dispose;	// 0x34d04c49
- (void)finalize;	// 0x34d04c81
// converted property getter: - (unsigned)length;	// 0x34d04f2d
- (BOOL)map:(/*function-pointer*/ void *)map passing:(void *)passing;	// 0x34d05bc9
- (BOOL)map:(/*function-pointer*/ void *)map whereNeighborsWith:(id)with passing:(void *)passing;	// 0x34d05d95
- (BOOL)mapToPairs:(/*function-pointer*/ void *)pairs passing:(void *)passing;	// 0x34d05ce9
- (BOOL)mapToPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x34d05d39
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index from:(unsigned)from length:(unsigned)length passing:(void *)passing;	// 0x34d05c69
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x34d05c15
- (void)merge:(id)merge by:(/*function-pointer*/ void *)by;	// 0x34d05551
- (void)mergeByAnchorXIncreasingYDecreasing:(id)decreasing;	// 0x34d05535
- (void)mergeByAnchorYDecreasingXIncreasing:(id)increasing;	// 0x34d05519
- (id)newSubsequenceFrom:(unsigned)from length:(unsigned)length;	// 0x34d05631
- (void)removeAllChars;	// 0x34d051b1
- (void)removeChar;	// 0x34d0516d
- (void)removeCharAtIndex:(unsigned)index;	// 0x34d052a5
- (void)removeFrom:(unsigned)from;	// 0x34d05351
- (BOOL)removeSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34d0587d
- (BOOL)removeToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34d05ad1
- (void)replaceCharAtIndex:(unsigned)index withChar:(CPPDFChar *)aChar;	// 0x34d0522d
- (void)resize:(unsigned)resize;	// 0x34d04e05
- (void)sortBy:(/*function-pointer*/ void *)by;	// 0x34d054b9
- (void)sortByAnchorXIncreasingYDecreasing;	// 0x34d05431
- (void)sortByAnchorYDecreasingXIncreasing;	// 0x34d053a9
- (void)splitToSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34d05771
// converted property getter: - (BOOL)wasMerged;	// 0x34d05621
@end

