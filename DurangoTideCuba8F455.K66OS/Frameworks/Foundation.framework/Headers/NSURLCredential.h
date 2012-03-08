/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSCopying> {
@private
	NSURLCredentialInternal *_internal;	// 4 = 0x4
}
+ (id)credentialForTrust:(SecTrust *)trust;	// 0x310a6ad9
+ (id)credentialWithIdentity:(SecIdentity *)identity certificates:(id)certificates persistence:(unsigned)persistence;	// 0x310a6b75
+ (id)credentialWithUser:(id)user password:(id)password persistence:(unsigned)persistence;	// 0x310a6bc1
- (id)initWithIdentity:(SecIdentity *)identity certificates:(id)certificates persistence:(unsigned)persistence;	// 0x310a6cc9
- (id)initWithTrust:(SecTrust *)trust;	// 0x310a6ef1
- (id)initWithUser:(id)user password:(id)password persistence:(unsigned)persistence;	// 0x310a6c0d
- (CFURLCredentialRef)_cfurlcredential;	// 0x310a6ac9
- (id)_initWithCFURLCredential:(CFURLCredentialRef)cfurlcredential;	// 0x310a6c8d
- (id)certificates;	// 0x310a6ed9
- (id)copyWithZone:(NSZone *)zone;	// 0x310a6b19
- (void)dealloc;	// 0x310a6b2d
- (id)description;	// 0x310a6d45
- (BOOL)hasPassword;	// 0x310a6e19
- (unsigned)hash;	// 0x310a6e49
- (SecIdentity *)identity;	// 0x310a6ec1
- (BOOL)isEqual:(id)equal;	// 0x310a6e61
- (id)password;	// 0x310a6ded
- (unsigned)persistence;	// 0x310a6e31
- (id)user;	// 0x310a6db9
@end
