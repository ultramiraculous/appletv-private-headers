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
+ (BOOL)canInitWithRequest:(id)request;	// 0x3204665d
+ (id)canonicalRequestForRequest:(id)request;	// 0x3204673d
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x320c0f01
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x320c1015
- (void)_resumeLoading;	// 0x320c1429
- (void)_suspendLoading;	// 0x320c1415
- (void)dealloc;	// 0x320c0f8d
- (void)finalize;	// 0x320c0fd5
- (void)startLoading;	// 0x320c13ed
- (void)stopLoading;	// 0x320c1401
@end

