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
@property(assign, getter=isConnected) BOOL connected;	// G=0x3af475; S=0x3af48d; @synthesize=_connected
+ (id)sharedInstance;	// 0x3aed09
- (id)init;	// 0x3aeec5
- (void).cxx_destruct;	// 0x3af4a5
- (void)_handleCVVCheck:(id)check;	// 0x3af221
- (void)_handleStaleBilling:(id)billing;	// 0x3af461
- (id)_init;	// 0x3aedb9
- (void)dealloc;	// 0x3aeee9
- (void)errorHandler:(id)handler handleSession:(id)session;	// 0x3af11d
- (void)errorHandlerDidDisconnect:(id)errorHandler;	// 0x3af0a5
// declared property getter: - (BOOL)isConnected;	// 0x3af475
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x3af48d
- (void)start;	// 0x3aef29
- (void)stop;	// 0x3af015
@end

