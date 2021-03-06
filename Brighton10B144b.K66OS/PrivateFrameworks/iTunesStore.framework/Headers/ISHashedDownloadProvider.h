/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import "iTunesStore-Structs.h"
#import "ISDataProvider.h"

@class NSArray, NSString;

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying> {
	int _fileDescriptor;	// 48 = 0x30
	NSArray *_hashes;	// 52 = 0x34
	NSString *_localFilePath;	// 56 = 0x38
	CC_MD5state_st _md5Context;	// 60 = 0x3c
	long long _numberOfBytesToHash;	// 152 = 0x98
	BOOL _shouldResumeFromLocalBytes;	// 160 = 0xa0
	long long _totalBytesWritten;	// 164 = 0xa4
	long long _validatedBytes;	// 172 = 0xac
}
@property(retain) NSArray *hashes;	// G=0x36889071; S=0x36889085; @synthesize=_hashes
@property(retain) NSString *localFilePath;	// G=0x36889095; S=0x368890a9; @synthesize=_localFilePath
@property(assign) long long numberOfBytesToHash;	// G=0x368890b9; S=0x368890ed; @synthesize=_numberOfBytesToHash
@property(assign) BOOL shouldResumeFromLocalBytes;	// G=0x36889121; S=0x36889139; @synthesize=_shouldResumeFromLocalBytes
@property(assign) long long streamedBytes;	// G=0x36889151; S=0x36889185; @synthesize=_totalBytesWritten
@property(assign) long long validatedBytes;	// G=0x368891b9; S=0x368891ed; @synthesize=_validatedBytes
- (id)init;	// 0x368881a9
- (BOOL)_checkHashForByteCount:(long long)byteCount;	// 0x36888911
- (void)_closeFile;	// 0x368889f9
- (BOOL)_openFile;	// 0x36888a21
- (BOOL)_truncateToSize:(long long)size;	// 0x36888b09
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)fileSize;	// 0x36888b6d
- (BOOL)_writeDataWithHashing:(id)hashing returningError:(id *)error;	// 0x36888cc1
- (BOOL)_writeDataWithoutHashing:(id)hashing returningError:(id *)error;	// 0x36888f75
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x3688832d
- (void)closeStream;	// 0x36888649
- (id)copyWithZone:(NSZone *)zone;	// 0x36888279
- (void)dealloc;	// 0x36888211
// declared property getter: - (id)hashes;	// 0x36889071
- (BOOL)isStream;	// 0x36888689
// declared property getter: - (id)localFilePath;	// 0x36889095
// declared property getter: - (long long)numberOfBytesToHash;	// 0x368890b9
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x3688868d
- (void)resetStream;	// 0x36888755
// declared property setter: - (void)setHashes:(id)hashes;	// 0x36889085
// declared property setter: - (void)setLocalFilePath:(id)path;	// 0x368890a9
// declared property setter: - (void)setNumberOfBytesToHash:(long long)hash;	// 0x368890ed
// declared property setter: - (void)setShouldResumeFromLocalBytes:(BOOL)resumeFromLocalBytes;	// 0x36889139
// declared property setter: - (void)setStreamedBytes:(long long)bytes;	// 0x36889185
// declared property setter: - (void)setValidatedBytes:(long long)bytes;	// 0x368891ed
- (void)setup;	// 0x368887b1
// declared property getter: - (BOOL)shouldResumeFromLocalBytes;	// 0x36889121
// declared property getter: - (long long)streamedBytes;	// 0x36889151
// declared property getter: - (long long)validatedBytes;	// 0x368891b9
@end

