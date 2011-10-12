/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface ChunkData : NSObject {
@private
	int reserved;	// 4 = 0x4
	long long pts;	// 8 = 0x8
	long long startOffset;	// 16 = 0x10
	int chunkSize;	// 24 = 0x18
	NSData *iv;	// 28 = 0x1c
}
- (id)initWithBuffer:(id)buffer ivSize:(unsigned)size;	// 0x333dae88
- (void)dealloc;	// 0x333daff0
- (int)getChunkSize;	// 0x333dae60
- (id)getIV;	// 0x333dae74
- (long long)getPTS;	// 0x333dae30
- (int)getReserved;	// 0x333dae1c
- (long long)getStartOffset;	// 0x333dae48
@end

