/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspector.h"

@class NSArray, NSURL;

@interface AVFigAssetInspector : AVAssetInspector {
	OpaqueFigAsset *_figAsset;	// 4 = 0x4
	OpaqueFigFormatReader *_formatReader;	// 8 = 0x8
	long _formatReaderOnce;	// 12 = 0xc
	BOOL didCheckForSaveRestriction;	// 16 = 0x10
	BOOL hasSaveRestriction;	// 17 = 0x11
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x2c2eed95; 
@property(readonly, assign, nonatomic) NSArray *chapterGroupInfo;	// G=0x2c2eed75; 
@property(readonly, assign, nonatomic) unsigned long long downloadToken;	// G=0x2c2eedd5; 
@property(readonly, assign, nonatomic, getter=_figAsset) OpaqueFigAsset *figAsset;	// G=0x2c2ee325; 
@property(readonly, assign, nonatomic, getter=_formatReader) OpaqueFigFormatReader *formatReader;	// G=0x2c2ee335; 
@property(readonly, assign, nonatomic) BOOL hasProtectedContent;	// G=0x2c2eee15; 
@property(readonly, assign, nonatomic) NSURL *resolvedURL;	// G=0x2c2eedb5; 
@property(readonly, assign, nonatomic, getter=_isStreaming) BOOL streaming;	// G=0x2c2eee3d; 
- (id)initWithFigAsset:(OpaqueFigAsset *)figAsset;	// 0x2c2ee115
- (id)SHA1Digest;	// 0x2c2eee81
// declared property getter: - (id)URL;	// 0x2c2eed95
// declared property getter: - (OpaqueFigAsset *)_figAsset;	// 0x2c2ee325
// declared property getter: - (OpaqueFigFormatReader *)_formatReader;	// 0x2c2ee335
- (BOOL)_hasQTSaveRestriction;	// 0x2c2eeb85
// declared property getter: - (BOOL)_isStreaming;	// 0x2c2eee3d
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x2c2ee419
- (id)alternateTrackGroups;	// 0x2c2ee64d
- (id)availableMetadataFormats;	// 0x2c2ee951
// declared property getter: - (id)chapterGroupInfo;	// 0x2c2eed75
- (id)commonMetadata;	// 0x2c2ee811
- (id)creationDate;	// 0x2c2ee6ad
- (void)dealloc;	// 0x2c2ee1b1
// declared property getter: - (unsigned long long)downloadToken;	// 0x2c2eedd5
- (XXStruct_pwHToB)duration;	// 0x2c2ee471
- (void)finalize;	// 0x2c2ee20d
// declared property getter: - (BOOL)hasProtectedContent;	// 0x2c2eee15
- (unsigned)hash;	// 0x2c2ee2dd
- (BOOL)isComposable;	// 0x2c2eed31
- (BOOL)isEqual:(id)equal;	// 0x2c2ee269
- (BOOL)isExportable;	// 0x2c2eeca9
- (BOOL)isReadable;	// 0x2c2eeced
- (id)lyrics;	// 0x2c2ee7f1
- (id)mediaSelectionGroups;	// 0x2c2ee68d
- (id)metadataForFormat:(id)format;	// 0x2c2ee971
- (CGSize)naturalSize;	// 0x2c2ee551
- (int)naturalTimeScale;	// 0x2c2ee57d
- (float)preferredRate;	// 0x2c2ee4ad
- (float)preferredSoundCheckVolumeNormalization;	// 0x2c2ee4f5
- (CGAffineTransform)preferredTransform;	// 0x2c2ee515
- (float)preferredVolume;	// 0x2c2ee4d1
- (BOOL)providesPreciseDurationAndTiming;	// 0x2c2ee5ed
// declared property getter: - (id)resolvedURL;	// 0x2c2eedb5
- (long)trackCount;	// 0x2c2ee615
- (id)trackReferences;	// 0x2c2ee66d
@end

