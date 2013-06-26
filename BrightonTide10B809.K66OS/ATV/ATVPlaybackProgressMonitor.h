/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSMutableDictionary, NSMutableArray, NSString, AVPlayerItem;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVPlaybackProgressMonitor : XXUnknownSuperclass {
	AVPlayerItem *_playerItem;	// 4 = 0x4
	id<BRMediaAsset> _mediaAsset;	// 8 = 0x8
	NSString *_mediaQuality;	// 12 = 0xc
	NSString *_sessionID;	// 16 = 0x10
	NSString *_cachedNetworkInterface;	// 20 = 0x14
	BOOL _shouldSaveAccessLogs;	// 24 = 0x18
	BOOL _shouldDisplayBitRate;	// 25 = 0x19
	BOOL _isCaching;	// 26 = 0x1a
	BOOL _monitorActive;	// 27 = 0x1b
	double _startTime;	// 28 = 0x1c
	double _timeWatchedStart;	// 36 = 0x24
	NSTimer *_sampleTimer;	// 44 = 0x2c
	double _sampleInterval;	// 48 = 0x30
	unsigned _sampleNumber;	// 56 = 0x38
	NSMutableArray *_wifiEvents;	// 60 = 0x3c
	NSMutableDictionary *_progressDescription;	// 64 = 0x40
	NSMutableArray *_progressEvents;	// 68 = 0x44
	NSString *_latestSampledServerIPAddress;	// 72 = 0x48
	NSString *_mostRecentServerIP;	// 76 = 0x4c
	double _bandwidth;	// 80 = 0x50
	double _mostRecentBandwidth;	// 88 = 0x58
	double _meanBandwidth;	// 96 = 0x60
	double _peakBandwidth;	// 104 = 0x68
	double _varBandwidth;	// 112 = 0x70
	double _sumSquaresBandwidth;	// 120 = 0x78
	double _duration;	// 128 = 0x80
	double _elapsedTime;	// 136 = 0x88
	double _timeWatched;	// 144 = 0x90
	unsigned long long _totalBytesRead;	// 152 = 0x98
	unsigned _samplesUsed;	// 160 = 0xa0
	int _currentPlayerState;	// 164 = 0xa4
	int _previousPlayerState;	// 168 = 0xa8
	int _previousPlusOnePlayerState;	// 172 = 0xac
	BOOL _didSkipTimeRecently;	// 176 = 0xb0
	NSTimer *_timeSkippedTimer;	// 180 = 0xb4
	NSString *_baseBeaconURLString;	// 184 = 0xb8
	BOOL _shouldSendBeaconsForSession;	// 188 = 0xbc
	WiFiDeviceClient *_airportDevice;	// 192 = 0xc0
	unsigned _playbackStallCount;	// 196 = 0xc4
}
@property(assign) WiFiDeviceClient *airportDevice;	// G=0x22a83d; S=0x22a851; @synthesize=_airportDevice
@property(assign) BOOL isCaching;	// G=0x22a909; S=0x22a921; @synthesize=_isCaching
@property(retain) id<BRMediaAsset> mediaAsset;	// G=0x22a8b9; S=0x22a8cd; @synthesize=_mediaAsset
@property(retain) NSString *mediaQuality;	// G=0x22a869; S=0x22a87d; @synthesize=_mediaQuality
@property(assign) BOOL monitorActive;	// G=0x22aa41; S=0x22aa59; @synthesize=_monitorActive
@property(assign) double mostRecentBandwidth;	// G=0x22a95d; S=0x22a991; @synthesize=_mostRecentBandwidth
@property(copy) NSString *mostRecentServerIP;	// G=0x22a9f1; S=0x22aa05; @synthesize=_mostRecentServerIP
@property(assign) unsigned playbackStallCount;	// G=0x22aa15; S=0x22aa29; @synthesize=_playbackStallCount
@property(assign) AVPlayerItem *playerItem;	// G=0x22a8dd; S=0x22a8f1; @synthesize=_playerItem
@property(retain) NSMutableDictionary *progressDescription;	// G=0x22a819; S=0x22a82d; @synthesize=_progressDescription
@property(retain) NSMutableArray *progressEvents;	// G=0x22a939; S=0x22a94d; @synthesize=_progressEvents
@property(readonly, assign) double sampleInterval;	// G=0x22a7e5; @synthesize=_sampleInterval
@property(assign) unsigned sampleNumber;	// G=0x22a88d; S=0x22a8a1; @synthesize=_sampleNumber
@property(assign) NSTimer *sampleTimer;	// G=0x22a9c5; S=0x22a9d9; @synthesize=_sampleTimer
@property(assign) unsigned long long totalBytesRead;	// G=0x22a77d; S=0x22a7b1; @synthesize=_totalBytesRead
@property(retain) NSMutableArray *wifiEvents;	// G=0x22a759; S=0x22a76d; @synthesize=_wifiEvents
+ (void)_initializeLogCache;	// 0x227c05
+ (id)availableLogs;	// 0x2280d5
+ (void)initialize;	// 0x227a41
+ (id)loadLogsToBeUploaded;	// 0x227dc1
+ (id)nextLogPath;	// 0x227d19
+ (id)progressMonitorForPlayerItem:(id)playerItem andMediaAsset:(id)asset createIfNecessary:(BOOL)necessary;	// 0x228371
+ (void)resetLogs;	// 0x22822d
- (void)_disconnectProgressMonitor;	// 0x229935
- (id)_gatherAdditionalMetrics;	// 0x22a751
- (id)_gatherMetrics;	// 0x22aebd
- (void)_gatherNetworkInterface:(id)interface;	// 0x22b915
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x22aa71
- (id)_mediaQualityStringFromMediaAsset:(id)mediaAsset;	// 0x22a321
- (void)_playerStateChanged:(id)changed;	// 0x22b99d
- (void)_playerTimeSkipped:(id)skipped;	// 0x22bafd
- (void)_requestCompleted:(id)completed;	// 0x22b4a1
- (void)_sendPlaybackEvent:(id)event withValues:(id)values;	// 0x22b551
- (id)_shortPlayerStateDescriptionForState:(int)state;	// 0x22bc05
- (void)_submitAdditionalFinalBeacons:(BOOL)beacons;	// 0x22a755
- (void)_submitReportAndDisconnect:(BOOL)disconnect;	// 0x229a51
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x229931
- (void)_takePeriodicSample:(id)sample;	// 0x228a91
- (void)_timeSkippedTimerFired:(id)fired;	// 0x22bbc9
// declared property getter: - (WiFiDeviceClient *)airportDevice;	// 0x22a83d
- (void)cachingStarted:(id)started;	// 0x22a3b9
- (void)cachingStopped;	// 0x22a415
- (void)dealloc;	// 0x228539
- (void)finishPeriodicSample;	// 0x22992d
// declared property getter: - (BOOL)isCaching;	// 0x22a909
// declared property getter: - (id)mediaAsset;	// 0x22a8b9
// declared property getter: - (id)mediaQuality;	// 0x22a869
- (id)mediaTypeString;	// 0x22a701
// declared property getter: - (BOOL)monitorActive;	// 0x22aa41
// declared property getter: - (double)mostRecentBandwidth;	// 0x22a95d
// declared property getter: - (id)mostRecentServerIP;	// 0x22a9f1
// declared property getter: - (unsigned)playbackStallCount;	// 0x22aa15
- (void)playerActivated:(id)activated;	// 0x22a429
- (void)playerDeactivated;	// 0x22a471
// declared property getter: - (id)playerItem;	// 0x22a8dd
- (void)playerItemMonitoringStarted;	// 0x22a411
// declared property getter: - (id)progressDescription;	// 0x22a819
// declared property getter: - (id)progressEvents;	// 0x22a939
// declared property getter: - (double)sampleInterval;	// 0x22a7e5
// declared property getter: - (unsigned)sampleNumber;	// 0x22a88d
// declared property getter: - (id)sampleTimer;	// 0x22a9c5
// declared property setter: - (void)setAirportDevice:(WiFiDeviceClient *)device;	// 0x22a851
// declared property setter: - (void)setIsCaching:(BOOL)caching;	// 0x22a921
// declared property setter: - (void)setMediaAsset:(id)asset;	// 0x22a8cd
// declared property setter: - (void)setMediaQuality:(id)quality;	// 0x22a87d
// declared property setter: - (void)setMonitorActive:(BOOL)active;	// 0x22aa59
// declared property setter: - (void)setMostRecentBandwidth:(double)bandwidth;	// 0x22a991
// declared property setter: - (void)setMostRecentServerIP:(id)ip;	// 0x22aa05
// declared property setter: - (void)setPlaybackStallCount:(unsigned)count;	// 0x22aa29
// declared property setter: - (void)setPlayerItem:(id)item;	// 0x22a8f1
// declared property setter: - (void)setProgressDescription:(id)description;	// 0x22a82d
// declared property setter: - (void)setProgressEvents:(id)events;	// 0x22a94d
// declared property setter: - (void)setSampleNumber:(unsigned)number;	// 0x22a8a1
// declared property setter: - (void)setSampleTimer:(id)timer;	// 0x22a9d9
// declared property setter: - (void)setTotalBytesRead:(unsigned long long)read;	// 0x22a7b1
// declared property setter: - (void)setWifiEvents:(id)events;	// 0x22a76d
- (void)startPeriodicSample;	// 0x229929
- (void)startSamplingIfNecessary;	// 0x228709
- (id)streamingType;	// 0x22a745
// declared property getter: - (unsigned long long)totalBytesRead;	// 0x22a77d
// declared property getter: - (id)wifiEvents;	// 0x22a759
@end
