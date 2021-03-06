/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerInternal, AVPlayerItem, NSError, NSArray;

@interface AVPlayer : NSObject {
@private
	AVPlayerInternal *_player;	// 4 = 0x4
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x32576cc1; S=0x3257ce45; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x3257c035; 
@property(assign, nonatomic) int actionAtItemEnd;	// G=0x325774e9; S=0x325774d1; 
@property(readonly, assign, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;	// G=0x3257bf19; 
@property(assign, nonatomic, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x325773f9; S=0x3257d0a1; 
@property(readonly, assign, nonatomic) AVPlayerItem *currentItem;	// G=0x32577dd9; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x32577ebd; @dynamic
@property(assign, nonatomic) float maxRateForAudioPlayback;	// G=0x3257c515; S=0x3257ca91; 
@property(assign, nonatomic) float minRateForAudioPlayback;	// G=0x3257ba99; S=0x3257cb19; 
@property(assign, nonatomic) float rate;	// G=0x3257769d; S=0x3257be41; 
@property(readonly, assign, nonatomic) int status;	// G=0x32576bf9; @dynamic
@property(assign, getter=isSubtitleDisplayEnabled) BOOL subtitleDisplayEnabled;	// G=0x32577321; S=0x3257cfbd; converted property
@property(assign) BOOL waitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback;	// G=0x32576c35; S=0x32576c51; converted property
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;	// 0x32576c75
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;	// 0x32576c79
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;	// 0x32576c31
+ (BOOL)automaticallyNotifiesObserversOfRate;	// 0x32576c6d
+ (BOOL)automaticallyNotifiesObserversOfSubtitleDisplayEnabled;	// 0x32576c7d
+ (void)initialize;	// 0x325780a1
+ (id)keyPathsForValuesAffectingActionAtItemEnd;	// 0x325774a9
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;	// 0x325773d1
+ (id)keyPathsForValuesAffectingRate;	// 0x32577675
+ (id)keyPathsForValuesAffectingSubtitleDisplayEnabled;	// 0x325772f9
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x32578021
+ (id)playerWithURL:(id)url;	// 0x32578061
- (id)init;	// 0x3257bb39
- (id)initWithDispatchQueue:(dispatch_queue_s *)dispatchQueue;	// 0x3257847d
- (id)initWithPlayerItem:(id)playerItem;	// 0x32577ff1
- (id)initWithURL:(id)url;	// 0x32577fbd
- (int)_actionAtItemEnd;	// 0x3257c415
- (void)_addFPListeners;	// 0x3257a1a5
- (void)_addLayer:(id)layer;	// 0x325770b9
- (void)_advanceCurrentItemToItemContainingFigPlaybackItem:(OpaqueFigPlaybackItem *)itemContainingFigPlaybackItem;	// 0x32579321
- (BOOL)_attachItem:(id)item andPerformOperation:(int)operation withObject:(id)object;	// 0x32579849
- (void)_attachLayerToFigPlayer;	// 0x3257cf05
- (void)_beginInterruption;	// 0x32578609
- (id)_cachedValueForKey:(id)key;	// 0x32577f7d
- (void)_changeStatusToFailedWithError:(id)error;	// 0x32577e09
- (void)_checkDefaultsWriteForPerformanceLogging;	// 0x3257a945
- (id)_currentItem;	// 0x32576c15
- (int)_defaultActionAtItemEnd;	// 0x32576c71
- (void)_didAccessKVOForKey:(id)key;	// 0x32577ef9
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x32576cc1
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x325778b1
// declared property getter: - (int)_externalProtectionStatus;	// 0x3257c035
- (OpaqueFigPlayer *)_figPlayer;	// 0x32576ba5
- (id)_fpNotificationNames;	// 0x32577031
- (BOOL)_insertItem:(id)item afterItem:(id)item2;	// 0x32577add
- (BOOL)_insertPlaybackItemOfItem:(id)item inPlayerQueueAfterPlaybackItemOfItem:(id)item2;	// 0x32577b59
- (BOOL)_isClosedCaptionDisplayEnabled;	// 0x3257c361
- (BOOL)_isSubtitleDisplayEnabled;	// 0x3257c2ad
- (id)_items;	// 0x32577801
- (void)_logPerformanceDataForCurrentItem;	// 0x3257c0dd
- (void)_logPerformanceDataForPreviousItem;	// 0x3257c1b9
- (id)_playbackDisplaysForFigPlayer;	// 0x32576cfd
- (id)_playerLayers;	// 0x325770e5
- (int)_playerType;	// 0x32576bc1
- (void)_preparePlaybackItemOfItemForEnqueueing:(id)enqueueing withCompletionHandler:(id)completionHandler;	// 0x32577b1d
- (id)_propertyStorage;	// 0x32576bdd
- (float)_rate;	// 0x3257863d
- (void)_removeAllItems;	// 0x32577749
- (BOOL)_removeAnItem:(id)item;	// 0x3257797d
- (void)_removeFPListeners;	// 0x3257a069
- (BOOL)_removeItem:(id)item;	// 0x32577901
- (void)_removeLayer:(id)layer;	// 0x325770cd
- (void)_setActionAtItemEnd:(int)itemEnd allowingAdvance:(BOOL)advance;	// 0x3257d185
- (void)_setCachedValue:(id)value forKey:(id)key;	// 0x32577f51
- (void)_setCurrentItem:(id)item;	// 0x32577d15
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x3257ce45
- (void)_setLayer:(id)layer;	// 0x32577139
- (BOOL)_shouldLogPerformanceData;	// 0x32576c81
- (dispatch_queue_s *)_stateDispatchQueue;	// 0x32576b89
- (id)_weakReference;	// 0x32576b6d
- (void)_willAccessKVOForKey:(id)key;	// 0x32577f25
// declared property getter: - (int)actionAtItemEnd;	// 0x325774e9
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x325771bd
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x32578d99
- (id)addPeriodicTimeObserverForInterval:(XXStruct_pwHToB)interval queue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x3257720d
// declared property getter: - (id)currentItem;	// 0x32577dd9
- (XXStruct_pwHToB)currentTime;	// 0x32578d49
- (void)dealloc;	// 0x32578735
- (void)didChangeValueForKey:(id)key;	// 0x3257831d
- (dispatch_queue_s *)dispatchQueue;	// 0x32577fa9
// declared property getter: - (id)error;	// 0x32577ebd
- (void)finalize;	// 0x3257bd7d
// declared property getter: - (BOOL)isAudioPlaybackEnabledAtAllRates;	// 0x3257bf19
// declared property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x325773f9
// converted property getter: - (BOOL)isSubtitleDisplayEnabled;	// 0x32577321
// declared property getter: - (float)maxRateForAudioPlayback;	// 0x3257c515
// declared property getter: - (float)minRateForAudioPlayback;	// 0x3257ba99
- (void)pause;	// 0x325772c9
- (void)play;	// 0x325772e1
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x32577afd
// declared property getter: - (float)rate;	// 0x3257769d
- (void)release;	// 0x325783cd
- (void)removeAudioPlaybackRateLimits;	// 0x3257cba1
- (void)removeTimeObserver:(id)observer;	// 0x32579591
- (void)replaceCurrentItemWithPlayerItem:(id)playerItem;	// 0x32577285
- (id)retain;	// 0x32578425
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x32577625
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x325775a5
// declared property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x325774d1
// declared property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x3257d0a1
// declared property setter: - (void)setMaxRateForAudioPlayback:(float)audioPlayback;	// 0x3257ca91
// declared property setter: - (void)setMinRateForAudioPlayback:(float)audioPlayback;	// 0x3257cb19
// declared property setter: - (void)setRate:(float)rate;	// 0x3257be41
// converted property setter: - (void)setSubtitleDisplayEnabled:(BOOL)enabled;	// 0x3257cfbd
// converted property setter: - (void)setWaitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback:(BOOL)playback;	// 0x32576c51
// declared property getter: - (int)status;	// 0x32576bf9
// converted property getter: - (BOOL)waitsUntilItemsAreReadyForInspectionBeforeMakingEligibleForPlayback;	// 0x32576c35
- (void)willChangeValueForKey:(id)key;	// 0x32578375
@end

