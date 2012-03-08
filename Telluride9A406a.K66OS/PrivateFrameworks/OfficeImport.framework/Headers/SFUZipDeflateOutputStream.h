/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream> {
@private
	id<SFUOutputStream> mOutputStream;	// 4 = 0x4
	z_stream_s mDeflateStream;	// 8 = 0x8
	char *mOutBuffer;	// 64 = 0x40
}
- (id)initWithOutputStream:(id)outputStream;	// 0x32b044ad
- (BOOL)canCreateInputStream;	// 0x32b043f5
- (BOOL)canSeek;	// 0x32b043dd
- (void)close;	// 0x32b043fd
- (id)closeLocalStream;	// 0x32b0488d
- (void)dealloc;	// 0x32b046d5
- (id)inputStream;	// 0x32b043f9
- (long long)offset;	// 0x32b043e1
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x32b04425
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x32b04745
@end
