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
- (id)initWithXPCData:(void *)xpcdata;	// 0x3419548d
- (const void *)bytes;	// 0x34195585
- (void)dealloc;	// 0x341954f1
- (id)debugDescription;	// 0x34195535
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x34195599
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x341955b1
- (unsigned)length;	// 0x341955cd
@end

