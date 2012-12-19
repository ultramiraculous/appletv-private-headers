/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import "IMNetworkManager.h"

@class NSMutableSet, NSRecursiveLock, NSNumber;

@interface IMMobileNetworkManager : IMNetworkManager {
	NSRecursiveLock *_lock;	// 4 = 0x4
	NSMutableSet *_disableFastDormancyTokens;	// 8 = 0x8
	NSMutableSet *_wiFiAutoAssociationTokens;	// 12 = 0xc
	NSMutableSet *_cellAutoAssociationTokens;	// 16 = 0x10
	void *_serverConnection;	// 20 = 0x14
	void *_suspendDormancyAssertion;	// 24 = 0x18
	void *_wifiManager;	// 28 = 0x1c
	SCPreferencesRef _prefs;	// 32 = 0x20
	CTServerConnectionRef _ctServerConnection;	// 36 = 0x24
	BOOL _cachedAirplaneMode;	// 40 = 0x28
	void *_cellAssertion;	// 44 = 0x2c
	BOOL _isCachedAirplaneModeValid;	// 48 = 0x30
	int _applySkipCount;	// 52 = 0x34
	BOOL _registered;	// 56 = 0x38
	BOOL _shouldBringUpDataContext;	// 57 = 0x39
	BOOL _dataContextActive;	// 58 = 0x3a
}
@property(assign, nonatomic) int _applySkipCount;	// G=0x34398975; S=0x34398985; @synthesize
@property(assign, nonatomic) BOOL _cachedAirplaneMode;	// G=0x34398915; S=0x34398925; @synthesize
@property(assign, nonatomic) void *_cellAssertion;	// G=0x34398935; S=0x34398945; @synthesize
@property(assign, nonatomic) CTServerConnectionRef _ctServerConnection;	// G=0x343988f5; S=0x34398905; @synthesize
@property(assign, nonatomic) BOOL _isCachedAirplaneModeValid;	// G=0x34398955; S=0x34398965; @synthesize
@property(assign, nonatomic) SCPreferencesRef _prefs;	// G=0x343988d5; S=0x343988e5; @synthesize
@property(assign, nonatomic) void *_serverConnection;	// G=0x34398875; S=0x34398885; @synthesize
@property(assign, nonatomic) void *_suspendDormancyAssertion;	// G=0x34398895; S=0x343988a5; @synthesize
@property(readonly, assign, nonatomic) BOOL autoAssociateCellular;	// G=0x34397791; 
@property(readonly, assign, nonatomic) BOOL autoAssociateWiFi;	// G=0x34397539; 
@property(retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens;	// G=0x34398855; S=0x34398865; @synthesize=_cellAutoAssociationTokens
@property(readonly, assign, nonatomic) BOOL dataConnectionExists;	// G=0x3439855d; 
@property(assign, nonatomic) BOOL dataContextActive;	// G=0x343989d5; S=0x343989e5; @synthesize=_dataContextActive
@property(readonly, assign, nonatomic) BOOL disableFastDormancy;	// G=0x34396b3d; 
@property(retain, nonatomic) NSMutableSet *disableFastDormancyTokens;	// G=0x34398815; S=0x34398825; @synthesize=_disableFastDormancyTokens
@property(readonly, assign, nonatomic) BOOL has2GDataConnection;	// G=0x34398569; 
@property(readonly, assign, nonatomic) BOOL hasLTEDataConnection;	// G=0x34398649; 
@property(readonly, assign, nonatomic) BOOL inValidSIMState;	// G=0x34398475; 
@property(readonly, assign, nonatomic) BOOL isAirplaneModeEnabled;	// G=0x34396299; 
@property(readonly, assign, nonatomic) BOOL isDataConnectionActive;	// G=0x3439874d; 
@property(readonly, assign, nonatomic) BOOL isDataSwitchEnabled;	// G=0x343986ed; 
@property(readonly, assign, nonatomic) BOOL isHostingWiFiHotSpot;	// G=0x34396d51; 
@property(readonly, assign, nonatomic) BOOL isWiFiAssociated;	// G=0x3439738d; 
@property(readonly, assign, nonatomic) BOOL isWiFiEnabled;	// G=0x343974c9; 
@property(retain, nonatomic) NSRecursiveLock *lock;	// G=0x343987f5; S=0x34398805; @synthesize=_lock
@property(assign, nonatomic) BOOL registered;	// G=0x34398995; S=0x343989a5; @synthesize=_registered
@property(assign, nonatomic) BOOL shouldBringUpDataContext;	// G=0x343989b5; S=0x343989c5; @synthesize=_shouldBringUpDataContext
@property(retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens;	// G=0x34398835; S=0x34398845; @synthesize=_wiFiAutoAssociationTokens
@property(readonly, assign, nonatomic) NSNumber *wiFiScaledRSSI;	// G=0x343970cd; 
@property(readonly, assign, nonatomic) NSNumber *wiFiScaledRate;	// G=0x3439722d; 
@property(readonly, assign, nonatomic) NSNumber *wiFiSignalStrength;	// G=0x34396f6d; 
@property(assign, nonatomic) void *wifiManager;	// G=0x343988b5; S=0x343988c5; @synthesize=_wifiManager
@property(readonly, assign, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;	// G=0x34396dd9; 
@property(readonly, assign, nonatomic) BOOL willTryToSearchForWiFiNetwork;	// G=0x34396edd; 
- (id)init;	// 0x34395e71
- (void)__adjustFastDormancyTokens;	// 0x34396ac1
- (void)_adjustCelluarAutoAssociation;	// 0x34396855
- (void)_adjustCellularAutoAssociation;	// 0x34396701
- (void)_adjustFastDormancyTokens;	// 0x34396af1
- (void)_adjustWiFiAutoAssociation;	// 0x343966b5
- (void)_adjustWiFiAutoAssociationLocked;	// 0x34396561
// declared property getter: - (int)_applySkipCount;	// 0x34398975
// declared property getter: - (BOOL)_cachedAirplaneMode;	// 0x34398915
// declared property getter: - (void *)_cellAssertion;	// 0x34398935
- (void)_createCTServerConnection;	// 0x34397d19
- (void)_createWiFiManager;	// 0x34396335
- (void)_ctServerCallBack:(id)back object:(id)object userInfo:(id)info;	// 0x343979a1
// declared property getter: - (CTServerConnectionRef)_ctServerConnection;	// 0x343988f5
- (void *)_getValueForKey:(id)key;	// 0x34396285
- (void)_initializeSCPrefs:(id)prefs;	// 0x343960ad
// declared property getter: - (BOOL)_isCachedAirplaneModeValid;	// 0x34398955
- (BOOL)_isDataConnectionAvailable;	// 0x343980c9
- (void)_makeDataConnectionAvailable:(BOOL)available;	// 0x34398285
- (void)_notifyTarget:(unsigned)target;	// 0x34396231
// declared property getter: - (SCPreferencesRef)_prefs;	// 0x343988d5
- (void)_releaseCTServerConnection;	// 0x34397fb9
// declared property getter: - (void *)_serverConnection;	// 0x34398875
- (void)_setFastDormancySuspended:(BOOL)suspended;	// 0x343968a1
// declared property getter: - (void *)_suspendDormancyAssertion;	// 0x34398895
- (void)_synchronize;	// 0x34396099
- (void)addCellularAutoAssociationClientToken:(id)token;	// 0x343977f1
- (void)addFastDormancyDisableToken:(id)token;	// 0x34396b9d
- (void)addWiFiAutoAssociationClientToken:(id)token;	// 0x34397565
// declared property getter: - (BOOL)autoAssociateCellular;	// 0x34397791
// declared property getter: - (BOOL)autoAssociateWiFi;	// 0x34397539
// declared property getter: - (id)cellularAutoAssociationTokens;	// 0x34398855
// declared property getter: - (BOOL)dataConnectionExists;	// 0x3439855d
// declared property getter: - (BOOL)dataContextActive;	// 0x343989d5
- (void)dealloc;	// 0x34395f15
// declared property getter: - (BOOL)disableFastDormancy;	// 0x34396b3d
// declared property getter: - (id)disableFastDormancyTokens;	// 0x34398815
// declared property getter: - (BOOL)has2GDataConnection;	// 0x34398569
// declared property getter: - (BOOL)hasLTEDataConnection;	// 0x34398649
// declared property getter: - (BOOL)inValidSIMState;	// 0x34398475
// declared property getter: - (BOOL)isAirplaneModeEnabled;	// 0x34396299
// declared property getter: - (BOOL)isDataConnectionActive;	// 0x3439874d
// declared property getter: - (BOOL)isDataSwitchEnabled;	// 0x343986ed
// declared property getter: - (BOOL)isHostingWiFiHotSpot;	// 0x34396d51
// declared property getter: - (BOOL)isWiFiAssociated;	// 0x3439738d
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x343974c9
// declared property getter: - (id)lock;	// 0x343987f5
- (void)refresh;	// 0x34396315
// declared property getter: - (BOOL)registered;	// 0x34398995
- (void)removeCellularAutoAssociationClientToken:(id)token;	// 0x343978e5
- (void)removeFastDormancyDisableToken:(id)token;	// 0x34396c95
- (void)removeWiFiAutoAssociationClientToken:(id)token;	// 0x3439765d
// declared property setter: - (void)setCellularAutoAssociationTokens:(id)tokens;	// 0x34398865
- (void)setDataConnectionActive:(BOOL)active;	// 0x34398775
// declared property setter: - (void)setDataContextActive:(BOOL)active;	// 0x343989e5
// declared property setter: - (void)setDisableFastDormancyTokens:(id)tokens;	// 0x34398825
// declared property setter: - (void)setLock:(id)lock;	// 0x34398805
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x343989a5
// declared property setter: - (void)setShouldBringUpDataContext:(BOOL)bringUpDataContext;	// 0x343989c5
// declared property setter: - (void)setWiFiAutoAssociationTokens:(id)tokens;	// 0x34398845
// declared property setter: - (void)setWifiManager:(void *)manager;	// 0x343988c5
// declared property setter: - (void)set_applySkipCount:(int)count;	// 0x34398985
// declared property setter: - (void)set_cachedAirplaneMode:(BOOL)mode;	// 0x34398925
// declared property setter: - (void)set_cellAssertion:(void *)assertion;	// 0x34398945
// declared property setter: - (void)set_ctServerConnection:(CTServerConnectionRef)connection;	// 0x34398905
// declared property setter: - (void)set_isCachedAirplaneModeValid:(BOOL)valid;	// 0x34398965
// declared property setter: - (void)set_prefs:(SCPreferencesRef)prefs;	// 0x343988e5
// declared property setter: - (void)set_serverConnection:(void *)connection;	// 0x34398885
// declared property setter: - (void)set_suspendDormancyAssertion:(void *)assertion;	// 0x343988a5
// declared property getter: - (BOOL)shouldBringUpDataContext;	// 0x343989b5
- (void)showNetworkOptions;	// 0x34397719
// declared property getter: - (id)wiFiAutoAssociationTokens;	// 0x34398835
// declared property getter: - (id)wiFiScaledRSSI;	// 0x343970cd
// declared property getter: - (id)wiFiScaledRate;	// 0x3439722d
// declared property getter: - (id)wiFiSignalStrength;	// 0x34396f6d
// declared property getter: - (void *)wifiManager;	// 0x343988b5
// declared property getter: - (BOOL)willTryToAutoAssociateWiFiNetwork;	// 0x34396dd9
// declared property getter: - (BOOL)willTryToSearchForWiFiNetwork;	// 0x34396edd
@end
