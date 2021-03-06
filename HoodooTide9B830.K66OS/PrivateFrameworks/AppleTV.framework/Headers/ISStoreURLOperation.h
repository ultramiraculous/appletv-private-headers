/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISURLOperation.h"

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

__attribute__((visibility("hidden")))
@interface ISStoreURLOperation : ISURLOperation {
@private
	NSNumber *_authenticatedDSID;	// 100 = 0x64
	BOOL _canSendGUIDParameter;	// 104 = 0x68
	BOOL _needsAuthentication;	// 105 = 0x69
	BOOL _needsURLBag;	// 106 = 0x6a
	BOOL _urlKnownToBeTrusted;	// 107 = 0x6b
	BOOL _useUserSpecificURLBag;	// 108 = 0x6c
}
@property(retain) NSNumber *authenticatedDSID;	// G=0x32b6b2c9; S=0x32b6b2dd; @synthesize=_authenticatedDSID
@property(assign) BOOL canSendGUIDParameter;	// G=0x32b69b41; S=0x32b69b7d; 
@property(assign) id<ISStoreURLOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x32b6b301; S=0x32b6b311; @synthesize=_needsAuthentication
@property(assign) BOOL needsURLBag;	// G=0x32b6b321; S=0x32b6b331; @synthesize=_needsURLBag
@property(assign) BOOL urlKnownToBeTrusted;	// G=0x32b6b341; S=0x32b6b351; @synthesize=_urlKnownToBeTrusted
@property(assign) BOOL useUserSpecificURLBag;	// G=0x32b6b361; S=0x32b6b371; @synthesize=_useUserSpecificURLBag
+ (void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext;	// 0x32b6a275
+ (id)_restrictionsHeaderValue;	// 0x32b6a6ad
+ (void)addITunesStoreHeadersToRequest:(id)request;	// 0x32b696d5
+ (void)handleITunesStoreResponseHeaders:(id)headers;	// 0x32b69715
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;	// 0x32b6981d
+ (id)pingOperationWithUrl:(id)url;	// 0x32b699b5
+ (id)propertyListOperationWithURLBagKey:(id)urlbagKey;	// 0x32b69a65
- (id)init;	// 0x32b69635
- (id)_account;	// 0x32b6a9cd
- (void)_addStandardQueryParametersForURL:(id)url;	// 0x32b6aa35
- (BOOL)_authenticateReturningError:(id *)error;	// 0x32b6ac8d
- (BOOL)_canSendTokenToURL:(id)url;	// 0x32b6ad65
- (id)_copyAuthenticationContext;	// 0x32b69c01
- (id)_copyURLBagContext;	// 0x32b6adc9
- (void)_runURLOperation;	// 0x32b6aeed
- (id)_storeFrontIdentifier;	// 0x32b6b215
- (id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;	// 0x32b6b269
- (id)authenticatedAccountDSID;	// 0x32b69bbd
// declared property getter: - (id)authenticatedDSID;	// 0x32b6b2c9
// declared property getter: - (BOOL)canSendGUIDParameter;	// 0x32b69b41
- (void)dealloc;	// 0x32b69681
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x32b69d6d
- (void)handleResponse:(id)response;	// 0x32b69ddd
// declared property getter: - (BOOL)needsAuthentication;	// 0x32b6b301
// declared property getter: - (BOOL)needsURLBag;	// 0x32b6b321
- (id)newRequestWithURL:(id)url;	// 0x32b69e4d
- (void)run;	// 0x32b6a045
// declared property setter: - (void)setAuthenticatedDSID:(id)dsid;	// 0x32b6b2dd
// declared property setter: - (void)setCanSendGUIDParameter:(BOOL)parameter;	// 0x32b69b7d
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x32b6b311
// declared property setter: - (void)setNeedsURLBag:(BOOL)bag;	// 0x32b6b331
// declared property setter: - (void)setUrlKnownToBeTrusted:(BOOL)beTrusted;	// 0x32b6b351
// declared property setter: - (void)setUseUserSpecificURLBag:(BOOL)bag;	// 0x32b6b371
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x32b6a195
// declared property getter: - (BOOL)urlKnownToBeTrusted;	// 0x32b6b341
// declared property getter: - (BOOL)useUserSpecificURLBag;	// 0x32b6b361
@end

