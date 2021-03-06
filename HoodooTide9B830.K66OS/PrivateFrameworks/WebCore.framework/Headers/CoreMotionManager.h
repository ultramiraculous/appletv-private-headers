/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CMMotionManager, CLLocationManager, NSTimer;

__attribute__((visibility("hidden")))
@interface CoreMotionManager : NSObject {
@private
	CMMotionManager *m_motionManager;	// 4 = 0x4
	CLLocationManager *m_locationManager;	// 8 = 0x8
	HashSet<WebCore::DeviceMotionClientIPhone*,WTF::PtrHash<WebCore::DeviceMotionClientIPhone*>,WTF::HashTraits<WebCore::DeviceMotionClientIPhone*> > m_deviceMotionClients;	// 12 = 0xc
	HashSet<WebCore::DeviceOrientationClientIPhone*,WTF::PtrHash<WebCore::DeviceOrientationClientIPhone*>,WTF::HashTraits<WebCore::DeviceOrientationClientIPhone*> > m_deviceOrientationClients;	// 32 = 0x20
	NSTimer *m_updateTimer;	// 52 = 0x34
	BOOL m_gyroAvailable;	// 56 = 0x38
	BOOL m_headingAvailable;	// 57 = 0x39
}
@property(readonly, assign) BOOL gyroAvailable;	// G=0x3589eedd; converted property
@property(readonly, assign) BOOL headingAvailable;	// G=0x3589eeed; converted property
+ (id)sharedManager;	// 0x3589ef89
- (id)init;	// 0x3589ef31
- (id).cxx_construct;	// 0x3589eefd
- (void).cxx_destruct;	// 0x3589f0cd
- (void)addMotionClient:(DeviceMotionClientIPhone *)client;	// 0x3589f5f1
- (void)addOrientationClient:(DeviceOrientationClientIPhone *)client;	// 0x3589f585
- (void)checkClientStatus;	// 0x3589f261
- (void)dealloc;	// 0x3589f629
// converted property getter: - (BOOL)gyroAvailable;	// 0x3589eedd
// converted property getter: - (BOOL)headingAvailable;	// 0x3589eeed
- (void)initializeOnMainThread;	// 0x3589f439
- (void)removeMotionClient:(DeviceMotionClientIPhone *)client;	// 0x3589f5bd
- (void)removeOrientationClient:(DeviceOrientationClientIPhone *)client;	// 0x3589f551
- (void)sendAccelerometerData:(id)data;	// 0x3589f15d
- (void)sendMotionData:(id)data withHeading:(id)heading;	// 0x3589f0fd
- (void)update;	// 0x3589f1ad
@end

