/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVKeyValueStore;

__attribute__((visibility("hidden")))
@interface ATVKeyValueStoreCleanupTask : XXUnknownSuperclass {
	double _lastModifiedThreshold;	// 4 = 0x4
	ATVKeyValueStore *_keyValueStore;	// 12 = 0xc
}
- (void)dealloc;	// 0x1a124d
- (BOOL)perform;	// 0x1a12e9
- (void)setKeyValueStore:(id)store;	// 0x1a1299
- (void)setLastModifiedThreshold:(double)threshold;	// 0x1a12d5
@end
