/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SSErrorHandlerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SSErrorHandler;

__attribute__((visibility("hidden")))
@interface ATVStoreErrorHandler : XXUnknownSuperclass <SSErrorHandlerDelegate> {
	SSErrorHandler *_handler;	// 4 = 0x4
	BOOL _connected;	// 8 = 0x8
}
@property(assign, getter=isConnected) BOOL connected;	// G=0x3a0ed5; S=0x3a0eed; @synthesize=_connected
+ (id)sharedInstance;	// 0x3a0769
- (id)init;	// 0x3a0925
- (void).cxx_destruct;	// 0x3a0f05
- (void)_handleCVVCheck:(id)check;	// 0x3a0c81
- (void)_handleStaleBilling:(id)billing;	// 0x3a0ec1
- (id)_init;	// 0x3a0819
- (void)dealloc;	// 0x3a0949
- (void)errorHandler:(id)handler handleSession:(id)session;	// 0x3a0b7d
- (void)errorHandlerDidDisconnect:(id)errorHandler;	// 0x3a0b05
// declared property getter: - (BOOL)isConnected;	// 0x3a0ed5
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x3a0eed
- (void)start;	// 0x3a0989
- (void)stop;	// 0x3a0a75
@end
