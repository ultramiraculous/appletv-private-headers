/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetMakeReadyForInspectionLoader.h"

@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {
	OpaqueFigPlaybackItem *_playbackItem;	// 48 = 0x30
	NSArray *_trackIDs;	// 52 = 0x34
	BOOL _shouldCacheDuration;	// 56 = 0x38
	XXStruct_pwHToB _cachedDuration;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic, getter=_playbackItem) OpaqueFigPlaybackItem *playbackItem;	// G=0x302c1051; 
- (id)initWithURL:(id)url playbackItem:(OpaqueFigPlaybackItem *)item trackIDs:(id)ids dynamicBehavior:(BOOL)behavior;	// 0x302c0975
- (void)_addFigObjectNotifications;	// 0x302c0a69
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x302c1061
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x302c10a9
- (BOOL)_inspectionRequiresAFormatReader;	// 0x302c10a5
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x302c1179
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x302c1051
- (id)_playbackItemPropertiesForKeys:(id)keys;	// 0x302c10d5
- (void)_removeFigObjectNotifications;	// 0x302c0d41
- (id)assetInspector;	// 0x302c0f91
- (void)cancelLoading;	// 0x302c0ff9
- (void)dealloc;	// 0x302c0e09
- (XXStruct_pwHToB)duration;	// 0x302c1209
- (void)finalize;	// 0x302c0e7d
- (unsigned)hash;	// 0x302c0f49
- (BOOL)isEqual:(id)equal;	// 0x302c0ed5
@end

