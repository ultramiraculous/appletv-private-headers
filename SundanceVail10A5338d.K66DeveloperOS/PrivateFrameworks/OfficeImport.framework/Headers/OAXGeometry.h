/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXGeometry : NSObject {
}
+ (void)addFormulasFromFile:(id)file toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x33a93861
+ (int)adjustValueWithGuideXmlNode:(xmlNode *)guideXmlNode;	// 0x33ab634d
+ (id)formulaKeywordEnumMap;	// 0x33a93fb5
+ (id)formulaTypeEnumMap;	// 0x33a93f5d
+ (id)pathFillModeEnumMap;	// 0x33ae54c1
+ (OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode *)xmlNode name:(const char *)name formulaNameToIndexMap:(id)indexMap;	// 0x33a9418d
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap;	// 0x33a93759
+ (id)readCustomGeometryFromXmlNode:(xmlNode *)xmlNode hasImplicitFormulas:(BOOL)formulas;	// 0x33a935f5
+ (void)readFormulasFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap formulaNameToIndexMap:(id)indexMap4;	// 0x33a939b1
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x33bab4e1
+ (void)readPathsFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x33a941f1
+ (id)readPresetGeometryFromXmlNode:(xmlNode *)xmlNode;	// 0x33a402b9
+ (void)readTextRectFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x33a9404d
+ (id)shapeTypeEnumMap;	// 0x33a4040d
+ (int)shapeTypeForString:(id)string;	// 0x33a403e1
+ (id)stringForShapeType:(int)shapeType;	// 0x33ade865
@end

