/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVController : NSObject {
	AVControllerPrivate *_priv;	// 4 = 0x4
}
@property(assign) double currentTime;	// G=0x335c7005; S=0x335dafe9; converted property
@property(assign) id delegate;	// G=0x335dbb25; S=0x335c6ae1; converted property
@property(assign) BOOL muted;	// G=0x335db099; S=0x335db131; converted property
@property(retain) id outputQTESFilePath;	// G=0x335cb055; S=0x335db271; converted property
@property(retain) id queue;	// G=0x335da4cd; S=0x335c49cd; converted property
@property(retain) id queueFeeder;	// G=0x335daba1; S=0x335ce41d; converted property
@property(assign) BOOL shouldDisplayClosedCaptions;	// G=0x335db2b5; S=0x335c6bd9; converted property
@property(assign) BOOL vibrationEnabled;	// G=0x335d9ecd; S=0x335d9ee5; converted property
@property(retain) id vibrationPattern;	// G=0x335d9fbd; S=0x335d9f3d; converted property
@property(assign) OpaqueFigVisualContext *visualContext;	// G=0x335db1e9; S=0x335db1fd; converted property
@property(assign) float volume;	// G=0x335c6a81; S=0x335ce7b1; converted property
+ (id)avController;	// 0x335da1b1
+ (id)avControllerWithQueue:(id)queue error:(id *)error;	// 0x335da1ed
+ (id)compatibleAudioRouteForRoute:(id)route;	// 0x335d9ff9
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inDictionaries:(id)dictionaries;	// 0x335da231
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x335cd619
+ (BOOL)isSupportedFileExtension:(id)extension;	// 0x335da15d
+ (BOOL)isSupportedMimeType:(id)type;	// 0x335da109
+ (void)setEnableNetworkMode:(BOOL)mode;	// 0x335ce835
- (id)init;	// 0x335c4409
- (id)initForStreaming;	// 0x335da335
- (id)initWithError:(id *)error;	// 0x335c482d
- (id)initWithQueue:(id)queue error:(id *)error;	// 0x335c4421
- (id)initWithQueue:(id)queue fmpType:(unsigned)type error:(id *)error;	// 0x335c4459
- (id)_figPlayerNotifications;	// 0x335dbba5
- (BOOL)activate:(id *)activate;	// 0x335daed9
- (id)addNextFeederItemToQueue;	// 0x335c72f9
- (void)applyDesiredRepeatMode;	// 0x335db701
- (id)attributeForKey:(id)key;	// 0x335c62ed
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)notification;	// 0x335c51b1
- (BOOL)beginInterruption:(id *)interruption;	// 0x335dadb1
- (BOOL)beginRepeatGap;	// 0x335cec65
- (id)bookmarkGroupIDForAVItem:(id)avitem;	// 0x335c8cc5
- (double)bookmarkTimeForAVItem:(id)avitem;	// 0x335c8ce9
- (BOOL)canBeginInterruption;	// 0x335dae65
- (void)cancelAllCGImageRequests;	// 0x335db5a9
- (void)cancelContinueAfterRepeatGap;	// 0x335ca831
- (void)checkQueueSpace;	// 0x335c7269
- (void)continueAfterRepeatGap;	// 0x335dabcd
- (long)copyImageForTime:(CVBufferRef *)time time:(const XXStruct_pwHToB *)time2;	// 0x335da4c1
- (OpaqueFigPlaybackItem *)createItemWithURL:(id)url flags:(unsigned long)flags error:(int *)error;	// 0x335caef1
- (OpaqueFigPlaybackItem *)currentFPItem;	// 0x335c70ad
- (id)currentItem;	// 0x335c70cd
- (void)currentItemHasChanged:(id)changed;	// 0x335c94a1
- (void)currentItemWillChangeToItem:(id)currentItem oldItemCurrentTime:(double)time;	// 0x335c9045
// converted property getter: - (double)currentTime;	// 0x335c7005
- (void)dealloc;	// 0x335d2e69
// converted property getter: - (id)delegate;	// 0x335dbb25
- (void)dequeueDeadItem;	// 0x335dc1dd
- (void)dequeueFirstItem;	// 0x335cd949
- (void)endInterruptionWithStatus:(id)status;	// 0x335daf8d
- (void)ensurePlaybackQueueImmed;	// 0x335dc0dd
- (int)eqPreset;	// 0x335db1d5
- (id)errorWithDescription:(id)description code:(long)code;	// 0x335dad15
- (void)feederInvalidatedWithCurrentItemMoved:(id)currentItemMoved;	// 0x335da9e9
- (void)feederRangeWasInserted:(id)inserted;	// 0x335da4e1
- (void)feederRangeWasRemoved:(id)removed;	// 0x335da761
- (void)figPlayerNotificationHandler:(id)handler;	// 0x335dc205
- (void)fmpEffectiveVolumeDidChange;	// 0x335db5e9
- (void)fpItemNotification:(id)notification sender:(id)sender;	// 0x335c98ed
- (CGImageRef)grabCGImageAtTime:(double)time withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions actualTime:(double *)time4;	// 0x335d2a2d
- (BOOL)havePlayedCurrentItem;	// 0x335dabb9
- (unsigned)indexOfCurrentQueueFeederItem;	// 0x335cd6f1
- (BOOL)isCurrentItemReady;	// 0x335dc091
- (BOOL)isNewImageAvailableForTime:(const XXStruct_pwHToB *)time willNeverBeAvailable:(BOOL *)available;	// 0x335da4bd
- (BOOL)isValid;	// 0x335dbb45
- (void)itemHasFinishedPlayingNotification:(id)notification;	// 0x335cebb9
- (id)lkLayer;	// 0x335db2a1
- (void)logPerformanceDataForCurrentItem;	// 0x335dbdbd
- (void)makeCurrentItemReady;	// 0x335ca86d
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x335ce3d5
// converted property getter: - (BOOL)muted;	// 0x335db099
- (BOOL)okToNotifyFromThisThread;	// 0x335c9371
// converted property getter: - (id)outputQTESFilePath;	// 0x335cb055
- (void)pause;	// 0x335cd6dd
- (BOOL)play:(id *)play;	// 0x335dabe1
- (BOOL)playNextItem:(id *)item;	// 0x335cd8d9
- (AVControllerPrivate *)privateStorage;	// 0x335da4ad
// converted property getter: - (id)queue;	// 0x335da4cd
// converted property getter: - (id)queueFeeder;	// 0x335daba1
- (float)rate;	// 0x335c95f1
- (void)rateDidChangeToRate:(float)rate;	// 0x335cc79d
- (void)registerTimeMarkerObserver:(id)observer forItem:(id)item times:(id)times context:(id)context;	// 0x335dbf25
- (void)removeObserver:(id)observer fromTMOArray:(id)tmoarray;	// 0x335ce071
- (int)repeatMode;	// 0x335ce405
- (void)requestAsyncCGImagesAtTimes:(id)times requestIDs:(id)ids withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x335db3d5
- (void)requestAsyncCGImagesAtTimes:(id)times withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x335db3b1
- (BOOL)resumePlayback:(double)playback error:(id *)error;	// 0x335dabfd
- (void)safeSubtitleCommandPosted:(void *)posted;	// 0x335dbb3d
- (void)scheduleQueueSpaceCheck;	// 0x335ca649
- (void)scheduleUpdateTimeMarkerObservations;	// 0x335c9651
- (void)seekToDate:(id)date;	// 0x335db011
- (void)setAVItemClass:(Class)aClass;	// 0x335da31d
- (void)setApplyVideoTrackMatrix;	// 0x335db2c9
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x335c5449
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x335dafe9
- (void)setCurrentTime:(double)time options:(int)options;	// 0x335ce4cd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x335c6ae1
- (void)setEQPreset:(int)preset;	// 0x335c6b31
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned)currentQueueFeederItem error:(id *)error;	// 0x335cd759
- (void)setLayer:(id)layer;	// 0x335c6cdd
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x335db131
// converted property setter: - (void)setOutputQTESFilePath:(id)path;	// 0x335db271
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x335dc101
// converted property setter: - (void)setQueue:(id)queue;	// 0x335c49cd
// converted property setter: - (void)setQueueFeeder:(id)feeder;	// 0x335ce41d
- (void)setQueueFeeder:(id)feeder withIndex:(int)index;	// 0x335c6d7d
- (BOOL)setRate:(float)rate error:(id *)error;	// 0x335ca6d9
- (BOOL)setRepeatMode:(int)mode;	// 0x335c6d4d
// converted property setter: - (void)setShouldDisplayClosedCaptions:(BOOL)displayClosedCaptions;	// 0x335c6bd9
- (void)setSubtitleRecipient:(id)recipient;	// 0x335c6b95
// converted property setter: - (void)setVibrationEnabled:(BOOL)enabled;	// 0x335d9ee5
// converted property setter: - (void)setVibrationPattern:(id)pattern;	// 0x335d9f3d
// converted property setter: - (void)setVisualContext:(OpaqueFigVisualContext *)context;	// 0x335db1fd
// converted property setter: - (void)setVolume:(float)volume;	// 0x335ce7b1
- (BOOL)shouldBeginPlayingItem:(id)item error:(id *)error;	// 0x335cbab1
// converted property getter: - (BOOL)shouldDisplayClosedCaptions;	// 0x335db2b5
- (void)stepByCount:(int)count;	// 0x335db069
- (void)unregisterTimeMarkerObserver:(id)observer forItem:(id)item;	// 0x335cdeed
- (long)updateActionAtEnd;	// 0x335c6bf1
- (void)updateTimeMarkerObservations;	// 0x335cbccd
// converted property getter: - (BOOL)vibrationEnabled;	// 0x335d9ecd
// converted property getter: - (id)vibrationPattern;	// 0x335d9fbd
// converted property getter: - (OpaqueFigVisualContext *)visualContext;	// 0x335db1e9
// converted property getter: - (float)volume;	// 0x335c6a81
@end
