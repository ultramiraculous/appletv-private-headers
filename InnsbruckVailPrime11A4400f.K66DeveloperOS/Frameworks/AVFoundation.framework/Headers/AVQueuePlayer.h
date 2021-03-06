/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVPlayer.h"
#import "AVFoundation-Structs.h"

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
	AVQueuePlayerInternal *_queuePlayer;	// 8 = 0x8
}
+ (void)initialize;	// 0x2c28a5b1
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x2c28a649
+ (id)playerWithURL:(id)url;	// 0x2c28a68d
+ (id)queuePlayerWithItems:(id)items;	// 0x2c28a601
- (id)init;	// 0x2c28a6d1
- (id)initWithItems:(id)items;	// 0x2c28a765
- (int)_defaultActionAtItemEnd;	// 0x2c28a89d
- (void)_enqueueModification:(id)modification;	// 0x2c28a995
- (BOOL)_shouldEnqueueModifications;	// 0x2c28a96d
- (void)advanceToNextItem;	// 0x2c28a8e1
- (void)beginModifications;	// 0x2c28ad29
- (BOOL)canInsertItem:(id)item afterItem:(id)item2;	// 0x2c28a911
- (void)commitModifications;	// 0x2c28ad4d
- (void)dealloc;	// 0x2c28a835
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x2c28aa39
- (id)items;	// 0x2c28a8d1
- (void)removeAllItems;	// 0x2c28ac81
- (void)removeItem:(id)item;	// 0x2c28ab6d
- (void)setActionAtItemEnd:(int)itemEnd;	// 0x2c28a8a1
@end

