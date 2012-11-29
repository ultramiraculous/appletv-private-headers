/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {
	NSData *mData;	// 20 = 0x14
}
- (id)initWithData:(id)data;	// 0x351230fd
- (id)initWithDataNoCopy:(id)dataNoCopy;	// 0x35123151
- (id)initWithDataRepresentation:(id)dataRepresentation;	// 0x351231a5
- (id)bufferedInputStream;	// 0x351234dd
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x35123531
- (id)data;	// 0x35123491
- (long long)dataLength;	// 0x351234a5
- (void)dealloc;	// 0x35123445
- (BOOL)hasSameLocationAs:(id)as;	// 0x35123541
- (id)inputStream;	// 0x351234cd
- (BOOL)isReadable;	// 0x351234a1
- (unsigned long)readIntoData:(id)data;	// 0x351235b1
@end
