/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVReadOnlyFeedResource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSBundle;

__attribute__((visibility("hidden")))
@interface ATVBundleFeedResource : XXUnknownSuperclass <ATVReadOnlyFeedResource> {
	NSString *_basePath;	// 4 = 0x4
	NSBundle *_bundle;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *path;	// G=0x143a61; 
+ (void)initialize;	// 0x1438e1
- (id)initWithBundlePath:(id)bundlePath;	// 0x14394d
- (void)dealloc;	// 0x1439fd
- (id)feedResourceNamed:(id)named;	// 0x143a71
// declared property getter: - (id)path;	// 0x143a61
@end

