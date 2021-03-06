/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebSecurityOriginPrivate;
@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
@private
	WebSecurityOriginPrivate *_private;	// 4 = 0x4
	id<WebQuotaManager> _applicationCacheQuotaManager;	// 8 = 0x8
	id<WebQuotaManager> _databaseQuotaManager;	// 12 = 0xc
}
@property(assign) unsigned long long quota;	// G=0x340393e1; S=0x340393fd; converted property
- (id)initWithURL:(id)url;	// 0x34039191
- (SecurityOrigin *)_core;	// 0x34038b71
- (id)_initWithWebCoreSecurityOrigin:(SecurityOrigin *)webCoreSecurityOrigin;	// 0x34038c2d
- (id)applicationCacheQuotaManager;	// 0x34038b95
- (id)databaseQuotaManager;	// 0x34038be1
- (void)dealloc;	// 0x34038cd9
- (id)domain;	// 0x34038b81
- (void)finalize;	// 0x34038c7d
- (id)host;	// 0x34038f01
- (BOOL)isEqual:(id)equal;	// 0x34038d6d
- (unsigned short)port;	// 0x34038b61
- (id)protocol;	// 0x34039049
// converted property getter: - (unsigned long long)quota;	// 0x340393e1
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x340393fd
- (id)toString;	// 0x34038dd1
- (unsigned long long)usage;	// 0x340393c5
@end

