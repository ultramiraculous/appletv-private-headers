/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVPlayerItemAccessLogInternal, NSArray;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {
	AVPlayerItemAccessLogInternal *_playerItemAccessLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x303377e1; 
- (id)init;	// 0x303374bd
- (id)initWithLogArray:(id)logArray;	// 0x30337555
- (id)_accessLogArray;	// 0x30337961
- (id)copyWithZone:(NSZone *)zone;	// 0x3033768d
- (void)dealloc;	// 0x303376e1
- (id)description;	// 0x303375a9
// declared property getter: - (id)events;	// 0x303377e1
- (id)extendedLogData;	// 0x30337751
- (unsigned)extendedLogDataStringEncoding;	// 0x303377dd
- (void)finalize;	// 0x3033769d
@end

