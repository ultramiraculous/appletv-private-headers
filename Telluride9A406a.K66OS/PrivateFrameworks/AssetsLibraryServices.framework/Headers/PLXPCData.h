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
- (id)initWithXPCData:(void *)xpcdata;	// 0x311f4489
- (const void *)bytes;	// 0x311f4581
- (void)dealloc;	// 0x311f44ed
- (id)debugDescription;	// 0x311f4531
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x311f4595
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x311f45ad
- (unsigned)length;	// 0x311f45c9
@end
