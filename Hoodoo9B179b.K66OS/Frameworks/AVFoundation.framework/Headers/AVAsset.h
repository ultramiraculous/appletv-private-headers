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
@private
	AVAssetInternal *_assetInternal;	// 4 = 0x4
}
@property(readonly, assign) NSArray *availableChapterLocales;	// G=0x30ab2071; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x30ab0c5d; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x30ab0d59; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x30ab0cc9; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x30ab0d19; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x30ab0cf1; 
+ (id)assetWithURL:(id)url;	// 0x30ab0565
+ (id)assetWithURL:(id)url figPlaybackItem:(OpaqueFigPlaybackItem *)item trackIDs:(id)ids dynamicBehavior:(BOOL)behavior;	// 0x30ab0585
- (id)init;	// 0x30ab0655
- (CFURLRef)_URL;	// 0x30ab0c1d
- (id)_assetInspector;	// 0x30ab07d9
- (id)_assetInspectorLoader;	// 0x30ab080d
- (id)_comparisonToken;	// 0x30ab0811
- (OpaqueFigAsset *)_figAsset;	// 0x30ab0b71
- (id)_firstTrackGroupWithMediaType:(id)mediaType;	// 0x30ab0f75
- (OpaqueFigFormatReader *)_formatReader;	// 0x30ab0bad
- (BOOL)_isStreaming;	// 0x30ab0c21
- (id)_mediaCharacteristicsOfAlternateTrackGroups:(id)alternateTrackGroups;	// 0x30ab130d
- (id)_mediaCharacteristicsOfMediaSelectionGroups:(id)mediaSelectionGroups;	// 0x30ab1161
- (id)_mediaSelectionKeyValueGroupFromGroups:(id)groups forMediaCharacteristic:(id)mediaCharacteristic;	// 0x30ab1659
- (id)_mediaSelectionTrackGroupForMediaCharacteristic:(id)mediaCharacteristic;	// 0x30ab17ed
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x30ab0be1
- (void)_serverHasDied;	// 0x30ab1ee5
- (void)_tracksDidChange;	// 0x30ab1cfd
- (id)_weakReference;	// 0x30ab07b9
- (id)alternateTrackGroups;	// 0x30ab10e1
- (id)audioAlternatesTrackGroup;	// 0x30ab10a1
// declared property getter: - (id)availableChapterLocales;	// 0x30ab2071
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;	// 0x30ab15f1
- (id)availableMetadataFormats;	// 0x30ab1c45
- (void)cancelLoading;	// 0x30ab0b49
- (id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;	// 0x30ab2075
- (id)commonMetadata;	// 0x30ab1c1d
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x30ab1e81
- (id)copyWithZone:(NSZone *)zone;	// 0x30ab0741
- (id)creationDate;	// 0x30ab1ba1
- (void)dealloc;	// 0x30ab0751
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x30ab0c5d
- (BOOL)hasProtectedContent;	// 0x30ab1f1d
- (unsigned)hash;	// 0x30ab0941
- (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x30ab2035
- (BOOL)isComposable;	// 0x30ab1ff9
- (BOOL)isEqual:(id)equal;	// 0x30ab0865
- (BOOL)isExportable;	// 0x30ab1f81
- (BOOL)isPlayable;	// 0x30ab1f45
- (BOOL)isReadable;	// 0x30ab1fbd
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30ab0aa9
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x30ab0af5
- (id)lyrics;	// 0x30ab1bc9
- (id)mediaSelectionGroupForMediaCharacteristic:(id)mediaCharacteristic;	// 0x30ab1b19
- (id)mediaSelectionGroups;	// 0x30ab1109
- (id)metadataForFormat:(id)format;	// 0x30ab1c9d
// declared property getter: - (CGSize)naturalSize;	// 0x30ab0d59
- (int)naturalTimeScale;	// 0x30ab0dd5
// declared property getter: - (float)preferredRate;	// 0x30ab0cc9
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x30ab0d19
// declared property getter: - (float)preferredVolume;	// 0x30ab0cf1
- (BOOL)providesPreciseDurationAndTiming;	// 0x30ab0dfd
- (unsigned)referenceRestrictions;	// 0x30ab0e25
- (int)statusOfValueForKey:(id)key;	// 0x30ab0a4d
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30ab0a61
- (id)subtitleAlternatesTrackGroup;	// 0x30ab10c1
- (id)trackGroups;	// 0x30ab0e4d
- (id)trackReferences;	// 0x30ab1b79
- (id)trackWithTrackID:(int)trackID;	// 0x30ab1d01
- (id)tracks;	// 0x30ab1cc9
- (id)tracksWithMediaCharacteristic:(id)mediaCharacteristic;	// 0x30ab1e1d
- (id)tracksWithMediaType:(id)mediaType;	// 0x30ab1db9
- (int)unusedTrackID;	// 0x30ae6301
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x30ab09c5
@end

