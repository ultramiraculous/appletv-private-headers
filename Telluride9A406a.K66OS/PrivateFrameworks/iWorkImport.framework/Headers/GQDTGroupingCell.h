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
+ (CFStringRef)displayTypeString:(int)string;	// 0x33c52741
- (CFStringRef)createFormattedValue;	// 0x33c52a29
- (void)dealloc;	// 0x33c52c51
- (BOOL)hasFormulaValue;	// 0x33c52721
- (BOOL)isCollapsed;	// 0x33c526e5
- (unsigned short)level;	// 0x33c526b5
- (int)readAttributes:(xmlTextReader *)attributes;	// 0x33c53055
- (int)readElement:(xmlTextReader *)element;	// 0x33c52f9d
- (int)readRootFormat:(xmlTextReader *)format;	// 0x33c52df9
- (int)readValue:(xmlTextReader *)value;	// 0x33c52eb5
- (unsigned short)rowCount;	// 0x33c526d5
- (unsigned short)rowIdx;	// 0x33c526c5
- (void)setProcessorBundle:(CFBundleRef)bundle;	// 0x33c52731
- (id)value;	// 0x33c526f5
@end

