/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OAXGeometry : NSObject {
}
+ (void)addFormulasFromFile:(id)file toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x31a5b895
+ (int)adjustValueWithGuideXmlNode:(xmlNode *)guideXmlNode;	// 0x31a6183d
+ (id)formulaKeywordEnumMap;	// 0x31a5bead
+ (id)formulaTypeEnumMap;	// 0x31a5be55
+ (id)pathFillModeEnumMap;	// 0x31a913e9
+ (OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode *)xmlNode name:(const char *)name formulaNameToIndexMap:(id)indexMap;	// 0x31a5c065
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap;	// 0x31a5b7a5
+ (id)readCustomGeometryFromXmlNode:(xmlNode *)xmlNode hasImplicitFormulas:(BOOL)formulas;	// 0x31a5b665
+ (void)readFormulasFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap formulaNameToIndexMap:(id)indexMap4;	// 0x31a5b9d1
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x31aba459
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x31a3c0f1
+ (void)readPathsFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x31a5c0cd
+ (id)readPresetGeometryFromXmlNode:(xmlNode *)xmlNode;	// 0x31a3c15d
+ (void)readTextRectFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x31a5bf3d
+ (id)shapeTypeEnumMap;	// 0x31a3c28d
+ (int)shapeTypeForString:(id)string;	// 0x31a3c265
+ (id)stringForShapeType:(int)shapeType;	// 0x31a62089
@end

