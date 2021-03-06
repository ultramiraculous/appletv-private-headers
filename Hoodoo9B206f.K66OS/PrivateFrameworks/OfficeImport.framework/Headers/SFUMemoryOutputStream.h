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
- (id)initWithData:(id)data;	// 0x34654fcd
- (BOOL)canCreateInputStream;	// 0x34654fbd
- (BOOL)canSeek;	// 0x34654fb9
- (void)close;	// 0x34654fc5
- (id)closeLocalStream;	// 0x34654fc9
- (void)dealloc;	// 0x346550e9
- (id)inputStream;	// 0x34654fc1
- (long long)offset;	// 0x346550c1
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x34655039
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x3465500d
@end

