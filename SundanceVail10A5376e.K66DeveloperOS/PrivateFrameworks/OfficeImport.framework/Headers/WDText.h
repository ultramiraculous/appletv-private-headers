/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTableCell, WDDocument, NSMutableArray;

@interface WDText : NSObject {
	NSMutableArray *mBlocks;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	int mTextType;	// 12 = 0xc
	WDTableCell *mTableCell;	// 16 = 0x10
}
- (id)initWithDocument:(id)document textType:(int)type;	// 0x36fd5db1
- (id)initWithDocument:(id)document textType:(int)type tableCell:(id)cell;	// 0x36fd5dd5
- (void)addBlock:(id)block;	// 0x371b9a55
- (id)addParagraph;	// 0x36fe3d45
- (id)addParagraphAtIndex:(int)index;	// 0x371b9a75
- (id)addTable;	// 0x36feb015
- (id)addTableAtIndex:(int)index;	// 0x371b9ae5
- (id)blockAt:(int)at;	// 0x36ff66c5
- (int)blockCount;	// 0x36ff571d
- (id)blockIterator;	// 0x371b9b55
- (id)blocks;	// 0x371b9a25
- (id)content;	// 0x371b9d21
- (void)dealloc;	// 0x37002b4d
- (id)document;	// 0x36fe3eb5
- (int)indexOfBlock:(id)block;	// 0x371b9a35
- (BOOL)isEmpty;	// 0x371b9ca9
- (id)lastBlock;	// 0x36fe8eb5
- (id)newBlockIterator;	// 0x371b9ba9
- (id)newRunIterator;	// 0x371b9c4d
- (void)removeLastBlock;	// 0x3703fe01
- (void)removeLastCharacter:(unsigned short)character;	// 0x3703fe89
- (id)runIterator;	// 0x371b9bed
- (id)tableCell;	// 0x3704af01
- (int)tableNestingLevel;	// 0x370285b1
- (int)textType;	// 0x36fe574d
@end
