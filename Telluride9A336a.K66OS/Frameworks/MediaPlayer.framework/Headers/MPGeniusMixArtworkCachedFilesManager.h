/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPGeniusMixArtworkCachedFilesManager : NSObject {
@private
	dispatch_queue_s *_cleanupQueue;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x35bb1cd9
- (id)init;	// 0x35bb1d45
- (void)cleanupIfNecessaryWithCompletionBlock:(id)completionBlock;	// 0x35bb21c9
- (void)dealloc;	// 0x35bb1f41
- (void)onQueueSetCurrentSyncGeneration:(unsigned long long)generation;	// 0x35bb1f81
@end

