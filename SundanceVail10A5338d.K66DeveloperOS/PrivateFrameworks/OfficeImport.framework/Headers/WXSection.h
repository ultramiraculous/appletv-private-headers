/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WXSection : NSObject {
}
+ (void)initialize;	// 0x33a419f9
+ (void)mapFooter:(xmlNode *)footer toSection:(id)section state:(id)state;	// 0x33a45d05
+ (void)mapHeader:(xmlNode *)header toSection:(id)section state:(id)state;	// 0x33a41e21
+ (void)mapPrinterSettings:(xmlNode *)settings toSection:(id)section state:(id)state;	// 0x33c13225
+ (void)mapProperties:(xmlNode *)properties toSection:(id)section state:(id)state;	// 0x33a421e1
+ (void)readFrom:(xmlNode *)from to:(id)to state:(id)state;	// 0x33a41ba1
+ (float)scaleFromPrinterSettings:(id)printerSettings;	// 0x33affb21
@end

