/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRImage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface BRInitialImage : BRImage {
	NSData *_data;	// 40 = 0x28
}
+ (id)initialImageWithData:(id)data;	// 0x37aae5
- (void)dealloc;	// 0x37ab75
- (void)purgeRawData;	// 0x37abd1
- (id)rawData;	// 0x37abc1
@end

