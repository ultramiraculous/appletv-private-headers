/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class SFUNoCopyDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject {
@private
	SFUNoCopyDictionary *mFontTable;	// 4 = 0x4
	NSMutableArray *mFontsInOrderOfInsertion;	// 8 = 0x8
}
- (id)init;	// 0x3447f419
- (void)clear;	// 0x34482a75
- (int)count;	// 0x345d7d69
- (id)createFontWithName:(id)name;	// 0x3447f5b1
- (void)dealloc;	// 0x3446d0d1
- (id)fontWithName:(id)name;	// 0x3447fe7d
- (id)fontWithName:(id)name create:(BOOL)create;	// 0x3447f569
- (id)fonts;	// 0x345d7d49
@end

