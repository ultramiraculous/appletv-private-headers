/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSArray, AVPlayerItemAccessLog, NSData;

@interface MPMovieAccessLog : NSObject <NSCopying> {
	AVPlayerItemAccessLog *_accessLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x2e24c0e5; 
@property(readonly, assign, nonatomic) NSData *extendedLogData;	// G=0x2e24c0a5; 
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;	// G=0x2e24c0c5; 
- (void).cxx_destruct;	// 0x2e24c26d
- (id)_initWithAVItemAccessLog:(id)avitemAccessLog;	// 0x2e24c031
- (id)copyWithZone:(NSZone *)zone;	// 0x2e24c0a1
// declared property getter: - (id)events;	// 0x2e24c0e5
// declared property getter: - (id)extendedLogData;	// 0x2e24c0a5
// declared property getter: - (unsigned)extendedLogDataStringEncoding;	// 0x2e24c0c5
@end

