/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSData, NSDictionary, NSLock;

@interface NetflixPlaybackManager : XXUnknownSuperclass {
	BOOL openNotificationSent_;	// 4 = 0x4
	NSDictionary *movieDetails_;	// 8 = 0x8
	NSData *playReadyKey_;	// 12 = 0xc
	IMediaControl *mediaControl_;	// 16 = 0x10
	NetflixMediaControlListener *mediaControlListener_;	// 20 = 0x14
	NSMutableArray *errorStack_;	// 24 = 0x18
	NSDictionary *reportableActionId_;	// 28 = 0x1c
	NSLock *subtitlesProcessingLock_;	// 32 = 0x20
	BOOL subtitlesProcessing_;	// 36 = 0x24
	int subtitlesTrackIndex_;	// 40 = 0x28
	int audioTrackIndex_;	// 44 = 0x2c
	NSLock *playbackCommandLock_;	// 48 = 0x30
	BOOL playbackCommandInProgress_;	// 52 = 0x34
	int state_;	// 56 = 0x38
	unsigned lastKnownMappedVideoBitrate_;	// 60 = 0x3c
	unsigned lastNumAccessLogEvents_;	// 64 = 0x40
	long long totalBytesTransferred_;	// 68 = 0x44
	double observedBitrate_;	// 76 = 0x4c
	BOOL pollNetworkInterface_;	// 84 = 0x54
	long long pollBytesStart_;	// 88 = 0x58
	BwEntry *bwEntry_;	// 96 = 0x60
	double lastBwEntryTime_;	// 100 = 0x64
	long long lastBwEntryBytes_;	// 108 = 0x6c
	int networkInterfaceType_;	// 116 = 0x74
	long long bufferingStartBytes_;	// 120 = 0x78
	double bufferingStartTime_;	// 128 = 0x80
	double sampleReportWindow_;	// 136 = 0x88
	bool stalled_;	// 144 = 0x90
	int totalNumberOfStalls_;	// 148 = 0x94
	NSDictionary *testStreams_;	// 152 = 0x98
}
@property(assign, nonatomic) int audioTrackIndex;	// G=0x4b5291; S=0x4b52a1; @synthesize=audioTrackIndex_
@property(readonly, assign, nonatomic) unsigned bitrate;	// G=0x4b4d19; 
@property(assign, nonatomic) long long bufferingStartBytes;	// G=0x4b54c1; S=0x4b54d9; @synthesize=bufferingStartBytes_
@property(assign, nonatomic) double bufferingStartTime;	// G=0x4b54ed; S=0x4b5505; @synthesize=bufferingStartTime_
@property(assign, nonatomic) BwEntry *bwEntry;	// G=0x4b5429; S=0x4b5439; @synthesize=bwEntry_
@property(readonly, assign, nonatomic) long long bytes;	// G=0x4b4d5d; 
@property(readonly, assign, nonatomic) long long bytesForInterface;	// G=0x4b4dc1; 
@property(readonly, assign, nonatomic) unsigned currentStreamBitrate;	// G=0x4b4e81; 
@property(retain, nonatomic) NSMutableArray *errorStack;	// G=0x4b51a1; S=0x4b51b1; @synthesize=errorStack_
@property(assign, nonatomic) long long lastBwEntryBytes;	// G=0x4b5475; S=0x4b548d; @synthesize=lastBwEntryBytes_
@property(assign, nonatomic) double lastBwEntryTime;	// G=0x4b5449; S=0x4b5461; @synthesize=lastBwEntryTime_
@property(assign, nonatomic) unsigned lastKnownMappedVideoBitrate;	// G=0x4b5345; S=0x4b5355; @synthesize=lastKnownMappedVideoBitrate_
@property(assign, nonatomic) unsigned lastNumAccessLogEvents;	// G=0x4b5365; S=0x4b5375; @synthesize=lastNumAccessLogEvents_
@property(assign, nonatomic) IMediaControl *mediaControl;	// G=0x4b5181; S=0x4b0bd5; @synthesize=mediaControl_
@property(assign, nonatomic) NetflixMediaControlListener *mediaControlListener;	// G=0x4b5191; S=0x4b0ce9; @synthesize=mediaControlListener_
@property(retain) NSDictionary *movieDetails;	// G=0x4b5111; S=0x4b5125; @synthesize=movieDetails_
@property(assign, nonatomic) int networkInterfaceType;	// G=0x4b54a1; S=0x4b54b1; @synthesize=networkInterfaceType_
@property(assign, nonatomic) double observedBitrate;	// G=0x4b53b1; S=0x4b53c9; @synthesize=observedBitrate_
@property(assign, nonatomic) BOOL openNotificationSent;	// G=0x4b50f1; S=0x4b5101; @synthesize=openNotificationSent_
@property(copy) NSData *playReadyKey;	// G=0x4b5149; S=0x4b515d; @synthesize=playReadyKey_
@property(assign) BOOL playbackCommandInProgress;	// G=0x4b52e9; S=0x4b5301; @synthesize=playbackCommandInProgress_
@property(retain) NSLock *playbackCommandLock;	// G=0x4b52b1; S=0x4b52c5; @synthesize=playbackCommandLock_
@property(assign, nonatomic) long long pollBytesStart;	// G=0x4b53fd; S=0x4b5415; @synthesize=pollBytesStart_
@property(assign, nonatomic) BOOL pollNetworkInterface;	// G=0x4b53dd; S=0x4b53ed; @synthesize=pollNetworkInterface_
@property(retain, nonatomic) NSDictionary *reportableActionId;	// G=0x4b51d5; S=0x4b51e5; @synthesize=reportableActionId_
@property(assign, nonatomic) double sampleReportWindow;	// G=0x4b5519; S=0x4b5531; @synthesize=sampleReportWindow_
@property(assign, nonatomic) bool stalled;	// G=0x4b5545; S=0x4b5559; @synthesize=stalled_
@property(assign) int state;	// G=0x4b5319; S=0x4b532d; @synthesize=state_
@property(assign) BOOL subtitlesProcessing;	// G=0x4b5241; S=0x4b5259; @synthesize=subtitlesProcessing_
@property(retain) NSLock *subtitlesProcessingLock;	// G=0x4b5209; S=0x4b521d; @synthesize=subtitlesProcessingLock_
@property(assign, nonatomic) int subtitlesTrackIndex;	// G=0x4b5271; S=0x4b5281; @synthesize=subtitlesTrackIndex_
@property(copy, nonatomic) NSDictionary *testStreams;	// G=0x4b5589; S=0x4b5065; @synthesize=testStreams_
@property(assign, nonatomic) long long totalBytesTransferred;	// G=0x4b5385; S=0x4b539d; @synthesize=totalBytesTransferred_
@property(assign, nonatomic) int totalNumberOfStalls;	// G=0x4b5569; S=0x4b5579; @synthesize=totalNumberOfStalls_
+ (void)initialize;	// 0x4b08c1
+ (id)sharedInstance;	// 0x4b08c5
- (id)init;	// 0x4b09b1
- (void)audioSelect:(id)select;	// 0x4b259d
- (void)audioSelectAsync:(id)async;	// 0x4b25d9
// declared property getter: - (int)audioTrackIndex;	// 0x4b5291
// declared property getter: - (unsigned)bitrate;	// 0x4b4d19
- (void)buffering:(double)buffering;	// 0x4b1279
- (void)bufferingComplete:(double)complete;	// 0x4b1391
// declared property getter: - (long long)bufferingStartBytes;	// 0x4b54c1
// declared property getter: - (double)bufferingStartTime;	// 0x4b54ed
// declared property getter: - (BwEntry *)bwEntry;	// 0x4b5429
// declared property getter: - (long long)bytes;	// 0x4b4d5d
// declared property getter: - (long long)bytesForInterface;	// 0x4b4dc1
- (void)clearErrorStack;	// 0x4b50c9
- (void)close;	// 0x4b1181
- (id)createErrorFromStack;	// 0x4b2975
// declared property getter: - (unsigned)currentStreamBitrate;	// 0x4b4e81
- (void)dealloc;	// 0x4b0aa9
- (void)end:(double)end reason:(id)reason;	// 0x4b0fa1
// declared property getter: - (id)errorStack;	// 0x4b51a1
- (int)fetchBookmark:(id)bookmark;	// 0x4b4a29
// declared property getter: - (long long)lastBwEntryBytes;	// 0x4b5475
// declared property getter: - (double)lastBwEntryTime;	// 0x4b5449
// declared property getter: - (unsigned)lastKnownMappedVideoBitrate;	// 0x4b5345
// declared property getter: - (unsigned)lastNumAccessLogEvents;	// 0x4b5365
// declared property getter: - (IMediaControl *)mediaControl;	// 0x4b5181
// declared property getter: - (NetflixMediaControlListener *)mediaControlListener;	// 0x4b5191
- (void)mediaDidAcquireLicense;	// 0x4b2f85
- (void)mediaDidAuthorize;	// 0x4b2e55
- (void)mediaDidBuildPlaylists;	// 0x4b301d
- (void)mediaDidCdnSelect;	// 0x4b2eed
- (void)mediaDidClose;	// 0x4b27c1
- (void)mediaDidFailLoadSubtitles:(int)media error:(id)error;	// 0x4b327d
- (void)mediaDidFailOpen:(id)media;	// 0x4b2ccd
- (void)mediaDidFailSelectAudio:(int)media error:(id)error;	// 0x4b4f9d
- (void)mediaDidHandleNccpError:(id)media;	// 0x4b2835
- (void)mediaDidLoadSubtitles:(id)media;	// 0x4b3149
- (void)mediaDidSelectAudio:(id)media;	// 0x4b4eb9
- (void)mediaDidSetSpeed:(float)media;	// 0x4b3069
- (void)mediaOpenComplete:(id)complete;	// 0x4b2729
- (void)mediaWillAcquireLicense;	// 0x4b2f39
- (void)mediaWillAuthorize;	// 0x4b2e09
- (void)mediaWillBuildPlaylists;	// 0x4b2fd1
- (void)mediaWillCdnSelect;	// 0x4b2ea1
- (void)mediaWillLoadSubtitles;	// 0x4b30fd
// declared property getter: - (id)movieDetails;	// 0x4b5111
// declared property getter: - (int)networkInterfaceType;	// 0x4b54a1
- (void)networkSelection:(id)selection;	// 0x4b238d
- (int)networkTypeStringToType:(id)type;	// 0x4b2319
// declared property getter: - (double)observedBitrate;	// 0x4b53b1
- (void)open:(id)open;	// 0x4b0d0d
- (void)openAsync:(id)async;	// 0x4b36f1
// declared property getter: - (BOOL)openNotificationSent;	// 0x4b50f1
- (void)pause:(double)pause;	// 0x4b0dc1
- (void)play:(double)play;	// 0x4b0d49
// declared property getter: - (id)playReadyKey;	// 0x4b5149
// declared property getter: - (BOOL)playbackCommandInProgress;	// 0x4b52e9
// declared property getter: - (id)playbackCommandLock;	// 0x4b52b1
- (id)playlistForIndicatedBitrate:(double)indicatedBitrate;	// 0x4b4bad
- (id)playlistForRequestedM3u8:(id)requestedM3u8;	// 0x4b1fa9
// declared property getter: - (long long)pollBytesStart;	// 0x4b53fd
// declared property getter: - (BOOL)pollNetworkInterface;	// 0x4b53dd
- (void)postMediaCloseFailure;	// 0x4b35ed
- (void)postMediaOpenFailure:(int)failure;	// 0x4b343d
- (void)postMediaOpenFailure:(id)failure clearProgress:(BOOL)progress;	// 0x4b3515
- (void)postMediaOpenSuccess:(id)success;	// 0x4b33a1
// declared property getter: - (id)reportableActionId;	// 0x4b51d5
- (void)reposition:(double)reposition;	// 0x4b0eb1
// declared property getter: - (double)sampleReportWindow;	// 0x4b5519
- (void)selectedPlaylist:(id)playlist;	// 0x4b20b9
// declared property setter: - (void)setAudioTrackIndex:(int)index;	// 0x4b52a1
// declared property setter: - (void)setBufferingStartBytes:(long long)bytes;	// 0x4b54d9
// declared property setter: - (void)setBufferingStartTime:(double)time;	// 0x4b5505
// declared property setter: - (void)setBwEntry:(BwEntry *)entry;	// 0x4b5439
// declared property setter: - (void)setErrorStack:(id)stack;	// 0x4b51b1
// declared property setter: - (void)setLastBwEntryBytes:(long long)bytes;	// 0x4b548d
// declared property setter: - (void)setLastBwEntryTime:(double)time;	// 0x4b5461
// declared property setter: - (void)setLastKnownMappedVideoBitrate:(unsigned)bitrate;	// 0x4b5355
// declared property setter: - (void)setLastNumAccessLogEvents:(unsigned)events;	// 0x4b5375
// declared property setter: - (void)setMediaControl:(IMediaControl *)control;	// 0x4b0bd5
// declared property setter: - (void)setMediaControlListener:(NetflixMediaControlListener *)listener;	// 0x4b0ce9
// declared property setter: - (void)setMovieDetails:(id)details;	// 0x4b5125
// declared property setter: - (void)setNetworkInterfaceType:(int)type;	// 0x4b54b1
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x4b53c9
// declared property setter: - (void)setOpenNotificationSent:(BOOL)sent;	// 0x4b5101
// declared property setter: - (void)setPlayReadyKey:(id)key;	// 0x4b515d
// declared property setter: - (void)setPlaybackCommandInProgress:(BOOL)progress;	// 0x4b5301
// declared property setter: - (void)setPlaybackCommandLock:(id)lock;	// 0x4b52c5
// declared property setter: - (void)setPollBytesStart:(long long)start;	// 0x4b5415
// declared property setter: - (void)setPollNetworkInterface:(BOOL)interface;	// 0x4b53ed
// declared property setter: - (void)setReportableActionId:(id)anId;	// 0x4b51e5
// declared property setter: - (void)setSampleReportWindow:(double)window;	// 0x4b5531
// declared property setter: - (void)setStalled:(bool)stalled;	// 0x4b5559
// declared property setter: - (void)setState:(int)state;	// 0x4b532d
// declared property setter: - (void)setSubtitlesProcessing:(BOOL)processing;	// 0x4b5259
// declared property setter: - (void)setSubtitlesProcessingLock:(id)lock;	// 0x4b521d
// declared property setter: - (void)setSubtitlesTrackIndex:(int)index;	// 0x4b5281
// declared property setter: - (void)setTestStreams:(id)streams;	// 0x4b5065
// declared property setter: - (void)setTotalBytesTransferred:(long long)transferred;	// 0x4b539d
// declared property setter: - (void)setTotalNumberOfStalls:(int)stalls;	// 0x4b5579
// declared property getter: - (bool)stalled;	// 0x4b5545
// declared property getter: - (int)state;	// 0x4b5319
- (void)stop:(double)stop;	// 0x4b0f29
- (void)streamSelected:(int)selected streamIndex:(int)index;	// 0x4b1531
- (void)subtitlesDisable;	// 0x4b2295
- (void)subtitlesDisableAsync;	// 0x4b48f9
// declared property getter: - (BOOL)subtitlesProcessing;	// 0x4b5241
// declared property getter: - (id)subtitlesProcessingLock;	// 0x4b5209
- (void)subtitlesSelect:(id)select;	// 0x4b2259
- (void)subtitlesSelectAbort;	// 0x4b22d1
- (void)subtitlesSelectAsync:(id)async;	// 0x4b44f1
// declared property getter: - (int)subtitlesTrackIndex;	// 0x4b5271
// declared property getter: - (id)testStreams;	// 0x4b5589
// declared property getter: - (long long)totalBytesTransferred;	// 0x4b5385
// declared property getter: - (int)totalNumberOfStalls;	// 0x4b5569
- (void)unpause:(double)unpause;	// 0x4b0e39
- (void)updatePts:(double)pts;	// 0x4b15b9
- (void)updatePts:(double)pts accessLogEvents:(id)events;	// 0x4b1b11
@end

