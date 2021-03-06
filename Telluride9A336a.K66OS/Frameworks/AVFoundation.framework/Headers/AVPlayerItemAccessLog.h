/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class NSArray, AVPlayerItemAccessLogInternal;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {
@private
	AVPlayerItemAccessLogInternal *_playerItemAccessLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x314b6ae5; 
- (id)init;	// 0x314b6a41
- (id)initWithLogArray:(id)logArray;	// 0x314b655d
- (id)_accessLogArray;	// 0x314b65cd
- (id)copyWithZone:(NSZone *)zone;	// 0x314b65bd
- (void)dealloc;	// 0x314b6d05
- (id)description;	// 0x314b6dbd
// declared property getter: - (id)events;	// 0x314b6ae5
- (id)extendedLogData;	// 0x314b6c79
- (unsigned)extendedLogDataStringEncoding;	// 0x314b6559
- (void)finalize;	// 0x314b6d79
@end

