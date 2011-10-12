/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABColor : NSObject {
}
+ (float)applyAlphaTransform:(id)transform toAlpha:(float)alpha;	// 0x357dbd99
+ (id)applyExpTransformWithValue:(float)value toRgbColor:(id)rgbColor;	// 0x357dc1b1
+ (id)applyHSLTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x357dbfbd
+ (id)applyRGBTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x357dbe31
+ (id)applyTransforms:(id)transforms toRgbColor:(id)rgbColor;	// 0x357dc2a1
+ (unsigned short)eshSchemeColorIndexWithOADMapColorIndex:(int)oadmapColorIndex;	// 0x357dbce5
+ (int)oadMapColorIndexWithEshSchemeColorIndex:(unsigned short)eshSchemeColorIndex;	// 0x3555d65d
+ (EshColor)propertyColor:(int)color colorPropertiesManager:(id)manager;	// 0x355ae48d
+ (id)readColor:(const EshColor *)color colorPropertiesManager:(id)manager colorPalette:(id)palette;	// 0x3555d2c5
+ (int)readColorAdjustmentType:(int)type;	// 0x355ae55d
+ (int)readSystemColorID:(int)anId;	// 0x357dbd15
@end

