/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSDate, AVPlayerItemErrorLogEventInternal, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
	AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x317c2f6d; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x317c2ef9; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x317c3199; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x317c3125; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x317c30c9; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x317c3055; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x317c2fe1; 
- (id)init;	// 0x317c2d4d
- (id)initWithDictionary:(id)dictionary;	// 0x317c2de5
// declared property getter: - (id)URI;	// 0x317c2f6d
- (id)copyWithZone:(NSZone *)zone;	// 0x317c2e39
// declared property getter: - (id)date;	// 0x317c2ef9
- (void)dealloc;	// 0x317c2e8d
// declared property getter: - (id)errorComment;	// 0x317c3199
// declared property getter: - (id)errorDomain;	// 0x317c3125
// declared property getter: - (int)errorStatusCode;	// 0x317c30c9
- (void)finalize;	// 0x317c2e49
// declared property getter: - (id)playbackSessionID;	// 0x317c3055
// declared property getter: - (id)serverAddress;	// 0x317c2fe1
@end

