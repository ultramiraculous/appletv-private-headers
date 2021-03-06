/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, AVPlayerItem, NSMutableArray, NSTimer, NSString;
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
	unsigned _playbackStallCount;	// 192 = 0xc0
	WiFiDeviceClient *_airportDevice;	// 196 = 0xc4
}
@property(assign) WiFiDeviceClient *airportDevice;	// G=0x23e389; S=0x23e39d; @synthesize=_airportDevice
@property(assign) BOOL isCaching;	// G=0x23e2a5; S=0x23e2bd; @synthesize=_isCaching
@property(retain) id<BRMediaAsset> mediaAsset;	// G=0x23e25d; S=0x23e271; @synthesize=_mediaAsset
@property(retain) NSString *mediaQuality;	// G=0x23e281; S=0x23e295; @synthesize=_mediaQuality
@property(assign) BOOL monitorActive;	// G=0x23e2d5; S=0x23e2ed; @synthesize=_monitorActive
@property(assign) double mostRecentBandwidth;	// G=0x23e44d; S=0x23e481; @synthesize=_mostRecentBandwidth
@property(copy) NSString *mostRecentServerIP;	// G=0x23e429; S=0x23e43d; @synthesize=_mostRecentServerIP
@property(assign) unsigned playbackStallCount;	// G=0x23e231; S=0x23e245; @synthesize=_playbackStallCount
@property(assign) AVPlayerItem *playerItem;	// G=0x23e205; S=0x23e219; @synthesize=_playerItem
@property(retain) NSMutableDictionary *progressDescription;	// G=0x23e3b5; S=0x23e3c9; @synthesize=_progressDescription
@property(retain) NSMutableArray *progressEvents;	// G=0x23e3d9; S=0x23e3ed; @synthesize=_progressEvents
@property(readonly, assign) double sampleInterval;	// G=0x23e331; @synthesize=_sampleInterval
@property(assign) unsigned sampleNumber;	// G=0x23e3fd; S=0x23e411; @synthesize=_sampleNumber
@property(assign) NSTimer *sampleTimer;	// G=0x23e305; S=0x23e319; @synthesize=_sampleTimer
@property(assign) unsigned long long totalBytesRead;	// G=0x23e4b5; S=0x23e4e9; @synthesize=_totalBytesRead
@property(retain) NSMutableArray *wifiEvents;	// G=0x23e365; S=0x23e379; @synthesize=_wifiEvents
+ (void)_initializeLogCache;	// 0x23bf05
+ (id)availableLogs;	// 0x23c3d9
+ (void)initialize;	// 0x23bd59
+ (id)loadLogsToBeUploaded;	// 0x23c0c5
+ (id)nextLogPath;	// 0x23c01d
+ (id)progressMonitorForPlayerItem:(id)playerItem andMediaAsset:(id)asset createIfNecessary:(BOOL)necessary;	// 0x23c675
+ (void)resetLogs;	// 0x23c531
- (void)_disconnectProgressMonitor;	// 0x23fddd
- (id)_gatherAdditionalEndingMetrics;	// 0x23e1f9
- (id)_gatherAdditionalMetrics;	// 0x23e1f5
- (id)_gatherMetrics;	// 0x23e9a5
- (void)_gatherNetworkInterface:(id)interface;	// 0x23fef9
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x23e51d
- (id)_mediaQualityStringFromMediaAsset:(id)mediaAsset;	// 0x23dd15
- (void)_playerStateChanged:(id)changed;	// 0x23ff81
- (void)_playerTimeSkipped:(id)skipped;	// 0x2400e5
- (void)_requestCompleted:(id)completed;	// 0x23f0b9
- (void)_sendPlaybackEvent:(id)event withValues:(id)values;	// 0x23f169
- (id)_shortPlayerStateDescriptionForState:(int)state;	// 0x2401ed
- (void)_submitAdditionalFinalBeacons:(BOOL)beacons;	// 0x23e1fd
- (void)_submitReportAndDisconnect:(BOOL)disconnect;	// 0x23f531
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x23dd11
- (void)_takePeriodicSample:(id)sample;	// 0x23ce51
- (void)_timeSkippedTimerFired:(id)fired;	// 0x2401b1
// declared property getter: - (WiFiDeviceClient *)airportDevice;	// 0x23e389
- (void)cachingStarted:(id)started;	// 0x23ddad
- (void)cachingStopped;	// 0x23de09
- (void)dealloc;	// 0x23c8fd
- (void)finishPeriodicSample;	// 0x23dd0d
// declared property getter: - (BOOL)isCaching;	// 0x23e2a5
// declared property getter: - (id)mediaAsset;	// 0x23e25d
// declared property getter: - (id)mediaQuality;	// 0x23e281
- (id)mediaTypeString;	// 0x23e1a1
- (id)metrics;	// 0x23e201
// declared property getter: - (BOOL)monitorActive;	// 0x23e2d5
// declared property getter: - (double)mostRecentBandwidth;	// 0x23e44d
// declared property getter: - (id)mostRecentServerIP;	// 0x23e429
// declared property getter: - (unsigned)playbackStallCount;	// 0x23e231
- (void)playerActivated:(id)activated;	// 0x23de1d
- (void)playerDeactivated;	// 0x23de61
// declared property getter: - (id)playerItem;	// 0x23e205
- (void)playerItemMonitoringStarted;	// 0x23de05
// declared property getter: - (id)progressDescription;	// 0x23e3b5
// declared property getter: - (id)progressEvents;	// 0x23e3d9
// declared property getter: - (double)sampleInterval;	// 0x23e331
// declared property getter: - (unsigned)sampleNumber;	// 0x23e3fd
// declared property getter: - (id)sampleTimer;	// 0x23e305
// declared property setter: - (void)setAirportDevice:(WiFiDeviceClient *)device;	// 0x23e39d
// declared property setter: - (void)setIsCaching:(BOOL)caching;	// 0x23e2bd
// declared property setter: - (void)setMediaAsset:(id)asset;	// 0x23e271
// declared property setter: - (void)setMediaQuality:(id)quality;	// 0x23e295
// declared property setter: - (void)setMonitorActive:(BOOL)active;	// 0x23e2ed
// declared property setter: - (void)setMostRecentBandwidth:(double)bandwidth;	// 0x23e481
// declared property setter: - (void)setMostRecentServerIP:(id)ip;	// 0x23e43d
// declared property setter: - (void)setPlaybackStallCount:(unsigned)count;	// 0x23e245
// declared property setter: - (void)setPlayerItem:(id)item;	// 0x23e219
// declared property setter: - (void)setProgressDescription:(id)description;	// 0x23e3c9
// declared property setter: - (void)setProgressEvents:(id)events;	// 0x23e3ed
// declared property setter: - (void)setSampleNumber:(unsigned)number;	// 0x23e411
// declared property setter: - (void)setSampleTimer:(id)timer;	// 0x23e319
// declared property setter: - (void)setTotalBytesRead:(unsigned long long)read;	// 0x23e4e9
// declared property setter: - (void)setWifiEvents:(id)events;	// 0x23e379
- (void)startPeriodicSample;	// 0x23dd09
- (void)startSamplingIfNecessary;	// 0x23cacd
- (id)streamingType;	// 0x23e1e9
// declared property getter: - (unsigned long long)totalBytesRead;	// 0x23e4b5
// declared property getter: - (id)wifiEvents;	// 0x23e365
@end

