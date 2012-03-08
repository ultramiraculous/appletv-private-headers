/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUBufferedInputStream.h"
#import "SFUInputStream.h"


@protocol SFUBufferedInputStream <SFUInputStream>
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;
- (BOOL)seekWithinBufferToOffset:(long long)offset;
@end

__attribute__((visibility("hidden")))
@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream> {
@private
	id<SFUInputStream> mStream;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	unsigned mBufferSize;	// 12 = 0xc
	unsigned mBufferOffset;	// 16 = 0x10
	long long mBufferStart;	// 20 = 0x14
	long long mBufferEnd;	// 28 = 0x1c
}
- (id)initWithSFUStream:(id)sfustream;	// 0x32a0ec85
- (id)initWithStream:(id)stream;	// 0x32a0ec99
- (id)initWithStream:(id)stream bufferSize:(unsigned long)size;	// 0x328b6501
- (id)initWithStream:(id)stream dataLength:(long long)length;	// 0x328b64bd
- (BOOL)canSeek;	// 0x328b6af5
- (void)close;	// 0x328b8695
- (id)closeLocalStream;	// 0x32a0ec75
- (void)dealloc;	// 0x328b7659
- (void)disableSystemCaching;	// 0x32a0ecad
- (void)enableSystemCaching;	// 0x32a0eccd
- (long long)offset;	// 0x32a0ebd1
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x32a0eced
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x328b6b1d
- (void)seekToOffset:(long long)offset;	// 0x328b6a09
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x32a0ebf9
@end
