/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "BackBoardServices-Structs.h"

@class NSLock, NSThread;
@protocol BKSAccelerometerDelegate;

@interface BKSAccelerometer : NSObject {
	id<BKSAccelerometerDelegate> _delegate;	// 4 = 0x4
	CFRunLoopSourceRef _accelerometerEventsSource;	// 8 = 0x8
	CFRunLoopRef _accelerometerEventsRunLoop;	// 12 = 0xc
	double _interval;	// 16 = 0x10
	NSLock *_lock;	// 24 = 0x18
	BOOL _orientationEventsEnabled;	// 28 = 0x1c
	int _orientationEventsToken;	// 32 = 0x20
	NSThread *_orientationEventsThread;	// 36 = 0x24
	float _xThreshold;	// 40 = 0x28
	float _yThreshold;	// 44 = 0x2c
	float _zThreshold;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL accelerometerEventsEnabled;	// G=0x340d51c5; S=0x340d51dd; 
@property(assign, nonatomic) id<BKSAccelerometerDelegate> delegate;	// G=0x340d5bc1; S=0x340d5bd1; @synthesize=_delegate
@property(assign, nonatomic) BOOL orientationEventsEnabled;	// G=0x340d5b11; S=0x340d59a1; 
@property(assign, nonatomic) double updateInterval;	// G=0x340d5259; S=0x340d5271; 
@property(assign, nonatomic) float xThreshold;	// G=0x340d52f5; S=0x340d5305; 
@property(assign, nonatomic) float yThreshold;	// G=0x340d5389; S=0x340d5399; 
@property(assign, nonatomic) float zThreshold;	// G=0x340d541d; S=0x340d542d; 
- (id)init;	// 0x340d5099
- (void)_checkIn;	// 0x340d54b1
- (void)_checkOut;	// 0x340d581d
- (void)_orientationDidChange;	// 0x340d5b61
- (id)_orientationEventsThread;	// 0x340d5b51
- (void)_serverWasRestarted;	// 0x340d58e1
// declared property getter: - (BOOL)accelerometerEventsEnabled;	// 0x340d51c5
- (int)currentDeviceOrientation;	// 0x340d5b21
- (void)dealloc;	// 0x340d513d
// declared property getter: - (id)delegate;	// 0x340d5bc1
// declared property getter: - (BOOL)orientationEventsEnabled;	// 0x340d5b11
// declared property setter: - (void)setAccelerometerEventsEnabled:(BOOL)enabled;	// 0x340d51dd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x340d5bd1
// declared property setter: - (void)setOrientationEventsEnabled:(BOOL)enabled;	// 0x340d59a1
// declared property setter: - (void)setUpdateInterval:(double)interval;	// 0x340d5271
// declared property setter: - (void)setXThreshold:(float)threshold;	// 0x340d5305
// declared property setter: - (void)setYThreshold:(float)threshold;	// 0x340d5399
// declared property setter: - (void)setZThreshold:(float)threshold;	// 0x340d542d
// declared property getter: - (double)updateInterval;	// 0x340d5259
// declared property getter: - (float)xThreshold;	// 0x340d52f5
// declared property getter: - (float)yThreshold;	// 0x340d5389
// declared property getter: - (float)zThreshold;	// 0x340d541d
@end

