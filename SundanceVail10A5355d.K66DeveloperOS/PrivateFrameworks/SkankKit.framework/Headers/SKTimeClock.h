/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayerModule.h"

@class NSTimer;

@interface SKTimeClock : SKLayerModule {
	NSTimer *_timer;	// 16 = 0x10
}
+ (Class)layerClass;	// 0x34f35889
- (id)init;	// 0x34f358a5
- (void)initLayer:(id)layer;	// 0x34f35985
- (void)dealloc;	// 0x34f35939
- (void)timerUpdateClock:(id)clock;	// 0x34f359c9
- (void)updateClock;	// 0x34f359d9
@end

