/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library

@class SFUCryptor;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {
	id<SFUOutputStream> mBaseStream;	// 4 = 0x4
	SFUCryptor *mCryptor;	// 8 = 0x8
	BOOL mIsClosed;	// 12 = 0xc
	BOOL mComputeCrc32;	// 13 = 0xd
	unsigned mCrc32;	// 16 = 0x10
}
+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)dataLength key:(id)key;	// 0x34ac3e85
- (id)initForEncryptionWithOutputStream:(id)outputStream key:(id)key;	// 0x34ac3efd
- (id)initForEncryptionWithOutputStream:(id)outputStream key:(id)key computeCrc32:(BOOL)a32;	// 0x34ac3f21
- (BOOL)canCreateInputStream;	// 0x34ac4531
- (BOOL)canSeek;	// 0x34ac4491
- (void)close;	// 0x34ac4659
- (id)closeLocalStream;	// 0x34ac4695
- (unsigned)crc32;	// 0x34ac45b1
- (void)dealloc;	// 0x34ac42e9
- (id)inputStream;	// 0x34ac4535
- (long long)offset;	// 0x34ac4511
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x34ac4495
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x34ac436d
@end

