/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <NSObject.h> // Unknown library


@interface UIAccessibilityLoader : NSObject {
}
+ (id)_accessibilityBundlesForBundle:(id)bundle;	// 0x371ba969
+ (void)_accessibilityInitializeRuntimeOverrides;	// 0x371bb24d
+ (void)_accessibilityLoadSubbundles:(id)subbundles;	// 0x371bb131
+ (void)_accessibilityReenabled;	// 0x371bb56d
+ (void)_accessibilityStartServer;	// 0x371bb281
+ (void)_accessibilityStopServer;	// 0x371bb5b9
+ (id)_axBundleForBundle:(id)bundle;	// 0x371baab5
+ (id)_loadAXBundleForBundle:(id)bundle didLoad:(BOOL *)load;	// 0x371bb061
+ (id)_loadAXBundleForBundle:(id)bundle didLoad:(BOOL *)load forceLoad:(BOOL)load3 loadSubbundles:(BOOL)subbundles;	// 0x371baea1
+ (void)initialize;	// 0x371ba829
+ (id)loadAccessibilityBundle:(id)bundle didLoad:(BOOL *)load;	// 0x371bae4d
+ (id)loadAccessibilityBundle:(id)bundle didLoad:(BOOL *)load force:(BOOL)force;	// 0x371bae71
+ (void)loadActualAccessibilityBundle:(id)bundle didLoad:(BOOL *)load loadSubbundles:(BOOL)subbundles;	// 0x371bacb9
@end

