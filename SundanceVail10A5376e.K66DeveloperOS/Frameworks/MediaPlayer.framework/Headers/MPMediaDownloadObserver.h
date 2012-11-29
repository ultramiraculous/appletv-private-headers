/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface MPMediaDownloadObserver : NSObject {
	id _progressHandler;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	BOOL _hasPendingProgressHandlerExecution;	// 12 = 0xc
	BOOL _invalidated;	// 13 = 0xd
	long long _pid;	// 16 = 0x10
	int _retainCount;	// 24 = 0x18
}
@property(readonly, assign) BOOL canCancel;	// G=0x36d456fd; 
@property(readonly, assign, getter=isCurrentlyPlayable) BOOL currentlyPlayable;	// G=0x36d456d1; 
@property(readonly, assign) double downloadProgress;	// G=0x36d456c5; 
@property(readonly, assign, nonatomic) long long persistentID;	// G=0x36d45a61; @synthesize=_pid
@property(copy) id progressHandler;	// G=0x36d45709; S=0x36d458b9; 
@property(readonly, assign, getter=isRestoreDownload) BOOL restoreDownload;	// G=0x36d45705; 
+ (id)newObserverForDownloadIdentifier:(id)downloadIdentifier downloadStatus:(int)status downloadPersistentID:(long long)anId;	// 0x36d45125
+ (id)newObserverForDownloadIdentifier:(id)downloadIdentifier downloadStatus:(int)status itemPersistentID:(long long)anId;	// 0x36d45289
+ (id)newObserverForMediaItem:(id)mediaItem;	// 0x36d452b5
+ (id)sharedITunesStoreDownloadManager;	// 0x36d453ed
- (id)init;	// 0x36d4507d
- (BOOL)_isDeallocating;	// 0x36d45051
- (void)_onQueue_invalidate;	// 0x36d459a9
- (void)_onQueue_setShouldFireProgressHandler;	// 0x36d45459
- (BOOL)_tryRetain;	// 0x36d45001
// declared property getter: - (BOOL)canCancel;	// 0x36d456fd
- (void)cancelDownload;	// 0x36d45701
- (void)dealloc;	// 0x36d450cd
// declared property getter: - (double)downloadProgress;	// 0x36d456c5
- (void)invalidate;	// 0x36d459e5
// declared property getter: - (BOOL)isCurrentlyPlayable;	// 0x36d456d1
// declared property getter: - (BOOL)isRestoreDownload;	// 0x36d45705
// declared property getter: - (long long)persistentID;	// 0x36d45a61
// declared property getter: - (id)progressHandler;	// 0x36d45709
- (oneway void)release;	// 0x36d44f49
- (id)retain;	// 0x36d44f11
- (unsigned)retainCount;	// 0x36d44fed
// declared property setter: - (void)setProgressHandler:(id)handler;	// 0x36d458b9
@end
