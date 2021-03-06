/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MCRestrictionManager : NSObject {
	NSMutableDictionary *_defaultRestrictions;	// 4 = 0x4
	NSMutableDictionary *_restrictions;	// 8 = 0x8
	NSMutableDictionary *_profileRestrictions;	// 12 = 0xc
	NSMutableDictionary *_clientRestrictions;	// 16 = 0x10
	NSDictionary *_userSettings;	// 20 = 0x14
	NSDictionary *_effectiveUserSettings;	// 24 = 0x18
	NSDictionary *_clientTypeLoaders;	// 28 = 0x1c
	CFDictionaryRef _clientTypeToLoaderClass;	// 32 = 0x20
	CFDictionaryRef _clientTypeToLoaderSelector;	// 36 = 0x24
	CFDictionaryRef _clientTypeToRecomputeComplianceSelector;	// 40 = 0x28
	NSObject<OS_dispatch_queue> *_syncQueue;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_nagMetaQueue;	// 48 = 0x30
	int _senderPID;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *clientRestrictions;	// G=0x3578e79d; converted property
@property(readonly, retain) NSDictionary *effectiveUserSettings;	// G=0x35793171; converted property
@property(readonly, retain) NSMutableDictionary *profileRestrictions;	// G=0x3578dff5; converted property
@property(assign, nonatomic) int senderPID;	// G=0x35794ec1; S=0x35794ed1; @synthesize=_senderPID
@property(readonly, retain) NSDictionary *userSettings;	// G=0x35792ec1; converted property
+ (BOOL)_isDictionary:(id)dictionary differentFromDictionary:(id)dictionary2;	// 0x35794e7d
+ (void)_setPathsRestrictionsFilePath:(id)path defaultRestrictionsFilePath:(id)path2 clientTypeLoadersFilePath:(id)path3 profileRestrictionsFilePath:(id)path4 clientRestrictionsFilePath:(id)path5 userSettingsFilePath:(id)path6 effectiveUserSettingsFilePath:(id)path7;	// 0x3578d625
+ (BOOL)boolSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x35794bed
+ (int)boolSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x35794aad
+ (int)defaultBoolValueForSetting:(id)setting;	// 0x3579492d
+ (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x35794815
+ (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x357948a1
+ (id)defaultSettingsDict;	// 0x357947f9
+ (id)defaultValueForSetting:(id)setting;	// 0x357949fd
+ (id)filterRestrictionDictionaryForPublicUse:(id)publicUse;	// 0x35792391
+ (id)objectForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x35792ac9
+ (BOOL)restrictedBool:(id)aBool changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x35792b4d
+ (int)restrictedBoolForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x35792941
+ (BOOL)restrictedValue:(id)value changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x35792c95
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)dictionary toRestrictionsDictionary:(id)restrictionsDictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x3579167d
+ (id)restrictionsWithCurrentRestrictions:(id)currentRestrictions defaultRestrictions:(id)restrictions profileRestrictions:(id)restrictions3 clientRestrictions:(id)restrictions4 outRestrictionsChanged:(BOOL *)changed outError:(id *)error;	// 0x35792055
+ (id)sharedManager;	// 0x3578d6c1
+ (id)valueForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x35792a19
+ (BOOL)valueSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x35794d35
+ (id)valueSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x35794b5d
- (void).cxx_destruct;	// 0x35794ee1
- (id)_clientRestrictions;	// 0x3578e67d
- (id)_clientRestrictionsForClientUUID:(id)clientUUID;	// 0x3578e8b9
- (id)_clientTypeForClientUUID:(id)clientUUID;	// 0x3578e949
- (id)_currentRestrictionsDictionary;	// 0x3578dc11
- (id)_defaultRestrictionsDictionary;	// 0x3578d8b9
- (id)_defaultSettingsDictionary;	// 0x3578dbf5
- (id)_effectiveUserSettings;	// 0x3579308d
- (id)_init;	// 0x35791449
- (id)_liveClientUUIDsForClientType:(id)clientType;	// 0x3579018d
- (id)_loadClientLoaders;	// 0x3578fc29
- (id)_profileRestrictions;	// 0x3578ded5
- (BOOL)_recomputeEffectiveUserSettings;	// 0x357934c9
- (BOOL)_setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outError:(id *)error;	// 0x3578f031
- (void)_setClientRestrictionsWithoutNotifications:(id)notifications;	// 0x3578efd5
- (BOOL)_setEffectiveUserSettings:(id)settings;	// 0x35793381
- (void)_setRestrictions:(id)restrictions;	// 0x3578de29
- (BOOL)_setUserSettings:(id)settings;	// 0x35792fdd
- (id)_userInfoForClientUUID:(id)clientUUID;	// 0x3578eb35
- (id)_userSettings;	// 0x35792ddd
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x3578ed21
// converted property getter: - (id)clientRestrictions;	// 0x3578e79d
- (id)clientRestrictionsForClientUUID:(id)clientUUID;	// 0x3578e9d9
- (id)combinedProfileRestrictions;	// 0x3578e111
- (id)currentRestrictionsDictionary;	// 0x3578dd0d
- (void)dealloc;	// 0x35791589
- (id)defaultRestrictionsDictionary;	// 0x3578dac5
- (id)description;	// 0x357914e5
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x35793e21
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x35793ead
- (int)effectiveRestrictedBoolForSetting:(id)setting;	// 0x35793f39
// converted property getter: - (id)effectiveUserSettings;	// 0x35793171
- (id)effectiveValueForSetting:(id)setting;	// 0x35793fad
- (void)invalidateRestrictions;	// 0x3578d73d
- (void)invalidateSettings;	// 0x3578d811
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x35794001
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x35794121
- (void)notifyClientsToRecomputeCompliance;	// 0x35790225
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x35791335
- (id)objectForFeature:(id)feature;	// 0x357928c9
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)dictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x357915f9
// converted property getter: - (id)profileRestrictions;	// 0x3578dff5
- (BOOL)recomputeNagMetadata;	// 0x357908d1
- (void)removeBoolSetting:(id)setting;	// 0x357943e1
- (BOOL)removeOrphanedClientRestrictions;	// 0x35790361
- (void)removeValueSetting:(id)setting;	// 0x35794579
- (void)resetAllSettingsToDefaults;	// 0x35794711
- (int)restrictedBoolForFeature:(id)feature;	// 0x357927e9
// declared property getter: - (int)senderPID;	// 0x35794ec1
- (BOOL)setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x3578f4b5
- (void)setBoolValue:(BOOL)value forSetting:(id)setting;	// 0x3579328d
- (BOOL)setClientRestrictions:(id)restrictions clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarning:(id)warning outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x3578f695
- (BOOL)setParametersForSettingsByType:(id)settingsByType;	// 0x35793c71
- (BOOL)setProfileRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x3578e281
// declared property setter: - (void)setSenderPID:(int)pid;	// 0x35794ed1
- (void)setShowNagMessage;	// 0x35791285
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x3578f28d
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x3578ebc5
// converted property getter: - (id)userSettings;	// 0x35792ec1
- (id)valueForFeature:(id)feature;	// 0x35792851
@end

