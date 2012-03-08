/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface Buffer : NSObject {
@private
	char *buf;	// 4 = 0x4
	int index;	// 8 = 0x8
	int bitMask;	// 12 = 0xc
	int length;	// 16 = 0x10
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x33c60880
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x33c60b50
- (int)getBits:(unsigned)bits;	// 0x33c606bc
- (int)getByte;	// 0x33c607d0
- (id)getBytes:(unsigned)bytes;	// 0x33c60aac
- (int)getIndex;	// 0x33c60658
- (int)getInt;	// 0x33c60818
- (int)getLength;	// 0x33c60644
- (long long)getLong;	// 0x33c608ac
- (id)getNullTerminatedString;	// 0x33c609b0
- (int)getShort;	// 0x33c60784
- (id)getString:(unsigned)string;	// 0x33c608fc
- (char *)getUnreadData;	// 0x33c60694
- (int)getUnreadLength;	// 0x33c6066c
@end
