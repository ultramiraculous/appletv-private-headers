/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequester.h> // Unknown library

@class NSThread;

__attribute__((visibility("hidden")))
@interface GEOQueryCollectionRequester : PBRequester {
	NSThread *_thread;	// 88 = 0x58
}
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x366f9755
- (void)_applicationDidEnterBackground:(id)_application;	// 0x366f9859
- (void)_cancelSubmissionOnThread;	// 0x366f9895
- (void)dealloc;	// 0x366f97fd
@end

