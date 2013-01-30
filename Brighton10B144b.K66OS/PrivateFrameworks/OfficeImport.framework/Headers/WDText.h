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
- (id)initWithDocument:(id)document textType:(int)type;	// 0x348d9db1
- (id)initWithDocument:(id)document textType:(int)type tableCell:(id)cell;	// 0x348d9dd5
- (void)addBlock:(id)block;	// 0x34abda55
- (id)addParagraph;	// 0x348e7d45
- (id)addParagraphAtIndex:(int)index;	// 0x34abda75
- (id)addTable;	// 0x348ef015
- (id)addTableAtIndex:(int)index;	// 0x34abdae5
- (id)blockAt:(int)at;	// 0x348fa6c5
- (int)blockCount;	// 0x348f971d
- (id)blockIterator;	// 0x34abdb55
- (id)blocks;	// 0x34abda25
- (id)content;	// 0x34abdd21
- (void)dealloc;	// 0x34906b4d
- (id)document;	// 0x348e7eb5
- (int)indexOfBlock:(id)block;	// 0x34abda35
- (BOOL)isEmpty;	// 0x34abdca9
- (id)lastBlock;	// 0x348eceb5
- (id)newBlockIterator;	// 0x34abdba9
- (id)newRunIterator;	// 0x34abdc4d
- (void)removeLastBlock;	// 0x34943e01
- (void)removeLastCharacter:(unsigned short)character;	// 0x34943e89
- (id)runIterator;	// 0x34abdbed
- (id)tableCell;	// 0x3494ef01
- (int)tableNestingLevel;	// 0x3492c5b1
- (int)textType;	// 0x348e974d
@end
