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
- (void)_stallDuringPlayback:(id)playback;	// 0x204da1
- (void)_streamSwitched:(id)switched;	// 0x204cfd
- (void)dealloc;	// 0x204a89
- (void)finishPeriodicSample;	// 0x204c79
- (void)playerActivated:(id)activated;	// 0x204ad5
- (void)startPeriodicSample;	// 0x204b8d
- (id)streamingType;	// 0x204cf1
@end
