/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVJSContextProvider.h"
#import "ATVMerchant.h"

@class ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVMerchant_ITMS : ATVMerchant <ATVJSContextProvider> {
	ATVJSContext *_javaScriptContext;	// 28 = 0x1c
	BOOL _installingResources;	// 32 = 0x20
	double _resourceInstallationTime;	// 36 = 0x24
}
@property(assign, nonatomic) BOOL installingResources;	// G=0x1e7951; S=0x1e7961; @synthesize=_installingResources
@property(readonly, assign) ATVJSContext *javaScriptContext;	// G=0x1e7371; 
@property(assign, nonatomic) double resourceInstallationTime;	// G=0x1e7971; S=0x1e7989; @synthesize=_resourceInstallationTime
- (void)_installBootstrapResources;	// 0x1e76f1
- (void)_installJavascriptWithConfiguration:(int)configuration completionHandler:(id)handler;	// 0x1e744d
- (id)accountType;	// 0x1e6ca9
- (void)dealloc;	// 0x1e6bf9
- (void)decorateRequestProperties:(id)properties;	// 0x1e6cc5
- (BOOL)enabled;	// 0x1e721d
- (id)feedResourceNamed:(id)named;	// 0x1e726d
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x1e6d85
- (BOOL)hasAffinityToURL:(id)url;	// 0x1e70ad
- (id)identifier;	// 0x1e6c45
// declared property getter: - (BOOL)installingResources;	// 0x1e7951
// declared property getter: - (id)javaScriptContext;	// 0x1e7371
// declared property getter: - (double)resourceInstallationTime;	// 0x1e7971
// declared property setter: - (void)setInstallingResources:(BOOL)resources;	// 0x1e7961
// declared property setter: - (void)setResourceInstallationTime:(double)time;	// 0x1e7989
- (BOOL)updateWithVendorBag:(id)vendorBag;	// 0x1e7221
@end

