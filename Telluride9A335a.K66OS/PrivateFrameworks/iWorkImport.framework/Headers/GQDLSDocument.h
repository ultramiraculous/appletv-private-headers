/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDRoot.h"
#import "iWorkImport-Structs.h"

@class GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDLSDocument : GQDRoot {
@private
	GQDSStylesheet *mStylesheet;	// 36 = 0x24
	BOOL mIsOldAssetNameMapInitialized;	// 40 = 0x28
	CFDictionaryRef mOldAssetNameMap;	// 44 = 0x2c
}
@property(retain) id stylesheet;	// G=0x3046ba55; S=0x3046ba91; converted property
+ (xmlNs *)appNamespace;	// 0x3046ba45
- (CFStringRef)createUpgradedAppBundleResourcePath:(CFStringRef)path;	// 0x3046bbbd
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;	// 0x3046bb35
- (void)dealloc;	// 0x3046bad1
- (void)initializeAppBundleResourcesUrl;	// 0x3046ba65
// converted property setter: - (void)setStylesheet:(id)stylesheet;	// 0x3046ba91
// converted property getter: - (id)stylesheet;	// 0x3046ba55
@end

