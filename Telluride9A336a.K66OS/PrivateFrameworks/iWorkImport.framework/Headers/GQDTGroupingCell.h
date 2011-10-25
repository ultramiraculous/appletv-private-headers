/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDTCell.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDTGroupingCell : GQDTCell {
@private
	unsigned short mLevel;	// 16 = 0x10
	unsigned short mRowIdx;	// 18 = 0x12
	unsigned short mRowCount;	// 20 = 0x14
	BOOL mIsCollapsed;	// 22 = 0x16
	id mValue;	// 24 = 0x18
	id mFormat;	// 28 = 0x1c
	CFBundleRef mProcessorBundle;	// 32 = 0x20
	BOOL mHasValidFormulaValue;	// 36 = 0x24
	CFStringRef mFormulaValue;	// 40 = 0x28
}
+ (CFStringRef)displayTypeString:(int)string;	// 0x304d3741
- (CFStringRef)createFormattedValue;	// 0x304d3a29
- (void)dealloc;	// 0x304d3c51
- (BOOL)hasFormulaValue;	// 0x304d3721
- (BOOL)isCollapsed;	// 0x304d36e5
- (unsigned short)level;	// 0x304d36b5
- (int)readAttributes:(xmlTextReader *)attributes;	// 0x304d4055
- (int)readElement:(xmlTextReader *)element;	// 0x304d3f9d
- (int)readRootFormat:(xmlTextReader *)format;	// 0x304d3df9
- (int)readValue:(xmlTextReader *)value;	// 0x304d3eb5
- (unsigned short)rowCount;	// 0x304d36d5
- (unsigned short)rowIdx;	// 0x304d36c5
- (void)setProcessorBundle:(CFBundleRef)bundle;	// 0x304d3731
- (id)value;	// 0x304d36f5
@end

