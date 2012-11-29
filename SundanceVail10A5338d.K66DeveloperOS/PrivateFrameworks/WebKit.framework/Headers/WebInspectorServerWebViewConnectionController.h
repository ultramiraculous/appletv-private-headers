/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebInspectorServer, NSMutableDictionary;

@interface WebInspectorServerWebViewConnectionController : NSObject {
	WebInspectorServer *_server;	// 4 = 0x4
	NSMutableDictionary *_openConnections;	// 8 = 0x8
	BOOL _hasScheduledPush;	// 12 = 0xc
}
- (id)initWithServer:(id)server;	// 0x316e4589
- (id)_listingForWebView:(id)webView pageId:(id)anId registry:(id)registry;	// 0x316e476d
- (void)_pushListing:(id)listing;	// 0x316e4939
- (void)_receivedConnectionDied:(id)died;	// 0x316e5025
- (void)_receivedData:(id)data;	// 0x316e4e15
- (void)_receivedDidClose:(id)_received;	// 0x316e4e71
- (void)_receivedGetListing:(id)listing;	// 0x316e4f49
- (void)_receivedIndicate:(id)indicate;	// 0x316e4f85
- (void)_receivedSetup:(id)setup;	// 0x316e4cd5
- (void)closeAllConnections;	// 0x316e4619
- (void)connectionClosing:(id)closing;	// 0x316e5339
- (void)dealloc;	// 0x316e45cd
- (void)pushListing;	// 0x316e4c69
- (void)pushListing:(id)listing;	// 0x316e4b41
- (void)receivedMessage:(id)message userInfo:(id)info;	// 0x316e5191
- (void)sendMessageToFrontend:(id)frontend userInfo:(id)info;	// 0x316e5401
@end
