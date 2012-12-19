/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebInspectorXPCWrapperDelegate.h"
#import <NSObject.h> // Unknown library
#import "WebInspectorClientRegistryDelegate.h"

@class WebInspectorServerWebViewConnectionController, WebInspectorXPCWrapper;

@interface WebInspectorServer : NSObject <WebInspectorXPCWrapperDelegate, WebInspectorClientRegistryDelegate> {
	BOOL _isEnabled;	// 4 = 0x4
	int _notifyToken;	// 8 = 0x8
	WebInspectorXPCWrapper *_xpcConnection;	// 12 = 0xc
	WebInspectorServerWebViewConnectionController *_connectionController;	// 16 = 0x10
}
@property(readonly, assign) BOOL isEnabled;	// G=0x367c85dd; converted property
@property(readonly, retain) WebInspectorXPCWrapper *xpcConnection;	// G=0x367c85ed; converted property
- (id)init;	// 0x3676ecd5
- (void)dealloc;	// 0x367c848d
- (void)didRegisterClient:(WebInspectorClient *)client;	// 0x3676f4b1
- (void)didUnregisterClient:(WebInspectorClient *)client;	// 0x367c8775
// converted property getter: - (BOOL)isEnabled;	// 0x367c85dd
- (void)pushListing;	// 0x3676f4c1
- (void)setupXPCConnectionIfNeeded;	// 0x367c85fd
- (void)start;	// 0x3676ee89
- (void)stop;	// 0x367c8541
// converted property getter: - (id)xpcConnection;	// 0x367c85ed
- (void)xpcConnection:(id)connection receivedMessage:(id)message userInfo:(id)info;	// 0x367c86a9
- (void)xpcConnectionFailed:(id)failed;	// 0x367c8711
@end
