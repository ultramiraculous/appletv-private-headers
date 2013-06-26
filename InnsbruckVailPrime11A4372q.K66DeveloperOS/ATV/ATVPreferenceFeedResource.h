/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDictionaryFeedResource.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVPreferenceFeedResource : ATVDictionaryFeedResource {
	NSString *_path;	// 12 = 0xc
	BOOL _dirty;	// 16 = 0x10
	unsigned _format;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_prefsWriteQueue;	// 24 = 0x18
}
- (id)initWithPath:(id)path;	// 0x13b751
- (void)_savePrefs;	// 0x13ba8d
- (void)clearFeedResources;	// 0x13b9dd
- (void)dealloc;	// 0x13b8a9
- (void)setFeedResource:(id)resource named:(id)named;	// 0x13b92d
@end
