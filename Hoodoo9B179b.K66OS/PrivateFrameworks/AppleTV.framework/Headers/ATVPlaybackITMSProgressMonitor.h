/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVPlaybackProgressMonitor.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVPlaybackITMSProgressMonitor : ATVPlaybackProgressMonitor {
@private
	double _mostRecentReadyToPlay;	// 184 = 0xb8
	BOOL _readyToPlayTransitionHappened;	// 192 = 0xc0
	NSDictionary *_latestPlayabilityMetricsForSampling;	// 196 = 0xc4
	unsigned _playbackStallCount;	// 200 = 0xc8
}
@property(assign) double mostRecentReadyToPlay;	// G=0x303b9f15; S=0x303b9f49; @synthesize=_mostRecentReadyToPlay
@property(assign) unsigned playbackStallCount;	// G=0x303b9f9d; S=0x303b9fad; @synthesize=_playbackStallCount
@property(assign) BOOL readyToPlayTransitionHappened;	// G=0x303b9f7d; S=0x303b9f8d; @synthesize=_readyToPlayTransitionHappened
- (id)_gatherAdditionalMetrics;	// 0x303ba361
- (id)_gatherMetricsForStall;	// 0x303ba351
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x303b9fbd
- (void)_playbackStalled:(id)stalled;	// 0x303ba409
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x303ba171
- (void)dealloc;	// 0x303b9ce5
- (void)finishPeriodicSample;	// 0x303ba0f9
- (id)mediaTypeString;	// 0x303b9e29
// declared property getter: - (double)mostRecentReadyToPlay;	// 0x303b9f15
// declared property getter: - (unsigned)playbackStallCount;	// 0x303b9f9d
- (void)playerActivated:(id)activated;	// 0x303b9d31
- (void)playerDeactivated;	// 0x303b9dad
// declared property getter: - (BOOL)readyToPlayTransitionHappened;	// 0x303b9f7d
// declared property setter: - (void)setMostRecentReadyToPlay:(double)play;	// 0x303b9f49
// declared property setter: - (void)setPlaybackStallCount:(unsigned)count;	// 0x303b9fad
// declared property setter: - (void)setReadyToPlayTransitionHappened:(BOOL)playTransitionHappened;	// 0x303b9f8d
- (void)startPeriodicSample;	// 0x303ba00d
- (void)startSamplingIfNecessary;	// 0x303b9dd9
- (id)streamingType;	// 0x303b9f09
@end
