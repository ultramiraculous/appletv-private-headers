/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPImageRequestDelegate.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, CPLRUDictionary;
@protocol OS_dispatch_queue, MPImageCacheDelegate;

@interface MPImageCache : NSObject <MPImageRequestDelegate> {
	CPLRUDictionary *_cachedImages;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_cachedImagesQueue;	// 8 = 0x8
	unsigned _cacheSize;	// 12 = 0xc
	id<MPImageCacheDelegate> _delegate;	// 16 = 0x10
	NSOperationQueue *_operationQueue;	// 20 = 0x14
	int _retainCount;	// 24 = 0x18
	int _resumeToForegroundCacheSize;	// 28 = 0x1c
	int _suspendToBackgroundCacheSize;	// 32 = 0x20
	id _libraryDisplayValueChangeObserver;	// 36 = 0x24
}
@property(assign, nonatomic) unsigned cacheSize;	// G=0x35d57ff1; S=0x35d57565; @synthesize=_cacheSize
@property(assign, nonatomic) id<MPImageCacheDelegate> delegate;	// G=0x35d58001; S=0x35d58011; @synthesize=_delegate
@property(assign, nonatomic) BOOL imageRequestsSuspended;	// G=0x35d57579; S=0x35d5759d; 
@property(assign, nonatomic) id libraryDisplayValueChangeObserver;	// G=0x35d58021; S=0x35d58031; @synthesize=_libraryDisplayValueChangeObserver
- (id)init;	// 0x35d56aed
- (void)_cacheImage:(id)image forKey:(id)key;	// 0x35d57819
- (id)_cachedImageForKey:(id)key;	// 0x35d57941
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x35d5774d
- (void)_didReceiveMemoryWarningNotification:(id)notification;	// 0x35d57809
- (void)_enqueueRequest:(id)request;	// 0x35d57c69
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)request;	// 0x35d56fa1
- (BOOL)_isDeallocating;	// 0x35d56ac1
- (void)_removeCachedImageForKey:(id)key;	// 0x35d57bad
- (BOOL)_tryRetain;	// 0x35d56a71
- (void)_willEnterForegroundNotification:(id)notification;	// 0x35d577e1
- (void)_zapCache;	// 0x35d57e3d
- (void)_zapCachedPlaceholders;	// 0x35d57cf1
// declared property getter: - (unsigned)cacheSize;	// 0x35d57ff1
- (id)cachedImageForRequest:(id)request;	// 0x35d56f71
- (void)cancelAllImageRequests;	// 0x35d575c5
- (void)dealloc;	// 0x35d56cf9
// declared property getter: - (id)delegate;	// 0x35d58001
- (id)imageForRequest:(id)request error:(id *)error;	// 0x35d570b1
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary;	// 0x35d57ec5
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary waitUntilFetched:(BOOL)fetched;	// 0x35d57ee9
- (void)imageRequest:(id)request failedWithError:(id)error;	// 0x35d575e5
- (void)imageRequest:(id)request loadedImage:(id)image;	// 0x35d57681
// declared property getter: - (BOOL)imageRequestsSuspended;	// 0x35d57579
// declared property getter: - (id)libraryDisplayValueChangeObserver;	// 0x35d58021
- (void)loadImageForRequest:(id)request asynchronously:(BOOL)asynchronously completionHandler:(id)handler;	// 0x35d57185
- (oneway void)release;	// 0x35d569b9
- (id)retain;	// 0x35d56981
- (unsigned)retainCount;	// 0x35d56a5d
// declared property setter: - (void)setCacheSize:(unsigned)size;	// 0x35d57565
- (void)setCacheSize:(unsigned)size preserveExisting:(BOOL)existing;	// 0x35d57261
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35d58011
// declared property setter: - (void)setImageRequestsSuspended:(BOOL)suspended;	// 0x35d5759d
// declared property setter: - (void)setLibraryDisplayValueChangeObserver:(id)observer;	// 0x35d58031
@end

