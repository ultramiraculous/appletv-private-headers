/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDeserializerStream.h"
#import <NSObject.h> // Unknown library


@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {
	const void *memory;	// 4 = 0x4
	const char *current;	// 8 = 0x8
	unsigned left;	// 12 = 0xc
	unsigned max;	// 16 = 0x10
	BOOL freeWhenDone;	// 20 = 0x14
}
- (id)initFromMemoryNoCopy:(const void *)memoryNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x33745451
- (id)initFromPath:(id)path;	// 0x33745561
- (void)dealloc;	// 0x337454a1
- (void)finalize;	// 0x33745501
- (unsigned)readAlignedDataSize;	// 0x33745745
- (void)readData:(void *)data length:(unsigned)length;	// 0x33745829
- (int)readInt;	// 0x337456c1
@end

