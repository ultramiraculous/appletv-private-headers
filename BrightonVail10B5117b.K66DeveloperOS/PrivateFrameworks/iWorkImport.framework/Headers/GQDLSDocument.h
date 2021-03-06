/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDRoot.h"
#import "iWorkImport-Structs.h"

@class GQDSStylesheet;

@interface GQDLSDocument : GQDRoot {
	GQDSStylesheet *mStylesheet;	// 36 = 0x24
	BOOL mIsOldAssetNameMapInitialized;	// 40 = 0x28
	CFDictionaryRef mOldAssetNameMap;	// 44 = 0x2c
}
@property(retain) id stylesheet;	// G=0x36a91d6d; S=0x36a91d7d; converted property
+ (xmlNs *)appNamespace;	// 0x36a91cf9
- (CFStringRef)createUpgradedAppBundleResourcePath:(CFStringRef)path;	// 0x36a91e5d
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;	// 0x36a91db9
- (void)dealloc;	// 0x36a91d09
- (void)initializeAppBundleResourcesUrl;	// 0x36a91e31
// converted property setter: - (void)setStylesheet:(id)stylesheet;	// 0x36a91d7d
// converted property getter: - (id)stylesheet;	// 0x36a91d6d
@end

