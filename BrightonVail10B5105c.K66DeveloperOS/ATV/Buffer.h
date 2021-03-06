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
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x49e5ed
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x49e60d
- (int)getBits:(unsigned)bits success:(BOOL *)success;	// 0x49e6e1
- (int)getByte:(BOOL *)byte;	// 0x49e80d
- (id)getBytes:(unsigned)bytes success:(BOOL *)success;	// 0x49eb0d
- (int)getIndex;	// 0x49e691
- (int)getInt:(BOOL *)int;	// 0x49e869
- (int)getLength;	// 0x49e681
- (long long)getLong:(BOOL *)aLong;	// 0x49e929
- (id)getNullTerminatedString:(BOOL *)string;	// 0x49ea39
- (int)getShort:(BOOL *)aShort;	// 0x49e785
- (id)getString:(unsigned)string success:(BOOL *)success;	// 0x49e985
- (char *)getUnreadData;	// 0x49e6c1
- (int)getUnreadLength;	// 0x49e6a1
@end

