/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSMutableArray, BRMediaType, NSTimer, AVPlayerItem;

@interface ATVPlayerItemProgressMonitor : NSObject {
@private
	AVPlayerItem *_playerItem;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	BOOL _monitorActive;	// 12 = 0xc
	BOOL _isCaching;	// 13 = 0xd
	BOOL _useAccessLog;	// 14 = 0xe
	NSTimer *_sampleTimer;	// 16 = 0x10
	double _sampleInterval;	// 20 = 0x14
	NSMutableDictionary *_progressDescription;	// 28 = 0x1c
	NSMutableArray *_progressEvents;	// 32 = 0x20
	unsigned _sampleNumber;	// 36 = 0x24
	NSString *_mostRecentServerIP;	// 40 = 0x28
	unsigned _mostRecentBandwidth;	// 44 = 0x2c
	double _meanBandwidth;	// 48 = 0x30
	double _peakBandwidth;	// 56 = 0x38
	double _varBandwidth;	// 64 = 0x40
	double _sumSquaresBandwidth;	// 72 = 0x48
	double _duration;	// 80 = 0x50
	double _elapsedTime;	// 88 = 0x58
	unsigned _samplesUsed;	// 96 = 0x60
	double _mostRecentReadyToPlay;	// 100 = 0x64
	unsigned long long _totalBytesRead;	// 108 = 0x6c
	BOOL _readyToPlayTransitionHappened;	// 116 = 0x74
	unsigned _playbackStallCount;	// 120 = 0x78
}
@property(assign) BOOL isCaching;	// G=0x33719635; S=0x33719645; @synthesize=_isCaching
@property(retain) BRMediaType *mediaType;	// G=0x3371bc01; S=0x3371bc61; @synthesize=_mediaType
@property(assign) BOOL monitorActive;	// G=0x33719655; S=0x33719665; @synthesize=_monitorActive
@property(assign) unsigned mostRecentBandwidth;	// G=0x337195b5; S=0x337195c5; @synthesize=_mostRecentBandwidth
@property(assign) double mostRecentReadyToPlay;	// G=0x3371bb7d; S=0x3371bb51; @synthesize=_mostRecentReadyToPlay
@property(copy) NSString *mostRecentServerIP;	// G=0x3371bc49; S=0x3371bce5; @synthesize=_mostRecentServerIP
@property(assign) unsigned playbackStallCount;	// G=0x33719575; S=0x33719585; @synthesize=_playbackStallCount
@property(assign) AVPlayerItem *playerItem;	// G=0x33719675; S=0x33719685; @synthesize=_playerItem
@property(retain) NSMutableDictionary *progressDescription;	// G=0x3371bc19; S=0x3371bc8d; @synthesize=_progressDescription
@property(retain) NSMutableArray *progressEvents;	// G=0x3371bc31; S=0x3371bcb9; @synthesize=_progressEvents
@property(assign) BOOL readyToPlayTransitionHappened;	// G=0x33719595; S=0x337195a5; @synthesize=_readyToPlayTransitionHappened
@property(readonly, assign) double sampleInterval;	// G=0x3371bb25; @synthesize=_sampleInterval
@property(assign) unsigned sampleNumber;	// G=0x337195d5; S=0x337195e5; @synthesize=_sampleNumber
@property(assign) NSTimer *sampleTimer;	// G=0x337195f5; S=0x33719605; @synthesize=_sampleTimer
@property(assign) unsigned long long totalBytesRead;	// G=0x3371bbd5; S=0x3371bba9; @synthesize=_totalBytesRead
@property(assign) BOOL useAccessLog;	// G=0x33719615; S=0x33719625; @synthesize=_useAccessLog
+ (void)_initializeLogCache;	// 0x3371bd0d
+ (id)availableLogs;	// 0x33719569
+ (id)loadLogsToBeUploaded;	// 0x33719ed1
+ (id)nextLogPath;	// 0x33719721
+ (id)progressMonitorForPlayerItem:(id)playerItem createIfNecessary:(BOOL)necessary;	// 0x3371bd31
+ (void)resetLogs;	// 0x33719dfd
- (void)_disconnectProgressMonitor;	// 0x337197c9
- (id)_initWithPlayerItem:(id)playerItem;	// 0x33719cb1
- (void)_playbackStalled:(id)stalled;	// 0x3371a261
- (void)_sendPlaybackEvent:(id)event withValues:(id)values;	// 0x3371bd99
- (void)_startSamplingIfNecessary;	// 0x337199c1
- (void)_submitReportAndDisconnect:(BOOL)disconnect;	// 0x3371b361
- (void)_takePeriodicSample:(id)sample;	// 0x3371a4a9
- (void)cachingStarted:(id)started;	// 0x3371997d
- (void)cachingStopped;	// 0x3371995d
- (void)dealloc;	// 0x33719695
// declared property getter: - (BOOL)isCaching;	// 0x33719635
// declared property getter: - (id)mediaType;	// 0x3371bc01
// declared property getter: - (BOOL)monitorActive;	// 0x33719655
// declared property getter: - (unsigned)mostRecentBandwidth;	// 0x337195b5
// declared property getter: - (double)mostRecentReadyToPlay;	// 0x3371bb7d
// declared property getter: - (id)mostRecentServerIP;	// 0x3371bc49
// declared property getter: - (unsigned)playbackStallCount;	// 0x33719575
- (void)playerActivated:(id)activated;	// 0x33719881
- (void)playerDeactivated;	// 0x3371a011
// declared property getter: - (id)playerItem;	// 0x33719675
// declared property getter: - (id)progressDescription;	// 0x3371bc19
// declared property getter: - (id)progressEvents;	// 0x3371bc31
// declared property getter: - (BOOL)readyToPlayTransitionHappened;	// 0x33719595
// declared property getter: - (double)sampleInterval;	// 0x3371bb25
// declared property getter: - (unsigned)sampleNumber;	// 0x337195d5
// declared property getter: - (id)sampleTimer;	// 0x337195f5
// declared property setter: - (void)setIsCaching:(BOOL)caching;	// 0x33719645
// declared property setter: - (void)setMediaType:(id)type;	// 0x3371bc61
// declared property setter: - (void)setMonitorActive:(BOOL)active;	// 0x33719665
// declared property setter: - (void)setMostRecentBandwidth:(unsigned)bandwidth;	// 0x337195c5
// declared property setter: - (void)setMostRecentReadyToPlay:(double)play;	// 0x3371bb51
// declared property setter: - (void)setMostRecentServerIP:(id)ip;	// 0x3371bce5
// declared property setter: - (void)setPlaybackStallCount:(unsigned)count;	// 0x33719585
// declared property setter: - (void)setPlayerItem:(id)item;	// 0x33719685
// declared property setter: - (void)setProgressDescription:(id)description;	// 0x3371bc8d
// declared property setter: - (void)setProgressEvents:(id)events;	// 0x3371bcb9
// declared property setter: - (void)setReadyToPlayTransitionHappened:(BOOL)playTransitionHappened;	// 0x337195a5
// declared property setter: - (void)setSampleNumber:(unsigned)number;	// 0x337195e5
// declared property setter: - (void)setSampleTimer:(id)timer;	// 0x33719605
// declared property setter: - (void)setTotalBytesRead:(unsigned long long)read;	// 0x3371bba9
// declared property setter: - (void)setUseAccessLog:(BOOL)log;	// 0x33719625
// declared property getter: - (unsigned long long)totalBytesRead;	// 0x3371bbd5
// declared property getter: - (BOOL)useAccessLog;	// 0x33719615
@end
