/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "XPCObjects-Structs.h"

@class Protocol, NSArray;
@protocol OS_xpc_object, OS_dispatch_queue, XPCProxyTarget;

@interface XPCProxy : NSObject <NSCopying> {
	NSObject<OS_xpc_object> *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	id<XPCProxyTarget> _target;	// 12 = 0xc
	Class _remoteClass;	// 16 = 0x10
	Protocol *_remoteProtocol;	// 20 = 0x14
	id _errorHandler;	// 24 = 0x18
	BOOL _invalidated;	// 28 = 0x1c
	BOOL _useTraditionalEncoder;	// 29 = 0x1d
	NSArray *_whitelistedClassNames;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x366f8b01; @synthesize=_connection
@property(copy) id errorHandler;	// G=0x366f8a59; S=0x366f8a6d; @synthesize=_errorHandler
@property(assign) Class remoteClass;	// G=0x366f8aa9; S=0x366f8abd; @synthesize=_remoteClass
@property(assign) Protocol *remoteProtocol;	// G=0x366f8ad5; S=0x366f8ae9; @synthesize=_remoteProtocol
@property(assign) id<XPCProxyTarget> target;	// G=0x366f8a7d; S=0x366f8a91; @synthesize=_target
@property(assign, nonatomic) BOOL useTraditionalEncoder;	// G=0x366f8b11; S=0x366f8b21; @synthesize=_useTraditionalEncoder
+ (void)initialize;	// 0x366f6b6d
- (id)initWithConnection:(id)connection queue:(id)queue target:(id)target;	// 0x366f6ba1
- (id)_errorForXpcError:(id)xpcError;	// 0x366f8975
- (void)_getInvocationArgument:(void *)argument argumentType:(const char *)type class:(Class *)aClass forXpcArgument:(id)xpcArgument message:(id)message;	// 0x366f7e75
- (id)_invocationForMessage:(id)message;	// 0x366f73e5
- (id)_newMessageAndReplyHandler:(id *)handler forInvocation:(id)invocation;	// 0x366f782d
- (id)_newXpcArgumentForInvocationArgumentAt:(void *)at ofType:(const char *)type;	// 0x366f7c79
- (id)_newXpcEncodingForObject:(id)object;	// 0x366f865d
- (id)_objectForXpcEncoding:(id)xpcEncoding;	// 0x366f8879
- (id)_proxyDescription;	// 0x366f89d9
- (SEL)_selectorForMessage:(id)message;	// 0x366f73c1
// declared property getter: - (id)connection;	// 0x366f8b01
- (id)copyWithZone:(NSZone *)zone;	// 0x366f8a49
- (void)dealloc;	// 0x366f70cd
// declared property getter: - (id)errorHandler;	// 0x366f8a59
- (void)forwardInvocation:(id)invocation;	// 0x366f72cd
- (void)invalidate;	// 0x366f715d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x366f71d9
// declared property getter: - (Class)remoteClass;	// 0x366f8aa9
// declared property getter: - (id)remoteProtocol;	// 0x366f8ad5
- (void)restrictDecodingToWhitelistedClassNames:(id)whitelistedClassNames;	// 0x366f7051
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x366f8a6d
// declared property setter: - (void)setRemoteClass:(Class)aClass;	// 0x366f8abd
// declared property setter: - (void)setRemoteProtocol:(id)protocol;	// 0x366f8ae9
// declared property setter: - (void)setTarget:(id)target;	// 0x366f8a91
// declared property setter: - (void)setUseTraditionalEncoder:(BOOL)encoder;	// 0x366f8b21
// declared property getter: - (id)target;	// 0x366f8a7d
// declared property getter: - (BOOL)useTraditionalEncoder;	// 0x366f8b11
@end

