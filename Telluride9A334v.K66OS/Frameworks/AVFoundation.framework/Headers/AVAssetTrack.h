/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVAssetTrackInternal *_track;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x3543c469; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x3543c495; 
+ (id)keyPathsForValuesAffectingTimeRange;	// 0x3543c93d
+ (id)mediaCharacteristicsForMediaTypes;	// 0x3543c999
+ (id)mediaTypesForMediaCharacteristics;	// 0x3543c96d
- (id)init;	// 0x3543c3f1
- (id)_allReferencedTracksWithReferenceType:(id)referenceType;	// 0x3543cead
- (id)_assetTrackInspector;	// 0x3543c3d1
- (id)_associatedSubtitleTrack;	// 0x3543ca89
- (BOOL)_containsMixedSubtitles;	// 0x3543c7d1
- (BOOL)_containsOnlyForcedSubtitles;	// 0x3543c7b5
- (id)_fallbackTrack;	// 0x3543ce8d
- (id)_firstReferencedTrackWithReferenceType:(id)referenceType;	// 0x3543cfd5
- (BOOL)_hasMultipleNonEmptyEdits;	// 0x3546f14d
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x3543c415
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x3543d741
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x3543c439
- (BOOL)_isAuxiliaryContent;	// 0x3543c715
- (BOOL)_isMainProgramContent;	// 0x3543c791
- (id)_pairedForcedOnlySubtitlesTrack;	// 0x3543ca69
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)flags flagsMask:(unsigned)mask;	// 0x3543d491
- (id)_taggedCharacteristics;	// 0x3543d559
// declared property getter: - (id)asset;	// 0x3543c469
- (id)availableMetadataFormats;	// 0x3543d12d
- (id)commonMetadata;	// 0x3543d159
- (id)copyWithZone:(NSZone *)zone;	// 0x3543c459
- (void)dealloc;	// 0x3543d6a1
- (id)description;	// 0x3543d5d9
- (float)estimatedDataRate;	// 0x3543d3b5
- (id)extendedLanguageTag;	// 0x3543d35d
- (void)finalize;	// 0x3543d65d
- (id)formatDescriptions;	// 0x3543c579
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x3543c7f1
- (unsigned)hash;	// 0x3543c9c5
- (BOOL)isEnabled;	// 0x3543c5d9
- (BOOL)isEqual:(id)equal;	// 0x3543c9f1
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x3543d0c9
- (BOOL)isPlayable;	// 0x3543c5a5
- (BOOL)isSelfContained;	// 0x3543c60d
- (id)languageCode;	// 0x3543d389
- (int)layer;	// 0x3543d29d
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3543c511
- (id)locale;	// 0x3543d331
- (id)mediaCharacteristics;	// 0x3543d441
- (id)mediaType;	// 0x3543c54d
- (id)metadataForFormat:(id)format;	// 0x3543d0fd
- (CGSize)naturalSize;	// 0x3543d2fd
- (int)naturalTimeScale;	// 0x3543d3e1
- (float)nominalFrameRate;	// 0x3543d245
- (CGAffineTransform)preferredTransform;	// 0x3543d2c9
- (float)preferredVolume;	// 0x3543d271
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x3543d185
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x3543d1dd
- (id)segments;	// 0x3543d219
- (int)statusOfValueForKey:(id)key;	// 0x3543c4c1
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3543c4d5
- (XXStruct_yD8eWC)timeRange;	// 0x3543d40d
- (long long)totalSampleDataLength;	// 0x3543c641
// declared property getter: - (int)trackID;	// 0x3543c495
@end

