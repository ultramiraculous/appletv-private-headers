/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABOle : NSObject {
}
+ (BOOL)isBiffCLSID:(id)clsid;	// 0x3288dc19
+ (BOOL)isChart:(id)chart;	// 0x3288dbcd
+ (id)read4ByteFromStream:(SsrwOOStream *)stream;	// 0x3292a8c9
+ (id)readAnsiStringFromStream:(SsrwOOStream *)stream;	// 0x328e94a9
+ (id)readCLSIDFromStream:(SsrwOOStream *)stream;	// 0x3288da89
+ (id)readCompressedFromStream:(SsrwOOStream *)stream compressedSize:(unsigned long)size uncompressedSize:(unsigned long)size3 cancel:(id)cancel;	// 0x328e924d
+ (id)readFromData:(id)data cancel:(id)cancel;	// 0x328fb1b5
+ (id)readFromFileName:(id)fileName cancel:(id)cancel;	// 0x3288ce7d
+ (id)readFromParentStorage:(SsrwOOStorage *)parentStorage storageName:(id)name cancel:(id)cancel;	// 0x3288aa51
+ (id)readFromStream:(SsrwOOStream *)stream size:(unsigned long)size cancel:(id)cancel;	// 0x32944719
+ (BOOL)readSharedInfoFor:(id)aFor fromStorage:(SsrwOOStorage *)storage;	// 0x3288d3c9
+ (id)readUnicodeStringFromStream:(SsrwOOStream *)stream;	// 0x328e9619
+ (id)stringForCLSID:(SsrwOO_GUID)clsid;	// 0x3288db19
@end

