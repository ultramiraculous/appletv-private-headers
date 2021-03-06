/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSHTTPCookieStorageInternal;

@interface NSHTTPCookieStorage : NSObject {
@private
	NSHTTPCookieStorageInternal *_internal;	// 4 = 0x4
}
@property(assign) unsigned cookieAcceptPolicy;	// G=0x3276f2ed; S=0x327e0d01; converted property
+ (id)sharedHTTPCookieStorage;	// 0x3275f429
- (id)init;	// 0x327e0985
- (OpaqueCFHTTPCookieStorage *)_cookieStorage;	// 0x3275fb0d
- (id)_internalInit;	// 0x3275f485
- (void)_readAcceptCookiesPreference;	// 0x3275fa71
- (void)_saveCookies;	// 0x327e0ae9
- (void)_setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x327e0a59
// converted property getter: - (unsigned)cookieAcceptPolicy;	// 0x3276f2ed
- (id)cookieRequestHeaderFieldsForURL:(id)url;	// 0x327e0bfd
- (id)cookies;	// 0x327e0b0d
- (id)cookiesForURL:(id)url;	// 0x3275fb41
- (void)dealloc;	// 0x327e099d
- (void)deleteCookie:(id)cookie;	// 0x327e0b99
- (id)description;	// 0x327e08d9
- (void)setCookie:(id)cookie;	// 0x327e0b5d
// converted property setter: - (void)setCookieAcceptPolicy:(unsigned)policy;	// 0x327e0d01
- (void)setCookies:(id)cookies forURL:(id)url mainDocumentURL:(id)url3;	// 0x32773005
- (void)setCookiesFromResponseHeader:(id)responseHeader forURL:(id)url policyBaseURL:(id)url3;	// 0x327e0c9d
@end

