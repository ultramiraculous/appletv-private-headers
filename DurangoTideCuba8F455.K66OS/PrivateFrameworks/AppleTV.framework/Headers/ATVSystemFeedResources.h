/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVSystemFeedResources : NSObject {
@private
	NSDictionary *_bundlesByNamespace;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x306f4aa1
- (id)init;	// 0x306f482d
- (id)_computedResourceNamed:(id)named;	// 0x306f46bd
- (id)_resourceNamed:(id)named inBundles:(id)bundles;	// 0x306f4ad1
- (void)dealloc;	// 0x306f47e5
- (id)feedResourceNamed:(id)named inNamespace:(id)aNamespace;	// 0x306f4759
@end

