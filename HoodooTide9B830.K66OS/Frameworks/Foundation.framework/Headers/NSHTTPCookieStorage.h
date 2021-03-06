/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSHTTPCookieStorageInternal;

@interface NSHTTPCookieStorage : NSObject {
@private
	NSHTTPCookieStorageInternal *_internal;	// 4 = 0x4
}
@property(assign) unsigned cookieAcceptPolicy;	// G=0x3162c6c5; S=0x3162c6f9; converted property
+ (id)sharedHTTPCookieStorage;	// 0x3157b69d
- (id)init;	// 0x3162c399
- (OpaqueCFHTTPCookieStorage *)_cookieStorage;	// 0x3162c2f1
- (id)_initWithSharedStorage;	// 0x3157b709
- (void)_readAcceptCookiesPreference;	// 0x3162c1ad
- (void)_saveCookies;	// 0x3162c32d
- (void)_setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x3162c24d
// converted property getter: - (unsigned)cookieAcceptPolicy;	// 0x3162c6c5
- (id)cookieRequestHeaderFieldsForURL:(id)url;	// 0x3162c4b5
- (id)cookies;	// 0x3162c3b1
- (id)cookiesForURL:(id)url;	// 0x3162c5dd
- (void)dealloc;	// 0x3162c34d
- (void)deleteCookie:(id)cookie;	// 0x3162c44d
- (id)description;	// 0x3162c7cd
- (void)setCookie:(id)cookie;	// 0x3162c409
// converted property setter: - (void)setCookieAcceptPolicy:(unsigned)policy;	// 0x3162c6f9
- (void)setCookies:(id)cookies forURL:(id)url mainDocumentURL:(id)url3;	// 0x3162c66d
- (void)setCookiesFromResponseHeader:(id)responseHeader forURL:(id)url policyBaseURL:(id)url3;	// 0x3162c575
- (id)sortedCookiesUsingDescriptors:(id)descriptors;	// 0x3162c8f9
@end

