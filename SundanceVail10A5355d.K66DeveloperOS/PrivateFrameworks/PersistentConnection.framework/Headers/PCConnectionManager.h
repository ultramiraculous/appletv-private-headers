/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library
#import "PCLoggingDelegate.h"

@class PCPersistentTimer, NSRunLoop, NSString, PCDarwinNotificationRunLoopSource;
@protocol PCGrowthAlgorithm, PCConnectionManagerDelegate;

@interface PCConnectionManager : NSObject <PCLoggingDelegate> {
	int _connectionClass;	// 4 = 0x4
	id<PCConnectionManagerDelegate> _delegate;	// 8 = 0x8
	NSString *_serviceIdentifier;	// 12 = 0xc
	int _prefsStyle;	// 16 = 0x10
	int _onlyAllowedStyle;	// 20 = 0x14
	BOOL _onlyAllowedStyleSet;	// 24 = 0x18
	NSRunLoop *_runLoop;	// 28 = 0x1c
	id<PCGrowthAlgorithm> _wwanGrowthAlgorithm;	// 32 = 0x20
	id<PCGrowthAlgorithm> _wifiGrowthAlgorithm;	// 36 = 0x24
	PCDarwinNotificationRunLoopSource *_prefsChangedSource;	// 40 = 0x28
	PCPersistentTimer *_intervalTimer;	// 44 = 0x2c
	PCPersistentTimer *_reconnectWakeTimer;	// 48 = 0x30
	PCPersistentTimer *_delayTimer;	// 52 = 0x34
	unsigned _powerAssertionID;	// 56 = 0x38
	double _onTimeKeepAliveTime;	// 60 = 0x3c
	double _lastResumeTime;	// 68 = 0x44
	double _lastStopTime;	// 76 = 0x4c
	double _lastReachableTime;	// 84 = 0x54
	double _lastReconnectTime;	// 92 = 0x5c
	double _keepAliveGracePeriod;	// 100 = 0x64
	unsigned _reconnectIteration;	// 108 = 0x6c
	double _defaultPollingInterval;	// 112 = 0x70
	double _pollingIntervalOverride;	// 120 = 0x78
	BOOL _pollingIntervalOverrideSet;	// 128 = 0x80
	BOOL _hasStarted;	// 129 = 0x81
	BOOL _isRunning;	// 130 = 0x82
	BOOL _inCallback;	// 131 = 0x83
	BOOL _isInReconnectMode;	// 132 = 0x84
	BOOL _reconnectWithKeepAliveDelay;	// 133 = 0x85
	BOOL _forceManualWhenRoaming;	// 134 = 0x86
	BOOL _fallBackToAlternateInterface;	// 135 = 0x87
	BOOL _isReachable;	// 136 = 0x88
}
@property(readonly, assign, nonatomic) double currentKeepAliveInterval;	// G=0x34268679; 
@property(assign, nonatomic) BOOL fallBackToAlternateInterface;	// G=0x3426ade1; S=0x34268d7d; @synthesize=_fallBackToAlternateInterface
@property(assign, nonatomic) double keepAliveGracePeriod;	// G=0x3426adc9; S=0x34268931; @synthesize=_keepAliveGracePeriod
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x3426adf1; @synthesize=_serviceIdentifier
@property(assign) double maximumKeepAliveInterval;	// G=0x3426885d; S=0x3426887d; 
@property(assign, nonatomic) double minimumKeepAliveInterval;	// G=0x34268789; S=0x342687a9; 
@property(readonly, assign, nonatomic) double pollingInterval;	// G=0x342689dd; 
+ (BOOL)_isCachedKeepAliveIntervalStillValid:(double)valid date:(id)date;	// 0x3426ac21
+ (id)_keepAliveCachePath;	// 0x3426abe1
+ (Class)growthAlgorithmClass;	// 0x34267221
+ (id)intervalCacheDictionaries;	// 0x3426a9a9
- (id)initWithConnectionClass:(int)connectionClass delegate:(id)delegate serviceIdentifier:(id)identifier;	// 0x34267241
- (void)_adjustInterfaceAssertions;	// 0x3426a211
- (void)_calloutWithEvent:(int)event;	// 0x34269bf9
- (void)_clearTimers;	// 0x34269db1
- (void)_clearTimersReleasingPowerAssertion:(BOOL)assertion;	// 0x34269dd9
- (id)_currentGrowthAlgorithm;	// 0x34267b45
- (void)_delayTimerFired;	// 0x34269b91
- (double)_getCachedWWANKeepAliveInterval;	// 0x3426a8a9
- (void)_intervalTimerFired;	// 0x342698b9
- (void)_loadPreferencesGeneratingEvent:(BOOL)event;	// 0x34267749
- (void)_preferencesChanged;	// 0x34267731
- (void)_releasePowerAssertion;	// 0x3426a4a5
- (void)_resolveStateWithAction:(int)action;	// 0x342684d5
- (void)_saveWWANKeepAliveInterval:(double)interval;	// 0x3426a565
- (void)_setupKeepAliveForReconnect;	// 0x342693c1
- (void)_setupTimerForPoll;	// 0x342691e1
- (void)_setupTimerForPushWithKeepAliveInterval:(double)keepAliveInterval;	// 0x34268e11
- (id)_stringForAction:(int)action;	// 0x3426acf5
- (id)_stringForEvent:(int)event;	// 0x3426ad65
- (void)_takePowerAssertionWithTimeout:(double)timeout;	// 0x3426a349
- (void)_validateActionForCurrentStyle:(int)currentStyle;	// 0x3426837d
- (void)cancelPollingIntervalOverride;	// 0x34268ab9
// declared property getter: - (double)currentKeepAliveInterval;	// 0x34268679
- (int)currentStyle;	// 0x34267a29
- (void)dealloc;	// 0x342675f9
// declared property getter: - (BOOL)fallBackToAlternateInterface;	// 0x3426ade1
- (void)interfaceManagerInHomeCountryStatusChanged:(id)homeCountryStatusChanged;	// 0x34269fbd
- (void)interfaceManagerInternetReachabilityChanged:(id)changed;	// 0x34269fd1
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)changed;	// 0x34269eb9
// declared property getter: - (double)keepAliveGracePeriod;	// 0x3426adc9
- (void)log:(id)log;	// 0x3426ac69
- (void)logAtLevel:(int)level format:(id)format;	// 0x3426ac9d
- (void)logAtLevel:(int)level format:(id)format arguments:(void *)arguments;	// 0x3426acc5
// declared property getter: - (id)loggingIdentifier;	// 0x3426adf1
// declared property getter: - (double)maximumKeepAliveInterval;	// 0x3426885d
// declared property getter: - (double)minimumKeepAliveInterval;	// 0x34268789
// declared property getter: - (double)pollingInterval;	// 0x342689dd
- (void)resumeManagerWithAction:(int)action;	// 0x34267be5
// declared property setter: - (void)setFallBackToAlternateInterface:(BOOL)alternateInterface;	// 0x34268d7d
// declared property setter: - (void)setKeepAliveGracePeriod:(double)period;	// 0x34268931
// declared property setter: - (void)setMaximumKeepAliveInterval:(double)interval;	// 0x3426887d
// declared property setter: - (void)setMinimumKeepAliveInterval:(double)interval;	// 0x342687a9
- (void)setOnlyAllowedStyle:(int)style;	// 0x34267b15
- (void)setPollingIntervalOverride:(double)override;	// 0x34268a15
- (BOOL)shouldClientScheduleReconnectDueToFailure;	// 0x34268b21
- (void)startManager;	// 0x34267bad
- (void)stopManager;	// 0x34268551
@end
