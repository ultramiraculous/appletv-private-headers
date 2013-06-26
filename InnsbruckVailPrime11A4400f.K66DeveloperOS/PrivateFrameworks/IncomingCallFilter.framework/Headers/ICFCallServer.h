/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IncomingCallFilter.framework/IncomingCallFilter
 */

#import </libobjc.A.h>

@class NSMutableArray;
@protocol OS_xpc_object;

@interface ICFCallServer : NSObject {
	NSObject<OS_xpc_object> *_connection;	// 4 = 0x4
	NSMutableArray *_clients;	// 8 = 0x8
	BOOL _hasRegistered;	// 12 = 0xc
}
+ (id)sharedInstance;	// 0x312b8f29
- (id)init;	// 0x312b9105
- (void)_cleanup;	// 0x312b9ef9
- (void)_cleanupClient:(id)client;	// 0x312b9fa9
- (void)_clientConnected;	// 0x312b9c21
- (void)_configureWithClient:(id)client;	// 0x312ba091
- (void)_requestCallGrantForIdentifier:(id)identifier forService:(id)service waitForResponse:(BOOL)response completionBlock:(id)block;	// 0x312b92b1
- (void)dealloc;	// 0x312ba269
- (void)shouldAllowIncomingCallForNumber:(id)number forService:(id)service response:(id)response;	// 0x312ba189
@end
