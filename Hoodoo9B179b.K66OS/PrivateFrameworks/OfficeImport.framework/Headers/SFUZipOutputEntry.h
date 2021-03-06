/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUZipOutputEntry : NSObject {
@private
	NSString *name;	// 4 = 0x4
	unsigned utf8NameLength;	// 8 = 0x8
	BOOL isCompressed;	// 12 = 0xc
	BOOL isEncrypted;	// 13 = 0xd
	unsigned time;	// 16 = 0x10
	unsigned long long compressedSize;	// 20 = 0x14
	unsigned long long uncompressedSize;	// 28 = 0x1c
	unsigned long long offset;	// 36 = 0x24
	unsigned long long compressedDataOffset;	// 44 = 0x2c
	unsigned crc;	// 52 = 0x34
	BOOL isWrittenDirectlyToFile;	// 56 = 0x38
	BOOL is64Bit;	// 57 = 0x39
}
- (int)compareByOffset:(id)offset;	// 0x32a17845
- (void)dealloc;	// 0x32a1a839
- (id)description;	// 0x32a19639
@end

