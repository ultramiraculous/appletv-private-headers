/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSURLProtocolClient.h"

@class NSURLProtocol, NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface _NSCFURLProtocolBridge : NSObject <NSURLProtocolClient> {
@private
	NSURLProtocol *_nsProt;	// 4 = 0x4
	CFURLProtocolRef _cfProt;	// 8 = 0x8
	CFURLAuthChallengeRef _cfChallenge;	// 12 = 0xc
	NSURLAuthenticationChallenge *_nsChallenge;	// 16 = 0x10
	BOOL _loading;	// 20 = 0x14
}
+ (void)barRequest:(CFURLRequestRef)request;	// 0x35e176b5
+ (void)permitRequest:(CFURLRequestRef)request;	// 0x35e176f9
+ (void)registerWithCFURLProtocol;	// 0x35de2ead
- (id)initWithCFURLProtocol:(CFURLProtocolRef)cfurlprotocol request:(id)request protocolClass:(Class)aClass;	// 0x35e1b3e1
- (void)URLProtocol:(id)protocol cachedResponseIsValid:(id)valid;	// 0x35e1c0b1
- (void)URLProtocol:(id)protocol didCancelAuthenticationChallenge:(id)challenge;	// 0x35e930dd
- (void)URLProtocol:(id)protocol didFailWithError:(id)error;	// 0x35e92f65
- (void)URLProtocol:(id)protocol didLoadData:(id)data;	// 0x35e92e9d
- (void)URLProtocol:(id)protocol didLoadData:(id)data lengthReceived:(long long)received;	// 0x35e92db9
- (void)URLProtocol:(id)protocol didReceiveAuthenticationChallenge:(id)challenge;	// 0x35e93021
- (void)URLProtocol:(id)protocol didReceiveResponse:(id)response cacheStoragePolicy:(unsigned)policy;	// 0x35e92ce5
- (void)URLProtocol:(id)protocol wasRedirectedToRequest:(id)request redirectResponse:(id)response;	// 0x35e92bb5
- (void)URLProtocolDidFinishLoading:(id)urlprotocol;	// 0x35e92edd
- (void)_forgetClient;	// 0x35e1c1c5
- (void)bridgeRelease;	// 0x35e1b8c9
- (void)bridgeRetain;	// 0x35e1b7c9
- (void)cachedResponseIsValid:(id)valid;	// 0x35e1c115
- (void)dealloc;	// 0x35e1c425
- (id)description;	// 0x35e926c9
- (void)didFailWithError:(id)error;	// 0x35e92b39
- (void)didFinishLoading;	// 0x35e92b25
- (void)didLoadData:(id)data lengthReceived:(long long)received;	// 0x35e92b09
- (void)didReceiveAuthenticationChallenge:(id)challenge;	// 0x35e92b4d
- (void)didReceiveResponse:(id)response;	// 0x35e92ad9
- (void)halt;	// 0x35e9280d
- (void)pushEvent:(id)event from:(const char *)from;	// 0x35e92775
- (void)resume;	// 0x35e928a1
- (void)schedule:(CFRunLoopRef)schedule mode:(CFStringRef)mode;	// 0x35e92735
- (void)start;	// 0x35e1b8e9
- (void)stop;	// 0x35e1c155
- (void)unschedule:(CFRunLoopRef)unschedule mode:(CFStringRef)mode;	// 0x35e92755
- (void)useCredential:(CFURLCredentialRef)credential forChallenge:(CFURLAuthChallengeRef)challenge;	// 0x35e92969
- (void)wasRedirectedToRequest:(id)request redirectResponse:(id)response;	// 0x35e92a75
@end

