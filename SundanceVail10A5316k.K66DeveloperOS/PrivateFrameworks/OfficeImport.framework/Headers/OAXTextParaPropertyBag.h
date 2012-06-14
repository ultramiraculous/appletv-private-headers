/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXTextParaPropertyBag : NSObject {
}
+ (void)readAlign:(id)align paragraphProperties:(id)properties;	// 0x311394c9
+ (int)readBulletScheme:(id)scheme;	// 0x31169119
+ (void)readFontAlign:(id)align paragraphProperties:(id)properties;	// 0x3115d701
+ (void)readParagraphProperties:(xmlNode *)properties paragraphProperties:(id)properties2 drawingState:(id)state;	// 0x31138c21
+ (id)readSpacing:(xmlNode *)spacing;	// 0x3113a435
+ (void)readTabList:(xmlNode *)list paragraphProperties:(id)properties;	// 0x3115ecf1
@end
