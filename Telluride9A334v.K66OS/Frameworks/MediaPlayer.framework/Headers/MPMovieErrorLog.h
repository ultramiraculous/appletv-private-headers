/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSData;

@interface MPMovieErrorLog : NSObject <NSCopying> {
@private
	MPMovieErrorLogInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMovieErrorLogInternal _internal;	// G=0x34dcee29; S=0x34dcee3d; @synthesize
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x34dcecc5; 
@property(readonly, assign, nonatomic) NSData *extendedLogData;	// G=0x34dcec85; 
@property(readonly, assign, nonatomic) unsigned extendedLogDataStringEncoding;	// G=0x34dceca5; 
- (id)_initWithAVItemErrorLog:(id)avitemErrorLog;	// 0x34dcebbd
// declared property getter: - (MPMovieErrorLogInternal)_internal;	// 0x34dcee29
- (id)copyWithZone:(NSZone *)zone;	// 0x34dcec75
- (void)dealloc;	// 0x34dcec29
// declared property getter: - (id)events;	// 0x34dcecc5
// declared property getter: - (id)extendedLogData;	// 0x34dcec85
// declared property getter: - (unsigned)extendedLogDataStringEncoding;	// 0x34dceca5
// declared property setter: - (void)set_internal:(MPMovieErrorLogInternal)internal;	// 0x34dcee3d
@end

