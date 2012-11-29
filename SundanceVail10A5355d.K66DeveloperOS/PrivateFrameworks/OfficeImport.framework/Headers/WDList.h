/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDListDefinition, WDDocument, NSMutableArray;

@interface WDList : NSObject {
	NSMutableArray *mLevelOverrides;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	int mIndex;	// 12 = 0xc
	WDListDefinition *mListDefinition;	// 16 = 0x10
}
@property(assign) int index;	// G=0x31e321c9; S=0x31c68d9d; converted property
- (id)initWithDocument:(id)document listDefinition:(id)definition;	// 0x31c68d0d
- (id)addLevelOverride;	// 0x31cc7ca9
- (void)dealloc;	// 0x31c89961
- (id)document;	// 0x31cc7d61
// converted property getter: - (int)index;	// 0x31e321c9
- (id)levelOverrideAt:(int)at;	// 0x31e32199
- (int)levelOverrideCount;	// 0x31e32179
- (id)levelOverrides;	// 0x31e321b9
- (id)listDefinition;	// 0x31c876fd
- (int)listId;	// 0x31e321d9
// converted property setter: - (void)setIndex:(int)index;	// 0x31c68d9d
@end
