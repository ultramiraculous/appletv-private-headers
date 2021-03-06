/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDDocument, NSMutableArray;

@interface WDListTable : NSObject {
	NSMutableArray *mLists;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
}
- (id)initWithDocument:(id)document;	// 0x34ab5c55
- (id)addList:(id)list;	// 0x34ac1cb1
- (void)dealloc;	// 0x34ae295d
- (id)document;	// 0x34ac1c51
- (id)listAt:(int)at;	// 0x34ae06a1
- (int)listCount;	// 0x34ae0681
- (id)lists;	// 0x34c8b4f1
@end

