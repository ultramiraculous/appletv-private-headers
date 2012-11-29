/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library


@interface SFUOffsetOutputStream : NSObject <SFUOutputStream> {
	id<SFUOutputStream> mOutputStream;	// 4 = 0x4
	long long mInitialOffset;	// 8 = 0x8
}
- (id)initWithOutputStream:(id)outputStream;	// 0x31e4e2d5
- (BOOL)canCreateInputStream;	// 0x31e4e4e9
- (BOOL)canSeek;	// 0x31e4e3a5
- (void)close;	// 0x31e4e5ad
- (id)closeLocalStream;	// 0x31e4e5cd
- (void)dealloc;	// 0x31e4e339
- (id)inputStream;	// 0x31e4e50d
- (long long)offset;	// 0x31e4e409
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x31e4e3c9
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x31e4e385
@end
