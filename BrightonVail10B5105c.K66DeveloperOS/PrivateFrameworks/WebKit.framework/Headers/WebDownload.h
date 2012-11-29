/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURLDownload.h> // Unknown library
#import "WebKit-Structs.h"

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload {
	WebDownloadInternal *_webInternal;	// 8 = 0x8
}
- (id)init;	// 0x3357c801
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x3357c8b5
- (id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x3357c96d
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x3357c909
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x3357c9d1
- (void)_setRealDelegate:(id)delegate;	// 0x3357c79d
- (void)connection:(id)connection willStopBufferingData:(id)data;	// 0x3357ca29
- (void)dealloc;	// 0x3357c869
@end
