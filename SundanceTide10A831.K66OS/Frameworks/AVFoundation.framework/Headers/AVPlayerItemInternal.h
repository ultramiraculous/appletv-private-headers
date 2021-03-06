/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVVideoComposition, AVAsset, NSMutableDictionary, AVWeakReference, NSError, NSDictionary, NSString, AVPropertyStorage, AVAudioMix, NSDate, AVPlayerItem, NSURL, AVPlayerConnection, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

@interface AVPlayerItemInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	AVPlayerItem *previousItem;	// 8 = 0x8
	AVPlayerItem *nextItem;	// 12 = 0xc
	OpaqueFigPlaybackItem *figPlaybackItem;	// 16 = 0x10
	OpaqueFigCPEProtector *figCPEProtector;	// 20 = 0x14
	OpaqueCMTimebase *figTimebase;	// 24 = 0x18
	AVWeakReference *playerReference;	// 28 = 0x1c
	AVPlayerConnection *playerConnection;	// 32 = 0x20
	BOOL isCurrentPlayerItem;	// 36 = 0x24
	NSObject<OS_dispatch_queue> *stateDispatchQueue;	// 40 = 0x28
	AVPropertyStorage *propertyStorage;	// 44 = 0x2c
	int status;	// 48 = 0x30
	NSError *error;	// 52 = 0x34
	NSURL *URL;	// 56 = 0x38
	AVAsset *asset;	// 60 = 0x3c
	AVAsset *assetWithFigPlaybackItem;	// 64 = 0x40
	NSArray *trackIDsForAssetWithFigPlaybackItem;	// 68 = 0x44
	NSObject<OS_dispatch_queue> *syncLayersQ;	// 72 = 0x48
	NSMutableArray *syncLayers;	// 76 = 0x4c
	NSArray *timedMetadata;	// 80 = 0x50
	XXStruct_pwHToB initialDuration;	// 84 = 0x54
	XXStruct_pwHToB initialTime;	// 108 = 0x6c
	XXStruct_pwHToB initialToleranceBefore;	// 132 = 0x84
	XXStruct_pwHToB initialToleranceAfter;	// 156 = 0x9c
	XXStruct_pwHToB initialForwardPlaybackEndTime;	// 180 = 0xb4
	XXStruct_pwHToB initialReversePlaybackEndTime;	// 204 = 0xcc
	NSDate *initialDate;	// 228 = 0xe4
	NSDate *initialEstimatedDate;	// 232 = 0xe8
	BOOL initialLimitReadAhead;	// 236 = 0xec
	int initialPlaybackLikelyToKeepUpTrigger;	// 240 = 0xf0
	BOOL initialAlwaysMonitorsPlayability;	// 244 = 0xf4
	BOOL initialWillNeverSeekBackwardsHint;	// 245 = 0xf5
	BOOL initialContinuesPlayingDuringPrerollForSeek;	// 246 = 0xf6
	BOOL initialContinuesPlayingDuringPrerollForRateChange;	// 247 = 0xf7
	double initialBufferingTargetMinimum;	// 248 = 0xf8
	double initialBufferingTargetMaximum;	// 256 = 0x100
	CFStringRef initialFigTimePitchAlgorithm;	// 264 = 0x108
	AVAudioMix *audioMix;	// 268 = 0x10c
	AVVideoComposition *videoComposition;	// 272 = 0x110
	BOOL seekingWaitsForVideoCompositionRendering;	// 276 = 0x114
	NSArray *textStyleRules;	// 280 = 0x118
	NSDictionary *gaplessInfo;	// 284 = 0x11c
	NSDictionary *audibleDRMInfo;	// 288 = 0x120
	NSDictionary *rampInOutInfo;	// 292 = 0x124
	float soundCheckVolumeNormalization;	// 296 = 0x128
	float volumeAdjustment;	// 300 = 0x12c
	NSMutableArray *handlersToCallWhenReadyForEnqueueing;	// 304 = 0x130
	NSMutableDictionary *mediaOptionsSelectedByClient;	// 308 = 0x134
	NSMutableDictionary *tracksSelectedByClientViaAlternateTrackGroupSPI;	// 312 = 0x138
	BOOL haveInitialSamples;	// 316 = 0x13c
	BOOL haveCPEProtector;	// 317 = 0x13d
	BOOL didSetAssetToAssetWithFigPlaybackItem;	// 318 = 0x13e
	BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;	// 319 = 0x13f
	BOOL didBecomeReadyForInspectionOfTracks;	// 320 = 0x140
	BOOL didBecomeReadyForInspectionOfPresentationSize;	// 321 = 0x141
	BOOL didInformObserversAboutAvailabilityOfTracks;	// 322 = 0x142
	BOOL didFireKVOForAssetForNonStreamingItem;	// 323 = 0x143
	BOOL didApplyInitialAudioMix;	// 324 = 0x144
	BOOL wasInitializedWithURL;	// 325 = 0x145
	BOOL needTimedMetadataNotification;	// 326 = 0x146
	BOOL nonForcedSubtitleDisplayEnabled;	// 327 = 0x147
	BOOL externalSubtitlesEnabled;	// 328 = 0x148
	BOOL externalProtectionRequested;	// 329 = 0x149
	int eqPreset;	// 332 = 0x14c
	OpaqueFigSimpleMutex *seekIDMutex;	// 336 = 0x150
	int nextSeekIDToGenerate;	// 340 = 0x154
	int pendingSeekID;	// 344 = 0x158
	id seekCompletionHandler;	// 348 = 0x15c
	NSString *dataYouTubeID;	// 352 = 0x160
	NSMutableArray *itemOutputs;	// 356 = 0x164
	NSMutableArray *itemVideoOutputs;	// 360 = 0x168
}
@end

