/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSData.h>


@interface NSData (SBKAdditions)
+ (id)SBKStringByMD5HashingString:(id)string;	// 0x327a52c1
+ (id)SBKStringFromDigestData:(id)digestData;	// 0x327a5219
- (id)SBKDataByDeflatingWithGZip;	// 0x327a5421
- (id)SBKDataByDeflatingWithNoZipHeader;	// 0x327a5409
- (id)SBKDataByInflatingWithGZip;	// 0x327a541d
- (id)SBKDataByInflatingWithNoZipHeader;	// 0x327a53f9
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned)compression;	// 0x327a4f99
- (id)_SBKDataByInflatingWithNoZipHeader;	// 0x327a4e31
@end

