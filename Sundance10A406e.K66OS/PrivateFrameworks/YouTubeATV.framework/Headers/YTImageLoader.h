/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YouTubeATV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSNotificationCenter, NSTimer, NSLock, NSMutableArray, NSMutableSet;

@interface YTImageLoader : NSObject {
	NSLock *_queueLock;	// 4 = 0x4
	NSMutableArray *_loadQueue;	// 8 = 0x8
	NSMutableSet *_loadsInProgress;	// 12 = 0xc
	NSLock *_cacheLock;	// 16 = 0x10
	NSMutableDictionary *_imageCache;	// 20 = 0x14
	NSMutableDictionary *_roundedThumbnailImageCache;	// 24 = 0x18
	NSMutableDictionary *_largeThumbnailImageCache;	// 28 = 0x1c
	NSMutableDictionary *_pluginImageCache;	// 32 = 0x20
	NSMutableArray *_imageCacheLRU;	// 36 = 0x24
	CFRunLoopRef _loaderRunLoop;	// 40 = 0x28
	CFRunLoopSourceRef _loaderSource;	// 44 = 0x2c
	NSNotificationCenter *_notificationCenter;	// 48 = 0x30
	NSTimer *_loadStatusNotificationTimer;	// 52 = 0x34
	opaque_pthread_mutex_t _startupLock;	// 56 = 0x38
	opaque_pthread_cond_t _startupCondition;	// 100 = 0x64
}
@property(readonly, retain) NSNotificationCenter *notificationCenter;	// G=0x32f54335; converted property
+ (id)sharedImageLoader;	// 0x32f5382d
- (id)init;	// 0x32f53875
- (void)_imageLoadFinished:(id)finished;	// 0x32f55159
- (CGImageRef)_largeThumbnailOverlay;	// 0x32f53d45
- (void)_loadImageURL:(id)url videoID:(id)anId;	// 0x32f54b85
- (void)_loadingStatusChanged;	// 0x32f54771
- (BOOL)_locked_URLIsLoading:(id)loading;	// 0x32f54a15
- (void)_locked_imageLoadStarted:(id)started;	// 0x32f55139
- (id)_locked_loadImageCache:(id)cache;	// 0x32f55331
- (void)_locked_loadImageForURL:(id)url videoID:(id)anId;	// 0x32f54ad5
- (id)_locked_saveImageCache:(id)cache;	// 0x32f551c9
- (void)_mainThread_postLoadingStatusChanged;	// 0x32f546c5
- (void)_postImageLoadedNotification:(id)notification;	// 0x32f550d5
- (void)_postLoadingStatusChanged;	// 0x32f54709
- (void)_setImageData:(id)data videoID:(id)anId forURL:(id)url cacheLocked:(BOOL)locked;	// 0x32f54c39
- (void)_startLoader;	// 0x32f547f1
- (CGImageRef)createRoundedThumbnailWithImage:(CGImageRef)image;	// 0x32f53c09
- (CGImageRef)createSheenedThumbnailWithImage:(CGImageRef)image overlay:(CGImageRef)overlay width:(int)width height:(int)height;	// 0x32f53dc9
- (CGImageRef)imageForURL:(id)url rounded:(BOOL)rounded videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x32f53eb5
- (BOOL)isLoadingImages;	// 0x32f53a55
- (CGImageRef)largeImageForURL:(id)url videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x32f54065
- (void)loadCache:(id)cache;	// 0x32f544d5
// converted property getter: - (id)notificationCenter;	// 0x32f54335
- (CGImageRef)pluginImageForURL:(id)url videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x32f54205
- (void)saveCache:(id)cache;	// 0x32f54385
@end
