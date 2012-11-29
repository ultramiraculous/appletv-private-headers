/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSHTTPCookieInternal;

@interface NSHTTPCookie : NSObject {
	NSHTTPCookieInternal *_cookiePrivate;	// 4 = 0x4
}
+ (id)_cf2nsCookies:(CFArrayRef)cookies;	// 0x34df7481
+ (CFArrayRef)_ns2cfCookies:(id)cookies;	// 0x34df7579
+ (id)cookieWithCFHTTPCookie:(OpaqueCFHTTPCookie *)cfhttpcookie;	// 0x34df73b9
+ (id)cookieWithProperties:(id)properties;	// 0x34df7345
+ (id)cookiesWithResponseHeaderFields:(id)responseHeaderFields forURL:(id)url;	// 0x34df7bbd
+ (id)requestHeaderFieldsWithCookies:(id)cookies;	// 0x34df7b65
- (id)init;	// 0x34df7425
- (id)initWithCFHTTPCookie:(OpaqueCFHTTPCookie *)cfhttpcookie;	// 0x34df7401
- (id)initWithCoder:(id)coder;	// 0x34df81e9
- (id)initWithProperties:(id)properties;	// 0x34df738d
- (id)Comment;	// 0x34df794d
- (id)CommentURL;	// 0x34df795d
- (id)Discard;	// 0x34df7a61
- (id)Domain;	// 0x34df791d
- (id)Expires;	// 0x34df793d
- (id)MaxAge;	// 0x34df7ac9
- (id)Name;	// 0x34df78fd
- (id)OriginURL;	// 0x34df796d
- (id)Path;	// 0x34df792d
- (id)Port;	// 0x34df7a95
- (id)Secure;	// 0x34df7a2d
- (id)Value;	// 0x34df790d
- (id)Version;	// 0x34df79ed
- (OpaqueCFHTTPCookie *)_GetInternalCFHTTPCookie;	// 0x34df7681
- (int)_compareForHeaderOrder:(id)headerOrder;	// 0x34df7c05
- (BOOL)_isExpired;	// 0x34df7d95
- (id)_key;	// 0x34df7d15
- (id)comment;	// 0x34df7855
- (id)commentURL;	// 0x34df788d
- (void)dealloc;	// 0x34df743d
- (id)description;	// 0x34df7ddd
- (id)domain;	// 0x34df77e5
- (void)encodeWithCoder:(id)coder;	// 0x34df81b9
- (id)expiresDate;	// 0x34df76f9
- (unsigned)hash;	// 0x34df8129
- (BOOL)isEqual:(id)equal;	// 0x34df80dd
- (BOOL)isHTTPOnly;	// 0x34df76dd
- (BOOL)isSecure;	// 0x34df76c1
- (BOOL)isSessionOnly;	// 0x34df76a5
- (id)name;	// 0x34df7775
- (id)path;	// 0x34df781d
- (id)portList;	// 0x34df78c5
- (id)properties;	// 0x34df7649
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x34e83539
- (id)value;	// 0x34df77ad
- (unsigned)version;	// 0x34df7691
@end
