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
+ (BOOL)canInitWithRequest:(id)request;	// 0x35e1765d
+ (id)canonicalRequestForRequest:(id)request;	// 0x35e1773d
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x35e91f01
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x35e92015
- (void)_resumeLoading;	// 0x35e92429
- (void)_suspendLoading;	// 0x35e92415
- (void)dealloc;	// 0x35e91f8d
- (void)finalize;	// 0x35e91fd5
- (void)startLoading;	// 0x35e923ed
- (void)stopLoading;	// 0x35e92401
@end
