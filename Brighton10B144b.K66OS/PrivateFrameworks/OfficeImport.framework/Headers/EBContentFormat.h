/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBContentFormat : NSObject {
}
+ (id)edContentFormatFromXlDXfUserFmt:(XlDXfUserFmt *)xlDXfUserFmt edResources:(id)resources;	// 0x34a0884d
+ (id)edContentFormatFromXlFormat:(XlFormat *)xlFormat edResources:(id)resources;	// 0x34896e0d
+ (XlDXfUserFmt *)xlDXfUserFmtFromEDContentFormat:(id)edcontentFormat state:(id)state;	// 0x34a0889d
+ (XlFormat *)xlFormatFromEDContentFormat:(id)edcontentFormat state:(id)state;	// 0x34a0872d
@end
