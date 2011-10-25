/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSCoding, NSCopying> {
@private
	NSURLProtectionSpaceInternal *_internal;	// 4 = 0x4
}
- (id)init;	// 0x33710025
- (id)initWithCoder:(id)coder;	// 0x33710415
- (id)initWithHost:(id)host port:(int)port protocol:(id)protocol realm:(id)realm authenticationMethod:(id)method;	// 0x3370fd29
- (id)initWithProxyHost:(id)proxyHost port:(int)port type:(id)type realm:(id)realm authenticationMethod:(id)method;	// 0x3370ff19
- (CFURLProtectionSpaceRef)_cfurlprtotectionspace;	// 0x337103b5
- (id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)cfurlprotectionSpace;	// 0x3370ffed
- (id)_internalInit;	// 0x3370fce9
- (id)authenticationMethod;	// 0x33710275
- (id)copyWithZone:(NSZone *)zone;	// 0x337101e5
- (void)dealloc;	// 0x3371003d
- (id)distinguishedNames;	// 0x33710301
- (void)encodeWithCoder:(id)coder;	// 0x337103c5
- (unsigned)hash;	// 0x337101f5
- (id)host;	// 0x337100f5
- (BOOL)isEqual:(id)equal;	// 0x33710209
- (BOOL)isProxy;	// 0x337100d9
- (int)port;	// 0x33710131
- (id)protocol;	// 0x33710329
- (id)proxyType;	// 0x33710145
- (id)realm;	// 0x33710081
- (BOOL)receivesCredentialSecurely;	// 0x337100bd
- (SecTrust *)serverTrust;	// 0x33710315
@end

