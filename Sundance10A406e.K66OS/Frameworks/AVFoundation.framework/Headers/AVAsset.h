/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, AVAssetInternal;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
	AVAssetInternal *_assetInternal;	// 4 = 0x4
}
@property(readonly, assign) NSArray *availableChapterLocales;	// G=0x302ad57d; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x302ac351; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x302ac445; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x302ac3b1; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x302ac401; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x302ac3d9; 
+ (id)assetWithURL:(id)url;	// 0x302abc5d
+ (id)assetWithURL:(id)url figPlaybackItem:(OpaqueFigPlaybackItem *)item trackIDs:(id)ids dynamicBehavior:(BOOL)behavior;	// 0x302abc7d
- (id)init;	// 0x302abd4d
- (id)_absoluteURL;	// 0x302ac30d
- (id)_assetInspector;	// 0x302abec5
- (id)_assetInspectorLoader;	// 0x302abef9
- (id)_chapterTracks;	// 0x302f5005
- (id)_comparisonToken;	// 0x302abefd
- (BOOL)_containsAtLeastOnePlayableAudioTrack;	// 0x302f50f5
- (BOOL)_containsAtLeastOnePlayableVideoTrack;	// 0x302f51d9
- (OpaqueFigAsset *)_figAsset;	// 0x302ac261
- (id)_firstTrackGroupWithMediaType:(id)mediaType;	// 0x302ac6b5
- (OpaqueFigFormatReader *)_formatReader;	// 0x302ac29d
- (BOOL)_isStreaming;	// 0x302ac311
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x302ac2d1
- (void)_serverHasDied;	// 0x302ad3d9
- (void)_tracksDidChange;	// 0x302ad195
- (id)_weakReference;	// 0x302abea5
- (id)alternateTrackGroups;	// 0x302ac851
- (id)audioAlternatesTrackGroup;	// 0x302ac811
// declared property getter: - (id)availableChapterLocales;	// 0x302ad57d
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;	// 0x302ac8d1
- (id)availableMetadataFormats;	// 0x302ad0dd
- (void)cancelLoading;	// 0x302ac239
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)languages;	// 0x302ad585
- (id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;	// 0x302ad581
- (id)commonMetadata;	// 0x302ad0b5
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x302ad375
- (id)copyWithZone:(NSZone *)zone;	// 0x302abe2d
- (id)creationDate;	// 0x302ad045
- (void)dealloc;	// 0x302abe3d
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x302ac351
- (BOOL)hasProtectedContent;	// 0x302ad415
- (unsigned)hash;	// 0x302ac015
- (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x302ad53d
- (BOOL)isComposable;	// 0x302ad4fd
- (BOOL)isEqual:(id)equal;	// 0x302abf51
- (BOOL)isExportable;	// 0x302ad47d
- (BOOL)isPlayable;	// 0x302ad43d
- (BOOL)isReadable;	// 0x302ad4bd
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x302ac179
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x302ac1d9
- (id)lyrics;	// 0x302ad06d
- (id)mediaSelectionGroupForMediaCharacteristic:(id)mediaCharacteristic;	// 0x302acc79
- (id)mediaSelectionGroups;	// 0x302ac879
- (id)metadataForFormat:(id)format;	// 0x302ad135
// declared property getter: - (CGSize)naturalSize;	// 0x302ac445
- (int)naturalTimeScale;	// 0x302ac4ed
// declared property getter: - (float)preferredRate;	// 0x302ac3b1
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x302ac401
// declared property getter: - (float)preferredVolume;	// 0x302ac3d9
- (BOOL)providesPreciseDurationAndTiming;	// 0x302ac515
- (unsigned)referenceRestrictions;	// 0x302ac53d
- (int)statusOfValueForKey:(id)key;	// 0x302ac115
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x302ac129
- (id)subtitleAlternatesTrackGroup;	// 0x302ac831
- (id)trackGroups;	// 0x302ac565
- (id)trackReferences;	// 0x302ad01d
- (id)trackWithTrackID:(int)trackID;	// 0x302ad199
- (id)tracks;	// 0x302ad161
- (id)tracksWithMediaCharacteristic:(id)mediaCharacteristic;	// 0x302ad2d5
- (id)tracksWithMediaCharacteristics:(id)mediaCharacteristics;	// 0x302ad311
- (id)tracksWithMediaType:(id)mediaType;	// 0x302ad271
- (int)unusedTrackID;	// 0x302ec28d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x302ac08d
@end
