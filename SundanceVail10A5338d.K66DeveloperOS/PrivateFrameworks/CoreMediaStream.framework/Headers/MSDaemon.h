/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class NSTimer;

@interface MSDaemon : NSObject {
	int _busyCount;	// 4 = 0x4
	int _UIBusyCount;	// 8 = 0x8
	BOOL _stabilizedIsBusy;	// 12 = 0xc
	NSTimer *_hysteresisTimer;	// 16 = 0x10
}
@property(assign, nonatomic) int UIBusyCount;	// G=0x3379f079; S=0x3379f089; @synthesize=_UIBusyCount
@property(assign, nonatomic) int busyCount;	// G=0x3379f059; S=0x3379f069; @synthesize=_busyCount
@property(retain, nonatomic) NSTimer *hysteresisTimer;	// G=0x3379f0b9; S=0x3379f0c9; @synthesize=_hysteresisTimer
@property(assign, nonatomic) BOOL stabilizedIsBusy;	// G=0x3379f099; S=0x3379f0a9; @synthesize=_stabilizedIsBusy
- (void).cxx_destruct;	// 0x3379f0f1
// declared property getter: - (int)UIBusyCount;	// 0x3379f079
- (void)_didChangeIdleBusyState:(BOOL)state;	// 0x3379eda1
- (void)_hysteresisTimerDidFire:(id)_hysteresisTimer;	// 0x3379efbd
// declared property getter: - (int)busyCount;	// 0x3379f059
- (void)didIdle;	// 0x3379ef95
- (void)didUnidle;	// 0x3379efa9
// declared property getter: - (id)hysteresisTimer;	// 0x3379f0b9
- (BOOL)isBusy;	// 0x3379ec71
- (void)releaseBusy;	// 0x3379ebd5
- (void)releasePowerAssertion;	// 0x3379ed9d
- (void)releaseUIBusy;	// 0x3379ed11
- (void)retainBusy;	// 0x3379eb39
- (void)retainPowerAssertion;	// 0x3379ed99
- (void)retainUIBusy;	// 0x3379ec89
// declared property setter: - (void)setBusyCount:(int)count;	// 0x3379f069
// declared property setter: - (void)setHysteresisTimer:(id)timer;	// 0x3379f0c9
// declared property setter: - (void)setStabilizedIsBusy:(BOOL)busy;	// 0x3379f0a9
// declared property setter: - (void)setUIBusyCount:(int)count;	// 0x3379f089
- (void)stabilizedDidIdle;	// 0x3379f051
- (void)stabilizedDidUnidle;	// 0x3379f055
// declared property getter: - (BOOL)stabilizedIsBusy;	// 0x3379f099
@end

