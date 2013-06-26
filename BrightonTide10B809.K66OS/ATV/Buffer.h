/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface Buffer : XXUnknownSuperclass {
	char *buf;	// 4 = 0x4
	int index;	// 8 = 0x8
	int bitMask;	// 12 = 0xc
	int length;	// 16 = 0x10
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x4b51dd
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x4b51fd
- (int)getBits:(unsigned)bits success:(BOOL *)success;	// 0x4b52d1
- (int)getByte:(BOOL *)byte;	// 0x4b53fd
- (id)getBytes:(unsigned)bytes success:(BOOL *)success;	// 0x4b56fd
- (int)getIndex;	// 0x4b5281
- (int)getInt:(BOOL *)int;	// 0x4b5459
- (int)getLength;	// 0x4b5271
- (long long)getLong:(BOOL *)aLong;	// 0x4b5519
- (id)getNullTerminatedString:(BOOL *)string;	// 0x4b5629
- (int)getShort:(BOOL *)aShort;	// 0x4b5375
- (id)getString:(unsigned)string success:(BOOL *)success;	// 0x4b5575
- (char *)getUnreadData;	// 0x4b52b1
- (int)getUnreadLength;	// 0x4b5291
@end
