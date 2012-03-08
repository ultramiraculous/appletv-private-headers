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
@property(assign, nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;	// G=0x354518a1; S=0x354501a1; 
@property(readonly, assign, nonatomic, getter=_isRental) BOOL _rental;	// G=0x35451961; 
@property(readonly, assign, nonatomic) NSDate *_rentalExpirationDate;	// G=0x35451ae5; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackExpirationDate;	// G=0x35451c3d; 
@property(readonly, assign, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;	// G=0x354519cd; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackStartedDate;	// G=0x35451b91; 
@property(readonly, assign, nonatomic) NSDate *_rentalStartDate;	// G=0x35451a39; 
@property(assign) BOOL alwaysMonitorsPlayability;	// G=0x3544b0d5; S=0x3544af15; converted property
@property(readonly, assign, nonatomic, getter=isApplicationAuthorizedForPlayback) BOOL applicationAuthorizedForPlayback;	// G=0x3545002d; 
@property(retain) id audioMix;	// G=0x3544a8f9; S=0x3544a681; converted property
@property(readonly, assign, nonatomic, getter=isAuthorizationRequiredForPlayback) BOOL authorizationRequiredForPlayback;	// G=0x3544fbe1; 
@property(readonly, assign, nonatomic) BOOL canDisplayExternalSubtitles;	// G=0x3544ff01; 
@property(readonly, assign, nonatomic, getter=isContentAuthorizedForPlayback) BOOL contentAuthorizedForPlayback;	// G=0x3545007d; 
@property(assign) BOOL continuesPlayingDuringPrerollForRateChange;	// G=0x3544aafd; S=0x3544a93d; converted property
@property(assign) BOOL continuesPlayingDuringPrerollForSeek;	// G=0x3544ade9; S=0x3544ac29; converted property
@property(copy, nonatomic) NSString *dataYouTubeID;	// G=0x3544febd; S=0x3544ff91; 
@property(assign, nonatomic) BOOL displaysExternalSubtitles;	// G=0x35446b91; S=0x3545214d; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3544d919; @dynamic
@property(assign) XXStruct_pwHToB forwardPlaybackEndTime;	// G=0x3544ba19; S=0x3544b83d; converted property
@property(retain) id gaplessInfo;	// G=0x35449711; S=0x35449405; converted property
@property(retain) id initialDate;	// G=0x3544bd95; S=0x3544bd39; converted property
@property(retain) id initialEstimatedDate;	// G=0x3544bc65; S=0x3544bc09; converted property
@property(assign) BOOL limitReadAhead;	// G=0x3544b3c1; S=0x3544b201; converted property
@property(assign, getter=isNonForcedSubtitleDisplayEnabled) BOOL nonForcedSubtitleDisplayEnabled;	// G=0x35446b29; S=0x3544801d; converted property
@property(assign) XXStruct_pwHToB reversePlaybackEndTime;	// G=0x3544b6c9; S=0x3544b4ed; converted property
@property(assign) float soundCheckVolumeNormalization;	// G=0x35446ae1; S=0x354492f9; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x354469f9; @dynamic
@property(retain) id videoComposition;	// G=0x3544a63d; S=0x3544a399; converted property
@property(assign) float volumeAdjustment;	// G=0x35446b05; S=0x354491ed; converted property
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;	// 0x354467d9
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;	// 0x354467c5
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)provider withOptions:(id)options;	// 0x35451fd9
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)session;	// 0x354520ed
+ (BOOL)automaticallyNotifiesObserversOfAlwaysMonitorsPlayability;	// 0x35446ac9
+ (BOOL)automaticallyNotifiesObserversOfAsset;	// 0x35446b51
+ (BOOL)automaticallyNotifiesObserversOfAudioMix;	// 0x35446ad5
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForRateChange;	// 0x35446ad1
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForSeek;	// 0x35446acd
+ (BOOL)automaticallyNotifiesObserversOfForwardPlaybackEndTime;	// 0x35446abd
+ (BOOL)automaticallyNotifiesObserversOfGaplessInfo;	// 0x35446add
+ (BOOL)automaticallyNotifiesObserversOfLimitReadAhead;	// 0x35446ac5
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;	// 0x35446b65
+ (BOOL)automaticallyNotifiesObserversOfNonForcedSubtitleDisplayEnabled;	// 0x35446b49
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;	// 0x35446b59
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;	// 0x35446b5d
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;	// 0x35446b55
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;	// 0x35446b69
+ (BOOL)automaticallyNotifiesObserversOfReversePlaybackEndTime;	// 0x35446ac1
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;	// 0x35446b61
+ (BOOL)automaticallyNotifiesObserversOfSoundCheckVolumeNormalization;	// 0x35446b01
+ (BOOL)automaticallyNotifiesObserversOfStatus;	// 0x35446b4d
+ (BOOL)automaticallyNotifiesObserversOfTracks;	// 0x35446b6d
+ (BOOL)automaticallyNotifiesObserversOfVideoComposition;	// 0x35446ad9
+ (BOOL)automaticallyNotifiesObserversOfVolumeAdjustment;	// 0x35446b25
+ (void)initialize;	// 0x35447b0d
+ (id)playerItemWithAsset:(id)asset;	// 0x35447a7d
+ (id)playerItemWithURL:(id)url;	// 0x35447ac5
- (id)init;	// 0x3544f335
- (id)initWithAsset:(id)asset;	// 0x35446c69
- (id)initWithURL:(id)url;	// 0x35446bb1
- (int)_CreateSeekID;	// 0x35446a19
- (id)_URL;	// 0x354469d9
- (void)_addFPListeners;	// 0x3544cf35
- (void)_addSyncLayer:(id)layer;	// 0x35447d05
- (BOOL)_alwaysMonitorsPlayability;	// 0x3544b161
- (void)_applyAudioMix;	// 0x3544a7a1
- (void)_applyInitialAudioMix;	// 0x3544a74d
- (void)_applyMediaSelectionOptions;	// 0x35448df1
- (void)_applyTrackSelectionsFromAlternateTrackGroupSPI;	// 0x35448ca1
- (void)_attachToPlayer:(id)player forImmediateEnqueueing:(BOOL)immediateEnqueueing shouldAppendItem:(BOOL)item;	// 0x3544db61
- (long long)_availableFileSize;	// 0x35450411
- (void)_cacheMediaSelectionOption:(id)option forMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x35448a99
- (id)_cachedValueForKey:(id)key;	// 0x35446d4d
- (BOOL)_canPlayFastForward;	// 0x3544c9e5
- (BOOL)_canPlayFastReverse;	// 0x3544c8d9
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(id)handler;	// 0x3544c4c9
- (void)_changeStatusToFailedWithError:(id)error;	// 0x3544d7d9
- (void)_configurePlaybackItemForPlayerType:(int)playerType;	// 0x3544e2bd
- (BOOL)_continuesPlayingDuringPrerollForRateChange;	// 0x3544ab89
- (BOOL)_continuesPlayingDuringPrerollForSeek;	// 0x3544ae75
- (void)_createPlayerConnection:(id)connection shouldAppendItem:(BOOL)item;	// 0x35446f65
- (void)_createPlayerItemInternal;	// 0x3544f3fd
- (void)_detachFromPlayer;	// 0x3544783d
- (void)_didAccessKVOForKey:(id)key;	// 0x35446dad
- (XXStruct_pwHToB)_duration;	// 0x3544d6f1
- (OpaqueFigCPEProtector *)_figCPEProtector;	// 0x35447f2d
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x3544682d
- (long long)_fileSize;	// 0x35450379
- (XXStruct_pwHToB)_forwardPlaybackEndTime;	// 0x3544baa1
- (id)_fpNotificationNames;	// 0x3544d085
- (BOOL)_hasEnabledVideoMedia;	// 0x35447b6d
- (void)_informObserversAboutAvailabilityOfTracks;	// 0x3544d95d
- (void)_insertAfterItem:(id)item;	// 0x354468ed
- (void)_invokeReadyForEnqueueingHandlers;	// 0x3544cbf5
- (BOOL)_isCurrentPlayerItem;	// 0x3544686d
// declared property getter: - (BOOL)_isExternalProtectionRequiredForPlayback;	// 0x354518a1
// declared property getter: - (BOOL)_isRental;	// 0x35451961
// declared property getter: - (BOOL)_isRentalPlaybackStarted;	// 0x354519cd
- (void)_kickAssetObserversIfAppropriate;	// 0x3544da05
- (BOOL)_limitReadAhead;	// 0x3544b44d
- (id)_loadedTimeRanges;	// 0x354497c5
- (void)_makeNewAssetWithFigPlaybackItem;	// 0x354479b1
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id)completionHandler;	// 0x3544ca65
- (id)_nextItem;	// 0x354468ad
- (id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)error;	// 0x35447ca1
- (id)_playbackProperties;	// 0x3544966d
- (id)_player;	// 0x35446ddd
- (void)_playerChangeStatusToFailedWithError:(id)error;	// 0x35447851
- (id)_playerConnection;	// 0x3544688d
- (CGSize)_presentationSize;	// 0x3544c7d9
- (id)_previousItem;	// 0x354468cd
- (id)_propertyStorage;	// 0x3544684d
- (void)_quietlySetAlwaysMonitorsPlayability:(BOOL)playability;	// 0x3544aff9
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x3544aa21
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x3544ad0d
- (void)_quietlySetEQPreset:(int)preset;	// 0x35451f69
- (void)_quietlySetForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x3544b95d
- (void)_quietlySetLimitReadAhead:(BOOL)ahead;	// 0x3544b2e5
- (void)_quietlySetPlaybackProperties:(id)properties;	// 0x354494e5
- (void)_quietlySetReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x3544b60d
- (void)_quietlySetSoundCheckVolumeNormalization:(float)normalization;	// 0x35449395
- (void)_quietlySetVolumeAdjustment:(float)adjustment;	// 0x35449289
- (void)_removeFPListeners;	// 0x3544cde5
- (void)_removeFromItems;	// 0x35446969
- (void)_removeSyncLayer:(id)layer;	// 0x35447da1
// declared property getter: - (id)_rentalExpirationDate;	// 0x35451ae5
// declared property getter: - (id)_rentalPlaybackExpirationDate;	// 0x35451c3d
// declared property getter: - (id)_rentalPlaybackStartedDate;	// 0x35451b91
// declared property getter: - (id)_rentalStartDate;	// 0x35451a39
- (void)_respondToBecomingReadyForBasicInspection;	// 0x3544ccf9
- (XXStruct_pwHToB)_reversePlaybackEndTime;	// 0x3544b751
- (id)_seekableTimeRanges;	// 0x35449b55
- (void)_selectMediaOption:(id)option inAlternateTrackGroup:(id)alternateTrackGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x35448985
- (void)_selectMediaOption:(id)option inKeyValueGroup:(id)keyValueGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x35448805
- (void)_selectMediaOption:(id)option inMediaSelectionGroup:(id)mediaSelectionGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x35448739
- (void)_selectTrackWithID:(int)anId amongTrackIDs:(id)ids;	// 0x35448b61
- (id)_selectedMediaOptionInAlternateTrackGroup:(id)alternateTrackGroup;	// 0x354483b1
- (id)_selectedMediaOptionInKeyValueGroup:(id)keyValueGroup;	// 0x35448179
- (void)_setAsset:(id)asset;	// 0x3544789d
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;	// 0x3544daa5
- (void)_setAssetWithFigPlaybackItem:(id)figPlaybackItem;	// 0x354478f9
- (void)_setAudibleDRMInfo:(id)info;	// 0x3544fdbd
- (void)_setEQPreset:(int)preset;	// 0x3544fe61
- (void)_setEnabledState:(BOOL)state ofTrackID:(int)trackID;	// 0x35448c2d
// declared property setter: - (void)_setExternalProtectionRequiredForPlayback:(BOOL)playback;	// 0x354501a1
- (void)_setIsCurrentPlayerItem:(BOOL)item;	// 0x35446e09
- (void)_setPlayerConnection:(id)connection;	// 0x35446f09
- (void)_setRampInOutInfo:(id)outInfo;	// 0x3544fd19
- (void)_setSyncLayersOnFigPlaybackItem;	// 0x35447ded
- (void)_setTimedMetadata:(id)metadata;	// 0x35447e75
- (void)_setTrackIDsForAssetWithFigPlaybackItem:(id)figPlaybackItem;	// 0x35447955
- (void)_setURL:(id)url;	// 0x35447861
- (void)_setVideoCompositionFrameDuration:(XXStruct_pwHToB)duration;	// 0x3544a2fd
- (void)_setVideoCompositionInstructions:(id)instructions;	// 0x3544a1bd
- (void)_setVideoCompositionRenderScale:(float)scale;	// 0x3544a20d
- (void)_setVideoCompositionRenderSize:(CGSize)size;	// 0x3544a28d
- (void)_setVideoCompositor:(id)compositor;	// 0x3544a101
- (dispatch_queue_s *)_stateDispatchQueue;	// 0x3544680d
- (id)_trackWithTrackID:(int)trackID;	// 0x3544d209
- (id)_tracks;	// 0x3544d371
- (id)_unregisterAndReturnRetainedSeekCompletionHandler;	// 0x35446a79
- (id)_weakReference;	// 0x354467ed
- (void)_willAccessKVOForKey:(id)key;	// 0x35446d7d
- (id)accessLog;	// 0x35451ce9
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x3544e79d
// converted property getter: - (BOOL)alwaysMonitorsPlayability;	// 0x3544b0d5
- (id)asset;	// 0x3544d795
// converted property getter: - (id)audioMix;	// 0x3544a8f9
// declared property getter: - (BOOL)canDisplayExternalSubtitles;	// 0x3544ff01
- (BOOL)canPlayFastForward;	// 0x3544c959
- (BOOL)canPlayFastReverse;	// 0x3544c84d
- (void)cancelPendingSeeks;	// 0x3544bead
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForRateChange;	// 0x3544aafd
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForSeek;	// 0x3544ade9
- (id)copyWithZone:(NSZone *)zone;	// 0x3544eb39
- (id)currentDate;	// 0x3544be1d
- (id)currentEstimatedDate;	// 0x3544bca9
- (XXStruct_pwHToB)currentTime;	// 0x3544c695
// declared property getter: - (id)dataYouTubeID;	// 0x3544febd
- (void)dealloc;	// 0x3544efed
- (id)description;	// 0x3544ea61
- (void)didChangeValueForKey:(id)key;	// 0x3544e911
- (void)displayExternalSubtitleString:(id)string forced:(BOOL)forced;	// 0x354521c9
// declared property getter: - (BOOL)displaysExternalSubtitles;	// 0x35446b91
- (XXStruct_pwHToB)duration;	// 0x3544d635
// declared property getter: - (id)error;	// 0x3544d919
- (id)errorLog;	// 0x35451db9
- (void)finalize;	// 0x3544eef9
// converted property getter: - (XXStruct_pwHToB)forwardPlaybackEndTime;	// 0x3544ba19
// converted property getter: - (id)gaplessInfo;	// 0x35449711
// converted property getter: - (id)initialDate;	// 0x3544bd95
// converted property getter: - (id)initialEstimatedDate;	// 0x3544bc65
// declared property getter: - (BOOL)isApplicationAuthorizedForPlayback;	// 0x3545002d
// declared property getter: - (BOOL)isAuthorizationRequiredForPlayback;	// 0x3544fbe1
// declared property getter: - (BOOL)isContentAuthorizedForPlayback;	// 0x3545007d
// converted property getter: - (BOOL)isNonForcedSubtitleDisplayEnabled;	// 0x35446b29
- (BOOL)isPlaybackBufferEmpty;	// 0x35449f81
- (BOOL)isPlaybackBufferFull;	// 0x3544a001
- (BOOL)isPlaybackLikelyToKeepUp;	// 0x3544a081
// converted property getter: - (BOOL)limitReadAhead;	// 0x3544b3c1
- (id)loadedTimeRanges;	// 0x35449755
- (id)playabilityMetrics;	// 0x35449e75
- (CGSize)presentationSize;	// 0x3544c73d
- (float)progressTowardsPlaybackLikelyToKeepUp;	// 0x35449ef9
// converted property getter: - (XXStruct_pwHToB)reversePlaybackEndTime;	// 0x3544b6c9
- (BOOL)seekToDate:(id)date;	// 0x3544bdd9
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x3544c495
- (void)seekToTime:(XXStruct_pwHToB)time completionHandler:(id)handler;	// 0x3544c39d
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x3544c415
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after completionHandler:(id)handler;	// 0x3544bf35
- (id)seekableTimeRanges;	// 0x35449ae5
- (void)selectMediaOption:(id)option inMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x35448715
- (void)selectTrackWithID:(int)anId inTrackGroup:(id)trackGroup;	// 0x35448f99
- (id)selectedMediaOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x354480d5
- (int)selectedTrackIDInTrackGroup:(id)trackGroup;	// 0x354490a5
// converted property setter: - (void)setAlwaysMonitorsPlayability:(BOOL)playability;	// 0x3544af15
// converted property setter: - (void)setAudioMix:(id)mix;	// 0x3544a681
// converted property setter: - (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x3544a93d
// converted property setter: - (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x3544ac29
// declared property setter: - (void)setDataYouTubeID:(id)anId;	// 0x3544ff91
// declared property setter: - (void)setDisplaysExternalSubtitles:(BOOL)subtitles;	// 0x3545214d
// converted property setter: - (void)setForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x3544b83d
// converted property setter: - (void)setGaplessInfo:(id)info;	// 0x35449405
// converted property setter: - (void)setInitialDate:(id)date;	// 0x3544bd39
// converted property setter: - (void)setInitialEstimatedDate:(id)date;	// 0x3544bc09
// converted property setter: - (void)setLimitReadAhead:(BOOL)ahead;	// 0x3544b201
// converted property setter: - (void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x3544801d
// converted property setter: - (void)setReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x3544b4ed
// converted property setter: - (void)setSoundCheckVolumeNormalization:(float)normalization;	// 0x354492f9
// converted property setter: - (void)setVideoComposition:(id)composition;	// 0x3544a399
// converted property setter: - (void)setVolumeAdjustment:(float)adjustment;	// 0x354491ed
// converted property getter: - (float)soundCheckVolumeNormalization;	// 0x35446ae1
// declared property getter: - (int)status;	// 0x354469f9
- (void)stepByCount:(int)count;	// 0x3544bb8d
- (id)timedMetadata;	// 0x35447ee9
- (id)tracks;	// 0x3544d2e1
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3544e9d5
// converted property getter: - (id)videoComposition;	// 0x3544a63d
// converted property getter: - (float)volumeAdjustment;	// 0x35446b05
- (void)willChangeValueForKey:(id)key;	// 0x3544e971
@end
