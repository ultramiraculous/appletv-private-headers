/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPTextObject.h"
#import "CPDisposable.h"

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable> {
	CPCharSequence *charSequence;	// 76 = 0x4c
	XXStruct_iDweLB *wordArray;	// 80 = 0x50
	unsigned wordCount;	// 84 = 0x54
	CPInlineContainer *inlineList;	// 88 = 0x58
	int lineNumber;	// 92 = 0x5c
	int columnNumber;	// 96 = 0x60
	float baseline;	// 100 = 0x64
	BOOL baseLineIsNull;	// 104 = 0x68
	BOOL hasBeenSplit;	// 105 = 0x69
	BOOL hasBeenProcessed;	// 106 = 0x6a
	BOOL maySplit;	// 107 = 0x6b
	BOOL hasTabs;	// 108 = 0x6c
	NSArray *columnBreaks;	// 112 = 0x70
	NSArray *xsegments;	// 116 = 0x74
	int levels;	// 120 = 0x78
	float maximumLetterGap;	// 124 = 0x7c
	float maximumWordGap;	// 128 = 0x80
	int tabsBefore;	// 132 = 0x84
	BOOL irregular;	// 136 = 0x88
	unsigned leftSpacerIndex;	// 140 = 0x8c
	unsigned rightSpacerIndex;	// 144 = 0x90
	BOOL isListItem;	// 148 = 0x94
	unsigned listSpacerIndex;	// 152 = 0x98
	BOOL lineBreakAfter;	// 156 = 0x9c
	CPPDFStyle *uniformStyle;	// 160 = 0xa0
	unsigned short uniformStyleFlags;	// 164 = 0xa4
	float monospaceWidth;	// 168 = 0xa8
	unsigned *spacesBefore;	// 172 = 0xac
	BOOL disposed;	// 176 = 0xb0
}
@property(assign) float baseline;	// G=0x35766c3d; S=0x35766d09; converted property
@property(retain) CPCharSequence *charSequence;	// G=0x35765f55; S=0x35765f11; converted property
@property(retain) NSArray *columnBreaks;	// G=0x357668f1; S=0x35766901; converted property
@property(assign) BOOL hasBeenProcessed;	// G=0x357668e1; S=0x357668d1; converted property
@property(assign) BOOL hasBeenSplit;	// G=0x357668c1; S=0x357668b1; converted property
@property(assign) BOOL hasTabs;	// G=0x3576696d; S=0x3576695d; converted property
@property(readonly, assign) CPInlineContainer *inlineList;	// G=0x35766101; converted property
@property(assign) BOOL irregular;	// G=0x357673bd; S=0x357673cd; converted property
@property(assign, nonatomic) BOOL isListItem;	// G=0x357675f9; S=0x35767609; @synthesize
@property(assign, nonatomic) unsigned leftSpacerIndex;	// G=0x357675b9; S=0x357675c9; @synthesize
@property(assign) int levels;	// G=0x357672e9; S=0x357672f9; converted property
@property(assign, nonatomic) BOOL lineBreakAfter;	// G=0x35767639; S=0x35767649; @synthesize
@property(assign, nonatomic) unsigned listSpacerIndex;	// G=0x35767619; S=0x35767629; @synthesize
@property(assign) float maximumLetterGap;	// G=0x3576737d; S=0x3576738d; converted property
@property(assign) float maximumWordGap;	// G=0x3576739d; S=0x357673ad; converted property
@property(readonly, assign) float monospaceWidth;	// G=0x3576700d; converted property
@property(assign, nonatomic) unsigned rightSpacerIndex;	// G=0x357675d9; S=0x357675e9; @synthesize
@property(assign) int tabsBefore;	// G=0x3576698d; S=0x3576697d; converted property
@property(readonly, assign) XXStruct_iDweLB *wordArray;	// G=0x35765f65; converted property
@property(readonly, assign) unsigned wordCount;	// G=0x35765fc5; converted property
- (id)init;	// 0x35765c21
- (void)accept:(id)accept;	// 0x35766945
- (int)align;	// 0x357662b9
- (CGPoint)anchor;	// 0x35766bd5
- (void)anchorChunk:(id)chunk atWordIndex:(unsigned)wordIndex;	// 0x35766111
- (id)attributes;	// 0x357673dd
- (int)baseLineAscending:(id)ascending;	// 0x35766a61
- (int)baseLineDescending:(id)descending;	// 0x35766aa5
// converted property getter: - (float)baseline;	// 0x35766c3d
- (CGRect)bounds;	// 0x357669a1
- (CGRect)boundsOfWordAtIndex:(unsigned)index;	// 0x35765fd5
- (BOOL)changesFontAt:(id)at;	// 0x35766331
// converted property getter: - (id)charSequence;	// 0x35765f55
// converted property getter: - (id)columnBreaks;	// 0x357668f1
- (id)copyWithZone:(NSZone *)zone;	// 0x35765e35
- (void)dealloc;	// 0x35765dc1
- (void)dispose;	// 0x35765cf5
- (void)finalize;	// 0x35765d81
- (XXStruct_iDweLB *)firstWord;	// 0x35766089
- (void)fitBoundsToChildren;	// 0x3576699d
// converted property getter: - (BOOL)hasBeenProcessed;	// 0x357668e1
// converted property getter: - (BOOL)hasBeenSplit;	// 0x357668c1
- (BOOL)hasDropCap;	// 0x3576747d
- (BOOL)hasJustifiedAlignment;	// 0x35766305
// converted property getter: - (BOOL)hasTabs;	// 0x3576696d
- (BOOL)hyphenated;	// 0x35766c39
- (unsigned)inlineCount;	// 0x357660d9
// converted property getter: - (CPInlineContainer *)inlineList;	// 0x35766101
// converted property getter: - (BOOL)irregular;	// 0x357673bd
- (BOOL)isIndivisible;	// 0x35766d2d
// declared property getter: - (BOOL)isListItem;	// 0x357675f9
- (BOOL)isMonospaced;	// 0x35766fe1
- (XXStruct_iDweLB *)lastWord;	// 0x357660ad
// declared property getter: - (unsigned)leftSpacerIndex;	// 0x357675b9
// converted property getter: - (int)levels;	// 0x357672e9
// declared property getter: - (BOOL)lineBreakAfter;	// 0x35767639
// declared property getter: - (unsigned)listSpacerIndex;	// 0x35767619
- (BOOL)mapToWordPairs:(/*function-pointer*/ void *)wordPairs passing:(void *)passing;	// 0x357667d1
- (BOOL)mapToWordPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x35766835
- (BOOL)mapToWords:(/*function-pointer*/ void *)words passing:(void *)passing;	// 0x35766705
- (BOOL)mapToWordsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x35766765
// converted property getter: - (float)maximumLetterGap;	// 0x3576737d
// converted property getter: - (float)maximumWordGap;	// 0x3576739d
- (float)medianFontSize;	// 0x35767531
// converted property getter: - (float)monospaceWidth;	// 0x3576700d
- (id)newTextLineFromWordAt:(unsigned)at lengthInWords:(unsigned)words;	// 0x357663c1
- (BOOL)overlapsHorizontally:(CGRect)horizontally;	// 0x35766b39
- (BOOL)overlapsWith:(id)with;	// 0x35766ae9
- (id)properties;	// 0x357668a5
- (void)recomputeBaseline;	// 0x35766d85
- (void)recomputeLevels;	// 0x35767309
- (BOOL)removeTextLines:(id)lines whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3576656d
// declared property getter: - (unsigned)rightSpacerIndex;	// 0x357675d9
// converted property setter: - (void)setBaseline:(float)baseline;	// 0x35766d09
- (void)setBaselineToNull;	// 0x35766d19
// converted property setter: - (void)setCharSequence:(id)sequence;	// 0x35765f11
// converted property setter: - (void)setColumnBreaks:(id)breaks;	// 0x35766901
// converted property setter: - (void)setHasBeenProcessed:(BOOL)processed;	// 0x357668d1
// converted property setter: - (void)setHasBeenSplit:(BOOL)split;	// 0x357668b1
// converted property setter: - (void)setHasTabs:(BOOL)tabs;	// 0x3576695d
// converted property setter: - (void)setIrregular:(BOOL)irregular;	// 0x357673cd
// declared property setter: - (void)setIsListItem:(BOOL)item;	// 0x35767609
// declared property setter: - (void)setLeftSpacerIndex:(unsigned)index;	// 0x357675c9
// converted property setter: - (void)setLevels:(int)levels;	// 0x357672f9
// declared property setter: - (void)setLineBreakAfter:(BOOL)after;	// 0x35767649
// declared property setter: - (void)setListSpacerIndex:(unsigned)index;	// 0x35767629
// converted property setter: - (void)setMaximumLetterGap:(float)gap;	// 0x3576738d
// converted property setter: - (void)setMaximumWordGap:(float)gap;	// 0x357673ad
// declared property setter: - (void)setRightSpacerIndex:(unsigned)index;	// 0x357675e9
- (void)setSpaces:(unsigned)spaces beforeWordAtIndex:(unsigned)index;	// 0x35767241
// converted property setter: - (void)setTabsBefore:(int)before;	// 0x3576697d
- (unsigned)spacesBeforeWordAtIndex:(unsigned)index;	// 0x35767209
- (BOOL)styleIsUniform:(CPPDFStyle **)uniform styleFlags:(unsigned short)flags;	// 0x35766ee9
// converted property getter: - (int)tabsBefore;	// 0x3576698d
- (int)topIsAbove:(id)above;	// 0x357673e9
- (void)translateObjectYBy:(float)by;	// 0x35766d31
// converted property getter: - (XXStruct_iDweLB *)wordArray;	// 0x35765f65
- (XXStruct_iDweLB *)wordArrayOfSize:(unsigned)size;	// 0x35765f75
- (XXStruct_iDweLB *)wordAtIndex:(unsigned)index;	// 0x35766039
// converted property getter: - (unsigned)wordCount;	// 0x35765fc5
- (long)zOrder;	// 0x35766261
@end

