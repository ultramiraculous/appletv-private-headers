/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"

@class AVAssetCache, AVWeakReference, NSArray, NSURL, NSString;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVWeakReference *_weakReference;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x30ed1821; 
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x30ed1871; 
@property(readonly, assign, nonatomic) NSArray *chapterGroupInfo;	// G=0x30ed186d; 
@property(readonly, assign, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;	// G=0x30ed1869; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x30ed1865; 
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x30ed1881; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x30ed1831; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x30ed185d; 
@property(readonly, assign, nonatomic, getter=_figAsset) OpaqueFigAsset *figAsset;	// G=0x30ed1829; 
@property(readonly, assign, nonatomic, getter=_formatReader) OpaqueFigFormatReader *formatReader;	// G=0x30ed1825; 
@property(readonly, assign, nonatomic) BOOL hasProtectedContent;	// G=0x30ed1885; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x30ed1855; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x30ed1859; 
@property(readonly, assign, nonatomic, getter=_playbackItem) OpaqueFigPlaybackItem *playbackItem;	// G=0x30ed182d; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x30ed1861; 
@property(readonly, assign, nonatomic) unsigned referenceRestrictions;	// G=0x30ed1891; 
@property(readonly, assign, nonatomic) NSURL *resolvedURL;	// G=0x30ed187d; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x30ed1875; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x30ed1879; 
@property(readonly, assign, nonatomic, getter=_isStreaming) BOOL streaming;	// G=0x30ed1889; 
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference *weakReference;	// G=0x30ed1809; 
+ (void)initialize;	// 0x30ed1ac5
- (id)init;	// 0x30ed1a8d
- (id)initWithURL:(id)url;	// 0x30ed1be9
// declared property getter: - (id)URL;	// 0x30ed1821
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x30ed188d
// declared property getter: - (OpaqueFigAsset *)_figAsset;	// 0x30ed1829
// declared property getter: - (OpaqueFigFormatReader *)_formatReader;	// 0x30ed1825
// declared property getter: - (BOOL)_isStreaming;	// 0x30ed1889
- (id)_mapFigErrorCodeToNSError:(long)nserror;	// 0x30ed1ae1
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x30ed182d
- (void)_serverHasDied;	// 0x30ed1895
// declared property getter: - (id)_weakReference;	// 0x30ed1809
// declared property getter: - (id)assetCache;	// 0x30ed1871
- (id)assetInspector;	// 0x30ed1819
- (void)cancelLoading;	// 0x30ed181d
// declared property getter: - (id)chapterGroupInfo;	// 0x30ed186d
- (id)copyWithZone:(NSZone *)zone;	// 0x30ed1aa1
- (void)dealloc;	// 0x30ed1b9d
// declared property getter: - (id)downloadDestinationURL;	// 0x30ed1881
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x30ed1831
// declared property getter: - (BOOL)hasProtectedContent;	// 0x30ed1885
// declared property getter: - (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x30ed1869
// declared property getter: - (BOOL)isComposable;	// 0x30ed1865
// declared property getter: - (BOOL)isExportable;	// 0x30ed185d
// declared property getter: - (BOOL)isPlayable;	// 0x30ed1859
// declared property getter: - (BOOL)isReadable;	// 0x30ed1861
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30ed1b35
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x30ed1ab1
// declared property getter: - (id)lyrics;	// 0x30ed1855
// declared property getter: - (unsigned)referenceRestrictions;	// 0x30ed1891
// declared property getter: - (id)resolvedURL;	// 0x30ed187d
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x30ed1875
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x30ed1879
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30ed1b69
@end

