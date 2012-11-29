/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "EABluetoothAccessoryPickerDelegate.h"

@class NSMutableArray, NSString, NSTimer, NSArray, EABluetoothAccessoryPicker;
@protocol OS_dispatch_queue;

@interface EAAccessoryManager : NSObject <EABluetoothAccessoryPickerDelegate> {
	NSMutableArray *_connectedAccessories;	// 4 = 0x4
@private
	NSMutableArray *_sequesteredAccessories;	// 8 = 0x8
@protected
	NSString *_selectedBluetoothAddress;	// 12 = 0xc
	EABluetoothAccessoryPicker *_picker;	// 16 = 0x10
	id _pickerCompletion;	// 20 = 0x14
	BOOL _sequesterNewAccessories;	// 24 = 0x18
@private
	NSTimer *_pickerTimer;	// 28 = 0x1c
@protected
	NSObject<OS_dispatch_queue> *_connectionQueue;	// 32 = 0x20
}
@property(assign) BOOL areLocationAccessoriesEnabled;	// G=0x3042b35d; S=0x3042b36d; converted property
@property(readonly, assign, nonatomic) NSArray *connectedAccessories;	// G=0x30428c05; 
@property(assign) BOOL shouldAllowCppRuntime;	// G=0x3042ae1d; S=0x3042ae2d; converted property
@property(assign) BOOL shouldAllowInternalProtocols;	// G=0x3042adfd; S=0x3042ae0d; converted property
+ (BOOL)isLoggingEnabled;	// 0x3042b445
+ (void)registerCapabilities:(unsigned)capabilities;	// 0x3042ab79
+ (id)sharedAccessoryManager;	// 0x3042873d
- (id)init;	// 0x30427c35
- (void)_applicationDidEnterBackground:(id)_application;	// 0x30429029
- (void)_applicationWillEnterForeground:(id)_application;	// 0x304293d1
- (void)_cleanUpForTaskSuspend;	// 0x3042910d
- (id)_connectedAccessories;	// 0x3042aded
- (void)_ephemerisURLAvailable:(id)available;	// 0x3042a849
- (void)_externalAccessoryConnected:(id)connected;	// 0x3042987d
- (void)_externalAccessoryDisconnected:(id)disconnected;	// 0x3042a1d5
- (void)_externalAccessoryIPodOutOptionsChanged:(id)changed;	// 0x3042a659
- (void)_externalAccessoryPortPropertyChanged:(id)changed;	// 0x3042a515
- (void)_externalAccessoryReconnected:(id)reconnected;	// 0x3042954d
- (void)_externalAccessoryUpdated:(id)updated;	// 0x3042a0a1
- (void)_gpsTimeRequested:(id)requested;	// 0x3042a8e1
- (void)_handleAccessoryNotificationTimeout:(id)timeout;	// 0x3042aa81
- (void)_iapServerDied:(id)died;	// 0x30428f6d
- (id)_initFromSingletonCreationMethod;	// 0x30427c6d
- (void)_integrateSequesteredAccessories;	// 0x3042a92d
- (void)_locationNmeaDataAvailable:(id)available;	// 0x3042a7b1
- (void)_locationPointDataAvailable:(id)available;	// 0x3042a7fd
- (void)_nmeaFilteringSupportChanged:(id)changed;	// 0x3042a895
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)userInfo;	// 0x30428ea1
- (void)_removeAllAccessoriesFromArray:(id)array notifyClients:(BOOL)clients;	// 0x3042978d
- (void)accessibilityAction:(id)action;	// 0x3042ae3d
- (void)accessibilityContextChange:(id)change;	// 0x3042af11
- (void)accessibilityItemPropertyRequest:(id)request;	// 0x3042afe5
- (void)accessibilitySystemPropertyChange:(id)change;	// 0x3042b135
- (void)accessibilitySystemPropertyRequest:(id)request;	// 0x3042b205
- (BOOL)appDeclaresProtocol:(id)protocol;	// 0x3042ac5d
// converted property getter: - (BOOL)areLocationAccessoriesEnabled;	// 0x3042b35d
// declared property getter: - (id)connectedAccessories;	// 0x30428c05
- (void)dealloc;	// 0x30428879
- (void)devicePicker:(id)picker didSelectAddress:(id)address errorCode:(int)code;	// 0x3042b485
- (void)endSession:(unsigned)session forConnectionID:(unsigned)connectionID;	// 0x3042abbd
- (void)openCompleteForSession:(unsigned)session connectionID:(unsigned)anId;	// 0x3042ab8d
- (void)pointOfInterestSelection:(id)interestSelection;	// 0x3042b399
- (void)registerForLocalNotifications;	// 0x30428c4d
// converted property setter: - (void)setAreLocationAccessoriesEnabled:(BOOL)enabled;	// 0x3042b36d
// converted property setter: - (void)setShouldAllowCppRuntime:(BOOL)allowCppRuntime;	// 0x3042ae2d
// converted property setter: - (void)setShouldAllowInternalProtocols:(BOOL)allowInternalProtocols;	// 0x3042ae0d
// converted property getter: - (BOOL)shouldAllowCppRuntime;	// 0x3042ae1d
// converted property getter: - (BOOL)shouldAllowInternalProtocols;	// 0x3042adfd
- (void)showBluetoothAccessoryPickerWithNameFilter:(id)nameFilter completion:(id)completion;	// 0x30428b69
- (void)unregisterForLocalNotifications;	// 0x30428da1
- (void)wakeAccessoryWithToken:(id)token;	// 0x3042abed
@end
