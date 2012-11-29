/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXFill : NSObject {
}
+ (id)pathGradientFillTypeEnumMap;	// 0x34f366c1
+ (id)presetPatternFillTypeEnumMap;	// 0x350243d9
+ (id)readBlipRefFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state forBullet:(BOOL)bullet;	// 0x34f43b35
+ (id)readFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x34f34ce1
+ (id)readGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x34f34f79
+ (void)readGradientFillFromXmlNode:(xmlNode *)xmlNode toGradientFill:(id)gradientFill;	// 0x34f35135
+ (id)readGroupFillFromXmlNode:(xmlNode *)xmlNode;	// 0x350afe6d
+ (id)readImageFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x34f43919
+ (id)readLinearGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x34f34fc9
+ (id)readNullFillFromXmlNode:(xmlNode *)xmlNode;	// 0x34f43709
+ (id)readPathGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x34f363c9
+ (id)readPresetPatternFillFromXmlNode:(xmlNode *)xmlNode;	// 0x3502424d
+ (id)readSolidFillFromXmlNode:(xmlNode *)xmlNode;	// 0x34f34dc9
+ (void)readStretch:(xmlNode *)stretch stretch:(id)stretch2;	// 0x34f43b2d
+ (void)readTile:(xmlNode *)tile tile:(id)tile2;	// 0x34feeb61
+ (id)tileFlipModeEnumMap;	// 0x34fe98a1
@end
