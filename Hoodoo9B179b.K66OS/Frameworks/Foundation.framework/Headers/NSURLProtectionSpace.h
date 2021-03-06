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
- (id)init;	// 0x310ca015
- (id)initWithCoder:(id)coder;	// 0x310ca405
- (id)initWithHost:(id)host port:(int)port protocol:(id)protocol realm:(id)realm authenticationMethod:(id)method;	// 0x310c9d19
- (id)initWithProxyHost:(id)proxyHost port:(int)port type:(id)type realm:(id)realm authenticationMethod:(id)method;	// 0x310c9f09
- (CFURLProtectionSpaceRef)_cfurlprtotectionspace;	// 0x310ca3a5
- (id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)cfurlprotectionSpace;	// 0x310c9fdd
- (id)_internalInit;	// 0x310c9cd9
- (id)authenticationMethod;	// 0x310ca265
- (id)copyWithZone:(NSZone *)zone;	// 0x310ca1d5
- (void)dealloc;	// 0x310ca02d
- (id)distinguishedNames;	// 0x310ca2f1
- (void)encodeWithCoder:(id)coder;	// 0x310ca3b5
- (unsigned)hash;	// 0x310ca1e5
- (id)host;	// 0x310ca0e5
- (BOOL)isEqual:(id)equal;	// 0x310ca1f9
- (BOOL)isProxy;	// 0x310ca0c9
- (int)port;	// 0x310ca121
- (id)protocol;	// 0x310ca319
- (id)proxyType;	// 0x310ca135
- (id)realm;	// 0x310ca071
- (BOOL)receivesCredentialSecurely;	// 0x310ca0ad
- (SecTrust *)serverTrust;	// 0x310ca305
@end

