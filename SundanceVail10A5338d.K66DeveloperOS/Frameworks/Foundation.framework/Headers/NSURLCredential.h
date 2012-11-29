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

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSCoding, NSCopying> {
	NSURLCredentialInternal *_internal;	// 4 = 0x4
}
+ (id)credentialForTrust:(SecTrust *)trust;	// 0x373d3429
+ (id)credentialWithIdentity:(SecIdentity *)identity certificates:(id)certificates persistence:(unsigned)persistence;	// 0x373d3131
+ (id)credentialWithUser:(id)user password:(id)password persistence:(unsigned)persistence;	// 0x373d30dd
- (id)initWithCoder:(id)coder;	// 0x373d34bd
- (id)initWithIdentity:(SecIdentity *)identity certificates:(id)certificates persistence:(unsigned)persistence;	// 0x373d3061
- (id)initWithTrust:(SecTrust *)trust;	// 0x373d33b5
- (id)initWithUser:(id)user password:(id)password persistence:(unsigned)persistence;	// 0x373d2fa1
- (CFURLCredentialRef)_cfurlcredential;	// 0x373d31d1
- (id)_initWithCFURLCredential:(CFURLCredentialRef)cfurlcredential;	// 0x373d3021
- (id)certificates;	// 0x373d33a1
- (id)copyWithZone:(NSZone *)zone;	// 0x373d328d
- (void)dealloc;	// 0x373d3185
- (id)description;	// 0x373d329d
- (void)encodeWithCoder:(id)coder;	// 0x373d3471
- (BOOL)hasPassword;	// 0x373d3255
- (unsigned)hash;	// 0x373d330d
- (SecIdentity *)identity;	// 0x373d338d
- (BOOL)isEqual:(id)equal;	// 0x373d3321
- (id)password;	// 0x373d321d
- (unsigned)persistence;	// 0x373d3271
- (id)user;	// 0x373d31e1
@end
