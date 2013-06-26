/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import </libobjc.A.h>
#import "ISSingleton.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface ISDevice : NSObject <ISSingleton> {
	unsigned _daemonLaunchCount;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSString *_guid;	// 12 = 0xc
	double _lastFreeSpaceRequest;	// 16 = 0x10
}
@property(readonly, assign) NSString *deviceName;	// G=0x33c657ad; 
@property(readonly, assign) NSString *guid;	// G=0x33c657e5; 
@property(readonly, assign) NSString *hardwareName;	// G=0x33c659d1; 
@property(readonly, assign) NSString *serialNumber;	// G=0x33c65a2d; 
@property(readonly, assign) NSString *systemName;	// G=0x33c65a55; 
+ (void)setSharedInstance:(id)instance;	// 0x33c65571
+ (id)sharedInstance;	// 0x33c655cd
- (id)init;	// 0x33c65491
- (int)_deviceClass;	// 0x33c65f1d
- (BOOL)checkCapabilities:(id)capabilities withMismatches:(id *)mismatches;	// 0x33c65651
- (id)copyProtocolConditionalContext;	// 0x33c656e1
- (void)dealloc;	// 0x33c654fd
// declared property getter: - (id)deviceName;	// 0x33c657ad
// declared property getter: - (id)guid;	// 0x33c657e5
// declared property getter: - (id)hardwareName;	// 0x33c659d1
- (BOOL)releasePowerAssertion:(id)assertion;	// 0x33c659f9
- (void)requestFreeSpace:(unsigned long long)space atPath:(id)path withOptions:(id)options completionBlock:(id)block;	// 0x33c65ae9
- (void)resetLocationAndPrivacy;	// 0x33c65da5
// declared property getter: - (id)serialNumber;	// 0x33c65a2d
- (id)supportedOfferDeviceForDevices:(id)devices;	// 0x33c65e25
// declared property getter: - (id)systemName;	// 0x33c65a55
- (BOOL)takePowerAssertion:(id)assertion;	// 0x33c65ab5
@end
