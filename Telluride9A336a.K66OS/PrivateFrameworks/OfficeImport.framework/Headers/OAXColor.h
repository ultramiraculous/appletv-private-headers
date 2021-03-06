/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXColor : NSObject {
}
+ (id)presetColorEnumMap;	// 0x34d1ac05
+ (id)readColorFromNode:(xmlNode *)node;	// 0x34d05b2d
+ (id)readColorFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x34d05ae1
+ (id)readHslColorFromXmlNode:(xmlNode *)xmlNode;	// 0x34e27b2d
+ (id)readPresetColorFromAttribute:(id)attribute;	// 0x34d1a509
+ (id)readPresetColorFromXmlNode:(xmlNode *)xmlNode;	// 0x34d2f1f1
+ (id)readSRgbColorFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute;	// 0x34d05f49
+ (id)readScRgbColorFromXmlNode:(xmlNode *)xmlNode;	// 0x34d45cd1
+ (id)readSchemeColorFromXmlNode:(xmlNode *)xmlNode;	// 0x34d065c1
+ (id)readSystemColorFromAttribute:(id)attribute;	// 0x34d05dad
+ (id)readSystemColorFromXmlNode:(xmlNode *)xmlNode;	// 0x34d05cb5
+ (id)schemeColorEnumMap;	// 0x34d0668d
+ (id)systemColorEnumMap;	// 0x34d05e5d
@end

