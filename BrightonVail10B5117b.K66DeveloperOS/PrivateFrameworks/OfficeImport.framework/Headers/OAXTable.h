/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXTable : NSObject {
}
+ (void)cacheTableStylesInPart:(id)part cache:(id)cache;	// 0x34b1130d
+ (id)readCellBorderStyle:(xmlNode *)style drawingState:(id)state;	// 0x34b16c61
+ (void)readCellFromXmlNode:(xmlNode *)xmlNode toCell:(id)cell drawingState:(id)state;	// 0x34b6d7b9
+ (id)readCellPropertiesFromXmlNode:(xmlNode *)xmlNode drawingState:(id)state;	// 0x34b6d9e9
+ (id)readCellStyle:(xmlNode *)style drawingState:(id)state;	// 0x34b16b95
+ (id)readDefaultTableStyleWithDrawingState:(id)drawingState;	// 0x34b15ab5
+ (id)readFromXmlNode:(xmlNode *)xmlNode drawingState:(id)state;	// 0x34b6ce6d
+ (void)readGridFromXmlNode:(xmlNode *)xmlNode toGrid:(id)grid;	// 0x34b6d361
+ (int)readOnOffFlag:(id)flag;	// 0x34b17a21
+ (id)readPartStyle:(xmlNode *)style drawingState:(id)state;	// 0x34b16ab5
+ (void)readPropertiesFromXmlNode:(xmlNode *)xmlNode toProperties:(id)properties drawingState:(id)state;	// 0x34b6cf99
+ (void)readRowFromXmlNode:(xmlNode *)xmlNode toRow:(id)row drawingState:(id)state;	// 0x34b6d5e9
+ (void)readRowsFromTableXmlNode:(xmlNode *)tableXmlNode toTable:(id)table drawingState:(id)state;	// 0x34b6d48d
+ (id)readTableStyle:(xmlNode *)style drawingState:(id)state;	// 0x34b1667d
+ (id)readTextStyle:(xmlNode *)style drawingState:(id)state;	// 0x34b17285
+ (id)readThemableEffectsFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x34b8c241
+ (id)readThemableFillFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x34b170dd
+ (id)readThemableStrokeFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x34b16e31
@end

