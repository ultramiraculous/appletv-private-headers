/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackInspector.h"

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {
@private
	OpaqueFigFormatReader *_formatReader;	// 8 = 0x8
	OpaqueFigTrackReader *_trackReader;	// 12 = 0xc
	int _trackID;	// 16 = 0x10
	unsigned _mediaType;	// 20 = 0x14
	AVWeakReference *_weakReferenceToAsset;	// 24 = 0x18
}
@property(readonly, assign) int trackID;	// G=0x3235eea5; converted property
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x32362279
- (OpaqueFigTrackReader *)_trackReader;	// 0x3235eeb5
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x323620d5
- (id)asset;	// 0x32362185
- (id)availableMetadataFormats;	// 0x32361301
- (id)commonMetadata;	// 0x32361499
- (void)dealloc;	// 0x32362201
- (float)estimatedDataRate;	// 0x32361e69
- (id)extendedLanguageTag;	// 0x32361e29
- (void)finalize;	// 0x323621a5
- (id)formatDescriptions;	// 0x323620b5
- (unsigned)hash;	// 0x323610c1
- (BOOL)isEnabled;	// 0x3236208d
- (BOOL)isEqual:(id)equal;	// 0x32361109
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x32361179
- (BOOL)isSelfContained;	// 0x32362065
- (id)languageCode;	// 0x32361e49
- (int)layer;	// 0x32361db5
- (id)mediaType;	// 0x32362125
- (id)metadataForFormat:(id)format;	// 0x323611a1
- (CGSize)naturalSize;	// 0x32361e01
- (int)naturalTimeScale;	// 0x32361e9d
- (float)nominalFrameRate;	// 0x32361d05
- (CGAffineTransform)preferredTransform;	// 0x32361dd9
- (float)preferredVolume;	// 0x32361d25
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x323615cd
- (id)segments;	// 0x323618d1
- (XXStruct_yD8eWC)timeRange;	// 0x32361ebd
- (long long)totalSampleDataLength;	// 0x32362045
// converted property getter: - (int)trackID;	// 0x3235eea5
@end
