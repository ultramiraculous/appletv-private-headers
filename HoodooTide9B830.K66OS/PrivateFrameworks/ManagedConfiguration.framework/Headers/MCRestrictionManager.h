/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;

@interface MCRestrictionManager : NSObject {
@private
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
	dispatch_queue_s *_syncQueue;	// 44 = 0x2c
	dispatch_queue_s *_nagMetaQueue;	// 48 = 0x30
	int _senderPID;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *clientRestrictions;	// G=0x33b044f5; converted property
@property(readonly, retain) NSDictionary *effectiveUserSettings;	// G=0x33b04a75; converted property
@property(readonly, retain) NSMutableDictionary *profileRestrictions;	// G=0x33b043c1; converted property
@property(assign) int senderPID;	// G=0x33b03aa5; S=0x33b03ab5; @synthesize=_senderPID
@property(readonly, retain) NSDictionary *userSettings;	// G=0x33b04965; converted property
+ (BOOL)_isDictionary:(id)dictionary differentFromDictionary:(id)dictionary2;	// 0x33b0647d
+ (void)_setPathsRestrictionsFilePath:(id)path defaultRestrictionsFilePath:(id)path2 clientTypeLoadersFilePath:(id)path3 profileRestrictionsFilePath:(id)path4 clientRestrictionsFilePath:(id)path5 userSettingsFilePath:(id)path6 effectiveUserSettingsFilePath:(id)path7;	// 0x33b07989
+ (BOOL)boolSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x33b06591
+ (int)boolSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x33b066ad
+ (int)defaultBoolValueForSetting:(id)setting;	// 0x33b06765
+ (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x33b06819
+ (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x33b067d9
+ (id)defaultSettingsDict;	// 0x33b06859
+ (id)defaultValueForSetting:(id)setting;	// 0x33b06711
+ (id)filterRestrictionDictionaryForPublicUse:(id)publicUse;	// 0x33b06b1d
+ (id)objectForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x33b06a1d
+ (BOOL)restrictedBool:(id)aBool changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x33b06949
+ (int)restrictedBoolForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x33b06aad
+ (BOOL)restrictedValue:(id)value changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x33b06875
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)dictionary toRestrictionsDictionary:(id)restrictionsDictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x33b070dd
+ (id)restrictionsWithCurrentRestrictions:(id)currentRestrictions defaultRestrictions:(id)restrictions profileRestrictions:(id)restrictions3 clientRestrictions:(id)restrictions4 outRestrictionsChanged:(BOOL *)changed outError:(id *)error;	// 0x33b06e8d
+ (id)sharedManager;	// 0x33b0795d
+ (id)valueForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;	// 0x33b06a59
+ (BOOL)valueSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x33b064bd
+ (id)valueSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x33b06665
- (id)_clientRestrictions;	// 0x33b092d5
- (id)_clientRestrictionsForClientUUID:(id)clientUUID;	// 0x33b05389
- (id)_clientTypeForClientUUID:(id)clientUUID;	// 0x33b053c9
- (id)_currentRestrictionsDictionary;	// 0x33b096cd
- (id)_defaultRestrictionsDictionary;	// 0x33b0979d
- (id)_defaultSettingsDictionary;	// 0x33b05095
- (id)_effectiveUserSettings;	// 0x33b0841d
- (id)_init;	// 0x33b08869
- (id)_liveClientUUIDsForClientType:(id)clientType;	// 0x33b089e5
- (id)_loadClientLoaders;	// 0x33b08a49
- (id)_profileRestrictions;	// 0x33b09549
- (BOOL)_recomputeEffectiveUserSettings;	// 0x33b07c81
- (BOOL)_setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outError:(id *)error;	// 0x33b09065
- (void)_setClientRestrictionsWithoutNotifications:(id)notifications;	// 0x33b09269
- (BOOL)_setEffectiveUserSettings:(id)settings;	// 0x33b08265
- (void)_setRestrictions:(id)restrictions;	// 0x33b09645
- (BOOL)_setUserSettings:(id)settings;	// 0x33b084c5
- (id)_userInfoForClientUUID:(id)clientUUID;	// 0x33b05409
- (id)_userSettings;	// 0x33b08561
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x33b05449
// converted property getter: - (id)clientRestrictions;	// 0x33b044f5
- (id)clientRestrictionsForClientUUID:(id)clientUUID;	// 0x33b04605
- (id)combinedProfileRestrictions;	// 0x33b093d1
- (id)currentRestrictionsDictionary;	// 0x33b042b1
- (void)dealloc;	// 0x33b086c9
- (id)defaultRestrictionsDictionary;	// 0x33b0418d
- (id)description;	// 0x33b087ed
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x33b07c41
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x33b07c01
- (int)effectiveRestrictedBoolForSetting:(id)setting;	// 0x33b07bad
// converted property getter: - (id)effectiveUserSettings;	// 0x33b04a75
- (id)effectiveValueForSetting:(id)setting;	// 0x33b07b75
- (void)invalidateRestrictions;	// 0x33b03ac5
- (void)invalidateSettings;	// 0x33b03bb9
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x33b07ad1
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x33b04d11
- (void)notifyClientsToRecomputeCompliance;	// 0x33b088ed
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x33b03d05
- (id)objectForFeature:(id)feature;	// 0x33b08609
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)dictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x33b06429
// converted property getter: - (id)profileRestrictions;	// 0x33b043c1
- (BOOL)recomputeNagMetadata;	// 0x33b05d29
- (void)removeBoolSetting:(id)setting;	// 0x33b03de5
- (BOOL)removeOrphanedClientRestrictions;	// 0x33b057dd
- (void)removeValueSetting:(id)setting;	// 0x33b03f51
- (void)resetAllSettingsToDefaults;	// 0x33b040bd
- (int)restrictedBoolForFeature:(id)feature;	// 0x33b08689
// declared property getter: - (int)senderPID;	// 0x33b03aa5
- (BOOL)setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x33b056f9
- (void)setBoolValue:(BOOL)value forSetting:(id)setting;	// 0x33b08369
- (BOOL)setClientRestrictions:(id)restrictions clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarning:(id)warning outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x33b08ec9
- (BOOL)setParametersForSettingsByType:(id)settingsByType;	// 0x33b04b85
- (BOOL)setProfileRestrictions:(id)restrictions outRestrictionsChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x33b050b1
// declared property setter: - (void)setSenderPID:(int)pid;	// 0x33b03ab5
- (void)setShowNagMessage;	// 0x33b03c79
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x33b08fcd
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x33b0473d
// converted property getter: - (id)userSettings;	// 0x33b04965
- (id)valueForFeature:(id)feature;	// 0x33b08649
@end
