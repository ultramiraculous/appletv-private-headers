/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetInspectorLoader.h"
#import "AVFoundation-Structs.h"

@class NSURL, AVAssetCache, AVAssetInspector, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
	AVAssetInspector *_assetInspector;	// 8 = 0x8
	AVAssetCache *_assetCache;	// 12 = 0xc
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;	// 16 = 0x10
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;	// 17 = 0x11
	NSURL *_downloadDestinationURL;	// 20 = 0x14
	OpaqueFigFormatReader *_formatReader;	// 24 = 0x18
	OpaqueFigSimpleMutex *_loadingMutex;	// 28 = 0x1c
	NSMutableArray *_keysAwaitingCompletion;	// 32 = 0x20
	int _status;	// 36 = 0x24
	long _basicInspectionFailureCode;	// 40 = 0x28
	NSURL *_URL;	// 44 = 0x2c
}
@property(readonly, retain) NSURL *URL;	// G=0x3690555d; converted property
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x3690556d; @synthesize=_assetCache
@property(readonly, retain) AVAssetInspector *assetInspector;	// G=0x369049a1; converted property
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x3690559d; @synthesize=_downloadDestinationURL
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x3690557d; @synthesize=_shouldMatchDataInCacheByURLPathComponentOnly
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x3690558d; @synthesize=_shouldMatchDataInCacheByURLWithoutQueryComponent
- (id)initWithURL:(id)url;	// 0x369047f1
// converted property getter: - (id)URL;	// 0x3690555d
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x36904a4d
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x36904ab1
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;	// 0x36905039
- (OpaqueFigFormatReader *)_formatReader;	// 0x369049e9
- (id)_getAndPruneCompletionsWhileMutexLocked;	// 0x36904c5d
- (BOOL)_inspectionRequiresAFormatReader;	// 0x36904a89
- (BOOL)_isStreaming;	// 0x36905541
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x36905005
- (id)_loadValuesWhileMutexLockedForKeys:(id)keys;	// 0x36905065
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x36904a39
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x36904a8d
- (BOOL)_providesAccurateTiming;	// 0x36904a49
- (void)_serverHasDied;	// 0x36905545
- (void)_setStatus:(int)status figErrorCode:(long)code;	// 0x36904f0d
- (int)_status;	// 0x36904e31
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;	// 0x36904a91
- (int)_statusOfValueWhileMutexLockedForKey:(id)key error:(id *)error;	// 0x36904ae5
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)keys;	// 0x36904b91
- (BOOL)_updateStatusWhileMutexLocked:(int)locked figErrorCode:(long)code;	// 0x36904e41
// declared property getter: - (id)assetCache;	// 0x3690556d
// converted property getter: - (id)assetInspector;	// 0x369049a1
- (void)cancelLoading;	// 0x369049d5
- (id)chapterGroupInfo;	// 0x36905529
- (id)copyWithZone:(NSZone *)zone;	// 0x36904991
- (void)dealloc;	// 0x36904869
// declared property getter: - (id)downloadDestinationURL;	// 0x3690559d
- (XXStruct_pwHToB)duration;	// 0x369054bd
- (void)finalize;	// 0x36904935
- (BOOL)hasProtectedContent;	// 0x3690553d
- (BOOL)isComposable;	// 0x36905539
- (BOOL)isExportable;	// 0x36905531
- (BOOL)isPlayable;	// 0x3690552d
- (BOOL)isReadable;	// 0x36905535
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x369052a9
- (id)lyrics;	// 0x36905501
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x3690557d
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x3690558d
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x36904de9
@end
