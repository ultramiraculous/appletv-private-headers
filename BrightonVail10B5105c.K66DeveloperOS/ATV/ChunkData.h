/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface ChunkData : XXUnknownSuperclass {
	int reserved;	// 4 = 0x4
	long long pts;	// 8 = 0x8
	long long startOffset;	// 16 = 0x10
	int chunkSize;	// 24 = 0x18
	NSData *iv;	// 28 = 0x1c
}
- (id)initWithBuffer:(id)buffer ivSize:(unsigned)size;	// 0x49ebad
- (void)dealloc;	// 0x49ed85
- (int)getChunkSize;	// 0x49ed65
- (id)getIV;	// 0x49ed75
- (long long)getPTS;	// 0x49ed29
- (long long)getPTSInNS;	// 0x49ed11
- (int)getReserved;	// 0x49ed01
- (long long)getStartOffset;	// 0x49ed4d
@end
