/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSXPCProxyCreating.h"

@class NSXPCListenerEndpoint, NSXPCInterface, NSString;
@protocol NSObject, OS_dispatch_queue;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {
	void *_xconnection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_userQueue;	// 12 = 0xc
	unsigned long long _state;	// 16 = 0x10
	id _interruptionHandler;	// 24 = 0x18
	id _invalidationHandler;	// 28 = 0x1c
	id _exportInfo;	// 32 = 0x20
	id _replyInfo;	// 36 = 0x24
	id _importInfo;	// 40 = 0x28
	id<NSObject> _otherInfo;	// 44 = 0x2c
	id _reserved1;	// 48 = 0x30
	id _lock;	// 52 = 0x34
	NSXPCInterface *_remoteObjectInterface;	// 56 = 0x38
	NSString *_serviceName;	// 60 = 0x3c
	NSXPCListenerEndpoint *_endpoint;	// 64 = 0x40
	id _reserved2;	// 68 = 0x44
	id _reserved3;	// 72 = 0x48
}
@property(readonly, assign) int auditSessionIdentifier;	// G=0x31aa6a81; 
@property(assign) id delegate;	// G=0x31aa67e9; S=0x31aa67d9; converted property
@property(readonly, assign) unsigned effectiveGroupIdentifier;	// G=0x31aa6d1d; 
@property(readonly, assign) unsigned effectiveUserIdentifier;	// G=0x31aa6c3d; 
@property(readonly, assign) NSXPCListenerEndpoint *endpoint;	// G=0x31aa6471; 
@property(retain) NSXPCInterface *exportedInterface;	// G=0x31aa68e1; S=0x31aa6905; 
@property(retain) id exportedObject;	// G=0x31aa688d; S=0x31aa68b1; 
@property(copy) id interruptionHandler;	// G=0x31aa6361; S=0x3198d869; 
@property(copy) id invalidationHandler;	// G=0x31aa63cd; S=0x3198d7dd; 
@property(readonly, assign) int processIdentifier;	// G=0x31aa6b61; 
@property(retain) NSXPCInterface *remoteObjectInterface;	// G=0x31aa6ef1; S=0x3198d7cd; @synthesize=_remoteObjectInterface
@property(readonly, assign) NSString *serviceName;	// G=0x31aa6439; 
@property(retain) id userInfo;	// G=0x31aa675d; S=0x31aa6795; converted property
+ (void)beginTransaction;	// 0x31aa6dfd
+ (id)currentConnection;	// 0x31aa6729
+ (void)endTransaction;	// 0x31aa6e01
- (id)init;	// 0x3198cdd1
- (id)initWithEndpoint:(id)endpoint;	// 0x31aa575d
- (id)initWithListenerEndpoint:(id)listenerEndpoint;	// 0x31aa5791
- (id)initWithMachServiceName:(id)machServiceName;	// 0x31aa5749
- (id)initWithMachServiceName:(id)machServiceName options:(unsigned)options;	// 0x3198cc0d
- (id)initWithServiceName:(id)serviceName;	// 0x31aa5565
- (void)_addProxy:(unsigned long long)proxy;	// 0x31aa6a15
- (void)_decodeAndInvokeMessageWithData:(id)data;	// 0x31aa4a05
- (void)_decodeAndInvokeReplyBlockWithData:(id)data;	// 0x319901d9
- (id)_exportTable;	// 0x31aa64a9
- (id)_initWithPeerConnection:(id)peerConnection name:(id)name;	// 0x31aa5429
- (void)_removeProxy:(unsigned long long)proxy;	// 0x31aa6a35
- (void)_sendDesistForProxyNumber:(unsigned long long)proxyNumber;	// 0x31aa5f59
- (void)_sendInvocation:(id)invocation proxyNumber:(unsigned long long)number remoteInterface:(id)interface;	// 0x3198dcc1
- (void)_sendInvocation:(id)invocation proxyNumber:(unsigned long long)number remoteInterface:(id)interface withErrorHandler:(id)errorHandler;	// 0x31aa6109
- (void)_sendInvocation:(id)invocation proxyNumber:(unsigned long long)number remoteInterface:(id)interface withErrorHandler:(id)errorHandler timeout:(double)timeout;	// 0x3198dcf9
- (void)_setUUID:(id)uuid;	// 0x31aa6e05
// declared property getter: - (int)auditSessionIdentifier;	// 0x31aa6a81
- (XXStruct_kUSYWB)auditToken;	// 0x31aa6569
- (void)dealloc;	// 0x31aa5945
- (id)debugDescription;	// 0x31aa67f9
// converted property getter: - (id)delegate;	// 0x31aa67e9
// declared property getter: - (unsigned)effectiveGroupIdentifier;	// 0x31aa6d1d
// declared property getter: - (unsigned)effectiveUserIdentifier;	// 0x31aa6c3d
// declared property getter: - (id)endpoint;	// 0x31aa6471
// declared property getter: - (id)exportedInterface;	// 0x31aa68e1
// declared property getter: - (id)exportedObject;	// 0x31aa688d
- (void)finalize;	// 0x31aa5ab5
// declared property getter: - (id)interruptionHandler;	// 0x31aa6361
- (void)invalidate;	// 0x31aa5c9d
// declared property getter: - (id)invalidationHandler;	// 0x31aa63cd
// declared property getter: - (int)processIdentifier;	// 0x31aa6b61
// declared property getter: - (id)remoteObjectInterface;	// 0x31aa6ef1
- (id)remoteObjectProxy;	// 0x3198d94d
- (id)remoteObjectProxyWithErrorHandler:(id)errorHandler;	// 0x31aa6939
- (id)remoteObjectProxyWithTimeout:(double)timeout errorHandler:(id)handler;	// 0x31aa69a1
- (id)replacementObjectForEncoder:(id)encoder object:(id)object;	// 0x3198fb19
- (void)resume;	// 0x3198d8f5
// declared property getter: - (id)serviceName;	// 0x31aa6439
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31aa67d9
// declared property setter: - (void)setExportedInterface:(id)interface;	// 0x31aa6905
// declared property setter: - (void)setExportedObject:(id)object;	// 0x31aa68b1
// declared property setter: - (void)setInterruptionHandler:(id)handler;	// 0x3198d869
// declared property setter: - (void)setInvalidationHandler:(id)handler;	// 0x3198d7dd
- (void)setOptions:(unsigned)options;	// 0x31aa64b9
// declared property setter: - (void)setRemoteObjectInterface:(id)interface;	// 0x3198d7cd
// converted property setter: - (void)setUserInfo:(id)info;	// 0x31aa6795
- (void)start;	// 0x31aa5c3d
- (void)stop;	// 0x31aa5c6d
- (void)suspend;	// 0x31aa5b31
// converted property getter: - (id)userInfo;	// 0x31aa675d
- (id)valueForEntitlement:(id)entitlement;	// 0x31aa6665
@end

