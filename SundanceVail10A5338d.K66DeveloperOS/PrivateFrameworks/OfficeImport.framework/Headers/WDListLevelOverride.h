/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject {
	WDListLevel *mListLevel;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	unsigned char mLevel;	// 12 = 0xc
	long mStartNumber;	// 16 = 0x10
	BOOL mStartNumberOverridden;	// 20 = 0x14
}
@property(assign) unsigned char level;	// G=0x33c034ad; S=0x33a994e1; converted property
@property(assign) long startNumber;	// G=0x33c034bd; S=0x33a994f1; converted property
- (id)initWithDocument:(id)document;	// 0x33a99401
- (void)dealloc;	// 0x33a9e019
- (id)document;	// 0x33c0349d
- (BOOL)isListLevelOverridden;	// 0x33c034ed
- (BOOL)isStartNumberOverridden;	// 0x33c034cd
// converted property getter: - (unsigned char)level;	// 0x33c034ad
- (id)listLevel;	// 0x33c034dd
- (id)mutableListLevel;	// 0x33a99511
// converted property setter: - (void)setLevel:(unsigned char)level;	// 0x33a994e1
// converted property setter: - (void)setStartNumber:(long)number;	// 0x33a994f1
// converted property getter: - (long)startNumber;	// 0x33c034bd
@end
