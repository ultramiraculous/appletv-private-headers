/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import "AssetsLibraryServices-Structs.h"
#import <NSData.h> // Unknown library


@interface PLXPCData : NSData {
	void *_data;	// 4 = 0x4
}
- (id)initWithXPCData:(void *)xpcdata;	// 0x35f9d539
- (const void *)bytes;	// 0x35f9d631
- (void)dealloc;	// 0x35f9d59d
- (id)debugDescription;	// 0x35f9d5e1
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x35f9d645
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x35f9d65d
- (unsigned)length;	// 0x35f9d679
@end
