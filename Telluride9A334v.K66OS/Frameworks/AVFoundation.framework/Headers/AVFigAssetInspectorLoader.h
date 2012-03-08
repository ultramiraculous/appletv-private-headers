/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspectorLoader.h"

@class AVAssetCache, NSDictionary, NSURL, AVAssetInspector, NSMutableArray;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {
@private
	OpaqueFigAsset *_figAsset;	// 8 = 0x8
	OpaqueFigFormatReader *_formatReader;	// 12 = 0xc
	int _figAssetCreationStatus;	// 16 = 0x10
	dispatch_queue_s *_completionHandlerQueue;	// 20 = 0x14
	OpaqueFigSimpleMutex *_loadingMutex;	// 24 = 0x18
	OpaqueFigSemaphore *_playabilityValidationSemaphore;	// 28 = 0x1c
	int _playableStatus;	// 32 = 0x20
	int _playableResult;	// 36 = 0x24
	BOOL _playable;	// 40 = 0x28
	OpaqueFigSemaphore *_cameraRollValidationSemaphor;	// 44 = 0x2c
	int _compatibleWithSavedPhotosAlbumStatus;	// 48 = 0x30
	int _compatibleWithSavedPhotosAlbumResult;	// 52 = 0x34
	BOOL _compatibleWithSavedPhotosAlbum;	// 56 = 0x38
	NSMutableArray *_loadingBatches;	// 60 = 0x3c
	BOOL _loadingCanceled;	// 64 = 0x40
	AVAssetInspector *_assetInspector;	// 68 = 0x44
	AVAssetCache *_assetCache;	// 72 = 0x48
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;	// 76 = 0x4c
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;	// 77 = 0x4d
	NSURL *_downloadDestinationURL;	// 80 = 0x50
	NSDictionary *_validationPlist;	// 84 = 0x54
	unsigned _referenceRestrictions;	// 88 = 0x58
}
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x3549ca7d; @synthesize=_assetCache
@property(readonly, retain) AVAssetInspector *assetInspector;	// G=0x3549d0c9; converted property
@property(readonly, assign, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;	// G=0x3549f8c5; converted property
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x3549ca4d; @synthesize=_downloadDestinationURL
@property(readonly, assign, getter=isPlayable) BOOL playable;	// G=0x3549fa09; converted property
@property(readonly, assign) unsigned referenceRestrictions;	// G=0x3549ca2d; converted property
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x3549ca6d; @synthesize=_shouldMatchDataInCacheByURLPathComponentOnly
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x3549ca5d; @synthesize=_shouldMatchDataInCacheByURLWithoutQueryComponent
@property(readonly, assign, nonatomic) NSDictionary *validationPlist;	// G=0x3549ca3d; @synthesize=_validationPlist
+ (id)_figAssetPropertiesForKeys;	// 0x3549f81d
+ (id)_figAssetTrackPropertiesForKeys;	// 0x3549f7f1
- (id)initWithURL:(id)url options:(id)options;	// 0x354a06e1
- (id)URL;	// 0x3549d3b5
- (void)_addFigAssetNotifications;	// 0x3549f08d
- (OpaqueFigSemaphore *)_cameraRollValidationSemaphor;	// 0x3549c995
- (dispatch_queue_s *)_completionHandlerQueue;	// 0x3549c955
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x3549fb71
- (OpaqueFigAsset *)_figAsset;	// 0x3549c945
- (OpaqueFigFormatReader *)_formatReader;	// 0x354a04d9
- (BOOL)_isStreaming;	// 0x3549f849
- (int)_loadStatusForProperty:(id)property returningError:(int *)error;	// 0x354a0471
- (id)_loadingBatches;	// 0x3549c975
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x3549c965
- (OpaqueFigSemaphore *)_playabilityValidationSemaphore;	// 0x3549c985
- (void)_removeFigAssetNotifications;	// 0x3549f64d
// declared property getter: - (id)assetCache;	// 0x3549ca7d
// converted property getter: - (id)assetInspector;	// 0x3549d0c9
- (void)cancelLoading;	// 0x3549ed25
- (id)chapterGroupInfo;	// 0x3549d38d
- (void)dealloc;	// 0x354a05dd
// declared property getter: - (id)downloadDestinationURL;	// 0x3549ca4d
- (XXStruct_pwHToB)duration;	// 0x3549ee5d
- (void)finalize;	// 0x354a0545
- (BOOL)hasProtectedContent;	// 0x3549d405
- (unsigned)hash;	// 0x3549f7a9
// converted property getter: - (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x3549f8c5
- (BOOL)isComposable;	// 0x3549d32d
- (BOOL)isEqual:(id)equal;	// 0x3549f739
- (BOOL)isExportable;	// 0x3549d26d
// converted property getter: - (BOOL)isPlayable;	// 0x3549fa09
- (BOOL)isReadable;	// 0x3549d2cd
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3549d139
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x3549fc2d
- (id)lyrics;	// 0x3549d245
// converted property getter: - (unsigned)referenceRestrictions;	// 0x3549ca2d
- (id)resolvedURL;	// 0x3549d3dd
- (void)setIsCompatibleWithSavedPhotosAlbum:(BOOL)savedPhotosAlbum result:(long)result;	// 0x3549c9e9
- (void)setIsPlayable:(BOOL)playable result:(long)result;	// 0x3549c9a5
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x3549ca6d
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x3549ca5d
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x354a0241
// declared property getter: - (id)validationPlist;	// 0x3549ca3d
@end
