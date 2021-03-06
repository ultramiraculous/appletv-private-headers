/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSXPCProxyCreating.h"
#import "NSSecureCoding.h"

@class NSXPCConnection, NSMutableDictionary, NSXPCInterface, NSLock;

__attribute__((visibility("hidden")))
@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding> {
	NSXPCConnection *_connection;	// 4 = 0x4
	NSXPCInterface *_remoteInterface;	// 8 = 0x8
	NSMutableDictionary *_knownSelectors;	// 12 = 0xc
	NSLock *_selectorLock;	// 16 = 0x10
	unsigned long long _proxyNumber;	// 20 = 0x14
	BOOL _exported;	// 28 = 0x1c
}
@property(retain) NSXPCConnection *_connection;	// G=0x326612fd; S=0x32661311; @synthesize
@property(assign) BOOL _exported;	// G=0x32661345; S=0x3266135d; @synthesize
@property(assign) unsigned long long _proxyNumber;	// G=0x32661295; S=0x326612c9; @synthesize
@property(retain) NSXPCInterface *_remoteInterface;	// G=0x32661321; S=0x32661335; @synthesize
+ (BOOL)supportsSecureCoding;	// 0x32660d91
- (id)init;	// 0x32542a39
- (id)initWithCoder:(id)coder;	// 0x32660d95
// declared property getter: - (id)_connection;	// 0x326612fd
// declared property getter: - (BOOL)_exported;	// 0x32661345
- (id)_initWithConnection:(id)connection proxyNumber:(unsigned long long)number interface:(id)interface;	// 0x325429b1
// declared property getter: - (unsigned long long)_proxyNumber;	// 0x32661295
// declared property getter: - (id)_remoteInterface;	// 0x32661321
- (BOOL)conformsToProtocol:(id)protocol;	// 0x32661081
- (void)dealloc;	// 0x32544ebd
- (void)encodeWithCoder:(id)coder;	// 0x32660f31
- (void)forwardInvocation:(id)invocation;	// 0x32542c59
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32542ab9
- (id)remoteObjectProxy;	// 0x326610f9
- (id)remoteObjectProxyWithErrorHandler:(id)errorHandler;	// 0x32661179
- (id)remoteObjectProxyWithTimeout:(double)timeout errorHandler:(id)handler;	// 0x32661201
// declared property setter: - (void)set_connection:(id)connection;	// 0x32661311
// declared property setter: - (void)set_exported:(BOOL)exported;	// 0x3266135d
// declared property setter: - (void)set_proxyNumber:(unsigned long long)number;	// 0x326612c9
// declared property setter: - (void)set_remoteInterface:(id)interface;	// 0x32661335
@end

