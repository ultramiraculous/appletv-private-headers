/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library
#import "PersistentConnection-Structs.h"
#import "PCInterfaceUsabilityMonitorDelegate.h"
#import "PCInterfaceUsabilityMonitorProtocol.h"

@class NSString, CUTWeakReference, PCInterfaceUsabilityMonitor;

@interface PCWWANUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
	dispatch_queue_s *_delegateQueue;	// 4 = 0x4
	dispatch_queue_s *_ivarQueue;	// 8 = 0x8
	dispatch_queue_s *_monitorDelegateQueue;	// 12 = 0xc
	CUTWeakReference *_delegateReference;	// 16 = 0x10
	BOOL _isInCall;	// 20 = 0x14
	BOOL _trackUsability;	// 21 = 0x15
	unsigned _thresholdOffTransitionCount;	// 24 = 0x18
	double _trackedTimeInterval;	// 28 = 0x1c
	NSString *_interfaceName;	// 36 = 0x24
	PCInterfaceUsabilityMonitor *_interfaceMonitor;	// 40 = 0x28
	CTServerConnectionRef _telephonyServer;	// 44 = 0x2c
	long _wwanContextID;	// 48 = 0x30
	dispatch_queue_s *_ctServerQueue;	// 52 = 0x34
}
@property(assign, nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate;	// G=0x352ccfa5; S=0x352cd179; 
@property(readonly, assign, nonatomic) int interfaceIdentifier;	// G=0x352ccb55; 
@property(readonly, assign, nonatomic) BOOL isInterfaceHistoricallyUsable;	// G=0x352ccd39; 
@property(readonly, assign, nonatomic) BOOL isInterfaceUsable;	// G=0x352ccc49; 
@property(readonly, assign, nonatomic) BOOL isInternetReachable;	// G=0x352cce45; 
@property(readonly, assign, nonatomic) BOOL isPoorLinkQuality;	// G=0x352ccf6d; 
@property(readonly, assign, nonatomic) int linkQuality;	// G=0x352ccb59; 
@property(readonly, assign, nonatomic) NSString *linkQualityString;	// G=0x352ccf35; 
- (id)initWithDelegateQueue:(dispatch_queue_s *)delegateQueue;	// 0x352cc125
- (void)_adjustInterfaceNameForWWANContextID:(long)wwancontextID;	// 0x352cc48d
- (void)_callDelegateOnIvarQueueWithBlock:(id)block;	// 0x352cd279
- (void)_forwardConfigurationOnIvarQueue;	// 0x352cc895
- (void)_handleTelephonyNotificationWithName:(CFStringRef)name userInfo:(CFDictionaryRef)info;	// 0x352cc691
- (void)_setupWWANMonitor;	// 0x352cc2cd
- (void)dealloc;	// 0x352cc1bd
// declared property getter: - (id)delegate;	// 0x352ccfa5
// declared property getter: - (int)interfaceIdentifier;	// 0x352ccb55
- (void)interfaceLinkQualityChanged:(id)changed previousLinkQuality:(int)quality;	// 0x352cd34d
- (void)interfaceReachabilityChanged:(id)changed;	// 0x352cd4a9
// declared property getter: - (BOOL)isInterfaceHistoricallyUsable;	// 0x352ccd39
// declared property getter: - (BOOL)isInterfaceUsable;	// 0x352ccc49
// declared property getter: - (BOOL)isInternetReachable;	// 0x352cce45
// declared property getter: - (BOOL)isPoorLinkQuality;	// 0x352ccf6d
// declared property getter: - (int)linkQuality;	// 0x352ccb59
// declared property getter: - (id)linkQualityString;	// 0x352ccf35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x352cd179
- (void)setThresholdOffTransitionCount:(unsigned)count;	// 0x352cc9fd
- (void)setTrackUsability:(BOOL)usability;	// 0x352cc915
- (void)setTrackedTimeInterval:(double)interval;	// 0x352ccaa1
@end

