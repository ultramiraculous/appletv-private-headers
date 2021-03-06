/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSOperationQueue, CMAttitude, CMMotionManager;

@interface MPMotionManager : NSObject {
	NSMutableSet *_accelerometerHandlerClients;	// 4 = 0x4
	BOOL _accelerometerUpdatesActive;	// 8 = 0x8
	CMAttitude *_attitude;	// 12 = 0xc
	CMMotionManager *_motionManager;	// 16 = 0x10
	NSOperationQueue *_operationQueue;	// 20 = 0x14
}
+ (id)sharedMotionManager;	// 0x342205c9
- (id)init;	// 0x34220635
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x34220aed
- (void)_applicationWillResignActiveNotification:(id)_application;	// 0x34220afd
- (void)_beginMotionUpdates;	// 0x34220ba5
- (id)addObserverWithAccelerometerHandler:(id)accelerometerHandler;	// 0x3422088d
- (void)dealloc;	// 0x34220769
- (void)removeObserver:(id)observer;	// 0x342209b9
@end

