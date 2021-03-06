/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import "ProtocolBuffer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface PBDataReader : NSObject {
	unsigned _pos;	// 4 = 0x4
	BOOL _error;	// 8 = 0x8
	const char *_bytes;	// 12 = 0xc
	NSData *_data;	// 16 = 0x10
	unsigned _length;	// 20 = 0x14
}
@property(readonly, retain) NSData *data;	// G=0x353b10e1; converted property
@property(assign) unsigned length;	// G=0x353b24ed; S=0x353b2501; @synthesize=_length
@property(assign) unsigned position;	// G=0x353b2519; S=0x353b252d; @synthesize=_pos
- (id)initWithData:(id)data;	// 0x353b0fe1
// converted property getter: - (id)data;	// 0x353b10e1
- (void)dealloc;	// 0x353b1095
- (BOOL)hasError;	// 0x353b1119
- (BOOL)hasMoreData;	// 0x353b1129
- (BOOL)isAtEnd;	// 0x353b10f1
// declared property getter: - (unsigned)length;	// 0x353b24ed
- (BOOL)mark:(XXStruct_IwxUBC *)mark;	// 0x353b2251
- (unsigned)offset;	// 0x353b114d
// declared property getter: - (unsigned)position;	// 0x353b2519
- (BOOL)readBOOL;	// 0x353b1f65
- (unsigned short)readBigEndianFixed16;	// 0x353b15bd
- (unsigned)readBigEndianFixed32;	// 0x353b1621
- (unsigned long long)readBigEndianFixed64;	// 0x353b1679
- (id)readBigEndianShortThenString;	// 0x353b2419
- (id)readBytes:(unsigned)bytes;	// 0x353b23ad
- (id)readData;	// 0x353b2129
- (double)readDouble;	// 0x353b1879
- (unsigned)readFixed32;	// 0x353b1e05
- (unsigned long long)readFixed64;	// 0x353b1e59
- (float)readFloat;	// 0x353b1901
- (int)readInt32;	// 0x353b195d
- (long long)readInt64;	// 0x353b1a19
- (BOOL)readInt8;	// 0x353b175d
- (id)readProtoBuffer;	// 0x353b16dd
- (int)readSfixed32;	// 0x353b1eb5
- (long long)readSfixed64;	// 0x353b1f09
- (int)readSint32;	// 0x353b1c65
- (long long)readSint64;	// 0x353b1d29
- (id)readString;	// 0x353b1fc1
- (void)readTag:(unsigned short *)tag andType:(char *)type;	// 0x353b1225
- (unsigned)readUint32;	// 0x353b1ae1
- (unsigned long long)readUint64;	// 0x353b1b9d
- (long long)readVarInt;	// 0x353b17b1
- (void)recall:(const XXStruct_IwxUBC *)recall;	// 0x353b2365
- (BOOL)seekToOffset:(unsigned)offset;	// 0x353b11ed
// declared property setter: - (void)setLength:(unsigned)length;	// 0x353b2501
// declared property setter: - (void)setPosition:(unsigned)position;	// 0x353b252d
- (BOOL)skipValueWithTag:(unsigned short)tag andType:(unsigned char)type;	// 0x353b1301
- (void)updateData:(id)data;	// 0x353b115d
@end

