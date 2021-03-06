/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"

@class NSString, SFUCryptoKey;

__attribute__((visibility("hidden")))
@interface SFUFileDataRepresentation : SFUDataRepresentation {
@private
	NSString *mPath;	// 20 = 0x14
	int mSharedFd;	// 24 = 0x18
	long long mFileLength;	// 28 = 0x1c
	unsigned long mFileType;	// 36 = 0x24
	BOOL mHasFileAttributes;	// 40 = 0x28
	long long mPlaintextDataLength;	// 44 = 0x2c
	SFUCryptoKey *mCryptoKey;	// 52 = 0x34
	BOOL mDeleteFileWhenDone;	// 56 = 0x38
}
@property(assign) unsigned long fileType;	// G=0x312cb31d; S=0x312cb345; converted property
- (id)initWithCopyOfData:(id)data path:(id)path;	// 0x312caf11
- (id)initWithCopyOfData:(id)data path:(id)path cryptoKey:(id)key;	// 0x312caf35
- (id)initWithPath:(id)path;	// 0x312caebd
- (id)initWithPath:(id)path cryptoKey:(id)key dataLength:(long long)length;	// 0x312caee5
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor;	// 0x310d44d1
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor cryptoKey:(id)key dataLength:(long long)length;	// 0x310d44fd
- (long long)dataLength;	// 0x310d5089
- (void)dealloc;	// 0x3110a9f9
- (void)deleteFileWhenDone;	// 0x312cb5e1
- (id)description;	// 0x312cb2d5
- (long long)encodedLength;	// 0x310d4d65
// converted property getter: - (unsigned long)fileType;	// 0x312cb31d
- (BOOL)hasSameLocationAs:(id)as;	// 0x312cb569
- (id)inputStream;	// 0x310d4bbd
- (BOOL)isCryptoKeyIdenticalToKey:(id)key;	// 0x312cb521
- (BOOL)isEncrypted;	// 0x312cb509
- (BOOL)isReadable;	// 0x312cb4ed
- (id)path;	// 0x310d4621
- (void)readFileAttributes;	// 0x310d4d91
// converted property setter: - (void)setFileType:(unsigned long)type;	// 0x312cb345
@end

