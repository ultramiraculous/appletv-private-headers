/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface UIMotionEvent : UIInternalEvent {
@private
	id _motionAccelerometer;	// 16 = 0x10
	int _subtype;	// 20 = 0x14
	int _shakeState;	// 24 = 0x18
	int _stateMachineState;	// 28 = 0x1c
	double _shakeStartTime;	// 32 = 0x20
	double _lastMovementTime;	// 40 = 0x28
	double _highLevelTime;	// 48 = 0x30
	double _lowEndTimeout;	// 56 = 0x38
	NSTimer *_idleTimer;	// 64 = 0x40
	BOOL _sentMotionBegan;	// 68 = 0x44
	float _lowPassState[10];	// 72 = 0x48
	unsigned _lowPassStateIndex;	// 112 = 0x70
	unsigned _highPassStateIndex;	// 116 = 0x74
	float _highPassState[2];	// 120 = 0x78
	int notifyToken;	// 128 = 0x80
}
@property(assign, nonatomic) int shakeState;	// G=0x330ee8b5; S=0x330ee8c5; @synthesize=_shakeState
@property(readonly, assign) int subtype;	// G=0x330ee18d; converted property
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)_accelerometer;	// 0x330ee241
- (float)_determineShakeLevelX:(float)x y:(float)y z:(float)z currentState:(int)state;	// 0x330ee70d
- (void)_enablePeakDetectionIfNecessary;	// 0x32ec775d
- (int)_feedStateMachine:(float)machine currentState:(int)state timestamp:(double)timestamp;	// 0x330ee4ad
- (float)_highPass:(float)pass;	// 0x330ee61d
- (void)_idleTimerFired;	// 0x32f2b131
- (id)_init;	// 0x32ee9a85
- (float)_lowPass:(float)pass;	// 0x330ee68d
- (void)_resetLowPassState;	// 0x32f2b229
- (void)_setSubtype:(int)subtype;	// 0x330ee19d
- (int)_shakeState;	// 0x330ee8a5
- (void)_willResume;	// 0x32eff161
- (void)_willSuspend;	// 0x32f2b0c9
- (void)accelerometer:(id)accelerometer didAccelerateWithTimeStamp:(double)timeStamp x:(float)x y:(float)y z:(float)z eventType:(int)type;	// 0x330ee345
- (void)dealloc;	// 0x330ee0e5
- (id)description;	// 0x330ee1ad
// declared property setter: - (void)setShakeState:(int)state;	// 0x330ee8c5
// declared property getter: - (int)shakeState;	// 0x330ee8b5
// converted property getter: - (int)subtype;	// 0x330ee18d
- (int)type;	// 0x330ee189
@end

