/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>

@class NSString;
@protocol WebInspectorXPCWrapperDelegate, OS_xpc_object;

@interface WebInspectorXPCWrapper : NSObject {
	id<WebInspectorXPCWrapperDelegate> _delegate;	// 4 = 0x4
	NSString *_tag;	// 8 = 0x8
	NSObject<OS_xpc_object> *_connection;	// 12 = 0xc
	NSObject<OS_xpc_object> *_currentMessage;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL available;	// G=0x33986c05; 
@property(assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x33986c61; S=0x33986c71; @synthesize=_connection
@property(assign, nonatomic) NSObject<OS_xpc_object> *currentMessage;	// G=0x33986c81; S=0x33986c91; @synthesize=_currentMessage
@property(assign, nonatomic) id<WebInspectorXPCWrapperDelegate> delegate;	// G=0x33986c1d; S=0x33986c2d; @synthesize=_delegate
@property(copy, nonatomic) NSString *tag;	// G=0x33986c3d; S=0x33986c51; @synthesize=_tag
- (id)initWithConnection:(id)connection;	// 0x33986619
- (id)_deserializeMessage:(id)message;	// 0x33986769
- (void)_handleEvent:(id)event;	// 0x3398681d
// declared property getter: - (BOOL)available;	// 0x33986c05
- (void)barrierWithCompletionHandler:(id)completionHandler;	// 0x33986b89
- (void)close;	// 0x339866dd
// declared property getter: - (id)connection;	// 0x33986c61
// declared property getter: - (id)currentMessage;	// 0x33986c81
- (void)dealloc;	// 0x33986709
// declared property getter: - (id)delegate;	// 0x33986c1d
- (void)sendMessage:(id)message userInfo:(id)info;	// 0x33986919
- (void)sendMessage:(id)message userInfo:(id)info replyHandler:(id)handler;	// 0x3398693d
// declared property setter: - (void)setConnection:(id)connection;	// 0x33986c71
// declared property setter: - (void)setCurrentMessage:(id)message;	// 0x33986c91
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33986c2d
// declared property setter: - (void)setTag:(id)tag;	// 0x33986c51
// declared property getter: - (id)tag;	// 0x33986c3d
@end
