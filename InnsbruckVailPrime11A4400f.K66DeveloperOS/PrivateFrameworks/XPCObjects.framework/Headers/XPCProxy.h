/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import "NSCopying.h"
#import </libobjc.A.h>
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
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x33a958e5; @synthesize=_connection
@property(copy) id errorHandler;	// G=0x33a9583d; S=0x33a95851; @synthesize=_errorHandler
@property(assign) Class remoteClass;	// G=0x33a9588d; S=0x33a958a1; @synthesize=_remoteClass
@property(assign) Protocol *remoteProtocol;	// G=0x33a958b9; S=0x33a958cd; @synthesize=_remoteProtocol
@property(assign) id<XPCProxyTarget> target;	// G=0x33a95861; S=0x33a95875; @synthesize=_target
@property(assign, nonatomic) BOOL useTraditionalEncoder;	// G=0x33a958f5; S=0x33a95905; @synthesize=_useTraditionalEncoder
+ (void)initialize;	// 0x33a9394d
- (id)initWithConnection:(id)connection queue:(id)queue target:(id)target;	// 0x33a93981
- (id)_errorForXpcError:(id)xpcError;	// 0x33a95759
- (void)_getInvocationArgument:(void *)argument argumentType:(const char *)type class:(Class *)aClass forXpcArgument:(id)xpcArgument message:(id)message;	// 0x33a94c49
- (id)_invocationForMessage:(id)message;	// 0x33a941b9
- (id)_newMessageAndReplyHandler:(id *)handler forInvocation:(id)invocation;	// 0x33a945fd
- (id)_newXpcArgumentForInvocationArgumentAt:(void *)at ofType:(const char *)type;	// 0x33a94a45
- (id)_newXpcEncodingForObject:(id)object;	// 0x33a95451
- (id)_objectForXpcEncoding:(id)xpcEncoding;	// 0x33a9565d
- (id)_proxyDescription;	// 0x33a957bd
- (SEL)_selectorForMessage:(id)message;	// 0x33a94195
// declared property getter: - (id)connection;	// 0x33a958e5
- (id)copyWithZone:(NSZone *)zone;	// 0x33a9582d
- (void)dealloc;	// 0x33a93ea1
// declared property getter: - (id)errorHandler;	// 0x33a9583d
- (void)forwardInvocation:(id)invocation;	// 0x33a940a1
- (void)invalidate;	// 0x33a93f31
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33a93fad
// declared property getter: - (Class)remoteClass;	// 0x33a9588d
// declared property getter: - (id)remoteProtocol;	// 0x33a958b9
- (void)restrictDecodingToWhitelistedClassNames:(id)whitelistedClassNames;	// 0x33a93e25
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x33a95851
// declared property setter: - (void)setRemoteClass:(Class)aClass;	// 0x33a958a1
// declared property setter: - (void)setRemoteProtocol:(id)protocol;	// 0x33a958cd
// declared property setter: - (void)setTarget:(id)target;	// 0x33a95875
// declared property setter: - (void)setUseTraditionalEncoder:(BOOL)encoder;	// 0x33a95905
// declared property getter: - (id)target;	// 0x33a95861
// declared property getter: - (BOOL)useTraditionalEncoder;	// 0x33a958f5
@end

