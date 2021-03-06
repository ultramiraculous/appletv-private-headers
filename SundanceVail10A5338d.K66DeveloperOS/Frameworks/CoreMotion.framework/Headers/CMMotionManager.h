/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library

@class CMDeviceMotion, CMGyroData, CMAccelerometerData, CMMagnetometerData;

@interface CMMotionManager : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isAccelerometerActive) BOOL accelerometerActive;	// G=0x33f0c8b9; @dynamic
@property(readonly, assign, nonatomic, getter=isAccelerometerAvailable) BOOL accelerometerAvailable;	// G=0x33f0c8a9; @dynamic
@property(readonly, assign) CMAccelerometerData *accelerometerData;	// G=0x33f0c9a1; @dynamic
@property(assign, nonatomic) double accelerometerUpdateInterval;	// G=0x33f0c979; S=0x33f0c8dd; @dynamic
@property(readonly, assign, nonatomic) int attitudeReferenceFrame;	// G=0x33f0d4ed; @dynamic
@property(readonly, assign) CMDeviceMotion *deviceMotion;	// G=0x33f0d50d; @dynamic
@property(readonly, assign, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;	// G=0x33f0d405; @dynamic
@property(readonly, assign, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;	// G=0x33f0d3dd; @dynamic
@property(assign, nonatomic) double deviceMotionUpdateInterval;	// G=0x33f0d4c5; S=0x33f0d429; @dynamic
@property(readonly, assign, nonatomic, getter=isGyroActive) BOOL gyroActive;	// G=0x33f0ce55; @dynamic
@property(readonly, assign, nonatomic, getter=isGyroAvailable) BOOL gyroAvailable;	// G=0x33f0ce45; @dynamic
@property(readonly, assign) CMGyroData *gyroData;	// G=0x33f0cf3d; @dynamic
@property(assign, nonatomic) double gyroUpdateInterval;	// G=0x33f0cf15; S=0x33f0ce79; @dynamic
@property(readonly, assign, nonatomic, getter=isMagnetometerActive) BOOL magnetometerActive;	// G=0x33f0dd79; 
@property(readonly, assign, nonatomic, getter=isMagnetometerAvailable) BOOL magnetometerAvailable;	// G=0x33f0dd69; 
@property(readonly, assign) CMMagnetometerData *magnetometerData;	// G=0x33f0de61; 
@property(assign, nonatomic) double magnetometerUpdateInterval;	// G=0x33f0de39; S=0x33f0dd9d; 
@property(assign, nonatomic) BOOL showsDeviceMovementDisplay;	// G=0x33f0e389; S=0x33f0e305; 
@property(assign) BOOL useAccelerometer;	// G=0x33f0bf89; S=0x33f0bf61; converted property
+ (unsigned)availableAttitudeReferenceFrames;	// 0x33f0c05d
+ (void)dummySelector:(id)selector;	// 0x33f0fc71
+ (void)initialize;	// 0x33f0bfad
+ (void)setAllowInBackground:(BOOL)background;	// 0x33f0c07d
- (id)init;	// 0x33f0c081
- (id)initPrivate;	// 0x33f0c211
- (id)initUsing6AxisSensorFusion;	// 0x33f0e479
- (id)initUsingGyroOnlySensorFusion;	// 0x33f0e4c9
// declared property getter: - (id)accelerometerData;	// 0x33f0c9a1
// declared property getter: - (double)accelerometerUpdateInterval;	// 0x33f0c979
// declared property getter: - (int)attitudeReferenceFrame;	// 0x33f0d4ed
- (void)dealloc;	// 0x33f0c57d
- (void)deallocPrivate;	// 0x33f0c6e9
// declared property getter: - (id)deviceMotion;	// 0x33f0d50d
// declared property getter: - (double)deviceMotionUpdateInterval;	// 0x33f0d4c5
- (void)didBecomeActive:(id)active;	// 0x33f0fb19
- (void)didBecomeActivePrivate:(id)aPrivate;	// 0x33f0fc29
- (void)dismissDeviceMovementDisplay;	// 0x33f0e439
// declared property getter: - (id)gyroData;	// 0x33f0cf3d
// declared property getter: - (double)gyroUpdateInterval;	// 0x33f0cf15
// declared property getter: - (BOOL)isAccelerometerActive;	// 0x33f0c8b9
// declared property getter: - (BOOL)isAccelerometerAvailable;	// 0x33f0c8a9
// declared property getter: - (BOOL)isDeviceMotionActive;	// 0x33f0d405
// declared property getter: - (BOOL)isDeviceMotionAvailable;	// 0x33f0d3dd
// declared property getter: - (BOOL)isGyroActive;	// 0x33f0ce55
// declared property getter: - (BOOL)isGyroAvailable;	// 0x33f0ce45
// declared property getter: - (BOOL)isMagnetometerActive;	// 0x33f0dd79
// declared property getter: - (BOOL)isMagnetometerAvailable;	// 0x33f0dd69
// declared property getter: - (id)magnetometerData;	// 0x33f0de61
// declared property getter: - (double)magnetometerUpdateInterval;	// 0x33f0de39
- (void)onAccelerometer:(const Sample *)accelerometer;	// 0x33f0ebf9
- (void)onDeviceMotion:(const Sample *)motion;	// 0x33f0f2a9
- (void)onGeomagneticModel:(const XXStruct_01mbIB *)model;	// 0x33f0f9f1
- (void)onGyro:(const Sample *)gyro;	// 0x33f0ee31
- (void)onMagnetometer:(const Sample *)magnetometer;	// 0x33f0f071
- (void)setAccelerometerDataCallback:(/*function-pointer*/ void *)callback info:(void *)info interval:(double)interval;	// 0x33f0e515
// declared property setter: - (void)setAccelerometerUpdateInterval:(double)interval;	// 0x33f0c8dd
- (void)setAccelerometerUpdateIntervalPrivate:(double)aPrivate;	// 0x33f0cc19
- (void)setDeviceMotionCallback:(/*function-pointer*/ void *)callback info:(void *)info interval:(double)interval fsync:(BOOL)fsync;	// 0x33f0e94d
// declared property setter: - (void)setDeviceMotionUpdateInterval:(double)interval;	// 0x33f0d429
- (void)setDeviceMotionUpdateIntervalPrivate:(double)aPrivate;	// 0x33f0d9c1
- (void)setGyroDataCallback:(/*function-pointer*/ void *)callback info:(void *)info interval:(double)interval;	// 0x33f0e731
// declared property setter: - (void)setGyroUpdateInterval:(double)interval;	// 0x33f0ce79
- (void)setGyroUpdateIntervalPrivate:(double)aPrivate;	// 0x33f0d1b1
// declared property setter: - (void)setMagnetometerUpdateInterval:(double)interval;	// 0x33f0dd9d
- (void)setMagnetometerUpdateIntervalPrivate:(double)aPrivate;	// 0x33f0e0d9
// declared property setter: - (void)setShowsDeviceMovementDisplay:(BOOL)display;	// 0x33f0e305
- (void)setShowsDeviceMovementDisplayPrivate:(BOOL)aPrivate;	// 0x33f0e3ad
// converted property setter: - (void)setUseAccelerometer:(BOOL)accelerometer;	// 0x33f0bf61
- (void)showDeviceMovementDisplay;	// 0x33f0e3e5
// declared property getter: - (BOOL)showsDeviceMovementDisplay;	// 0x33f0e389
- (void)startAccelerometerUpdates;	// 0x33f0ca51
- (void)startAccelerometerUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x33f0cc81
- (void)startAccelerometerUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x33f0cacd
- (void)startDeviceMotionUpdates;	// 0x33f0d645
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(int)frame toQueue:(id)queue withHandler:(id)handler;	// 0x33f0da29
- (void)startDeviceMotionUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x33f0d6e1
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)frame;	// 0x33f0d7d1
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)frame toQueue:(id)queue withHandler:(id)handler;	// 0x33f0d861
- (void)startGyroUpdates;	// 0x33f0cfed
- (void)startGyroUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x33f0d219
- (void)startGyroUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x33f0d069
- (void)startMagnetometerUpdates;	// 0x33f0df11
- (void)startMagnetometerUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x33f0e141
- (void)startMagnetometerUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x33f0df8d
- (void)stopAccelerometerUpdates;	// 0x33f0cb9d
- (void)stopAccelerometerUpdatesPrivate;	// 0x33f0cd99
- (void)stopDeviceMotionUpdates;	// 0x33f0d945
- (void)stopDeviceMotionUpdatesPrivate;	// 0x33f0dc7d
- (void)stopGyroUpdates;	// 0x33f0d139
- (void)stopGyroUpdatesPrivate;	// 0x33f0d331
- (void)stopMagnetometerUpdates;	// 0x33f0e05d
- (void)stopMagnetometerUpdatesPrivate;	// 0x33f0e259
// converted property getter: - (BOOL)useAccelerometer;	// 0x33f0bf89
- (void)willResignActive:(id)active;	// 0x33f0fa6d
- (void)willResignActivePrivate:(id)aPrivate;	// 0x33f0fbc5
@end

