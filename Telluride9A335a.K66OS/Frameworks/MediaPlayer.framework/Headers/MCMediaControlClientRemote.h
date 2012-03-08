/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MCMediaControlClientRemote : NSObject {
}
- (void)authorizeWithPICRequest:(id)picrequest completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x301803c5
- (void)dealloc;	// 0x30180319
- (void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x3018070d
- (void)getPositionWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x30180789
- (void)getVolumeWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x301808fd
- (void)invalidate;	// 0x301803b5
- (void)playRemoteWithParams:(id)params completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x301805b5
- (void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x301804c9
- (void)setEventHandlerQueue:(dispatch_queue_s *)queue eventHandlerBlock:(id)block;	// 0x301809f5
- (void)setHost:(id)host;	// 0x30180361
- (void)setPassword:(id)password;	// 0x30180475
- (void)setPosition:(float)position completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x30180805
- (void)setRate:(float)rate completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x30180881
- (void)setVolume:(float)volume completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x30180979
- (void)stopWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x30180691
@end
