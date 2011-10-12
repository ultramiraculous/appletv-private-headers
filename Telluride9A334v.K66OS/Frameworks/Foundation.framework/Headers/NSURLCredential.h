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
@private
	NSURLCredentialInternal *_internal;	// 4 = 0x4
}
+ (id)credentialForTrust:(SecTrust *)trust;	// 0x306bf69d
+ (id)credentialWithIdentity:(SecIdentity *)identity certificates:(id)certificates persistence:(unsigned)persistence;	// 0x306bf3a5
+ (id)credentialWithUser:(id)user password:(id)password persistence:(unsigned)persistence;	// 0x306bf351
- (id)initWithCoder:(id)coder;	// 0x306bf731
- (id)initWithIdentity:(SecIdentity *)identity certificates:(id)certificates persistence:(unsigned)persistence;	// 0x306bf2d5
- (id)initWithTrust:(SecTrust *)trust;	// 0x306bf629
- (id)initWithUser:(id)user password:(id)password persistence:(unsigned)persistence;	// 0x306bf215
- (CFURLCredentialRef)_cfurlcredential;	// 0x306bf445
- (id)_initWithCFURLCredential:(CFURLCredentialRef)cfurlcredential;	// 0x306bf295
- (id)certificates;	// 0x306bf615
- (id)copyWithZone:(NSZone *)zone;	// 0x306bf501
- (void)dealloc;	// 0x306bf3f9
- (id)description;	// 0x306bf511
- (void)encodeWithCoder:(id)coder;	// 0x306bf6e5
- (BOOL)hasPassword;	// 0x306bf4c9
- (unsigned)hash;	// 0x306bf581
- (SecIdentity *)identity;	// 0x306bf601
- (BOOL)isEqual:(id)equal;	// 0x306bf595
- (id)password;	// 0x306bf491
- (unsigned)persistence;	// 0x306bf4e5
- (id)user;	// 0x306bf455
@end

