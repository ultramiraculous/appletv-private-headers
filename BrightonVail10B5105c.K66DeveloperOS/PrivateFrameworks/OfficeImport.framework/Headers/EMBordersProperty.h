/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class EDBorders, TSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {
	EDBorders *edValue;	// 8 = 0x8
	TSUColor *mBorderColor;	// 12 = 0xc
	TSUColor *mBorderTopColor;	// 16 = 0x10
	TSUColor *mBorderLeftColor;	// 20 = 0x14
	TSUColor *mBorderBottomColor;	// 24 = 0x18
	TSUColor *mBorderRightColor;	// 28 = 0x1c
	int mBorderStyle[5];	// 32 = 0x20
	int mBorderWidth[5];	// 52 = 0x34
}
- (id)initWithEDBorders:(id)edborders;	// 0x3796ab41
- (id)initWithOADStroke:(id)oadstroke;	// 0x37a8a3e9
- (id)borderColor;	// 0x37a8a67d
- (int *)borderStyles;	// 0x37a8a68d
- (int *)borderWidths;	// 0x37a8a69d
- (id)colorString;	// 0x3796b80d
- (id)copyWithZone:(NSZone *)zone;	// 0x37a8a319
- (id)cssString;	// 0x3796b1d1
- (id)cssStringForName:(id)name;	// 0x3796b1a5
- (BOOL)hasSameColorsAs:(id)as;	// 0x37a8a7a1
- (BOOL)hasSameStylesAs:(id)as;	// 0x37a8a6c9
- (BOOL)hasSameWidthsAs:(id)as;	// 0x37a8a735
- (BOOL)isEqual:(id)equal;	// 0x37a8a249
- (BOOL)isNoneAtLocation:(int)location;	// 0x37a8a6ad
- (void)setBorderStyleAndWidth:(int)width location:(unsigned)location;	// 0x3796aead
- (void)setNoneAtLocation:(int)location;	// 0x3796b179
- (id)stringFromColor:(id)color;	// 0x3796b97d
- (id)stringFromStyleEnum:(int)styleEnum;	// 0x3796b4e9
- (id)stringFromWidthEnum:(int)widthEnum;	// 0x3796b7c5
- (id)styleHashNumber;	// 0x3796b421
- (id)styleString;	// 0x3796b255
- (id)widthHashNumber;	// 0x3796b6fd
- (id)widthString;	// 0x3796b531
@end
