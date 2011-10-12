/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface PBDataWriter : NSObject {
	NSMutableData *_data;	// 4 = 0x4
}
@property(readonly, retain) NSMutableData *data;	// G=0x33fc37d9; converted property
- (id)init;	// 0x33fc3729
// converted property getter: - (id)data;	// 0x33fc37d9
- (void)dealloc;	// 0x33fc378d
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x33fc3ded
- (void)writeBOOL:(BOOL)aBool forTag:(unsigned short)tag;	// 0x33fc3cc9
- (void)writeBareVarint:(long long)varint;	// 0x33fc3951
- (void)writeBigEndianFixed16:(unsigned short)a16;	// 0x33fc37e9
- (void)writeBigEndianFixed32:(unsigned)a32;	// 0x33fc3811
- (void)writeBigEndianShortThenString:(id)string;	// 0x33fc3835
- (BOOL)writeData:(id)data;	// 0x33fc3d9d
- (void)writeData:(id)data forTag:(unsigned short)tag;	// 0x33fc3d39
- (void)writeDouble:(double)aDouble forTag:(unsigned short)tag;	// 0x33fc39d5
- (void)writeFixed32:(unsigned)a32 forTag:(unsigned short)tag;	// 0x33fc3bc1
- (void)writeFixed64:(unsigned long long)a64 forTag:(unsigned short)tag;	// 0x33fc3bfd
- (void)writeFloat:(float)aFloat forTag:(unsigned short)tag;	// 0x33fc3a1d
- (void)writeInt32:(int)a32 forTag:(unsigned short)tag;	// 0x33fc3a59
- (void)writeInt64:(long long)a64 forTag:(unsigned short)tag;	// 0x33fc3a91
- (void)writeInt8:(BOOL)a8;	// 0x33fc392d
- (void)writeProtoBuffer:(id)buffer;	// 0x33fc38b9
- (void)writeSfixed32:(int)a32 forTag:(unsigned short)tag;	// 0x33fc3c45
- (void)writeSfixed64:(long long)a64 forTag:(unsigned short)tag;	// 0x33fc3c81
- (void)writeSint32:(int)a32 forTag:(unsigned short)tag;	// 0x33fc3b41
- (void)writeSint64:(long long)a64 forTag:(unsigned short)tag;	// 0x33fc3b7d
- (void)writeString:(id)string forTag:(unsigned short)tag;	// 0x33fc3d01
- (void)writeTag:(unsigned short)tag andType:(unsigned char)type;	// 0x33fc39a9
- (void)writeUint32:(unsigned)a32 forTag:(unsigned)tag;	// 0x33fc3acd
- (void)writeUint64:(unsigned long long)a64 forTag:(unsigned long long)tag;	// 0x33fc3b05
@end

