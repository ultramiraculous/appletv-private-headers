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
@property(readonly, assign) int auditSessionIdentifier;	// G=0x31a07a39; 
@property(assign) id delegate;	// G=0x31a077a1; S=0x31a07791; converted property
@property(readonly, assign) unsigned effectiveGroupIdentifier;	// G=0x31a07cd5; 
@property(readonly, assign) unsigned effectiveUserIdentifier;	// G=0x31a07bf5; 
@property(readonly, assign) NSXPCListenerEndpoint *endpoint;	// G=0x31a07429; 
@property(retain) NSXPCInterface *exportedInterface;	// G=0x31a07899; S=0x31a078bd; 
@property(retain) id exportedObject;	// G=0x31a07845; S=0x31a07869; 
@property(copy) id interruptionHandler;	// G=0x31a07319; S=0x318ee071; 
@property(copy) id invalidationHandler;	// G=0x31a07385; S=0x318edfe5; 
@property(readonly, assign) int processIdentifier;	// G=0x31a07b19; 
@property(retain) NSXPCInterface *remoteObjectInterface;	// G=0x31a07ea9; S=0x318edfd5; @synthesize=_remoteObjectInterface
@property(readonly, assign) NSString *serviceName;	// G=0x31a073f1; 
@property(retain) id userInfo;	// G=0x31a07715; S=0x31a0774d; converted property
+ (void)beginTransaction;	// 0x31a07db5
+ (id)currentConnection;	// 0x31a076e1
+ (void)endTransaction;	// 0x31a07db9
- (id)init;	// 0x318ed5d9
- (id)initWithEndpoint:(id)endpoint;	// 0x31a06715
- (id)initWithListenerEndpoint:(id)listenerEndpoint;	// 0x31a06749
- (id)initWithMachServiceName:(id)machServiceName;	// 0x31a06701
- (id)initWithMachServiceName:(id)machServiceName options:(unsigned)options;	// 0x318ed415
- (id)initWithServiceName:(id)serviceName;	// 0x31a0651d
- (void)_addProxy:(unsigned long long)proxy;	// 0x31a079cd
- (void)_decodeAndInvokeMessageWithData:(id)data;	// 0x31a059bd
- (void)_decodeAndInvokeReplyBlockWithData:(id)data;	// 0x318f09e1
- (id)_exportTable;	// 0x31a07461
- (id)_initWithPeerConnection:(id)peerConnection name:(id)name;	// 0x31a063e1
- (void)_removeProxy:(unsigned long long)proxy;	// 0x31a079ed
- (void)_sendDesistForProxyNumber:(unsigned long long)proxyNumber;	// 0x31a06f11
- (void)_sendInvocation:(id)invocation proxyNumber:(unsigned long long)number remoteInterface:(id)interface;	// 0x318ee4c9
- (void)_sendInvocation:(id)invocation proxyNumber:(unsigned long long)number remoteInterface:(id)interface withErrorHandler:(id)errorHandler;	// 0x31a070c1
- (void)_sendInvocation:(id)invocation proxyNumber:(unsigned long long)number remoteInterface:(id)interface withErrorHandler:(id)errorHandler timeout:(double)timeout;	// 0x318ee501
- (void)_setUUID:(id)uuid;	// 0x31a07dbd
// declared property getter: - (int)auditSessionIdentifier;	// 0x31a07a39
- (XXStruct_kUSYWB)auditToken;	// 0x31a07521
- (void)dealloc;	// 0x31a068fd
- (id)debugDescription;	// 0x31a077b1
// converted property getter: - (id)delegate;	// 0x31a077a1
// declared property getter: - (unsigned)effectiveGroupIdentifier;	// 0x31a07cd5
// declared property getter: - (unsigned)effectiveUserIdentifier;	// 0x31a07bf5
// declared property getter: - (id)endpoint;	// 0x31a07429
// declared property getter: - (id)exportedInterface;	// 0x31a07899
// declared property getter: - (id)exportedObject;	// 0x31a07845
- (void)finalize;	// 0x31a06a6d
// declared property getter: - (id)interruptionHandler;	// 0x31a07319
- (void)invalidate;	// 0x31a06c55
// declared property getter: - (id)invalidationHandler;	// 0x31a07385
// declared property getter: - (int)processIdentifier;	// 0x31a07b19
// declared property getter: - (id)remoteObjectInterface;	// 0x31a07ea9
- (id)remoteObjectProxy;	// 0x318ee155
- (id)remoteObjectProxyWithErrorHandler:(id)errorHandler;	// 0x31a078f1
- (id)remoteObjectProxyWithTimeout:(double)timeout errorHandler:(id)handler;	// 0x31a07959
- (id)replacementObjectForEncoder:(id)encoder object:(id)object;	// 0x318f0321
- (void)resume;	// 0x318ee0fd
// declared property getter: - (id)serviceName;	// 0x31a073f1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31a07791
// declared property setter: - (void)setExportedInterface:(id)interface;	// 0x31a078bd
// declared property setter: - (void)setExportedObject:(id)object;	// 0x31a07869
// declared property setter: - (void)setInterruptionHandler:(id)handler;	// 0x318ee071
// declared property setter: - (void)setInvalidationHandler:(id)handler;	// 0x318edfe5
- (void)setOptions:(unsigned)options;	// 0x31a07471
// declared property setter: - (void)setRemoteObjectInterface:(id)interface;	// 0x318edfd5
// converted property setter: - (void)setUserInfo:(id)info;	// 0x31a0774d
- (void)start;	// 0x31a06bf5
- (void)stop;	// 0x31a06c25
- (void)suspend;	// 0x31a06ae9
// converted property getter: - (id)userInfo;	// 0x31a07715
- (id)valueForEntitlement:(id)entitlement;	// 0x31a0761d
@end

