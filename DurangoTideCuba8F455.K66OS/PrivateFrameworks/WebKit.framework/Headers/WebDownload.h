/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURLDownload.h> // Unknown library

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload {
@private
	WebDownloadInternal *_webInternal;	// 8 = 0x8
}
- (id)init;	// 0x3051a645
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x3051a769
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x3051a705
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x3051a6b1
- (void)_setRealDelegate:(id)delegate;	// 0x3051a4b1
- (void)connection:(id)connection willStopBufferingData:(id)data;	// 0x3051a2d9
- (void)dealloc;	// 0x3051a7b9
@end
