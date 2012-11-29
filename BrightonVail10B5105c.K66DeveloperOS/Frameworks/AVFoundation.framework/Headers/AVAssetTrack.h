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

@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
	AVAssetTrackInternal *_track;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x302b7725; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x302b7771; 
+ (id)keyPathsForValuesAffectingTimeRange;	// 0x302b8425
+ (id)mediaTypesForMediaCharacteristics;	// 0x302b72a5
- (id)init;	// 0x302b7561
- (id)_allReferencedTracksWithReferenceType:(id)referenceType;	// 0x302b8025
- (id)_assetTrackInspector;	// 0x302b7751
- (id)_fallbackTrack;	// 0x302b8151
- (id)_firstReferencedTrackWithReferenceType:(id)referenceType;	// 0x302b7f31
- (id)_followingTrackAmongTracks:(id)tracks;	// 0x302b8171
- (BOOL)_hasMultipleNonEmptyEdits;	// 0x302fc6d5
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x302b7585
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x302b7455
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x302b75a9
- (id)_mostCloselyAssociatedTrackAmongTracks:(id)tracks;	// 0x302b8271
- (id)_pairedForcedOnlySubtitlesTrack;	// 0x302b8369
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)flags flagsMask:(unsigned)mask;	// 0x302b7939
// declared property getter: - (id)asset;	// 0x302b7725
- (id)availableMetadataFormats;	// 0x302b7ea5
- (id)commonMetadata;	// 0x302b7e79
- (id)copyWithZone:(NSZone *)zone;	// 0x302b75c9
- (void)dealloc;	// 0x302b75d9
- (id)description;	// 0x302b76a1
- (CGSize)dimensions;	// 0x302b7c89
- (float)estimatedDataRate;	// 0x302b7b9d
- (id)extendedLanguageTag;	// 0x302b7bf5
- (void)finalize;	// 0x302b765d
- (id)formatDescriptions;	// 0x302b7845
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x302b79f9
- (BOOL)hasMediaCharacteristics:(id)characteristics;	// 0x302b7a41
- (unsigned)hash;	// 0x302b83f9
- (BOOL)isEnabled;	// 0x302b78a5
- (BOOL)isEqual:(id)equal;	// 0x302b8389
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x302b7efd
- (BOOL)isPlayable;	// 0x302b7871
- (BOOL)isSelfContained;	// 0x302b78d9
- (id)languageCode;	// 0x302b7bc9
- (int)layer;	// 0x302b7d09
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x302b77e5
- (id)locale;	// 0x302b7c21
- (id)mediaCharacteristics;	// 0x302b7b05
- (id)mediaType;	// 0x302b7819
- (id)metadataForFormat:(id)format;	// 0x302b7ed1
- (CGSize)naturalSize;	// 0x302b7c4d
- (int)naturalTimeScale;	// 0x302b7b71
- (float)nominalFrameRate;	// 0x302b7d61
- (CGAffineTransform)preferredTransform;	// 0x302b7cc5
- (float)preferredVolume;	// 0x302b7d35
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x302b7e0d
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x302b7db9
- (id)segments;	// 0x302b7d8d
- (int)statusOfValueForKey:(id)key;	// 0x302b779d
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x302b77b1
- (XXStruct_yD8eWC)timeRange;	// 0x302b7b31
- (long long)totalSampleDataLength;	// 0x302b790d
// declared property getter: - (int)trackID;	// 0x302b7771
@end
