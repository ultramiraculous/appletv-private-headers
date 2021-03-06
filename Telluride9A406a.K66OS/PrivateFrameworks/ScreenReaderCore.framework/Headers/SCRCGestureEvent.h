/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSObject.h> // Unknown library

@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject {
	unsigned _deviceIdentifier;	// 4 = 0x4
	SCRCGestureFinger *_finger[5];	// 8 = 0x8
	unsigned _fingerCount;	// 28 = 0x1c
	double _time;	// 32 = 0x20
	CGPoint _averageLocation;	// 40 = 0x28
}
@property(readonly, assign) CGPoint averageLocation;	// G=0x325ddfdd; converted property
@property(readonly, assign) unsigned deviceIdentifier;	// G=0x325ddee9; converted property
@property(readonly, assign) unsigned fingerCount;	// G=0x325ddf11; converted property
@property(readonly, assign) double time;	// G=0x325ddef9; converted property
- (id)initWithDeviceIdentifier:(unsigned)deviceIdentifier;	// 0x325de039
- (void)addFingerWithIdentifier:(unsigned)identifier location:(CGPoint)location;	// 0x325de3ed
// converted property getter: - (CGPoint)averageLocation;	// 0x325ddfdd
- (CGPoint)balancedLocation;	// 0x325de0fd
- (void)dealloc;	// 0x325de571
- (id)description;	// 0x325de4ad
// converted property getter: - (unsigned)deviceIdentifier;	// 0x325ddee9
- (id)fingerAtIndex:(unsigned)index;	// 0x325ddf21
// converted property getter: - (unsigned)fingerCount;	// 0x325ddf11
- (CGRect)fingerFrame;	// 0x325de13d
- (id)fingerWithIdentifier:(unsigned)identifier;	// 0x325ddf35
- (id)fingerWithoutIdentifier:(unsigned)identifier;	// 0x325ddf89
- (id)fingers;	// 0x325de255
- (BOOL)isCancelEvent;	// 0x325de035
- (CGPoint)magneticLocation;	// 0x325de09d
- (void)removeFingerWithIdentifier:(unsigned)identifier;	// 0x325de2b5
// converted property getter: - (double)time;	// 0x325ddef9
@end

