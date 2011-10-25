/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLProtocol.h"


__attribute__((visibility("hidden")))
@interface NSCFURLProtocol : NSURLProtocol {
@private
	CFURLProtocolRef cfProt;	// 8 = 0x8
}
+ (BOOL)canInitWithRequest:(id)request;	// 0x3368c65d
+ (id)canonicalRequestForRequest:(id)request;	// 0x3368c73d
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x33706f01
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x33707015
- (void)_resumeLoading;	// 0x33707429
- (void)_suspendLoading;	// 0x33707415
- (void)dealloc;	// 0x33706f8d
- (void)finalize;	// 0x33706fd5
- (void)startLoading;	// 0x337073ed
- (void)stopLoading;	// 0x33707401
@end

