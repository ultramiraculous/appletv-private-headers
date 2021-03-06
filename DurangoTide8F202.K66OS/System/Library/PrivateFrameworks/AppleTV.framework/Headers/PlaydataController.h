/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PlaydataController : NSObject {
}
+ (void)cleanUp;	// 0x3385c16c
+ (id)instance;	// 0x3385c1a8
- (id)init;	// 0x3385c330
- (void)changeState:(int)state;	// 0x3385c05c
- (void)dealloc;	// 0x3385c0f8
- (void)downloadableDidChange:(unsigned)downloadable playbackPosition:(double)position;	// 0x3385c0a0
- (void)playbackDidEnd:(double)playback;	// 0x3385cbb8
- (void)playbackDidPause:(double)playback;	// 0x3385c610
- (void)playbackDidResume:(double)playback;	// 0x3385c754
- (void)playbackDidStart:(unsigned)playback position:(double)position;	// 0x3385c898
- (void)playbackNewSession;	// 0x3385c1fc
- (void)playbackRetrySend;	// 0x3385c3e0
- (void)playbackUpdateProgress:(double)progress;	// 0x3385c4e4
- (BOOL)sessionOpened;	// 0x3385c06c
- (id)stringWithState:(int)state;	// 0x3385bfc8
- (void)updatePersistor:(double)persistor;	// 0x3385cd7c
@end

