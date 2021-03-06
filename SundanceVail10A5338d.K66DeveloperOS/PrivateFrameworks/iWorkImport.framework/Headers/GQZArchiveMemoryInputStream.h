/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQZArchiveInputStream.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface GQZArchiveMemoryInputStream : NSObject <GQZArchiveInputStream> {
	NSData *mData;	// 4 = 0x4
	const char *mBytes;	// 8 = 0x8
	long long mSize;	// 12 = 0xc
}
- (id)initWithData:(id)data;	// 0x350b8b79
- (const char *)dataAtOffset:(long long)offset size:(unsigned long)size end:(long long)end readSize:(unsigned *)size4;	// 0x350b8c49
- (void)dealloc;	// 0x350b8bfd
- (void)readFromOffset:(long long)offset size:(unsigned long)size buffer:(char *)buffer;	// 0x350b8d99
- (long long)size;	// 0x350b8e8d
@end

