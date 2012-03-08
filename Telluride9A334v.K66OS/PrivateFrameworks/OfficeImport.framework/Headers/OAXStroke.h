/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXStroke : NSObject {
}
+ (id)compoundLineEnumMap;	// 0x3566a1b5
+ (id)lineCapEnumMap;	// 0x3566a15d
+ (id)lineEndLengthEnumMap;	// 0x356a74c5
+ (id)lineEndTypeEnumMap;	// 0x356a7415
+ (id)lineEndWidthEnumMap;	// 0x356a746d
+ (id)penAlignmentEnumMap;	// 0x3566a20d
+ (id)presetDashEnumMap;	// 0x3566a30d
+ (id)readCustomDashFromXmlNode:(xmlNode *)xmlNode;	// 0x3578ae61
+ (void)readLineEnd:(id)end fromXmlNode:(xmlNode *)xmlNode;	// 0x35675555
+ (id)readPresetDashFromXmlNode:(xmlNode *)xmlNode;	// 0x3566a265
+ (id)readStrokeFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x35669d11
@end
