/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SFUMemoryOutputStream : NSObject <SFUOutputStream> {
@private
	NSMutableData *mData;	// 4 = 0x4
}
- (id)initWithData:(id)data;	// 0x312cd735
- (BOOL)canCreateInputStream;	// 0x312cd889
- (BOOL)canSeek;	// 0x312cd7e1
- (void)close;	// 0x312cd891
- (id)closeLocalStream;	// 0x312cd895
- (void)dealloc;	// 0x312cd775
- (id)inputStream;	// 0x312cd88d
- (long long)offset;	// 0x312cd861
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x312cd7e5
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x312cd7c1
@end
