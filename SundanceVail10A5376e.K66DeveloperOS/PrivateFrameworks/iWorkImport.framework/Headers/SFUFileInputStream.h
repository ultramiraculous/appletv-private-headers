/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library


@interface SFUFileInputStream : NSObject <SFUInputStream> {
	int mFd;	// 4 = 0x4
	BOOL mIsCachingDisabled;	// 8 = 0x8
	long long mStartOffset;	// 12 = 0xc
	long long mCurrentOffset;	// 20 = 0x14
	long long mEndOffset;	// 28 = 0x1c
}
- (id)initWithFileDescriptor:(int)fileDescriptor offset:(long long)offset length:(long long)length;	// 0x358839c9
- (id)initWithPath:(id)path offset:(long long)offset;	// 0x35883c4d
- (id)initWithPath:(id)path offset:(long long)offset length:(long long)length;	// 0x35883ae5
- (BOOL)canSeek;	// 0x35883e7d
- (void)close;	// 0x35883f2d
- (id)closeLocalStream;	// 0x35883f85
- (void)dealloc;	// 0x35883d2d
- (void)disableSystemCaching;	// 0x35883ebd
- (void)enableSystemCaching;	// 0x35883ef5
- (long long)offset;	// 0x35883d6d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x35883d9d
- (void)seekToOffset:(long long)offset;	// 0x35883e81
@end

