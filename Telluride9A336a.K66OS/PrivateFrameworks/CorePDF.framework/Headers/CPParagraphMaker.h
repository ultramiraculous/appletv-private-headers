/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class CPZone, CPPage, NSMutableArray;

@interface CPParagraphMaker : NSObject {
	NSMutableArray *avail;	// 4 = 0x4
	NSMutableArray *paragraphs;	// 8 = 0x8
	NSMutableArray *compoundedShapesOnPage;	// 12 = 0xc
	BOOL spacingSet;	// 16 = 0x10
	float currentSpacing;	// 20 = 0x14
	CPZone *parent;	// 24 = 0x18
	CPPage *page;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableArray *paragraphs;	// G=0x34a03165; converted property
+ (BOOL)line:(id)line alignsWith:(id)with;	// 0x34a03175
- (void)addCompoundedShapesOn:(id)on to:(id)to;	// 0x34a031f5
- (void)addLinesTo:(id)to;	// 0x34a03691
- (unsigned)alignmentOf:(id)of and:(id)anAnd;	// 0x34a04f2d
- (unsigned)alignmentOf:(id)of and:(id)anAnd and:(id)anAnd3;	// 0x34a04c3d
- (void)dealloc;	// 0x34a03631
- (BOOL)firstWordOf:(id)of fits:(id)fits indent:(float)indent;	// 0x34a05995
- (BOOL)fitsBelow:(id)below alignment:(unsigned)alignment spacing:(float)spacing from:(int)from;	// 0x34a046e5
- (int)indexOfUniqueLineBelow:(id)uniqueLineBelow from:(int)from;	// 0x34a050b1
- (BOOL)isGraphicBetween:(id)between and:(id)anAnd;	// 0x34a05781
- (BOOL)line:(id)line isAlignedWith:(id)with;	// 0x34a04931
- (BOOL)line:(id)line isBelow:(id)below;	// 0x34a05531
- (BOOL)line:(id)line isDirectlyBelow:(id)below;	// 0x34a056d5
- (int)linesThatOverlapLineAt:(int)at between:(float)between and:(float)anAnd from:(int)from;	// 0x34a052f5
- (id)makeInitialParagraph;	// 0x34a03e79
- (void)makeParagraphsIn:(id)anIn;	// 0x34a03309
- (int)paragraph:(id)paragraph splits:(id)splits;	// 0x34a03179
// converted property getter: - (id)paragraphs;	// 0x34a03165
- (BOOL)spacingOf:(id)of and:(id)anAnd and:(id)anAnd3 is:(float *)is;	// 0x34a0317d
- (BOOL)styleOf:(id)of differsFromStyleOf:(id)of2;	// 0x34a04ecd
@end

