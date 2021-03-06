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

@class NSURL, AVAssetCache, AVWeakReference, NSArray, NSString;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
	AVWeakReference *_weakReference;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x30328ab9; 
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x30328b1d; 
@property(readonly, assign, nonatomic) NSArray *chapterGroupInfo;	// G=0x30328b19; 
@property(readonly, assign, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;	// G=0x30328b15; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x30328b11; 
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x30328b2d; 
@property(readonly, assign, nonatomic) unsigned long long downloadToken;	// G=0x30328b31; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x30328ac9; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x30328b09; 
@property(readonly, assign, nonatomic, getter=_figAsset) OpaqueFigAsset *figAsset;	// G=0x30328ac1; 
@property(readonly, assign, nonatomic, getter=_formatReader) OpaqueFigFormatReader *formatReader;	// G=0x30328abd; 
@property(readonly, assign, nonatomic) BOOL hasProtectedContent;	// G=0x30328b39; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x30328b01; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x30328b05; 
@property(readonly, assign, nonatomic, getter=_playbackItem) OpaqueFigPlaybackItem *playbackItem;	// G=0x30328ac5; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x30328b0d; 
@property(readonly, assign, nonatomic) unsigned referenceRestrictions;	// G=0x30328bad; 
@property(readonly, assign, nonatomic) NSURL *resolvedURL;	// G=0x30328b29; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x30328b21; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x30328b25; 
@property(readonly, assign, nonatomic, getter=_shouldOptimizeAccessForLinearMoviePlayback) BOOL shouldOptimizeAccessForLinearMoviePlayback;	// G=0x30328bb5; 
@property(readonly, assign, nonatomic, getter=_isStreaming) BOOL streaming;	// G=0x30328b3d; 
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference *weakReference;	// G=0x303289dd; 
+ (void)initialize;	// 0x30328909
- (id)init;	// 0x30328959
- (id)initWithURL:(id)url;	// 0x3032896d
// declared property getter: - (id)URL;	// 0x30328ab9
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x30328b41
// declared property getter: - (OpaqueFigAsset *)_figAsset;	// 0x30328ac1
// declared property getter: - (OpaqueFigFormatReader *)_formatReader;	// 0x30328abd
// declared property getter: - (BOOL)_isStreaming;	// 0x30328b3d
- (id)_mapFigErrorCodeToNSError:(long)nserror;	// 0x30328b59
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x30328ac5
- (void)_serverHasDied;	// 0x30328bb1
// declared property getter: - (BOOL)_shouldOptimizeAccessForLinearMoviePlayback;	// 0x30328bb5
// declared property getter: - (id)_weakReference;	// 0x303289dd
// declared property getter: - (id)assetCache;	// 0x30328b1d
- (id)assetInspector;	// 0x30328ab1
- (void)cancelLoading;	// 0x30328ab5
// declared property getter: - (id)chapterGroupInfo;	// 0x30328b19
- (id)copyWithZone:(NSZone *)zone;	// 0x30328a39
- (void)dealloc;	// 0x303289ed
// declared property getter: - (id)downloadDestinationURL;	// 0x30328b2d
// declared property getter: - (unsigned long long)downloadToken;	// 0x30328b31
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x30328ac9
// declared property getter: - (BOOL)hasProtectedContent;	// 0x30328b39
// declared property getter: - (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x30328b15
// declared property getter: - (BOOL)isComposable;	// 0x30328b11
// declared property getter: - (BOOL)isExportable;	// 0x30328b09
// declared property getter: - (BOOL)isPlayable;	// 0x30328b05
// declared property getter: - (BOOL)isReadable;	// 0x30328b0d
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30328a7d
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x30328b45
// declared property getter: - (id)lyrics;	// 0x30328b01
// declared property getter: - (unsigned)referenceRestrictions;	// 0x30328bad
// declared property getter: - (id)resolvedURL;	// 0x30328b29
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x30328b21
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x30328b25
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30328a49
@end

