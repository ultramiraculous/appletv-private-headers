/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDStyle, WDDocument, WDTableRowProperties, WDParagraphProperties, WDCharacterProperties, WDTableCellProperties;

@interface WDTableStyleOverride : NSObject <NSCopying> {
	WDDocument *mDocument;	// 4 = 0x4
	WDStyle *mStyle;	// 8 = 0x8
	int mPart;	// 12 = 0xc
	WDParagraphProperties *mParagraphProperties;	// 16 = 0x10
	WDCharacterProperties *mCharacterProperties;	// 20 = 0x14
	WDTableRowProperties *mTableRowProperties;	// 24 = 0x18
	WDTableCellProperties *mTableCellStyleProperties;	// 28 = 0x1c
	unsigned mParagraphPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mCharacterPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mTableRowPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mTableCellStylePropertiesOverridden : 1;	// 32 = 0x20
}
@property(assign, getter=isCharacterPropertiesOverridden) BOOL characterPropertiesOverridden;	// G=0x34abd7b9; S=0x34abd7cd; converted property
@property(assign, getter=isParagraphPropertiesOverridden) BOOL paragraphPropertiesOverridden;	// G=0x34abd779; S=0x34abd78d; converted property
@property(assign) int part;	// G=0x34abd759; S=0x348e3471; converted property
@property(retain) id style;	// G=0x349b1925; S=0x3495584d; converted property
@property(assign, getter=isTableCellStylePropertiesOverridden) BOOL tableCellStylePropertiesOverridden;	// G=0x349b1a8d; S=0x34abd8c1; converted property
@property(assign, getter=isTableRowPropertiesOverridden) BOOL tableRowPropertiesOverridden;	// G=0x349b1a79; S=0x34abd8a1; converted property
- (id)initWithDocument:(id)document;	// 0x348e3431
- (id)characterProperties;	// 0x34abd7a9
- (id)copyWithZone:(NSZone *)zone;	// 0x34abd8e1
- (void)dealloc;	// 0x349065e1
// converted property getter: - (BOOL)isCharacterPropertiesOverridden;	// 0x34abd7b9
// converted property getter: - (BOOL)isParagraphPropertiesOverridden;	// 0x34abd779
// converted property getter: - (BOOL)isTableCellStylePropertiesOverridden;	// 0x349b1a8d
- (BOOL)isTablePropertiesOverridden;	// 0x34abd80d
// converted property getter: - (BOOL)isTableRowPropertiesOverridden;	// 0x349b1a79
- (id)mutableCharacterProperties;	// 0x349b19a5
- (id)mutableParagraphProperties;	// 0x349b1935
- (id)mutableTableCellStyleProperties;	// 0x349b1a15
- (id)mutableTableRowProperties;	// 0x34abd831
- (id)paragraphProperties;	// 0x34abd769
// converted property getter: - (int)part;	// 0x34abd759
// converted property setter: - (void)setCharacterPropertiesOverridden:(BOOL)overridden;	// 0x34abd7cd
// converted property setter: - (void)setParagraphPropertiesOverridden:(BOOL)overridden;	// 0x34abd78d
// converted property setter: - (void)setPart:(int)part;	// 0x348e3471
// converted property setter: - (void)setStyle:(id)style;	// 0x3495584d
// converted property setter: - (void)setTableCellStylePropertiesOverridden:(BOOL)overridden;	// 0x34abd8c1
// converted property setter: - (void)setTableRowPropertiesOverridden:(BOOL)overridden;	// 0x34abd8a1
// converted property getter: - (id)style;	// 0x349b1925
- (id)tableCellStyleProperties;	// 0x349b1aa1
- (id)tableProperties;	// 0x34abd7ed
- (id)tableRowProperties;	// 0x34abd821
@end

