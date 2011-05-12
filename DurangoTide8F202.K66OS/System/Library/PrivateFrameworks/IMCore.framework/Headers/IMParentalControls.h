/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSMutableSet;

@interface IMParentalControls : NSObject {
	NSMutableSet *_aimWhitelist;	// 4 = 0x4
	NSMutableSet *_subnetWhitelist;	// 8 = 0x8
	NSMutableSet *_jabberWhitelist;	// 12 = 0xc
	unsigned _active : 1;	// 16 = 0x10
	unsigned _disableAV : 1;	// 16 = 0x10
	unsigned _disableAimService : 1;	// 16 = 0x10
	unsigned _forceAimWhitelist : 1;	// 16 = 0x10
	unsigned _disableSubnetService : 1;	// 16 = 0x10
	unsigned _forceSubnetWhitelist : 1;	// 16 = 0x10
	unsigned _disableJabberService : 1;	// 16 = 0x10
	unsigned _forceJabberWhitelist : 1;	// 16 = 0x10
	unsigned _forceChatLogging : 1;	// 17 = 0x11
	unsigned _shouldPostNotifications : 1;	// 17 = 0x11
}
@property(readonly, assign, nonatomic) BOOL active;	// G=0x30388d85; 
@property(readonly, assign, nonatomic) NSSet *aimWhitelist;	// G=0x30388d99; 
@property(readonly, assign, nonatomic) BOOL disableAV;	// G=0x30388f31; 
@property(readonly, assign, nonatomic) BOOL disableAimService;	// G=0x30388ed5; 
@property(readonly, assign, nonatomic) BOOL disableJabberService;	// G=0x30388e15; 
@property(readonly, assign, nonatomic) BOOL disableSubnetService;	// G=0x30388e75; 
@property(readonly, assign, nonatomic) BOOL forceAimWhitelist;	// G=0x30388ea5; 
@property(readonly, assign, nonatomic) BOOL forceChatLogging;	// G=0x30388f05; 
@property(readonly, assign, nonatomic) BOOL forceJabberWhitelist;	// G=0x30388de5; 
@property(readonly, assign, nonatomic) BOOL forceSubnetWhitelist;	// G=0x30388e45; 
@property(readonly, assign, nonatomic) NSSet *jabberWhitelist;	// G=0x30388db9; 
@property(readonly, assign, nonatomic) NSSet *subnetWhitelist;	// G=0x30388da9; 
+ (id)objectForKey:(id)key;	// 0x303897d9
+ (id)standardControls;	// 0x30389831
- (id)init;	// 0x30389709
- (void)_managedPrefsNotification:(id)notification;	// 0x30389181
- (void)_updateParentalSettings;	// 0x30389195
- (BOOL)accountHasWhitelist:(id)whitelist;	// 0x30388f61
- (BOOL)accountIsEnabled:(id)enabled;	// 0x30388fed
// declared property getter: - (BOOL)active;	// 0x30388d85
// declared property getter: - (id)aimWhitelist;	// 0x30388d99
- (id)autorelease;	// 0x30388d81
- (void)dealloc;	// 0x30389675
// declared property getter: - (BOOL)disableAV;	// 0x30388f31
// declared property getter: - (BOOL)disableAimService;	// 0x30388ed5
// declared property getter: - (BOOL)disableJabberService;	// 0x30388e15
// declared property getter: - (BOOL)disableSubnetService;	// 0x30388e75
// declared property getter: - (BOOL)forceAimWhitelist;	// 0x30388ea5
// declared property getter: - (BOOL)forceChatLogging;	// 0x30388f05
// declared property getter: - (BOOL)forceJabberWhitelist;	// 0x30388de5
// declared property getter: - (BOOL)forceSubnetWhitelist;	// 0x30388e45
// declared property getter: - (id)jabberWhitelist;	// 0x30388db9
- (BOOL)okToConnectAccount:(id)connectAccount;	// 0x30389081
- (oneway void)release;	// 0x30388d75
- (unsigned)retainCount;	// 0x30388d79
- (void)setShouldPostNotifications:(BOOL)postNotifications;	// 0x30388dc9
// declared property getter: - (id)subnetWhitelist;	// 0x30388da9
@end
