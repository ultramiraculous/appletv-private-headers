/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSLock, NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface NetflixPlaybackManager : NSObject {
@private
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
@property(assign, nonatomic) int audioTrackIndex;	// G=0x32c999f1; S=0x32c99a01; @synthesize=audioTrackIndex_
@property(readonly, assign, nonatomic) unsigned bitrate;	// G=0x32c99485; 
@property(assign, nonatomic) long long bufferingStartBytes;	// G=0x32c99c05; S=0x32c99c1d; @synthesize=bufferingStartBytes_
@property(assign, nonatomic) double bufferingStartTime;	// G=0x32c99c31; S=0x32c99c49; @synthesize=bufferingStartTime_
@property(assign, nonatomic) BwEntry *bwEntry;	// G=0x32c99b6d; S=0x32c99b7d; @synthesize=bwEntry_
@property(readonly, assign, nonatomic) long long bytes;	// G=0x32c994c9; 
@property(readonly, assign, nonatomic) long long bytesForInterface;	// G=0x32c9952d; 
@property(readonly, assign, nonatomic) unsigned currentStreamBitrate;	// G=0x32c995e9; 
@property(retain, nonatomic) NSMutableArray *errorStack;	// G=0x32c99911; S=0x32c99921; @synthesize=errorStack_
@property(assign, nonatomic) long long lastBwEntryBytes;	// G=0x32c99bb9; S=0x32c99bd1; @synthesize=lastBwEntryBytes_
@property(assign, nonatomic) double lastBwEntryTime;	// G=0x32c99b8d; S=0x32c99ba5; @synthesize=lastBwEntryTime_
@property(assign, nonatomic) unsigned lastKnownMappedVideoBitrate;	// G=0x32c99a89; S=0x32c99a99; @synthesize=lastKnownMappedVideoBitrate_
@property(assign, nonatomic) unsigned lastNumAccessLogEvents;	// G=0x32c99aa9; S=0x32c99ab9; @synthesize=lastNumAccessLogEvents_
@property(assign, nonatomic) IMediaControl *mediaControl;	// G=0x32c998f1; S=0x32c9534d; @synthesize=mediaControl_
@property(assign, nonatomic) NetflixMediaControlListener *mediaControlListener;	// G=0x32c99901; S=0x32c95451; @synthesize=mediaControlListener_
@property(retain) NSDictionary *movieDetails;	// G=0x32c99881; S=0x32c99895; @synthesize=movieDetails_
@property(assign, nonatomic) int networkInterfaceType;	// G=0x32c99be5; S=0x32c99bf5; @synthesize=networkInterfaceType_
@property(assign, nonatomic) double observedBitrate;	// G=0x32c99af5; S=0x32c99b0d; @synthesize=observedBitrate_
@property(assign, nonatomic) BOOL openNotificationSent;	// G=0x32c99861; S=0x32c99871; @synthesize=openNotificationSent_
@property(copy) NSData *playReadyKey;	// G=0x32c998b9; S=0x32c998cd; @synthesize=playReadyKey_
@property(assign) BOOL playbackCommandInProgress;	// G=0x32c99a49; S=0x32c99a59; @synthesize=playbackCommandInProgress_
@property(retain) NSLock *playbackCommandLock;	// G=0x32c99a11; S=0x32c99a25; @synthesize=playbackCommandLock_
@property(assign, nonatomic) long long pollBytesStart;	// G=0x32c99b41; S=0x32c99b59; @synthesize=pollBytesStart_
@property(assign, nonatomic) BOOL pollNetworkInterface;	// G=0x32c99b21; S=0x32c99b31; @synthesize=pollNetworkInterface_
@property(retain, nonatomic) NSDictionary *reportableActionId;	// G=0x32c99945; S=0x32c99955; @synthesize=reportableActionId_
@property(assign, nonatomic) double sampleReportWindow;	// G=0x32c99c5d; S=0x32c99c75; @synthesize=sampleReportWindow_
@property(assign, nonatomic) bool stalled;	// G=0x32c99c89; S=0x32c99c9d; @synthesize=stalled_
@property(assign) int state;	// G=0x32c99a69; S=0x32c99a79; @synthesize=state_
@property(assign) BOOL subtitlesProcessing;	// G=0x32c999b1; S=0x32c999c1; @synthesize=subtitlesProcessing_
@property(retain) NSLock *subtitlesProcessingLock;	// G=0x32c99979; S=0x32c9998d; @synthesize=subtitlesProcessingLock_
@property(assign, nonatomic) int subtitlesTrackIndex;	// G=0x32c999d1; S=0x32c999e1; @synthesize=subtitlesTrackIndex_
@property(copy, nonatomic) NSDictionary *testStreams;	// G=0x32c99ccd; S=0x32c997d1; @synthesize=testStreams_
@property(assign, nonatomic) long long totalBytesTransferred;	// G=0x32c99ac9; S=0x32c99ae1; @synthesize=totalBytesTransferred_
@property(assign, nonatomic) int totalNumberOfStalls;	// G=0x32c99cad; S=0x32c99cbd; @synthesize=totalNumberOfStalls_
+ (void)initialize;	// 0x32c95039
+ (id)sharedInstance;	// 0x32c9503d
- (id)init;	// 0x32c9511d
- (void)audioSelect:(id)select;	// 0x32c96ccd
- (void)audioSelectAsync:(id)async;	// 0x32c96d09
// declared property getter: - (int)audioTrackIndex;	// 0x32c999f1
// declared property getter: - (unsigned)bitrate;	// 0x32c99485
- (void)buffering:(double)buffering;	// 0x32c959b1
- (void)bufferingComplete:(double)complete;	// 0x32c95ac5
// declared property getter: - (long long)bufferingStartBytes;	// 0x32c99c05
// declared property getter: - (double)bufferingStartTime;	// 0x32c99c31
// declared property getter: - (BwEntry *)bwEntry;	// 0x32c99b6d
// declared property getter: - (long long)bytes;	// 0x32c994c9
// declared property getter: - (long long)bytesForInterface;	// 0x32c9952d
- (void)clearErrorStack;	// 0x32c99839
- (void)close;	// 0x32c958bd
- (id)createErrorFromStack;	// 0x32c970ad
// declared property getter: - (unsigned)currentStreamBitrate;	// 0x32c995e9
- (void)dealloc;	// 0x32c95211
- (void)end:(double)end reason:(id)reason;	// 0x32c956e1
// declared property getter: - (id)errorStack;	// 0x32c99911
- (int)fetchBookmark:(id)bookmark;	// 0x32c991bd
// declared property getter: - (long long)lastBwEntryBytes;	// 0x32c99bb9
// declared property getter: - (double)lastBwEntryTime;	// 0x32c99b8d
// declared property getter: - (unsigned)lastKnownMappedVideoBitrate;	// 0x32c99a89
// declared property getter: - (unsigned)lastNumAccessLogEvents;	// 0x32c99aa9
// declared property getter: - (IMediaControl *)mediaControl;	// 0x32c998f1
// declared property getter: - (NetflixMediaControlListener *)mediaControlListener;	// 0x32c99901
- (void)mediaDidAcquireLicense;	// 0x32c976e9
- (void)mediaDidAuthorize;	// 0x32c975b9
- (void)mediaDidBuildPlaylists;	// 0x32c97781
- (void)mediaDidCdnSelect;	// 0x32c97651
- (void)mediaDidClose;	// 0x32c96efd
- (void)mediaDidFailLoadSubtitles:(int)media error:(id)error;	// 0x32c979e1
- (void)mediaDidFailOpen:(id)media;	// 0x32c97439
- (void)mediaDidFailSelectAudio:(int)media error:(id)error;	// 0x32c99709
- (void)mediaDidHandleNccpError:(id)media;	// 0x32c96f71
- (void)mediaDidLoadSubtitles:(id)media;	// 0x32c978ad
- (void)mediaDidSelectAudio:(id)media;	// 0x32c99621
- (void)mediaDidSetSpeed:(float)media;	// 0x32c977cd
- (void)mediaOpenComplete:(id)complete;	// 0x32c96e65
- (void)mediaWillAcquireLicense;	// 0x32c9769d
- (void)mediaWillAuthorize;	// 0x32c9756d
- (void)mediaWillBuildPlaylists;	// 0x32c97735
- (void)mediaWillCdnSelect;	// 0x32c97605
- (void)mediaWillLoadSubtitles;	// 0x32c97861
// declared property getter: - (id)movieDetails;	// 0x32c99881
// declared property getter: - (int)networkInterfaceType;	// 0x32c99be5
- (void)networkSelection:(id)selection;	// 0x32c96ab5
- (int)networkTypeStringToType:(id)type;	// 0x32c96a3d
// declared property getter: - (double)observedBitrate;	// 0x32c99af5
- (void)open:(id)open;	// 0x32c95475
- (void)openAsync:(id)async;	// 0x32c97e4d
// declared property getter: - (BOOL)openNotificationSent;	// 0x32c99861
- (void)pause:(double)pause;	// 0x32c95521
- (void)play:(double)play;	// 0x32c954b1
// declared property getter: - (id)playReadyKey;	// 0x32c998b9
// declared property getter: - (BOOL)playbackCommandInProgress;	// 0x32c99a49
// declared property getter: - (id)playbackCommandLock;	// 0x32c99a11
- (id)playlistForIndicatedBitrate:(double)indicatedBitrate;	// 0x32c99341
- (id)playlistForRequestedM3u8:(id)requestedM3u8;	// 0x32c966d1
// declared property getter: - (long long)pollBytesStart;	// 0x32c99b41
// declared property getter: - (BOOL)pollNetworkInterface;	// 0x32c99b21
- (void)postMediaCloseFailure;	// 0x32c97d49
- (void)postMediaOpenFailure:(int)failure;	// 0x32c97b9d
- (void)postMediaOpenFailure:(id)failure clearProgress:(BOOL)progress;	// 0x32c97c75
- (void)postMediaOpenSuccess:(id)success;	// 0x32c97b01
// declared property getter: - (id)reportableActionId;	// 0x32c99945
- (void)reposition:(double)reposition;	// 0x32c95601
// declared property getter: - (double)sampleReportWindow;	// 0x32c99c5d
- (void)selectedPlaylist:(id)playlist;	// 0x32c967e1
// declared property setter: - (void)setAudioTrackIndex:(int)index;	// 0x32c99a01
// declared property setter: - (void)setBufferingStartBytes:(long long)bytes;	// 0x32c99c1d
// declared property setter: - (void)setBufferingStartTime:(double)time;	// 0x32c99c49
// declared property setter: - (void)setBwEntry:(BwEntry *)entry;	// 0x32c99b7d
// declared property setter: - (void)setErrorStack:(id)stack;	// 0x32c99921
// declared property setter: - (void)setLastBwEntryBytes:(long long)bytes;	// 0x32c99bd1
// declared property setter: - (void)setLastBwEntryTime:(double)time;	// 0x32c99ba5
// declared property setter: - (void)setLastKnownMappedVideoBitrate:(unsigned)bitrate;	// 0x32c99a99
// declared property setter: - (void)setLastNumAccessLogEvents:(unsigned)events;	// 0x32c99ab9
// declared property setter: - (void)setMediaControl:(IMediaControl *)control;	// 0x32c9534d
// declared property setter: - (void)setMediaControlListener:(NetflixMediaControlListener *)listener;	// 0x32c95451
// declared property setter: - (void)setMovieDetails:(id)details;	// 0x32c99895
// declared property setter: - (void)setNetworkInterfaceType:(int)type;	// 0x32c99bf5
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x32c99b0d
// declared property setter: - (void)setOpenNotificationSent:(BOOL)sent;	// 0x32c99871
// declared property setter: - (void)setPlayReadyKey:(id)key;	// 0x32c998cd
// declared property setter: - (void)setPlaybackCommandInProgress:(BOOL)progress;	// 0x32c99a59
// declared property setter: - (void)setPlaybackCommandLock:(id)lock;	// 0x32c99a25
// declared property setter: - (void)setPollBytesStart:(long long)start;	// 0x32c99b59
// declared property setter: - (void)setPollNetworkInterface:(BOOL)interface;	// 0x32c99b31
// declared property setter: - (void)setReportableActionId:(id)anId;	// 0x32c99955
// declared property setter: - (void)setSampleReportWindow:(double)window;	// 0x32c99c75
// declared property setter: - (void)setStalled:(bool)stalled;	// 0x32c99c9d
// declared property setter: - (void)setState:(int)state;	// 0x32c99a79
// declared property setter: - (void)setSubtitlesProcessing:(BOOL)processing;	// 0x32c999c1
// declared property setter: - (void)setSubtitlesProcessingLock:(id)lock;	// 0x32c9998d
// declared property setter: - (void)setSubtitlesTrackIndex:(int)index;	// 0x32c999e1
// declared property setter: - (void)setTestStreams:(id)streams;	// 0x32c997d1
// declared property setter: - (void)setTotalBytesTransferred:(long long)transferred;	// 0x32c99ae1
// declared property setter: - (void)setTotalNumberOfStalls:(int)stalls;	// 0x32c99cbd
// declared property getter: - (bool)stalled;	// 0x32c99c89
// declared property getter: - (int)state;	// 0x32c99a69
- (void)stop:(double)stop;	// 0x32c95671
- (void)streamSelected:(int)selected streamIndex:(int)index;	// 0x32c95c3d
- (void)subtitlesDisable;	// 0x32c969bd
- (void)subtitlesDisableAsync;	// 0x32c9907d
// declared property getter: - (BOOL)subtitlesProcessing;	// 0x32c999b1
// declared property getter: - (id)subtitlesProcessingLock;	// 0x32c99979
- (void)subtitlesSelect:(id)select;	// 0x32c96981
- (void)subtitlesSelectAbort;	// 0x32c969f9
- (void)subtitlesSelectAsync:(id)async;	// 0x32c98c85
// declared property getter: - (int)subtitlesTrackIndex;	// 0x32c999d1
// declared property getter: - (id)testStreams;	// 0x32c99ccd
// declared property getter: - (long long)totalBytesTransferred;	// 0x32c99ac9
// declared property getter: - (int)totalNumberOfStalls;	// 0x32c99cad
- (void)unpause:(double)unpause;	// 0x32c95591
- (void)updatePts:(double)pts;	// 0x32c95cb9
- (void)updatePts:(double)pts accessLogEvents:(id)events;	// 0x32c96245
@end

