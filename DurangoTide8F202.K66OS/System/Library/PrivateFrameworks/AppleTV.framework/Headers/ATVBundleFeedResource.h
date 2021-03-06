/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVReadOnlyFeedResource.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSBundle;

__attribute__((visibility("hidden")))
@interface ATVBundleFeedResource : NSObject <ATVReadOnlyFeedResource> {
@private
	NSBundle *_bundle;	// 4 = 0x4
	NSMutableDictionary *_plistCache;	// 8 = 0x8
}
- (id)initWithBundle:(id)bundle;	// 0x33728119
- (void)dealloc;	// 0x337280bd
- (id)feedResourceNamed:(id)named;	// 0x337281b5
@end

