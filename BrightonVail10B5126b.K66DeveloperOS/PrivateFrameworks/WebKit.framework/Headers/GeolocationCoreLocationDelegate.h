/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "CLLocationManagerDelegate.h"
#import <NSObject.h> // Unknown library

@class CLLocationManager;
@protocol GeolocationUpdateListener;

@interface GeolocationCoreLocationDelegate : NSObject <CLLocationManagerDelegate> {
	double m_accuracy;	// 4 = 0x4
	id<GeolocationUpdateListener> m_positionListener;	// 12 = 0xc
	CLLocationManager *m_locationManager;	// 16 = 0x10
	BOOL _isWaitingForAuthorization;	// 20 = 0x14
	int _lastAuthorizationStatus;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL isWaitingForAuthorization;	// G=0x365db675; S=0x365db685; @synthesize=_isWaitingForAuthorization
@property(assign, nonatomic) int lastAuthorizationStatus;	// G=0x365db695; S=0x365db6a5; @synthesize=_lastAuthorizationStatus
- (id)initWithListener:(id)listener;	// 0x365dac29
- (void)createLocationManager;	// 0x365dab81
- (void)dealloc;	// 0x365dac7d
- (BOOL)handleExternalAuthorizationStatusChange:(int)change;	// 0x365dae79
// declared property getter: - (BOOL)isWaitingForAuthorization;	// 0x365db675
// declared property getter: - (int)lastAuthorizationStatus;	// 0x365db695
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;	// 0x365db091
- (void)locationManager:(id)manager didFailWithError:(id)error;	// 0x365db5e9
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;	// 0x365db531
- (void)sendError:(id)error;	// 0x365dacdd
- (void)sendGeolocationDelegateStarted;	// 0x365dad89
- (void)sendGeolocationDelegateUnableToStart;	// 0x365dae01
- (void)sendLocation:(id)location;	// 0x365db0f9
- (void)setEnableHighAccuracy:(BOOL)accuracy;	// 0x365db5fd
// declared property setter: - (void)setIsWaitingForAuthorization:(BOOL)authorization;	// 0x365db685
// declared property setter: - (void)setLastAuthorizationStatus:(int)status;	// 0x365db6a5
- (void)start;	// 0x365daf39
- (void)stop;	// 0x365db03d
@end

