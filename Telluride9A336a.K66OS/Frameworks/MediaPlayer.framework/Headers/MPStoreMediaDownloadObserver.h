/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSDownloadManagerObserver.h"
#import "MPMediaDownloadObserver.h"


@interface MPStoreMediaDownloadObserver : MPMediaDownloadObserver <SSDownloadManagerObserver> {
@private
	long long _downloadID;	// 20 = 0x14
	BOOL _isRestoreDownload;	// 28 = 0x1c
}
@property(readonly, assign) BOOL isRestoreDownload;	// G=0x35beb9c5; converted property
- (id)initWithDownloadIdentifier:(long long)downloadIdentifier;	// 0x35beb521
- (id)_download;	// 0x35beb4d9
- (void)_onQueue_invalidate;	// 0x35beb5b1
- (BOOL)canCancel;	// 0x35beb835
- (void)cancelDownload;	// 0x35beb859
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x35beba29
- (double)downloadProgress;	// 0x35beb60d
- (BOOL)isCurrentlyPlayable;	// 0x35beb731
// converted property getter: - (BOOL)isRestoreDownload;	// 0x35beb9c5
@end

