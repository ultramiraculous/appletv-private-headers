/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCopying.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
@private
	MPMovieErrorLogEventInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x33bb003d; 
@property(assign, nonatomic) MPMovieErrorLogEventInternal _internal;	// G=0x33bb00fd; S=0x33bb0111; @synthesize
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x33bb001d; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x33bb00dd; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x33bb00bd; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x33bb009d; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x33bb007d; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x33bb005d; 
// declared property getter: - (id)URI;	// 0x33bb003d
- (id)_initWithAVItemErrorLogEvent:(id)avitemErrorLogEvent;	// 0x33baff6d
// declared property getter: - (MPMovieErrorLogEventInternal)_internal;	// 0x33bb00fd
- (id)copyWithZone:(NSZone *)zone;	// 0x33bb000d
// declared property getter: - (id)date;	// 0x33bb001d
- (void)dealloc;	// 0x33baffc1
// declared property getter: - (id)errorComment;	// 0x33bb00dd
// declared property getter: - (id)errorDomain;	// 0x33bb00bd
// declared property getter: - (int)errorStatusCode;	// 0x33bb009d
// declared property getter: - (id)playbackSessionID;	// 0x33bb007d
// declared property getter: - (id)serverAddress;	// 0x33bb005d
// declared property setter: - (void)set_internal:(MPMovieErrorLogEventInternal)internal;	// 0x33bb0111
@end
