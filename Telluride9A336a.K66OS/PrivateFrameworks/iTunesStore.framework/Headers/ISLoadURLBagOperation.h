/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
	SSURLBagContext *_context;	// 60 = 0x3c
}
@property(readonly, assign) SSURLBagContext *context;	// G=0x35ec2311; @synthesize=_context
- (id)init;	// 0x35ec141d
- (id)initWithBagContext:(id)bagContext;	// 0x35ec1491
- (void)_addHeadersToRequestProperties:(id)requestProperties;	// 0x35ec1cc5
- (id)_copyBootstrapURLs;	// 0x35ec1de1
- (id)_copyProductionBootstrapURLs;	// 0x35ec1e2d
- (id)_copySandboxBootstrapURLs;	// 0x35ec1f8d
- (void)_loadConfigurationFromURLBag:(id)urlbag;	// 0x35ec1789
- (void)_loadURLBagFromURL:(id)url;	// 0x35ec20bd
// declared property getter: - (id)context;	// 0x35ec2311
- (void)dealloc;	// 0x35ec14e5
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x35ec18f9
- (BOOL)operation:(id)operation shouldSetStoreFrontID:(id)anId;	// 0x35ec1bd1
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x35ec1c0d
- (void)run;	// 0x35ec1539
- (id)uniqueKey;	// 0x35ec1739
@end

