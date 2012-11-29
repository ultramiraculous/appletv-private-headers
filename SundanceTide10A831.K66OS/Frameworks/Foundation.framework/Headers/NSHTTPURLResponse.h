/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSURLResponse.h"
#import "Foundation-Structs.h"

@class NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse {
	NSHTTPURLResponseInternal *_httpInternal;	// 8 = 0x8
}
+ (BOOL)isErrorStatusCode:(int)code;	// 0x325d7669
+ (id)localizedStringForStatusCode:(int)statusCode;	// 0x325d7369
- (id)initWithCoder:(id)coder;	// 0x325d6e95
- (id)initWithURL:(id)url statusCode:(int)code HTTPVersion:(id)version headerFields:(id)fields;	// 0x3254c1ad
- (id)initWithURL:(id)url statusCode:(int)code headerFields:(id)fields requestTime:(double)time;	// 0x325d6e59
- (id)_clientCertificateChain;	// 0x325d76e5
- (id)_clientCertificateState;	// 0x325d774d
- (id)_initWithCFURLResponse:(CFURLResponseRef)cfurlresponse;	// 0x32513a55
- (id)_peerCertificateChain;	// 0x325d767d
- (SecTrust *)_peerTrust;	// 0x325d7821
- (void)_setPeerTrust:(SecTrust *)trust;	// 0x325d77c9
- (id)allHeaderFields;	// 0x3254c261
- (void)dealloc;	// 0x32513bb5
- (void)encodeWithCoder:(id)coder;	// 0x325d72f9
- (int)statusCode;	// 0x32513b81
@end
