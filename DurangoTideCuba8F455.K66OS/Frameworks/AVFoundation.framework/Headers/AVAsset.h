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
@property(readonly, assign) NSArray *availableChapterLocales;	// G=0x32571381; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x3257240d; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x3257237d; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x32571d99; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x325723e1; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x32571d75; 
- (id)init;	// 0x32572211
- (CFURLRef)_URL;	// 0x32571379
- (id)_assetInspector;	// 0x3257234d
- (id)_assetInspectorLoader;	// 0x32571375
- (id)_comparisonToken;	// 0x325720a9
- (id)_firstTrackGroupWithMediaType:(id)mediaType;	// 0x325728e1
- (OpaqueFigFormatReader *)_formatReader;	// 0x3257231d
- (OpaqueFigFormatReaderLoader *)_formatReaderLoader;	// 0x32571e61
- (BOOL)_isReadyForBasicInspection;	// 0x32571df1
- (BOOL)_isStreaming;	// 0x32571dbd
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x32571e31
- (void)_serverHasDied;	// 0x32571ab1
- (void)_tracksDidChange;	// 0x3257137d
- (id)_weakReference;	// 0x32571359
- (id)alternateTrackGroups;	// 0x32571cc9
- (id)audioAlternatesTrackGroup;	// 0x32571d0d
// declared property getter: - (id)availableChapterLocales;	// 0x32571381
- (id)availableMetadataFormats;	// 0x32571c11
- (void)cancelLoading;	// 0x32571e91
- (id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;	// 0x32571385
- (id)commonMetadata;	// 0x32571c35
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x32571ae1
- (id)copyWithZone:(NSZone *)zone;	// 0x325721fd
- (void)dealloc;	// 0x325720ed
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3257240d
- (BOOL)hasProtectedContent;	// 0x32571a8d
- (unsigned)hash;	// 0x32571f59
- (BOOL)isComposable;	// 0x325719b1
- (BOOL)isEqual:(id)equal;	// 0x32571fd5
- (BOOL)isExportable;	// 0x32571a1d
- (BOOL)isPlayable;	// 0x32571a55
- (BOOL)isReadable;	// 0x325719e5
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x32571eb5
- (id)lyrics;	// 0x32571c59
- (id)metadataForFormat:(id)format;	// 0x32571be9
// declared property getter: - (CGSize)naturalSize;	// 0x3257237d
- (int)naturalTimeScale;	// 0x32571d51
// declared property getter: - (float)preferredRate;	// 0x32571d99
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x325723e1
// declared property getter: - (float)preferredVolume;	// 0x32571d75
- (BOOL)providesPreciseDurationAndTiming;	// 0x32571d2d
- (void)release;	// 0x3257214d
- (id)retain;	// 0x325721a5
- (int)statusOfValueForKey:(id)key;	// 0x32571f41
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x32571efd
- (id)subtitleAlternatesTrackGroup;	// 0x32571ced
- (id)trackGroups;	// 0x32572a1d
- (id)trackReferences;	// 0x32571ca5
- (id)trackWithTrackID:(int)trackID;	// 0x32572825
- (id)tracks;	// 0x325722ed
- (id)tracksWithMediaCharacteristic:(id)mediaCharacteristic;	// 0x32571b39
- (id)tracksWithMediaType:(id)mediaType;	// 0x32571b91
- (int)unusedTrackID;	// 0x325980e9
@end

