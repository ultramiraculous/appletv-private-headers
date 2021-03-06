/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVReadWriteFeedResource.h"

@class NSMutableDictionary, NSLock;

__attribute__((visibility("hidden")))
@interface ATVDictionaryFeedResource : XXUnknownSuperclass <ATVReadWriteFeedResource> {
	NSMutableDictionary *_prefs;	// 4 = 0x4
	NSLock *_prefsLock;	// 8 = 0x8
}
- (id)init;	// 0x12f359
- (void)clearFeedResources;	// 0x12f551
- (void)dealloc;	// 0x12f3d9
- (id)feedResourceNamed:(id)named;	// 0x12f43d
- (void)setFeedResource:(id)resource named:(id)named;	// 0x12f4c1
@end

