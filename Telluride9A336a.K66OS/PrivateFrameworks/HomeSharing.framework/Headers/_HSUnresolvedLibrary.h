/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSNetService;

@interface _HSUnresolvedLibrary : NSObject {
@private
	id _completionHandler;	// 4 = 0x4
	NSNetService *_netService;	// 8 = 0x8
	DNSServiceRef_tRef _resolvingDNSService;	// 12 = 0xc
}
- (id)initWithNSNetService:(id)nsnetService;	// 0x329c00f9
- (void)_callAndInvalidateCompletionHandlerWithLibrary:(id)library;	// 0x329c01c5
- (void)_netServiceDidNotResolve;	// 0x329c0a99
- (void)_netServiceDidResolveAddressWithTXTRecordData:(id)_netService host:(hostent *)host port:(unsigned short)port;	// 0x329c049d
- (void)_timeoutResolve;	// 0x329c0465
- (void)dealloc;	// 0x329c014d
- (void)resolveWithTimeout:(double)timeout completionHandler:(id)handler;	// 0x329c0209
@end

