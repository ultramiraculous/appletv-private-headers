/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUDataRepresentation.h"

@class SFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

@interface SFUZipEntry : SFUDataRepresentation {
	SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;	// 20 = 0x14
	int mCompressionMethod;	// 24 = 0x18
	unsigned long long mCompressedSize;	// 28 = 0x1c
	unsigned long long mUncompressedSize;	// 36 = 0x24
	unsigned long long mOffset;	// 44 = 0x2c
	unsigned mCrc;	// 52 = 0x34
	unsigned long long mDataOffset;	// 56 = 0x38
	BOOL mHasDataOffset;	// 64 = 0x40
	unsigned long long mEncodedLength;	// 68 = 0x44
	BOOL mHasEncodedLength;	// 76 = 0x4c
	SFUCryptoKey *mCryptoKey;	// 80 = 0x50
}
@property(assign) long long dataLength;	// G=0x350f23f5; S=0x350f2c9d; converted property
- (id)initFromCentralFileHeader:(const char *)centralFileHeader dataRepresentation:(id)representation;	// 0x350f2095
- (id)initWithDataRepresentation:(id)dataRepresentation compressionMethod:(int)method compressedSize:(unsigned long long)size uncompressedSize:(unsigned long long)size4 offset:(unsigned long long)offset crc:(unsigned)crc;	// 0x350f228d
- (unsigned long long)backingFileDataOffset;	// 0x350f2a59
- (id)backingFilePath;	// 0x350f2a15
- (unsigned long long)calculateEncodedLength;	// 0x350f2f31
- (void)copyToFile:(id)file;	// 0x350f27bd
- (unsigned)crc;	// 0x350f2a95
- (id)data;	// 0x350f2645
// converted property getter: - (long long)dataLength;	// 0x350f23f5
- (unsigned long long)dataOffset;	// 0x350f2cdd
- (void)dealloc;	// 0x350f2345
- (long long)encodedLength;	// 0x350f240d
- (id)inputStream;	// 0x350f241d
- (BOOL)isBackedByFile;	// 0x350f29cd
- (BOOL)isCompressed;	// 0x350f299d
- (BOOL)isEncrypted;	// 0x350f29b5
- (BOOL)isReadable;	// 0x350f23a9
- (void)readZip64ExtraField:(const char *)field size:(unsigned long)size;	// 0x350f2aa5
- (void)setCompressionFlags:(unsigned short)flags;	// 0x350f2be5
- (void)setCryptoKey:(id)key;	// 0x350f2c61
// converted property setter: - (void)setDataLength:(long long)length;	// 0x350f2c9d
@end

