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
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x3478bf45; 
- (id)init;	// 0x3478bbf5
- (id)initWithLogArray:(id)logArray;	// 0x3478bafd
- (id)copyWithZone:(NSZone *)zone;	// 0x3478bae9
- (void)dealloc;	// 0x3478be1d
- (id)description;	// 0x3478bc99
// declared property getter: - (id)events;	// 0x3478bf45
- (id)extendedLogData;	// 0x3478bec5
- (unsigned)extendedLogDataStringEncoding;	// 0x3478ba35
- (void)finalize;	// 0x3478be85
@end
