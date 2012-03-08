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
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x30e71469; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x30e71495; 
+ (id)keyPathsForValuesAffectingTimeRange;	// 0x30e7193d
+ (id)mediaCharacteristicsForMediaTypes;	// 0x30e71999
+ (id)mediaTypesForMediaCharacteristics;	// 0x30e7196d
- (id)init;	// 0x30e713f1
- (id)_allReferencedTracksWithReferenceType:(id)referenceType;	// 0x30e71ead
- (id)_assetTrackInspector;	// 0x30e713d1
- (id)_associatedSubtitleTrack;	// 0x30e71a89
- (BOOL)_containsMixedSubtitles;	// 0x30e717d1
- (BOOL)_containsOnlyForcedSubtitles;	// 0x30e717b5
- (id)_fallbackTrack;	// 0x30e71e8d
- (id)_firstReferencedTrackWithReferenceType:(id)referenceType;	// 0x30e71fd5
- (BOOL)_hasMultipleNonEmptyEdits;	// 0x30ea414d
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x30e71415
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x30e72741
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x30e71439
- (BOOL)_isAuxiliaryContent;	// 0x30e71715
- (BOOL)_isMainProgramContent;	// 0x30e71791
- (id)_pairedForcedOnlySubtitlesTrack;	// 0x30e71a69
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)flags flagsMask:(unsigned)mask;	// 0x30e72491
- (id)_taggedCharacteristics;	// 0x30e72559
// declared property getter: - (id)asset;	// 0x30e71469
- (id)availableMetadataFormats;	// 0x30e7212d
- (id)commonMetadata;	// 0x30e72159
- (id)copyWithZone:(NSZone *)zone;	// 0x30e71459
- (void)dealloc;	// 0x30e726a1
- (id)description;	// 0x30e725d9
- (float)estimatedDataRate;	// 0x30e723b5
- (id)extendedLanguageTag;	// 0x30e7235d
- (void)finalize;	// 0x30e7265d
- (id)formatDescriptions;	// 0x30e71579
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x30e717f1
- (unsigned)hash;	// 0x30e719c5
- (BOOL)isEnabled;	// 0x30e715d9
- (BOOL)isEqual:(id)equal;	// 0x30e719f1
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x30e720c9
- (BOOL)isPlayable;	// 0x30e715a5
- (BOOL)isSelfContained;	// 0x30e7160d
- (id)languageCode;	// 0x30e72389
- (int)layer;	// 0x30e7229d
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30e71511
- (id)locale;	// 0x30e72331
- (id)mediaCharacteristics;	// 0x30e72441
- (id)mediaType;	// 0x30e7154d
- (id)metadataForFormat:(id)format;	// 0x30e720fd
- (CGSize)naturalSize;	// 0x30e722fd
- (int)naturalTimeScale;	// 0x30e723e1
- (float)nominalFrameRate;	// 0x30e72245
- (CGAffineTransform)preferredTransform;	// 0x30e722c9
- (float)preferredVolume;	// 0x30e72271
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x30e72185
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x30e721dd
- (id)segments;	// 0x30e72219
- (int)statusOfValueForKey:(id)key;	// 0x30e714c1
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30e714d5
- (XXStruct_yD8eWC)timeRange;	// 0x30e7240d
- (long long)totalSampleDataLength;	// 0x30e71641
// declared property getter: - (int)trackID;	// 0x30e71495
@end
