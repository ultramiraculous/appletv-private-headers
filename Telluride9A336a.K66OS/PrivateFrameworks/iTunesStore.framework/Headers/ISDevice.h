/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISSingleton.h"
#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSString;

@interface ISDevice : NSObject <ISSingleton> {
	unsigned _daemonLaunchCount;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	NSString *_guid;	// 12 = 0xc
	NSString *_hardwareModel;	// 16 = 0x10
	BOOL _pluggedIn;	// 20 = 0x14
	int _pluggedInToken;	// 24 = 0x18
	NSString *_productVersion;	// 28 = 0x1c
	int _type;	// 32 = 0x20
}
@property(readonly, assign) unsigned daemonLaunchCount;	// G=0x35eb78bd; converted property
@property(readonly, assign) NSString *deviceName;	// G=0x35eb6b59; 
@property(readonly, assign) NSString *guid;	// G=0x35eb6bbd; 
@property(readonly, assign) NSString *hardwareModel;	// G=0x35eb6da5; 
@property(readonly, assign) NSString *hardwareName;	// G=0x35eb6f5d; 
@property(readonly, assign, getter=isPluggedIn) BOOL pluggedIn;	// G=0x35eb711d; 
@property(readonly, assign) NSString *productVersion;	// G=0x35eb750d; 
@property(readonly, assign) NSString *serialNumber;	// G=0x35eb770d; 
@property(readonly, assign) NSString *systemName;	// G=0x35eb7761; 
@property(readonly, assign) int type;	// G=0x35eb77c5; 
+ (void)setSharedInstance:(id)instance;	// 0x35eb66bd
+ (id)sharedInstance;	// 0x35eb6711
- (id)init;	// 0x35eb64f5
- (void)_cancelScheduledPowerAssertionRelease:(id)release;	// 0x35eb7aa9
- (id)_copyCapabilityValueForKey:(CFStringRef)key;	// 0x35eb7ae1
- (int)_deviceTypeForModelString:(id)modelString;	// 0x35eb7b2d
- (void)_initDeviceType;	// 0x35eb7d99
- (BOOL)_isHDVideoCapable;	// 0x35eb7d61
- (BOOL)_isPodcastCapable;	// 0x35eb7d95
- (BOOL)_releasePowerAssertion:(id)assertion;	// 0x35eb7e39
- (void)_schedulePowerAssertionRelease:(id)release;	// 0x35eb7e99
- (void)_setPluggedIn:(BOOL)anIn;	// 0x35eb7ecd
- (BOOL)checkCapabilities:(id)capabilities withMismatches:(id *)mismatches;	// 0x35eb678d
- (id)copyProtocolConditionalContext;	// 0x35eb6819
- (id)copyPurchaseValidationContext;	// 0x35eb68f5
- (void)daemonDidLaunch;	// 0x35eb78cd
// converted property getter: - (unsigned)daemonLaunchCount;	// 0x35eb78bd
- (void)daemonWillExitCleanly;	// 0x35eb7959
- (void)dealloc;	// 0x35eb6559
// declared property getter: - (id)deviceName;	// 0x35eb6b59
// declared property getter: - (id)guid;	// 0x35eb6bbd
// declared property getter: - (id)hardwareModel;	// 0x35eb6da5
// declared property getter: - (id)hardwareName;	// 0x35eb6f5d
- (BOOL)hasCapability:(int)capability;	// 0x35eb6fad
- (BOOL)isAnyIPhone;	// 0x35eb7029
- (BOOL)isAnyIPod;	// 0x35eb707d
- (BOOL)isAnyWildcat;	// 0x35eb70d1
// declared property getter: - (BOOL)isPluggedIn;	// 0x35eb711d
// declared property getter: - (id)productVersion;	// 0x35eb750d
- (BOOL)releasePowerAssertion:(id)assertion;	// 0x35eb6609
// declared property getter: - (id)serialNumber;	// 0x35eb770d
- (id)supportedOfferDeviceForDevices:(id)devices;	// 0x35eb7999
// declared property getter: - (id)systemName;	// 0x35eb7761
- (BOOL)takePowerAssertion:(id)assertion;	// 0x35eb6661
// declared property getter: - (int)type;	// 0x35eb77c5
@end
