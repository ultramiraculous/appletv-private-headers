/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
@private
	AVPlayerItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x325caf45; 
- (id)init;	// 0x325cabf5
- (id)initWithLogArray:(id)logArray;	// 0x325caafd
- (id)copyWithZone:(NSZone *)zone;	// 0x325caae9
- (void)dealloc;	// 0x325cae1d
- (id)description;	// 0x325cac99
// declared property getter: - (id)events;	// 0x325caf45
- (id)extendedLogData;	// 0x325caec5
- (unsigned)extendedLogDataStringEncoding;	// 0x325caa35
- (void)finalize;	// 0x325cae85
@end

