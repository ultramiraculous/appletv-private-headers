/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoView.h"


@interface UIMovieView : MPVideoView {
}
@property(assign) double currentTime;	// G=0x36ef6bf1; S=0x36ef6d21; converted property
- (id)avPlayer;	// 0x36ef6b99
- (int)bufferingStatusMask;	// 0x36ef6bd1
// converted property getter: - (double)currentTime;	// 0x36ef6bf1
- (double)duration;	// 0x36ef6c11
- (id)mpavController;	// 0x36ef6b85
- (void)pause;	// 0x36ef6ce1
- (void)play;	// 0x36ef6d01
- (int)playableContentType;	// 0x36ef6c49
- (int)playbackState;	// 0x36ef6c95
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x36ef6d21
- (void)setCurrentTime:(double)time timeSnapOption:(int)option;	// 0x36ef6d45
- (void)setRepeatMode:(int)mode;	// 0x36ef6d89
- (void)stop;	// 0x36ef6da9
@end
