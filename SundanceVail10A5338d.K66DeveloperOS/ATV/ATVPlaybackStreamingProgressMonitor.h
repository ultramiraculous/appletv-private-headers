/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVPlaybackProgressMonitor.h"

@class AVPlayerItemAccessLogEvent;

__attribute__((visibility("hidden")))
@interface ATVPlaybackStreamingProgressMonitor : ATVPlaybackProgressMonitor {
	AVPlayerItemAccessLogEvent *_latestEventForSampling;	// 176 = 0xb0
}
- (void)_stallDuringPlayback:(id)playback;	// 0x1fc711
- (void)_streamSwitched:(id)switched;	// 0x1fc66d
- (void)dealloc;	// 0x1fc3f9
- (void)finishPeriodicSample;	// 0x1fc5e9
- (void)playerActivated:(id)activated;	// 0x1fc445
- (void)startPeriodicSample;	// 0x1fc4fd
- (id)streamingType;	// 0x1fc661
@end
