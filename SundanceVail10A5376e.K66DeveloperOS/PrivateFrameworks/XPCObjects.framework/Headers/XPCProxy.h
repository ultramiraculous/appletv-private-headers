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
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x32130b01; @synthesize=_connection
@property(copy) id errorHandler;	// G=0x32130a59; S=0x32130a6d; @synthesize=_errorHandler
@property(assign) Class remoteClass;	// G=0x32130aa9; S=0x32130abd; @synthesize=_remoteClass
@property(assign) Protocol *remoteProtocol;	// G=0x32130ad5; S=0x32130ae9; @synthesize=_remoteProtocol
@property(assign) id<XPCProxyTarget> target;	// G=0x32130a7d; S=0x32130a91; @synthesize=_target
@property(assign, nonatomic) BOOL useTraditionalEncoder;	// G=0x32130b11; S=0x32130b21; @synthesize=_useTraditionalEncoder
+ (void)initialize;	// 0x3212eb6d
- (id)initWithConnection:(id)connection queue:(id)queue target:(id)target;	// 0x3212eba1
- (id)_errorForXpcError:(id)xpcError;	// 0x32130975
- (void)_getInvocationArgument:(void *)argument argumentType:(const char *)type class:(Class *)aClass forXpcArgument:(id)xpcArgument message:(id)message;	// 0x3212fe75
- (id)_invocationForMessage:(id)message;	// 0x3212f3e5
- (id)_newMessageAndReplyHandler:(id *)handler forInvocation:(id)invocation;	// 0x3212f82d
- (id)_newXpcArgumentForInvocationArgumentAt:(void *)at ofType:(const char *)type;	// 0x3212fc79
- (id)_newXpcEncodingForObject:(id)object;	// 0x3213065d
- (id)_objectForXpcEncoding:(id)xpcEncoding;	// 0x32130879
- (id)_proxyDescription;	// 0x321309d9
- (SEL)_selectorForMessage:(id)message;	// 0x3212f3c1
// declared property getter: - (id)connection;	// 0x32130b01
- (id)copyWithZone:(NSZone *)zone;	// 0x32130a49
- (void)dealloc;	// 0x3212f0cd
// declared property getter: - (id)errorHandler;	// 0x32130a59
- (void)forwardInvocation:(id)invocation;	// 0x3212f2cd
- (void)invalidate;	// 0x3212f15d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3212f1d9
// declared property getter: - (Class)remoteClass;	// 0x32130aa9
// declared property getter: - (id)remoteProtocol;	// 0x32130ad5
- (void)restrictDecodingToWhitelistedClassNames:(id)whitelistedClassNames;	// 0x3212f051
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x32130a6d
// declared property setter: - (void)setRemoteClass:(Class)aClass;	// 0x32130abd
// declared property setter: - (void)setRemoteProtocol:(id)protocol;	// 0x32130ae9
// declared property setter: - (void)setTarget:(id)target;	// 0x32130a91
// declared property setter: - (void)setUseTraditionalEncoder:(BOOL)encoder;	// 0x32130b21
// declared property getter: - (id)target;	// 0x32130a7d
// declared property getter: - (BOOL)useTraditionalEncoder;	// 0x32130b11
@end

