/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebInspectorServerConnection.h"

@class NSString, WebInspectorServerXPC;

__attribute__((visibility("hidden")))
@interface WebInspectorServerConnectionXPC : WebInspectorServerConnection {
@private
	WebInspectorServerXPC *_server;	// 8 = 0x8
	NSString *_destination;	// 12 = 0xc
	NSString *_identifier;	// 16 = 0x10
}
@property(readonly, retain) NSString *identifier;	// G=0x34596779; converted property
- (id)initWithServer:(id)server destination:(id)destination identifier:(id)identifier;	// 0x34596521
- (void)clearChannel;	// 0x34596729
- (void)dealloc;	// 0x345967b1
// converted property getter: - (id)identifier;	// 0x34596779
- (void)receivedData:(id)data;	// 0x345965f9
- (void)receivedDidClose:(id)received;	// 0x345965ad
- (void)sendWebSocketMessage:(id)message;	// 0x3459667d
- (BOOL)setupChannel;	// 0x34596811
@end

