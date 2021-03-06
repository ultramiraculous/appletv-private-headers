/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject {
	NSMutableDictionary *_displayBundlesById;	// 4 = 0x4
}
+ (id)sharedLoader;	// 0x33b35de5
- (id)init;	// 0x33b36035
- (void)_lookForDisplayBundles;	// 0x33b35e2d
- (id)copyDisplayBundleWithPreviewItem:(id)previewItem displayBundleIdentifier:(id)identifier;	// 0x33b3629d
- (void)dealloc;	// 0x33b360ad
- (Class)displayBundleClassForDocumentType:(id)documentType;	// 0x33b36151
- (Class)loadDisplayBundle:(id)bundle;	// 0x33b360f9
@end

