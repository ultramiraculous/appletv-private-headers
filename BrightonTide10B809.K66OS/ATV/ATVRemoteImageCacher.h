/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVRemoteImageCacher : XXUnknownSuperclass {
	int _requiredURLLoadIndex;	// 4 = 0x4
	NSArray *_requiredURLImageProxies;	// 8 = 0x8
	NSArray *_requiredURLImageIDs;	// 12 = 0xc
	BOOL _cancelled;	// 16 = 0x10
	BOOL _anyImageFailures;	// 17 = 0x11
	id _completionHandler;	// 20 = 0x14
}
- (void)_loadNextRequiredURL;	// 0x1e57dd
- (void)_requiredImageLoadFailed:(id)failed;	// 0x1e56e5
- (void)_requiredImageLoaded:(id)loaded;	// 0x1e565d
- (void)_resetState;	// 0x1e5575
- (void)cacheImageURLs:(id)urls completionHandler:(id)handler;	// 0x1e5a4d
- (void)cancel;	// 0x1e5c95
- (void)dealloc;	// 0x1e54d1
@end
