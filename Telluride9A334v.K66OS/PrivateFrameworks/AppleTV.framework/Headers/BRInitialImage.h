/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRImage.h"
#import "AppleTV-Structs.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface BRInitialImage : BRImage {
@private
	NSData *_data;	// 44 = 0x2c
}
+ (id)initialImageWithData:(id)data;	// 0x332d35b1
- (void)dealloc;	// 0x332d3641
- (void)purgeRawData;	// 0x332d369d
- (id)rawData;	// 0x332d368d
@end

