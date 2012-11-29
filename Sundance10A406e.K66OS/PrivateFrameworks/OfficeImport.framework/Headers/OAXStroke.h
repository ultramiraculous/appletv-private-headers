/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXStroke : NSObject {
}
+ (id)compoundLineEnumMap;	// 0x34f35ab1
+ (id)lineCapEnumMap;	// 0x34f35a59
+ (id)lineEndLengthEnumMap;	// 0x34fb4601
+ (id)lineEndTypeEnumMap;	// 0x34fb4551
+ (id)lineEndWidthEnumMap;	// 0x34fb45a9
+ (id)penAlignmentEnumMap;	// 0x34f35b09
+ (id)presetDashEnumMap;	// 0x34f35c09
+ (id)readCustomDashFromXmlNode:(xmlNode *)xmlNode;	// 0x350b01d9
+ (void)readLineEnd:(id)end fromXmlNode:(xmlNode *)xmlNode;	// 0x34f43801
+ (id)readPresetDashFromXmlNode:(xmlNode *)xmlNode;	// 0x34f35b61
+ (id)readStrokeFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x34f35639
@end
