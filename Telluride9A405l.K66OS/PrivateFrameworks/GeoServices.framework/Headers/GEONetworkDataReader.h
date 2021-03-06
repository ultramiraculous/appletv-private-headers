/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
	NSMutableData *_data;	// 4 = 0x4
	unsigned _dataLength;	// 8 = 0x8
	const void *_bytes;	// 12 = 0xc
	unsigned _bookmarkOffset;	// 16 = 0x10
	unsigned _offset;	// 20 = 0x14
}
- (id)initWithData:(id)data;	// 0x31452785
- (void)appendNetworkData:(id)data;	// 0x314528a9
- (void)dealloc;	// 0x31452819
- (BOOL)hasUnreadData;	// 0x31452ab9
- (void)markOffset;	// 0x31452a79
- (id)readData:(unsigned short)data;	// 0x31452a1d
- (id)readString;	// 0x31452919
- (unsigned short)readUnsignedShort;	// 0x314529d1
- (void)seekToMarkedOffset;	// 0x31452a99
@end

