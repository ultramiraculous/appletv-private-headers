/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUInputStream.h"


@interface SFUOffsetInputStream : NSObject <SFUInputStream> {
	id<SFUInputStream> mInputStream;	// 4 = 0x4
	long long mInitialOffset;	// 8 = 0x8
}
- (id)initWithInputStream:(id)inputStream;	// 0x34aca0a5
- (id)initWithInputStream:(id)inputStream initialOffset:(long long)offset;	// 0x34aca0e1
- (BOOL)canSeek;	// 0x34aca2a5
- (void)close;	// 0x34aca355
- (id)closeLocalStream;	// 0x34aca375
- (void)dealloc;	// 0x34aca159
- (void)disableSystemCaching;	// 0x34aca315
- (void)enableSystemCaching;	// 0x34aca335
- (long long)offset;	// 0x34aca1a5
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x34aca285
- (void)seekToOffset:(long long)offset;	// 0x34aca2c9
@end

