/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASGroupedQueue.h"

@class MSASEnqueuedCommand;

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue {
	MSASEnqueuedCommand *_lastEnqueuedCommand;	// 48 = 0x30
}
@property(retain, nonatomic) MSASEnqueuedCommand *lastEnqueuedCommand;	// G=0x337ff1b1; S=0x337ff1c1; @synthesize=_lastEnqueuedCommand
+ (id)calloutBlockForCommand:(id)command;	// 0x337fb681
- (void).cxx_destruct;	// 0x337ff1e9
- (void)MSASModel:(id)model didDeleteComment:(id)comment forAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x337fef71
- (void)MSASModel:(id)model didFindDeletedAccessControl:(id)control inAlbum:(id)album info:(id)info;	// 0x337fe7d1
- (void)MSASModel:(id)model didFindDeletedAlbum:(id)album info:(id)info;	// 0x337fe035
- (void)MSASModel:(id)model didFindDeletedAssetCollection:(id)collection inAlbum:(id)album info:(id)info;	// 0x337fe3e1
- (void)MSASModel:(id)model didFindDeletedInvitation:(id)invitation info:(id)info;	// 0x337feb7d
- (void)MSASModel:(id)model didFindNewAccessControl:(id)control inAlbum:(id)album info:(id)info;	// 0x337fe5d9
- (void)MSASModel:(id)model didFindNewAlbum:(id)album info:(id)info;	// 0x337fde81
- (void)MSASModel:(id)model didFindNewAssetCollection:(id)collection inAlbum:(id)album info:(id)info;	// 0x337fe1e9
- (void)MSASModel:(id)model didFindNewComment:(id)comment forAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x337fed31
- (void)MSASModel:(id)model didFindNewInvitation:(id)invitation info:(id)info;	// 0x337fe9c9
- (void)flushQueue;	// 0x337faf8d
- (BOOL)hasEnqueuedItems;	// 0x337faf4d
// declared property getter: - (id)lastEnqueuedCommand;	// 0x337ff1b1
// declared property setter: - (void)setLastEnqueuedCommand:(id)command;	// 0x337ff1c1
- (void)workQueueEnqueueCommand:(id)command variantParam:(id)param invariantParam:(id)param3;	// 0x337fb289
- (void)workQueueFlushQueue;	// 0x337fb029
@end
