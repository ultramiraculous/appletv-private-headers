/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVSystemFeedResources : XXUnknownSuperclass {
	NSDictionary *_bundlesByNamespace;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x13c279
- (id)init;	// 0x13c2dd
- (id)_computedResourceNamed:(id)named;	// 0x13c705
- (id)_resourceNamed:(id)named inBundles:(id)bundles;	// 0x13c649
- (void)dealloc;	// 0x13c55d
- (id)feedResourceNamed:(id)named inNamespace:(id)aNamespace;	// 0x13c5a9
@end
