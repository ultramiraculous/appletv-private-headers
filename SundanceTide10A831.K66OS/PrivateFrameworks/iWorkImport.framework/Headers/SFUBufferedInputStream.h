/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUInputStream.h"
#import "SFUBufferedInputStream.h"
#import <NSObject.h> // Unknown library


@protocol SFUBufferedInputStream <SFUInputStream>
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;
- (BOOL)seekWithinBufferToOffset:(long long)offset;
@end

@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream> {
	id<SFUInputStream> mStream;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	unsigned long mBufferSize;	// 12 = 0xc
	long long mBufferOffset;	// 16 = 0x10
	long long mBufferStart;	// 24 = 0x18
	long long mBufferEnd;	// 32 = 0x20
}
- (id)initWithStream:(id)stream;	// 0x35d695ad
- (id)initWithStream:(id)stream bufferSize:(unsigned long)size;	// 0x35d695c1
- (id)initWithStream:(id)stream dataLength:(long long)length;	// 0x35d696d1
- (BOOL)canSeek;	// 0x35d69a25
- (void)close;	// 0x35d69b81
- (id)closeLocalStream;	// 0x35d69ba1
- (void)dealloc;	// 0x35d696ed
- (void)disableSystemCaching;	// 0x35d69b41
- (void)enableSystemCaching;	// 0x35d69b61
- (long long)offset;	// 0x35d6974d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x35d6977d
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x35d697ad
- (void)seekToOffset:(long long)offset;	// 0x35d69a49
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x35d699a1
@end

