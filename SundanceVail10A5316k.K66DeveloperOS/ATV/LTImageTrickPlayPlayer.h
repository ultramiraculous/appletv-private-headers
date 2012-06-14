/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "LTTrickPlayPlayer.h"


__attribute__((visibility("hidden")))
@interface LTImageTrickPlayPlayer : LTTrickPlayPlayer {
}
- (id)initWithTrickPlayAsset:(id)trickPlayAsset;	// 0x553b1
- (void)_showImageForTime:(double)time;	// 0x557f9
- (void)_updatePlayer:(id)player;	// 0x5570d
- (void)bufferAheadFromTime:(XXStruct_pwHToB)time;	// 0x5564d
- (void)bufferAheadFromTime:(XXStruct_pwHToB)time withPreloadedImageCount:(int)preloadedImageCount atInterval:(int)interval;	// 0x55689
- (void)seekToTime:(XXStruct_pwHToB)time withPlaybackDate:(id)playbackDate;	// 0x555c9
- (void)setRate:(float)rate;	// 0x553f1
@end

