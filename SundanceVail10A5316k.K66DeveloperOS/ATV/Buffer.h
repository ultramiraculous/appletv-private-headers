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
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x447c31
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x447c51
- (int)getBits:(unsigned)bits success:(BOOL *)success;	// 0x447d25
- (int)getByte:(BOOL *)byte;	// 0x447e59
- (id)getBytes:(unsigned)bytes success:(BOOL *)success;	// 0x448161
- (int)getIndex;	// 0x447cd5
- (int)getInt:(BOOL *)int;	// 0x447eb5
- (int)getLength;	// 0x447cc5
- (long long)getLong:(BOOL *)aLong;	// 0x447f79
- (id)getNullTerminatedString:(BOOL *)string;	// 0x44808d
- (int)getShort:(BOOL *)aShort;	// 0x447dd5
- (id)getString:(unsigned)string success:(BOOL *)success;	// 0x447fd5
- (char *)getUnreadData;	// 0x447d05
- (int)getUnreadLength;	// 0x447ce5
@end

