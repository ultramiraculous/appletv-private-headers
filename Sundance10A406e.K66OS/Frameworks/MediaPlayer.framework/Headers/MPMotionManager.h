/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSOperationQueue, NSMutableSet, CMAttitude, CMMotionManager;

@interface MPMotionManager : NSObject {
	NSMutableSet *_accelerometerHandlerClients;	// 4 = 0x4
	BOOL _accelerometerUpdatesActive;	// 8 = 0x8
	CMAttitude *_attitude;	// 12 = 0xc
	CMMotionManager *_motionManager;	// 16 = 0x10
	NSOperationQueue *_operationQueue;	// 20 = 0x14
}
+ (id)sharedMotionManager;	// 0x35d89f41
- (id)init;	// 0x35d89fad
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x35d8a465
- (void)_applicationWillResignActiveNotification:(id)_application;	// 0x35d8a475
- (void)_beginMotionUpdates;	// 0x35d8a51d
- (id)addObserverWithAccelerometerHandler:(id)accelerometerHandler;	// 0x35d8a205
- (void)dealloc;	// 0x35d8a0e1
- (void)removeObserver:(id)observer;	// 0x35d8a331
@end
