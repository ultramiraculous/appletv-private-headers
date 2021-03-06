/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library
#import "ProtocolBuffer-Structs.h"

@class NSData;

@interface PBDataReader : NSObject {
	unsigned _pos;	// 4 = 0x4
	BOOL _error;	// 8 = 0x8
	const char *_bytes;	// 12 = 0xc
	NSData *_data;	// 16 = 0x10
	unsigned _length;	// 20 = 0x14
}
@property(readonly, retain) NSData *data;	// G=0x37d3c0e1; converted property
@property(assign) unsigned length;	// G=0x37d3d4ed; S=0x37d3d501; @synthesize=_length
@property(assign) unsigned position;	// G=0x37d3d519; S=0x37d3d52d; @synthesize=_pos
- (id)initWithData:(id)data;	// 0x37d3bfe1
// converted property getter: - (id)data;	// 0x37d3c0e1
- (void)dealloc;	// 0x37d3c095
- (BOOL)hasError;	// 0x37d3c119
- (BOOL)hasMoreData;	// 0x37d3c129
- (BOOL)isAtEnd;	// 0x37d3c0f1
// declared property getter: - (unsigned)length;	// 0x37d3d4ed
- (BOOL)mark:(XXStruct_IwxUBC *)mark;	// 0x37d3d251
- (unsigned)offset;	// 0x37d3c14d
// declared property getter: - (unsigned)position;	// 0x37d3d519
- (BOOL)readBOOL;	// 0x37d3cf65
- (unsigned short)readBigEndianFixed16;	// 0x37d3c5bd
- (unsigned)readBigEndianFixed32;	// 0x37d3c621
- (unsigned long long)readBigEndianFixed64;	// 0x37d3c679
- (id)readBigEndianShortThenString;	// 0x37d3d419
- (id)readBytes:(unsigned)bytes;	// 0x37d3d3ad
- (id)readData;	// 0x37d3d129
- (double)readDouble;	// 0x37d3c879
- (unsigned)readFixed32;	// 0x37d3ce05
- (unsigned long long)readFixed64;	// 0x37d3ce59
- (float)readFloat;	// 0x37d3c901
- (int)readInt32;	// 0x37d3c95d
- (long long)readInt64;	// 0x37d3ca19
- (BOOL)readInt8;	// 0x37d3c75d
- (id)readProtoBuffer;	// 0x37d3c6dd
- (int)readSfixed32;	// 0x37d3ceb5
- (long long)readSfixed64;	// 0x37d3cf09
- (int)readSint32;	// 0x37d3cc65
- (long long)readSint64;	// 0x37d3cd29
- (id)readString;	// 0x37d3cfc1
- (void)readTag:(unsigned short *)tag andType:(char *)type;	// 0x37d3c225
- (unsigned)readUint32;	// 0x37d3cae1
- (unsigned long long)readUint64;	// 0x37d3cb9d
- (long long)readVarInt;	// 0x37d3c7b1
- (void)recall:(const XXStruct_IwxUBC *)recall;	// 0x37d3d365
- (BOOL)seekToOffset:(unsigned)offset;	// 0x37d3c1ed
// declared property setter: - (void)setLength:(unsigned)length;	// 0x37d3d501
// declared property setter: - (void)setPosition:(unsigned)position;	// 0x37d3d52d
- (BOOL)skipValueWithTag:(unsigned short)tag andType:(unsigned char)type;	// 0x37d3c301
- (void)updateData:(id)data;	// 0x37d3c15d
@end

