/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "StoreBookkeeper-Structs.h"
#import </libobjc.A.h>

@class NSMutableData;

@interface SBKZipDeflateMemoryOutputStream : NSObject {
	NSMutableData *deflatedData;	// 4 = 0x4
	z_stream_s zstream;	// 8 = 0x8
	char *_outputBuffer;	// 64 = 0x40
	int _bufferingSize;	// 68 = 0x44
}
+ (id)dataByDeflatingData:(id)data;	// 0x327c2e95
- (id)initWithBufferingSize:(int)bufferingSize compressionType:(unsigned)type;	// 0x327c2f59
- (void).cxx_destruct;	// 0x327c33e1
- (id)close;	// 0x327c30f5
- (void)dealloc;	// 0x327c308d
- (BOOL)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x327c3201
@end
