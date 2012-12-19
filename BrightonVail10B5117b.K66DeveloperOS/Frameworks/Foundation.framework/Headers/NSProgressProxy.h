/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSProgress.h"


__attribute__((visibility("hidden")))
@interface NSProgressProxy : NSProgress {
	id<NSProgressPublisher> _forwarder;	// 80 = 0x50
	BOOL _isOld;	// 84 = 0x54
	id _unpublishingHandler;	// 88 = 0x58
}
@property(readonly, assign) BOOL isOld;	// G=0x31ab43a1; converted property
- (id)_initWithForwarder:(id)forwarder values:(id)values isOld:(BOOL)old;	// 0x31ab3c8d
- (void)_invokePublishingHandler:(id)handler;	// 0x31ab3d59
- (void)_invokeUnpublishingHandler;	// 0x31ab3e59
- (void)acknowledgeWithSuccess:(BOOL)success;	// 0x31ab42fd
- (void)becomeCurrentWithPendingUnitCount:(long long)pendingUnitCount;	// 0x31ab3f15
- (void)cancel;	// 0x31ab42bd
- (void)dealloc;	// 0x31ab3cf5
// converted property getter: - (BOOL)isOld;	// 0x31ab43a1
- (void)pause;	// 0x31ab42dd
- (void)publish;	// 0x31ab422d
- (void)resignCurrent;	// 0x31ab3f5d
- (void)setCancellable:(BOOL)cancellable;	// 0x31ab407d
- (void)setCancellationHandler:(id)handler;	// 0x31ab410d
- (void)setCompletedUnitCount:(long long)count;	// 0x31ab3fed
- (void)setKind:(id)kind;	// 0x31ab41e5
- (void)setLocalizedDescription:(id)description;	// 0x31ab4035
- (void)setPausable:(BOOL)pausable;	// 0x31ab40c5
- (void)setPausingHandler:(id)handler;	// 0x31ab4155
- (void)setTotalUnitCount:(long long)count;	// 0x31ab3fa5
- (void)setUserInfoObject:(id)object forKey:(id)key;	// 0x31ab419d
- (void)unpublish;	// 0x31ab4275
@end
