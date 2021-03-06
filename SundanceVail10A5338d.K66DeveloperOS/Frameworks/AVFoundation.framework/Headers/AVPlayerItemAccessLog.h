/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVPlayerItemAccessLogInternal, NSArray;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {
	AVPlayerItemAccessLogInternal *_playerItemAccessLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x317c1f59; 
- (id)init;	// 0x317c1c35
- (id)initWithLogArray:(id)logArray;	// 0x317c1ccd
- (id)_accessLogArray;	// 0x317c20d9
- (id)copyWithZone:(NSZone *)zone;	// 0x317c1e05
- (void)dealloc;	// 0x317c1e59
- (id)description;	// 0x317c1d21
// declared property getter: - (id)events;	// 0x317c1f59
- (id)extendedLogData;	// 0x317c1ec9
- (unsigned)extendedLogDataStringEncoding;	// 0x317c1f55
- (void)finalize;	// 0x317c1e15
@end

