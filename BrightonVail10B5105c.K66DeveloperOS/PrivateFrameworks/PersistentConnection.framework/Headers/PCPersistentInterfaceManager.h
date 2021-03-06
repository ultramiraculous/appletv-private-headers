/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library
#import "PersistentConnection-Structs.h"
#import "PCInterfaceUsabilityMonitorDelegate.h"

@class NSString, NSRecursiveLock, PCPersistentTimer, NSTimer, PCNonCellularUsabilityMonitor, PCWWANUsabilityMonitor;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceUsabilityMonitorDelegate> {
	NSRecursiveLock *_lock;	// 4 = 0x4
	CFDictionaryRef _delegatesAndRunLoops;	// 8 = 0x8
	CFSetRef _WWANInterfaceAssertionDelegates;	// 12 = 0xc
	NSTimer *_WWANInterfaceAssertionDisableTimer;	// 16 = 0x10
	CFSetRef _WiFiAutoAssociationDelegates;	// 20 = 0x14
	PCPersistentTimer *_WiFiAutoAssociationDisableTimer;	// 24 = 0x18
	CFSetRef _wakeOnWiFiDelegates;	// 28 = 0x1c
	PCPersistentTimer *_wakeOnWiFiDisableTimer;	// 32 = 0x20
	PCWWANUsabilityMonitor *_wwanMonitor;	// 36 = 0x24
	PCNonCellularUsabilityMonitor *_wifiMonitor;	// 40 = 0x28
	void *_ctServerConnection;	// 44 = 0x2c
	void *_interfaceAssertion;	// 48 = 0x30
	void *_wifiManager;	// 52 = 0x34
	long _WWANContextIdentifier;	// 56 = 0x38
	NSString *_WWANInterfaceName;	// 60 = 0x3c
	BOOL _isWWANInterfaceUp;	// 64 = 0x40
	NSTimer *_inCallWWANOverrideTimer;	// 68 = 0x44
	BOOL _isWWANInterfaceDataActive;	// 72 = 0x48
	BOOL _isWWANInHomeCountry;	// 73 = 0x49
	BOOL _hasWWANStatusIndicator;	// 74 = 0x4a
	BOOL _isPowerStateDetectionSupported;	// 75 = 0x4b
	BOOL _isWWANInterfaceInProlongedHighPowerState;	// 76 = 0x4c
	BOOL _isWWANInterfaceActivationPermitted;	// 77 = 0x4d
	double _lastActivationTime;	// 80 = 0x50
	int _wwanRSSI;	// 88 = 0x58
	BOOL _isInCall;	// 92 = 0x5c
	BOOL _isWakeOnWiFiSupported;	// 93 = 0x5d
	BOOL _isWakeOnWiFiEnabled;	// 94 = 0x5e
	BOOL _shouldOverrideOnCallBehavior;	// 95 = 0x5f
}
@property(readonly, assign) NSString *WWANInterfaceName;	// G=0x370f109d; 
@property(readonly, assign) BOOL areAllNetworkInterfacesDisabled;	// G=0x370f1471; 
@property(readonly, assign, nonatomic) NSString *currentLinkQualityString;	// G=0x370f0b3d; 
@property(readonly, assign) BOOL doesWWANInterfaceExist;	// G=0x370f1109; 
@property(readonly, assign) BOOL isInCall;	// G=0x370f1279; 
@property(readonly, assign) BOOL isInternetReachable;	// G=0x370f1321; 
@property(readonly, assign) BOOL isInternetReachableViaWiFi;	// G=0x370f1371; 
@property(readonly, assign) BOOL isPowerStateDetectionSupported;	// G=0x370f1159; 
@property(readonly, assign) BOOL isWWANBetterThanWiFi;	// G=0x370f0fb9; 
@property(readonly, assign) BOOL isWWANInHomeCountry;	// G=0x370f1231; 
@property(readonly, assign) BOOL isWWANInterfaceActivationPermitted;	// G=0x370f11e9; 
@property(readonly, assign) BOOL isWWANInterfaceInProlongedHighPowerState;	// G=0x370f11a1; 
@property(readonly, assign) BOOL isWWANInterfaceUp;	// G=0x370f1055; 
@property(readonly, assign) BOOL isWakeOnWiFiSupported;	// G=0x370f1429; 
+ (id)sharedInstance;	// 0x370eedd9
- (id)init;	// 0x370eee4d
// declared property getter: - (id)WWANInterfaceName;	// 0x370f109d
- (void)_adjustWakeOnWiFi;	// 0x370f2359
- (void)_adjustWakeOnWiFiLocked;	// 0x370f23a5
- (void)_adjustWiFiAutoAssociation;	// 0x370f1fb1
- (void)_adjustWiFiAutoAssociationLocked;	// 0x370f1ffd
- (BOOL)_allowBindingToWWAN;	// 0x370f28fd
- (void)_clearInCallWWANOverrideTimerLocked;	// 0x370f0791
- (void)_createCTConnection;	// 0x370ef30d
- (void)_createWiFiManager;	// 0x370f19e9
- (void)_ctConnectionWasInvalidated;	// 0x370ef879
- (void)_inCallWWANOverrideTimerFired;	// 0x370f0731
- (BOOL)_isInternetReachableLocked;	// 0x370f12c1
- (BOOL)_isWiFiUsable;	// 0x370f13cd
- (void)_mainThreadDelayedInvalidation;	// 0x370ef7ed
- (void)_performCalloutsForSelectorValue:(id)selectorValue;	// 0x370f0e21
- (void)_populateWakeOnWiFiCapability;	// 0x370f1c31
- (void)_populateWakeOnWiFiCapabilityLocked;	// 0x370f1c7d
- (void)_scheduleCalloutsForSelector:(SEL)selector;	// 0x370f0bfd
- (void)_serverCallback:(id)callback info:(id)info;	// 0x370efa69
- (void)_serverCallbackLocked:(id)locked info:(id)info;	// 0x370efac9
- (void)_updateWWANInterfaceAssertions;	// 0x370f1805
- (void)_updateWWANInterfaceAssertionsLocked;	// 0x370f1851
- (void)_updateWWANInterfaceUpState;	// 0x370f0af1
- (void)_updateWWANInterfaceUpStateLocked;	// 0x370f08a1
- (BOOL)_wantsWWANInterfaceAssertion;	// 0x370f1769
- (BOOL)_wantsWakeOnWiFiEnabled;	// 0x370f2321
- (BOOL)_wifiIsPoorLinkQuality;	// 0x370f0bd9
- (BOOL)_wwanIsPoorLinkQuality;	// 0x370f0bb5
- (BOOL)_wwanLinkQualityBelowThresholdAndWoWAvailableLocked;	// 0x370f0821
- (void)addDelegate:(id)delegate callbackRunLoop:(id)loop;	// 0x370ef261
// declared property getter: - (BOOL)areAllNetworkInterfacesDisabled;	// 0x370f1471
- (void)bindCFStream:(CFReadStreamRef)stream toWWANInterface:(BOOL)wwaninterface;	// 0x370f29ad
- (void)bindCFStreamToWWANInterface:(CFReadStreamRef)wwaninterface;	// 0x370f2afd
// declared property getter: - (id)currentLinkQualityString;	// 0x370f0b3d
- (void)dealloc;	// 0x370ef0fd
- (id)dhcpHalfLeaseExpirationDate;	// 0x370f26c9
- (id)dhcpT1RenewalDate;	// 0x370f24e1
// declared property getter: - (BOOL)doesWWANInterfaceExist;	// 0x370f1109
- (void)enableWakeOnWiFi:(BOOL)fi forDelegate:(id)delegate;	// 0x370f2199
- (void)enableWiFiAutoAssociation:(BOOL)association forDelegate:(id)delegate;	// 0x370f1e39
- (void)handleMachMessage:(void *)message;	// 0x370efa61
- (void)interfaceLinkQualityChanged:(id)changed previousLinkQuality:(int)quality;	// 0x370ef9e9
- (void)interfaceReachabilityChanged:(id)changed;	// 0x370efa25
// declared property getter: - (BOOL)isInCall;	// 0x370f1279
// declared property getter: - (BOOL)isInternetReachable;	// 0x370f1321
// declared property getter: - (BOOL)isInternetReachableViaWiFi;	// 0x370f1371
// declared property getter: - (BOOL)isPowerStateDetectionSupported;	// 0x370f1159
// declared property getter: - (BOOL)isWWANBetterThanWiFi;	// 0x370f0fb9
// declared property getter: - (BOOL)isWWANInHomeCountry;	// 0x370f1231
// declared property getter: - (BOOL)isWWANInterfaceActivationPermitted;	// 0x370f11e9
// declared property getter: - (BOOL)isWWANInterfaceInProlongedHighPowerState;	// 0x370f11a1
// declared property getter: - (BOOL)isWWANInterfaceUp;	// 0x370f1055
// declared property getter: - (BOOL)isWakeOnWiFiSupported;	// 0x370f1429
- (void)keepWWANInterfaceUp:(BOOL)up forDelegate:(id)delegate;	// 0x370f15e9
- (void)removeDelegate:(id)delegate;	// 0x370ef2bd
- (id)urlConnectionBoundToWWANInterface:(BOOL)wwaninterface withRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x370f2b11
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x370f2dad
@end

