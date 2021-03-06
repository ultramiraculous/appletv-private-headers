/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library
#import "RTFCPZArchiveInputStream.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface RTFCPZArchiveMemoryInputStream : NSObject <RTFCPZArchiveInputStream> {
	NSData *mData;	// 4 = 0x4
	const char *mBytes;	// 8 = 0x8
	long long mSize;	// 12 = 0xc
}
- (id)initWithData:(id)data;	// 0x332acc59
- (const char *)dataAtOffset:(long long)offset size:(unsigned long)size end:(long long)end readSize:(unsigned *)size4;	// 0x332acd29
- (void)dealloc;	// 0x332accdd
- (void)readFromOffset:(long long)offset size:(unsigned long)size buffer:(char *)buffer;	// 0x332ace6d
- (long long)size;	// 0x332acf61
@end

