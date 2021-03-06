/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVPlaybackProgressMonitor.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVPlaybackITMSProgressMonitor : ATVPlaybackProgressMonitor {
	BOOL _playabilityMetricsAreViable;	// 173 = 0xad
	double _mostRecentReadyToPlay;	// 176 = 0xb0
	BOOL _readyToPlayTransitionHappened;	// 184 = 0xb8
	NSDictionary *_latestPlayabilityMetricsForSampling;	// 188 = 0xbc
	unsigned _playbackStallCount;	// 192 = 0xc0
}
@property(assign) double mostRecentReadyToPlay;	// G=0x1fba81; S=0x1fbab5; @synthesize=_mostRecentReadyToPlay
@property(assign) unsigned playbackStallCount;	// G=0x1fbb19; S=0x1fbb2d; @synthesize=_playbackStallCount
@property(assign) BOOL readyToPlayTransitionHappened;	// G=0x1fbae9; S=0x1fbb01; @synthesize=_readyToPlayTransitionHappened
- (id)_gatherAdditionalMetrics;	// 0x1fbfbd
- (id)_gatherMetricsForStall;	// 0x1fbf11
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x1fbb45
- (void)_playbackStalled:(id)stalled;	// 0x1fc065
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x1fbd19
- (void)dealloc;	// 0x1fb821
- (void)finishPeriodicSample;	// 0x1fbc9d
- (id)mediaTypeString;	// 0x1fb991
// declared property getter: - (double)mostRecentReadyToPlay;	// 0x1fba81
// declared property getter: - (unsigned)playbackStallCount;	// 0x1fbb19
- (void)playerActivated:(id)activated;	// 0x1fb86d
- (void)playerDeactivated;	// 0x1fb8e9
- (void)playerItemMonitoringStarted;	// 0x1fb929
// declared property getter: - (BOOL)readyToPlayTransitionHappened;	// 0x1fbae9
// declared property setter: - (void)setMostRecentReadyToPlay:(double)play;	// 0x1fbab5
// declared property setter: - (void)setPlaybackStallCount:(unsigned)count;	// 0x1fbb2d
// declared property setter: - (void)setReadyToPlayTransitionHappened:(BOOL)playTransitionHappened;	// 0x1fbb01
- (void)startPeriodicSample;	// 0x1fbba1
- (void)startSamplingIfNecessary;	// 0x1fb941
- (id)streamingType;	// 0x1fba75
@end

