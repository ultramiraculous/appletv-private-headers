/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSArray, SSXPCConnection;
@protocol SSDownloadHandlerDelegate;

@interface SSDownloadHandler : NSObject {
@private
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	id<SSDownloadHandlerDelegate> _delegate;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	NSArray *_downloadPhasesToIgnore;	// 16 = 0x10
	long long _handlerID;	// 20 = 0x14
	SSXPCConnection *_observerConnection;	// 28 = 0x1c
	BOOL _sessionsNeedPowerAssertion;	// 32 = 0x20
	BOOL _sessionsShouldBlockOtherDownloads;	// 33 = 0x21
}
@property(assign) id<SSDownloadHandlerDelegate> delegate;	// G=0x327efd7d; S=0x327f02fd; 
@property(copy) NSArray *downloadPhasesToIgnore;	// G=0x327eff2d; S=0x327f03a9; 
@property(readonly, assign) long long handlerIdentifier;	// G=0x327f00c9; 
@property(assign) BOOL sessionsNeedPowerAssertion;	// G=0x327f0155; S=0x327f04bd; 
@property(assign) BOOL sessionsShouldBlockOtherDownloads;	// G=0x327f0229; S=0x327f0571; 
- (id)init;	// 0x327efac9
- (void)_connectToDaemon;	// 0x327f0825
- (id)_controlConnection;	// 0x327f0b41
- (void)_handleMessage:(void *)message fromServerConnection:(xpc_connection_s *)serverConnection;	// 0x327f0cdd
- (id)_newSessionWithMessage:(void *)message;	// 0x327f0f59
- (BOOL)_sendAuthenticationSessionWithMessage:(void *)message;	// 0x327f0fc9
- (void)_sendDisconnectMessage;	// 0x327f10c5
- (BOOL)_sendSessionCancelWithMessage:(void *)message;	// 0x327f1135
- (BOOL)_sendSessionHandleWithMessage:(void *)message;	// 0x327f11dd
- (BOOL)_sendSessionPauseWithMessage:(void *)message;	// 0x327f1285
- (void)_setValue:(void *)value forProperty:(const char *)property;	// 0x327f1331
- (void)dealloc;	// 0x327efc59
// declared property getter: - (id)delegate;	// 0x327efd7d
- (id)description;	// 0x327f0625
// declared property getter: - (id)downloadPhasesToIgnore;	// 0x327eff2d
// declared property getter: - (long long)handlerIdentifier;	// 0x327f00c9
- (void)resetDisavowedSessions;	// 0x327f00e1
// declared property getter: - (BOOL)sessionsNeedPowerAssertion;	// 0x327f0155
// declared property getter: - (BOOL)sessionsShouldBlockOtherDownloads;	// 0x327f0229
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x327f02fd
// declared property setter: - (void)setDownloadPhasesToIgnore:(id)ignore;	// 0x327f03a9
// declared property setter: - (void)setSessionsNeedPowerAssertion:(BOOL)assertion;	// 0x327f04bd
// declared property setter: - (void)setSessionsShouldBlockOtherDownloads:(BOOL)blockOtherDownloads;	// 0x327f0571
@end

