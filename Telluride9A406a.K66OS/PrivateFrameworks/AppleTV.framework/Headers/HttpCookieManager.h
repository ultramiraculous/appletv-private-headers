/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface HttpCookieManager : NSObject {
}
+ (id)sharedInstance;	// 0x3337f2b0
- (id)init;	// 0x3337f20c
- (void)cookieChanged:(id)changed;	// 0x3337f3f8
- (id)cookieForKey:(id)key;	// 0x3337fc50
- (id)cookieWithString:(id)string;	// 0x3337f438
- (void)dealloc;	// 0x3337fdcc
- (void)deleteCookie:(id)cookie;	// 0x3337fbb0
- (void)setCookie:(id)cookie;	// 0x3337fc08
- (id)valueForKey:(id)key;	// 0x3337fda0
@end

