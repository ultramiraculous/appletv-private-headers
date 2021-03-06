/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSThread.h> // Unknown library

@class ContentDownloadData;
@protocol ContentHeaderDownloaderProtocol;

__attribute__((visibility("hidden")))
@interface ContentHeaderDownloader : NSThread {
@private
	ContentDownloadData *contentDownloadData;	// 52 = 0x34
	shared_ptr<netflix::http::HttpStreamReader> headerHttpReader;	// 56 = 0x38
	shared_ptr<netflix::http::HttpStreamReader> transportHttpReader;	// 64 = 0x40
	id<ContentHeaderDownloaderProtocol> delegate_;	// 72 = 0x48
}
@property(assign) id<ContentHeaderDownloaderProtocol> delegate;	// G=0x360f2a4c; S=0x360f2a60; @synthesize=delegate_
- (id)initWithContentDownloadData:(id)contentDownloadData delegate:(id)delegate;	// 0x360f2b18
- (id).cxx_construct;	// 0x360f2a74
- (void).cxx_destruct;	// 0x360f2ac8
- (void)dealloc;	// 0x360f4910
// declared property getter: - (id)delegate;	// 0x360f2a4c
- (void)downloadContentHeader:(id)header;	// 0x360f2d54
- (const char *)mediaTypeToDLType:(int)dltype;	// 0x360f29f0
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x360f2a60
@end

