/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface MFPartialNetworkData : NSObject {
	NSMutableData *_rawData;	// 4 = 0x4
	NSMutableData *_unixData;	// 8 = 0x8
}
@property(retain) NSMutableData *rawData;	// G=0x31d5aeb5; S=0x31d5b0c5; converted property
- (void)appendRawData:(id)data;	// 0x31d5af89
- (id)copyDataWithUnixLineEndings;	// 0x31d5b1c5
- (id)dataWithUnixLineEndings;	// 0x31d5b19d
- (void)dealloc;	// 0x31d5e4a9
- (void)purgeCaches;	// 0x31d5b24d
// converted property getter: - (id)rawData;	// 0x31d5aeb5
- (unsigned)rawDataLength;	// 0x31d5b151
// converted property setter: - (void)setRawData:(id)data;	// 0x31d5b0c5
@end
