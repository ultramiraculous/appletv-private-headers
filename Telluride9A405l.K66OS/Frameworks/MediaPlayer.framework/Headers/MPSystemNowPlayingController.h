/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPAVController;

@interface MPSystemNowPlayingController : NSObject {
@private
	BOOL _hasSeenAnyItem;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	dispatch_queue_s *_serialQueue;	// 12 = 0xc
}
@property(assign, nonatomic) MPAVController *player;	// G=0x33ba8005; S=0x33ba8015; @synthesize=_player
- (id)init;	// 0x33ba7321
- (int)_MRRepeatModeForMPRepeatType:(unsigned)mprepeatType;	// 0x33ba7fe9
- (int)_MRShuffleModeForMPShuffleType:(unsigned)mpshuffleType;	// 0x33ba7ff5
- (unsigned)_chapterIndexForItem:(id)item atTime:(double)time;	// 0x33ba7f95
- (void)dealloc;	// 0x33ba7371
// declared property getter: - (id)player;	// 0x33ba8005
- (void)postNowPlayingInfoForItem:(id)item;	// 0x33ba73b1
- (void)postProgressUpdateForItem:(id)item;	// 0x33ba7bd5
// declared property setter: - (void)setPlayer:(id)player;	// 0x33ba8015
@end

