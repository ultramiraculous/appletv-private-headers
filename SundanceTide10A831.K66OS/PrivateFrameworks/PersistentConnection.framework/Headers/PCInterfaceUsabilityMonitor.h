/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library
#import "PersistentConnection-Structs.h"
#import "PCInterfaceUsabilityMonitorProtocol.h"

@class NSString, CUTWeakReference, NSMutableArray;
@protocol PCInterfaceUsabilityMonitorDelegate;

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol> {
	dispatch_queue_s *_delegateQueue;	// 4 = 0x4
	dispatch_queue_s *_ivarQueue;	// 8 = 0x8
	int _interfaceIdentifier;	// 12 = 0xc
	NSString *_interfaceName;	// 16 = 0x10
	CUTWeakReference *_delegateReference;	// 20 = 0x14
	void *_reachability;	// 24 = 0x18
	BOOL _isInternetReachable;	// 28 = 0x1c
	void *_dynamicStore;	// 32 = 0x20
	CFRunLoopSourceRef _linkQualitySource;	// 36 = 0x24
	CFStringRef _lqKey;	// 40 = 0x28
	int _linkQuality;	// 44 = 0x2c
	BOOL _trackUsability;	// 48 = 0x30
	unsigned _thresholdOffTransitionCount;	// 52 = 0x34
	double _trackedTimeInterval;	// 56 = 0x38
	NSMutableArray *_offTransitions;	// 64 = 0x40
}
@property(assign, nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate;	// G=0x36553bd9; S=0x36553dad; 
@property(readonly, assign, nonatomic) int interfaceIdentifier;	// G=0x36553b0d; 
@property(readonly, assign, nonatomic) BOOL isInterfaceHistoricallyUsable;	// G=0x36553819; 
@property(readonly, assign, nonatomic) BOOL isInterfaceUsable;	// G=0x365535e1; 
@property(readonly, assign, nonatomic) BOOL isInternetReachable;	// G=0x36553a41; 
@property(readonly, assign, nonatomic) BOOL isPoorLinkQuality;	// G=0x36553931; 
@property(readonly, assign, nonatomic) int linkQuality;	// G=0x36553975; 
@property(readonly, assign, nonatomic) NSString *linkQualityString;	// G=0x365538ed; 
+ (BOOL)isPoorLinkQuality:(int)quality;	// 0x36553925
+ (id)stringForLinkQuality:(int)linkQuality;	// 0x36554455
- (id)init;	// 0x36552d11
- (id)initWithInterfaceName:(id)interfaceName interfaceIdentifier:(int)identifier delegateQueue:(dispatch_queue_s *)queue;	// 0x36552d8d
- (void)_callDelegateOnIvarQueueWithBlock:(id)block;	// 0x36553ead
- (void)_createLinkQualityMonitor;	// 0x36554bb1
- (void)_createLinkQualityMonitorOnIvarQueue;	// 0x36554855
- (void)_createReachabilityMonitor;	// 0x36554141
- (void)_createReachabilityMonitorOnIvarQueue;	// 0x36553fd5
- (void)_dynamicStoreCallback:(id)callback;	// 0x36554791
- (void)_dynamicStoreCallbackOnIvarQueue:(id)queue;	// 0x36554649
- (void)_flushStaleTransitionsOnIvarQueue;	// 0x365530c9
- (BOOL)_isInterfaceHistoricallyUsableOnIvarQueue;	// 0x365536b5
- (BOOL)_isInterfaceUsableOnIvarQueue;	// 0x365534c9
- (void)_processLinkQualityUpdateOnIvarQueueWithUpdatedLinkQuality:(int)updatedLinkQuality;	// 0x36554495
- (void)_reachabilityCallback:(unsigned)callback;	// 0x365541bd
- (void)_reachabilityCallbackOnIvarQueue:(unsigned)queue;	// 0x36554255
- (void)_unscheduleLinkQualityMonitorOnIvarQueue;	// 0x365543f9
- (void)_unscheduleReachabilityMonitorOnIvarQueue;	// 0x36553f81
- (void)_updateOffTransitionsForLinkQualityChangeOnIvarQueue;	// 0x36553001
- (void)dealloc;	// 0x36552f05
// declared property getter: - (id)delegate;	// 0x36553bd9
// declared property getter: - (int)interfaceIdentifier;	// 0x36553b0d
// declared property getter: - (BOOL)isInterfaceHistoricallyUsable;	// 0x36553819
// declared property getter: - (BOOL)isInterfaceUsable;	// 0x365535e1
// declared property getter: - (BOOL)isInternetReachable;	// 0x36553a41
// declared property getter: - (BOOL)isPoorLinkQuality;	// 0x36553931
// declared property getter: - (int)linkQuality;	// 0x36553975
// declared property getter: - (id)linkQualityString;	// 0x365538ed
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36553dad
- (void)setThresholdOffTransitionCount:(unsigned)count;	// 0x36553371
- (void)setTrackUsability:(BOOL)usability;	// 0x36553289
- (void)setTrackedTimeInterval:(double)interval;	// 0x36553415
@end

