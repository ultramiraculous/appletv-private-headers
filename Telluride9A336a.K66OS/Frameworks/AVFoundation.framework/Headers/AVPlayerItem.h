/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "NSCopying.h"

@class NSDate, AVPlayerItemInternal, NSError, NSString;

@interface AVPlayerItem : NSObject <NSCopying> {
@private
	AVPlayerItemInternal *_playerItem;	// 4 = 0x4
}
@property(assign, nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;	// G=0x3145d8a1; S=0x3145c1a1; 
@property(readonly, assign, nonatomic, getter=_isRental) BOOL _rental;	// G=0x3145d961; 
@property(readonly, assign, nonatomic) NSDate *_rentalExpirationDate;	// G=0x3145dae5; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackExpirationDate;	// G=0x3145dc3d; 
@property(readonly, assign, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;	// G=0x3145d9cd; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackStartedDate;	// G=0x3145db91; 
@property(readonly, assign, nonatomic) NSDate *_rentalStartDate;	// G=0x3145da39; 
@property(assign) BOOL alwaysMonitorsPlayability;	// G=0x314570d5; S=0x31456f15; converted property
@property(readonly, assign, nonatomic, getter=isApplicationAuthorizedForPlayback) BOOL applicationAuthorizedForPlayback;	// G=0x3145c02d; 
@property(retain) id audioMix;	// G=0x314568f9; S=0x31456681; converted property
@property(readonly, assign, nonatomic, getter=isAuthorizationRequiredForPlayback) BOOL authorizationRequiredForPlayback;	// G=0x3145bbe1; 
@property(readonly, assign, nonatomic) BOOL canDisplayExternalSubtitles;	// G=0x3145bf01; 
@property(readonly, assign, nonatomic, getter=isContentAuthorizedForPlayback) BOOL contentAuthorizedForPlayback;	// G=0x3145c07d; 
@property(assign) BOOL continuesPlayingDuringPrerollForRateChange;	// G=0x31456afd; S=0x3145693d; converted property
@property(assign) BOOL continuesPlayingDuringPrerollForSeek;	// G=0x31456de9; S=0x31456c29; converted property
@property(copy, nonatomic) NSString *dataYouTubeID;	// G=0x3145bebd; S=0x3145bf91; 
@property(assign, nonatomic) BOOL displaysExternalSubtitles;	// G=0x31452b91; S=0x3145e14d; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x31459919; @dynamic
@property(assign) XXStruct_pwHToB forwardPlaybackEndTime;	// G=0x31457a19; S=0x3145783d; converted property
@property(retain) id gaplessInfo;	// G=0x31455711; S=0x31455405; converted property
@property(retain) id initialDate;	// G=0x31457d95; S=0x31457d39; converted property
@property(retain) id initialEstimatedDate;	// G=0x31457c65; S=0x31457c09; converted property
@property(assign) BOOL limitReadAhead;	// G=0x314573c1; S=0x31457201; converted property
@property(assign, getter=isNonForcedSubtitleDisplayEnabled) BOOL nonForcedSubtitleDisplayEnabled;	// G=0x31452b29; S=0x3145401d; converted property
@property(assign) XXStruct_pwHToB reversePlaybackEndTime;	// G=0x314576c9; S=0x314574ed; converted property
@property(assign) float soundCheckVolumeNormalization;	// G=0x31452ae1; S=0x314552f9; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x314529f9; @dynamic
@property(retain) id videoComposition;	// G=0x3145663d; S=0x31456399; converted property
@property(assign) float volumeAdjustment;	// G=0x31452b05; S=0x314551ed; converted property
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;	// 0x314527d9
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;	// 0x314527c5
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)provider withOptions:(id)options;	// 0x3145dfd9
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)session;	// 0x3145e0ed
+ (BOOL)automaticallyNotifiesObserversOfAlwaysMonitorsPlayability;	// 0x31452ac9
+ (BOOL)automaticallyNotifiesObserversOfAsset;	// 0x31452b51
+ (BOOL)automaticallyNotifiesObserversOfAudioMix;	// 0x31452ad5
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForRateChange;	// 0x31452ad1
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForSeek;	// 0x31452acd
+ (BOOL)automaticallyNotifiesObserversOfForwardPlaybackEndTime;	// 0x31452abd
+ (BOOL)automaticallyNotifiesObserversOfGaplessInfo;	// 0x31452add
+ (BOOL)automaticallyNotifiesObserversOfLimitReadAhead;	// 0x31452ac5
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;	// 0x31452b65
+ (BOOL)automaticallyNotifiesObserversOfNonForcedSubtitleDisplayEnabled;	// 0x31452b49
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;	// 0x31452b59
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;	// 0x31452b5d
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;	// 0x31452b55
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;	// 0x31452b69
+ (BOOL)automaticallyNotifiesObserversOfReversePlaybackEndTime;	// 0x31452ac1
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;	// 0x31452b61
+ (BOOL)automaticallyNotifiesObserversOfSoundCheckVolumeNormalization;	// 0x31452b01
+ (BOOL)automaticallyNotifiesObserversOfStatus;	// 0x31452b4d
+ (BOOL)automaticallyNotifiesObserversOfTracks;	// 0x31452b6d
+ (BOOL)automaticallyNotifiesObserversOfVideoComposition;	// 0x31452ad9
+ (BOOL)automaticallyNotifiesObserversOfVolumeAdjustment;	// 0x31452b25
+ (void)initialize;	// 0x31453b0d
+ (id)playerItemWithAsset:(id)asset;	// 0x31453a7d
+ (id)playerItemWithURL:(id)url;	// 0x31453ac5
- (id)init;	// 0x3145b335
- (id)initWithAsset:(id)asset;	// 0x31452c69
- (id)initWithURL:(id)url;	// 0x31452bb1
- (int)_CreateSeekID;	// 0x31452a19
- (id)_URL;	// 0x314529d9
- (void)_addFPListeners;	// 0x31458f35
- (void)_addSyncLayer:(id)layer;	// 0x31453d05
- (BOOL)_alwaysMonitorsPlayability;	// 0x31457161
- (void)_applyAudioMix;	// 0x314567a1
- (void)_applyInitialAudioMix;	// 0x3145674d
- (void)_applyMediaSelectionOptions;	// 0x31454df1
- (void)_applyTrackSelectionsFromAlternateTrackGroupSPI;	// 0x31454ca1
- (void)_attachToPlayer:(id)player forImmediateEnqueueing:(BOOL)immediateEnqueueing shouldAppendItem:(BOOL)item;	// 0x31459b61
- (long long)_availableFileSize;	// 0x3145c411
- (void)_cacheMediaSelectionOption:(id)option forMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x31454a99
- (id)_cachedValueForKey:(id)key;	// 0x31452d4d
- (BOOL)_canPlayFastForward;	// 0x314589e5
- (BOOL)_canPlayFastReverse;	// 0x314588d9
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(id)handler;	// 0x314584c9
- (void)_changeStatusToFailedWithError:(id)error;	// 0x314597d9
- (void)_configurePlaybackItemForPlayerType:(int)playerType;	// 0x3145a2bd
- (BOOL)_continuesPlayingDuringPrerollForRateChange;	// 0x31456b89
- (BOOL)_continuesPlayingDuringPrerollForSeek;	// 0x31456e75
- (void)_createPlayerConnection:(id)connection shouldAppendItem:(BOOL)item;	// 0x31452f65
- (void)_createPlayerItemInternal;	// 0x3145b3fd
- (void)_detachFromPlayer;	// 0x3145383d
- (void)_didAccessKVOForKey:(id)key;	// 0x31452dad
- (XXStruct_pwHToB)_duration;	// 0x314596f1
- (OpaqueFigCPEProtector *)_figCPEProtector;	// 0x31453f2d
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x3145282d
- (long long)_fileSize;	// 0x3145c379
- (XXStruct_pwHToB)_forwardPlaybackEndTime;	// 0x31457aa1
- (id)_fpNotificationNames;	// 0x31459085
- (BOOL)_hasEnabledVideoMedia;	// 0x31453b6d
- (void)_informObserversAboutAvailabilityOfTracks;	// 0x3145995d
- (void)_insertAfterItem:(id)item;	// 0x314528ed
- (void)_invokeReadyForEnqueueingHandlers;	// 0x31458bf5
- (BOOL)_isCurrentPlayerItem;	// 0x3145286d
// declared property getter: - (BOOL)_isExternalProtectionRequiredForPlayback;	// 0x3145d8a1
// declared property getter: - (BOOL)_isRental;	// 0x3145d961
// declared property getter: - (BOOL)_isRentalPlaybackStarted;	// 0x3145d9cd
- (void)_kickAssetObserversIfAppropriate;	// 0x31459a05
- (BOOL)_limitReadAhead;	// 0x3145744d
- (id)_loadedTimeRanges;	// 0x314557c5
- (void)_makeNewAssetWithFigPlaybackItem;	// 0x314539b1
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id)completionHandler;	// 0x31458a65
- (id)_nextItem;	// 0x314528ad
- (id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)error;	// 0x31453ca1
- (id)_playbackProperties;	// 0x3145566d
- (id)_player;	// 0x31452ddd
- (void)_playerChangeStatusToFailedWithError:(id)error;	// 0x31453851
- (id)_playerConnection;	// 0x3145288d
- (CGSize)_presentationSize;	// 0x314587d9
- (id)_previousItem;	// 0x314528cd
- (id)_propertyStorage;	// 0x3145284d
- (void)_quietlySetAlwaysMonitorsPlayability:(BOOL)playability;	// 0x31456ff9
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x31456a21
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x31456d0d
- (void)_quietlySetEQPreset:(int)preset;	// 0x3145df69
- (void)_quietlySetForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x3145795d
- (void)_quietlySetLimitReadAhead:(BOOL)ahead;	// 0x314572e5
- (void)_quietlySetPlaybackProperties:(id)properties;	// 0x314554e5
- (void)_quietlySetReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x3145760d
- (void)_quietlySetSoundCheckVolumeNormalization:(float)normalization;	// 0x31455395
- (void)_quietlySetVolumeAdjustment:(float)adjustment;	// 0x31455289
- (void)_removeFPListeners;	// 0x31458de5
- (void)_removeFromItems;	// 0x31452969
- (void)_removeSyncLayer:(id)layer;	// 0x31453da1
// declared property getter: - (id)_rentalExpirationDate;	// 0x3145dae5
// declared property getter: - (id)_rentalPlaybackExpirationDate;	// 0x3145dc3d
// declared property getter: - (id)_rentalPlaybackStartedDate;	// 0x3145db91
// declared property getter: - (id)_rentalStartDate;	// 0x3145da39
- (void)_respondToBecomingReadyForBasicInspection;	// 0x31458cf9
- (XXStruct_pwHToB)_reversePlaybackEndTime;	// 0x31457751
- (id)_seekableTimeRanges;	// 0x31455b55
- (void)_selectMediaOption:(id)option inAlternateTrackGroup:(id)alternateTrackGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x31454985
- (void)_selectMediaOption:(id)option inKeyValueGroup:(id)keyValueGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x31454805
- (void)_selectMediaOption:(id)option inMediaSelectionGroup:(id)mediaSelectionGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x31454739
- (void)_selectTrackWithID:(int)anId amongTrackIDs:(id)ids;	// 0x31454b61
- (id)_selectedMediaOptionInAlternateTrackGroup:(id)alternateTrackGroup;	// 0x314543b1
- (id)_selectedMediaOptionInKeyValueGroup:(id)keyValueGroup;	// 0x31454179
- (void)_setAsset:(id)asset;	// 0x3145389d
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;	// 0x31459aa5
- (void)_setAssetWithFigPlaybackItem:(id)figPlaybackItem;	// 0x314538f9
- (void)_setAudibleDRMInfo:(id)info;	// 0x3145bdbd
- (void)_setEQPreset:(int)preset;	// 0x3145be61
- (void)_setEnabledState:(BOOL)state ofTrackID:(int)trackID;	// 0x31454c2d
// declared property setter: - (void)_setExternalProtectionRequiredForPlayback:(BOOL)playback;	// 0x3145c1a1
- (void)_setIsCurrentPlayerItem:(BOOL)item;	// 0x31452e09
- (void)_setPlayerConnection:(id)connection;	// 0x31452f09
- (void)_setRampInOutInfo:(id)outInfo;	// 0x3145bd19
- (void)_setSyncLayersOnFigPlaybackItem;	// 0x31453ded
- (void)_setTimedMetadata:(id)metadata;	// 0x31453e75
- (void)_setTrackIDsForAssetWithFigPlaybackItem:(id)figPlaybackItem;	// 0x31453955
- (void)_setURL:(id)url;	// 0x31453861
- (void)_setVideoCompositionFrameDuration:(XXStruct_pwHToB)duration;	// 0x314562fd
- (void)_setVideoCompositionInstructions:(id)instructions;	// 0x314561bd
- (void)_setVideoCompositionRenderScale:(float)scale;	// 0x3145620d
- (void)_setVideoCompositionRenderSize:(CGSize)size;	// 0x3145628d
- (void)_setVideoCompositor:(id)compositor;	// 0x31456101
- (dispatch_queue_s *)_stateDispatchQueue;	// 0x3145280d
- (id)_trackWithTrackID:(int)trackID;	// 0x31459209
- (id)_tracks;	// 0x31459371
- (id)_unregisterAndReturnRetainedSeekCompletionHandler;	// 0x31452a79
- (id)_weakReference;	// 0x314527ed
- (void)_willAccessKVOForKey:(id)key;	// 0x31452d7d
- (id)accessLog;	// 0x3145dce9
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x3145a79d
// converted property getter: - (BOOL)alwaysMonitorsPlayability;	// 0x314570d5
- (id)asset;	// 0x31459795
// converted property getter: - (id)audioMix;	// 0x314568f9
// declared property getter: - (BOOL)canDisplayExternalSubtitles;	// 0x3145bf01
- (BOOL)canPlayFastForward;	// 0x31458959
- (BOOL)canPlayFastReverse;	// 0x3145884d
- (void)cancelPendingSeeks;	// 0x31457ead
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForRateChange;	// 0x31456afd
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForSeek;	// 0x31456de9
- (id)copyWithZone:(NSZone *)zone;	// 0x3145ab39
- (id)currentDate;	// 0x31457e1d
- (id)currentEstimatedDate;	// 0x31457ca9
- (XXStruct_pwHToB)currentTime;	// 0x31458695
// declared property getter: - (id)dataYouTubeID;	// 0x3145bebd
- (void)dealloc;	// 0x3145afed
- (id)description;	// 0x3145aa61
- (void)didChangeValueForKey:(id)key;	// 0x3145a911
- (void)displayExternalSubtitleString:(id)string forced:(BOOL)forced;	// 0x3145e1c9
// declared property getter: - (BOOL)displaysExternalSubtitles;	// 0x31452b91
- (XXStruct_pwHToB)duration;	// 0x31459635
// declared property getter: - (id)error;	// 0x31459919
- (id)errorLog;	// 0x3145ddb9
- (void)finalize;	// 0x3145aef9
// converted property getter: - (XXStruct_pwHToB)forwardPlaybackEndTime;	// 0x31457a19
// converted property getter: - (id)gaplessInfo;	// 0x31455711
// converted property getter: - (id)initialDate;	// 0x31457d95
// converted property getter: - (id)initialEstimatedDate;	// 0x31457c65
// declared property getter: - (BOOL)isApplicationAuthorizedForPlayback;	// 0x3145c02d
// declared property getter: - (BOOL)isAuthorizationRequiredForPlayback;	// 0x3145bbe1
// declared property getter: - (BOOL)isContentAuthorizedForPlayback;	// 0x3145c07d
// converted property getter: - (BOOL)isNonForcedSubtitleDisplayEnabled;	// 0x31452b29
- (BOOL)isPlaybackBufferEmpty;	// 0x31455f81
- (BOOL)isPlaybackBufferFull;	// 0x31456001
- (BOOL)isPlaybackLikelyToKeepUp;	// 0x31456081
// converted property getter: - (BOOL)limitReadAhead;	// 0x314573c1
- (id)loadedTimeRanges;	// 0x31455755
- (id)playabilityMetrics;	// 0x31455e75
- (CGSize)presentationSize;	// 0x3145873d
- (float)progressTowardsPlaybackLikelyToKeepUp;	// 0x31455ef9
// converted property getter: - (XXStruct_pwHToB)reversePlaybackEndTime;	// 0x314576c9
- (BOOL)seekToDate:(id)date;	// 0x31457dd9
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x31458495
- (void)seekToTime:(XXStruct_pwHToB)time completionHandler:(id)handler;	// 0x3145839d
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x31458415
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after completionHandler:(id)handler;	// 0x31457f35
- (id)seekableTimeRanges;	// 0x31455ae5
- (void)selectMediaOption:(id)option inMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x31454715
- (void)selectTrackWithID:(int)anId inTrackGroup:(id)trackGroup;	// 0x31454f99
- (id)selectedMediaOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x314540d5
- (int)selectedTrackIDInTrackGroup:(id)trackGroup;	// 0x314550a5
// converted property setter: - (void)setAlwaysMonitorsPlayability:(BOOL)playability;	// 0x31456f15
// converted property setter: - (void)setAudioMix:(id)mix;	// 0x31456681
// converted property setter: - (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x3145693d
// converted property setter: - (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x31456c29
// declared property setter: - (void)setDataYouTubeID:(id)anId;	// 0x3145bf91
// declared property setter: - (void)setDisplaysExternalSubtitles:(BOOL)subtitles;	// 0x3145e14d
// converted property setter: - (void)setForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x3145783d
// converted property setter: - (void)setGaplessInfo:(id)info;	// 0x31455405
// converted property setter: - (void)setInitialDate:(id)date;	// 0x31457d39
// converted property setter: - (void)setInitialEstimatedDate:(id)date;	// 0x31457c09
// converted property setter: - (void)setLimitReadAhead:(BOOL)ahead;	// 0x31457201
// converted property setter: - (void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x3145401d
// converted property setter: - (void)setReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x314574ed
// converted property setter: - (void)setSoundCheckVolumeNormalization:(float)normalization;	// 0x314552f9
// converted property setter: - (void)setVideoComposition:(id)composition;	// 0x31456399
// converted property setter: - (void)setVolumeAdjustment:(float)adjustment;	// 0x314551ed
// converted property getter: - (float)soundCheckVolumeNormalization;	// 0x31452ae1
// declared property getter: - (int)status;	// 0x314529f9
- (void)stepByCount:(int)count;	// 0x31457b8d
- (id)timedMetadata;	// 0x31453ee9
- (id)tracks;	// 0x314592e1
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3145a9d5
// converted property getter: - (id)videoComposition;	// 0x3145663d
// converted property getter: - (float)volumeAdjustment;	// 0x31452b05
- (void)willChangeValueForKey:(id)key;	// 0x3145a971
@end

