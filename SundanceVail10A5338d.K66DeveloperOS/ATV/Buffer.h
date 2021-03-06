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
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x45610d
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x45612d
- (int)getBits:(unsigned)bits success:(BOOL *)success;	// 0x456201
- (int)getByte:(BOOL *)byte;	// 0x456335
- (id)getBytes:(unsigned)bytes success:(BOOL *)success;	// 0x45663d
- (int)getIndex;	// 0x4561b1
- (int)getInt:(BOOL *)int;	// 0x456391
- (int)getLength;	// 0x4561a1
- (long long)getLong:(BOOL *)aLong;	// 0x456455
- (id)getNullTerminatedString:(BOOL *)string;	// 0x456569
- (int)getShort:(BOOL *)aShort;	// 0x4562b1
- (id)getString:(unsigned)string success:(BOOL *)success;	// 0x4564b1
- (char *)getUnreadData;	// 0x4561e1
- (int)getUnreadLength;	// 0x4561c1
@end

