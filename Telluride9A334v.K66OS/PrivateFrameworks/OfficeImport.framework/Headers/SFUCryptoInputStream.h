/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUInputStream.h"

@class SFUCryptor;

__attribute__((visibility("hidden")))
@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
@private
	id<SFUInputStream> mBaseStream;	// 4 = 0x4
	SFUCryptor *mCryptor;	// 8 = 0x8
	long long mOffset;	// 12 = 0xc
}
- (id)initForDecryptionWithInputStream:(id)inputStream key:(id)key;	// 0x357bbf19
- (BOOL)canSeek;	// 0x357bbd35
- (void)close;	// 0x357bbef9
- (id)closeLocalStream;	// 0x357bbd39
- (void)dealloc;	// 0x357bc231
- (void)disableSystemCaching;	// 0x357bbeb9
- (void)enableSystemCaching;	// 0x357bbed9
- (long long)offset;	// 0x357bbd1d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x357bbd49
- (void)seekToOffset:(long long)offset;	// 0x357bbe31
@end

