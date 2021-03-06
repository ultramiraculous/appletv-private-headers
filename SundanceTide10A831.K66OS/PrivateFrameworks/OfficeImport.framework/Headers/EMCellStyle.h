/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMStyle.h"

@class EDStyle;

@interface EMCellStyle : CMStyle {
	EDStyle *edStyle;	// 12 = 0xc
	BOOL _nameContainsItalic;	// 16 = 0x10
	BOOL _nameContainsBold;	// 17 = 0x11
}
- (id)init;	// 0x36a40709
- (id)initWithEDStyle:(id)edstyle;	// 0x36a84fb1
- (id)_parseFontName:(id)name;	// 0x36a85429
- (void)addAlignmentStyle:(id)style;	// 0x36a859a9
- (void)addBordersStyle:(id)style;	// 0x36a8ead1
- (void)addFillStyle:(id)style;	// 0x36a858a1
- (void)addFontStyle:(id)style;	// 0x36a850b1
- (void)changeWithContentFormatType:(int)contentFormatType;	// 0x36a86629
- (void)changeWithContentWidth:(double)contentWidth columnWidth:(double)width;	// 0x36a8645d
@end

