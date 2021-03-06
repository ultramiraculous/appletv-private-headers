/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDRoot.h"
#import "iWorkImport-Structs.h"

@class GQDSLPageMargins, GQDSStylesheet;

@interface GQDSLPublication : GQDRoot {
	CGSize mPageSize;	// 36 = 0x24
	GQDSLPageMargins *mPageMargins;	// 44 = 0x2c
	GQDSStylesheet *mStylesheet;	// 48 = 0x30
	BOOL mHasBody;	// 52 = 0x34
	BOOL mIsOldAssetNameMapInitialized;	// 53 = 0x35
	CFDictionaryRef mOldAssetNameMap;	// 56 = 0x38
	BOOL mIsOldTemplateNameMapInitialized;	// 60 = 0x3c
	CFDictionaryRef mOldTemplateNameMap;	// 64 = 0x40
	BOOL mShowOutliner;	// 68 = 0x44
	BOOL mHasHeaders;	// 69 = 0x45
	BOOL mHasFooters;	// 70 = 0x46
}
@property(retain) id pageMargins;	// G=0x368ba675; S=0x368ba685; converted property
@property(retain) id stylesheet;	// G=0x368ba6c1; S=0x368ba6d1; converted property
+ (xmlNs *)appNamespace;	// 0x368ba57d
- (id)init;	// 0x368ba58d
- (id).cxx_construct;	// 0x368ba809
- (CFStringRef)createFixedPathForOldAppBundleResourcePath:(CFStringRef)oldAppBundleResourcePath;	// 0x368ba8a1
- (CFArrayRef)createUpgradedPathComponentsFromOldTemplatePathComponents:(CFArrayRef)oldTemplatePathComponents;	// 0x368baba5
- (CFStringRef)createUpgradedPathForOldAssetPath:(CFStringRef)oldAssetPath;	// 0x368baedd
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;	// 0x368ba749
- (void)dealloc;	// 0x368ba5cd
- (BOOL)hasBody;	// 0x368ba70d
- (BOOL)hasFooters;	// 0x368ba7f9
- (BOOL)hasHeaders;	// 0x368ba7e9
- (void)initializeAppBundleResourcesUrl;	// 0x368ba71d
// converted property getter: - (id)pageMargins;	// 0x368ba675
- (CGSize)pageSize;	// 0x368ba65d
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x368ba811
// converted property setter: - (void)setPageMargins:(id)margins;	// 0x368ba685
// converted property setter: - (void)setStylesheet:(id)stylesheet;	// 0x368ba6d1
- (BOOL)showOutliner;	// 0x368ba7d9
// converted property getter: - (id)stylesheet;	// 0x368ba6c1
@end

