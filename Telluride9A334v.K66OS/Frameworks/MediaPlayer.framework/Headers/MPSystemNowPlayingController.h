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
@property(assign, nonatomic) MPAVController *player;	// G=0x34dc7179; S=0x34dc7189; @synthesize=_player
- (id)init;	// 0x34dc6495
- (int)_MRRepeatModeForMPRepeatType:(unsigned)mprepeatType;	// 0x34dc715d
- (int)_MRShuffleModeForMPShuffleType:(unsigned)mpshuffleType;	// 0x34dc7169
- (unsigned)_chapterIndexForItem:(id)item atTime:(double)time;	// 0x34dc7109
- (void)dealloc;	// 0x34dc64e5
// declared property getter: - (id)player;	// 0x34dc7179
- (void)postNowPlayingInfoForItem:(id)item;	// 0x34dc6525
- (void)postProgressUpdateForItem:(id)item;	// 0x34dc6d49
// declared property setter: - (void)setPlayer:(id)player;	// 0x34dc7189
@end

