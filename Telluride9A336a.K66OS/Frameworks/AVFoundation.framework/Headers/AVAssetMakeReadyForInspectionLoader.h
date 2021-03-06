/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetInspectorLoader.h"
#import "AVFoundation-Structs.h"

@class NSURL, AVAssetInspector, AVAssetCache, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
	AVAssetInspector *_assetInspector;	// 8 = 0x8
	AVAssetCache *_assetCache;	// 12 = 0xc
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;	// 16 = 0x10
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;	// 17 = 0x11
	NSURL *_downloadDestinationURL;	// 20 = 0x14
@private
	OpaqueFigFormatReader *_formatReader;	// 24 = 0x18
	OpaqueFigSimpleMutex *_loadingMutex;	// 28 = 0x1c
	NSMutableArray *_keysAwaitingCompletion;	// 32 = 0x20
	int _status;	// 36 = 0x24
	int _basicInspectionFailureCode;	// 40 = 0x28
	NSURL *_URL;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x314a8921; @synthesize=_URL
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x314a8911; @synthesize=_assetCache
@property(readonly, retain) AVAssetInspector *assetInspector;	// G=0x314a9c8d; converted property
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x314a88e1; @synthesize=_downloadDestinationURL
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x314a8901; @synthesize=_shouldMatchDataInCacheByURLPathComponentOnly
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x314a88f1; @synthesize=_shouldMatchDataInCacheByURLWithoutQueryComponent
- (id)initWithURL:(id)url;	// 0x314a9d65
// declared property getter: - (id)URL;	// 0x314a8921
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x314a9cc1
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x314a9cfd
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;	// 0x314aa22d
- (OpaqueFigFormatReader *)_formatReader;	// 0x314aa5bd
- (id)_getAndPruneCompletionsWhileMutexLocked;	// 0x314aa389
- (BOOL)_inspectionRequiresAFormatReader;	// 0x314a88ad
- (BOOL)_isStreaming;	// 0x314a88dd
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x314a9d31
- (id)_loadValuesWhileMutexLockedForKeys:(id)keys;	// 0x314aa01d
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x314a8899
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x314a88b1
- (BOOL)_providesAccurateTiming;	// 0x314a88a9
- (void)_serverHasDied;	// 0x314a8e8d
- (void)_setStatus:(int)status figErrorCode:(long)code;	// 0x314aa259
- (int)_status;	// 0x314a88b5
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;	// 0x314a8c7d
- (int)_statusOfValueWhileMutexLockedForKey:(id)key error:(id *)error;	// 0x314a8c9d
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)keys;	// 0x314aa511
- (BOOL)_updateStatusWhileMutexLocked:(int)locked figErrorCode:(long)code;	// 0x314a8d49
// declared property getter: - (id)assetCache;	// 0x314a8911
// converted property getter: - (id)assetInspector;	// 0x314a9c8d
- (void)cancelLoading;	// 0x314a8c69
- (id)chapterGroupInfo;	// 0x314a88c5
- (id)copyWithZone:(NSZone *)zone;	// 0x314a8c59
- (void)dealloc;	// 0x314aa669
// declared property getter: - (id)downloadDestinationURL;	// 0x314a88e1
- (XXStruct_pwHToB)duration;	// 0x314a9ddd
- (void)finalize;	// 0x314aa60d
- (BOOL)hasProtectedContent;	// 0x314a88d9
- (BOOL)isComposable;	// 0x314a88d5
- (BOOL)isExportable;	// 0x314a88cd
- (BOOL)isPlayable;	// 0x314a88c9
- (BOOL)isReadable;	// 0x314a88d1
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x314a9e0d
- (id)lyrics;	// 0x314a8e65
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x314a8901
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x314a88f1
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x314aa33d
@end

