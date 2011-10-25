/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "NSObject.h"


@protocol CLLocationManagerDelegate <NSObject>
@optional
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
- (void)locationManager:(id)manager didEnterRegion:(id)region;
- (void)locationManager:(id)manager didExitRegion:(id)region;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManager:(id)manager didStartMonitoringForRegion:(id)region;
- (void)locationManager:(id)manager didUpdateHeading:(id)heading;
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)monitoring withError:(id)error;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)locationManager;
@end

