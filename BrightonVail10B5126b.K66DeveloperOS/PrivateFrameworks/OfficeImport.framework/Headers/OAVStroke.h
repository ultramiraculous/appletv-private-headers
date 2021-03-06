/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface OAVStroke : NSObject {
}
+ (int)readCapStyle:(id)style;	// 0x348f51a5
+ (int)readCompoundType:(id)type;	// 0x348f5279
+ (void)readDashStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x348f4869
+ (void)readFillStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x348f45dd
+ (id)readFromManager:(id)manager;	// 0x348f4265
+ (void)readJoinStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x348f4ac5
+ (void)readLineEnd:(id)end type:(id)type width:(id)width length:(id)length;	// 0x348f4da5
+ (int)readLineEndLength:(id)length;	// 0x348f4f11
+ (int)readLineEndType:(id)type;	// 0x348f4e39
+ (int)readLineEndWidth:(id)width;	// 0x348f4ea5
+ (int)readPresetDashStyle:(id)style;	// 0x348f4a49
+ (id)targetFgColorWithManager:(id)manager;	// 0x348f4491
@end

