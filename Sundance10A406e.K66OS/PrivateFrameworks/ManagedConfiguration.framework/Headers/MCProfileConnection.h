/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"

@class NSDictionary, NSData, NSDate, NSTimer, CPDistributedMessagingCenter, NSMutableArray;
@protocol MCInteractionDelegate, OS_dispatch_queue;

@interface MCProfileConnection : NSObject {
	CPDistributedMessagingCenter *_messageCenter;	// 4 = 0x4
	CFBagRef _observers;	// 8 = 0x8
	CPDistributedMessagingCenter *_interactionServer;	// 12 = 0xc
	id<MCInteractionDelegate> _interactionDelegate;	// 16 = 0x10
	id _interactionLockDelayedContext;	// 20 = 0x14
	NSDictionary *_preflightResponse;	// 24 = 0x18
	NSData *_originalProfileData;	// 28 = 0x1c
	BOOL _needToRestoreOriginalProfileData;	// 32 = 0x20
	NSDate *_lastNoPasscodeMDMPollTime;	// 36 = 0x24
	int _userInputTimeoutType;	// 40 = 0x28
	NSTimer *_userInputTimer;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_notificationSyncQueue;	// 48 = 0x30
	NSMutableArray *_notificationTokens;	// 52 = 0x34
}
+ (id)sharedConnection;	// 0x35786b21
- (void).cxx_destruct;	// 0x357877b9
- (void)__checkForProfiledCrash;	// 0x357b69d1
- (void)__doMCICDidFinish:(id)__doMCIC;	// 0x357b66d5
- (void)__effectiveSettingsDidChange:(id)__effectiveSettings;	// 0x357873f1
- (void)__passcodeDidChange;	// 0x35787145
- (void)__passcodePolicyDidChange;	// 0x35787229
- (void)__profileListDidChange;	// 0x3578730d
- (void)__restrictionDidChange;	// 0x35787061
- (void)_applyToObservers:(id)observers;	// 0x35786e75
- (void)_cancelUserInputTimeout;	// 0x357b5db9
- (void)_defaultsDidChange;	// 0x35787515
- (void)_detectProfiledCrashes;	// 0x357b5511
- (void)_doMCICDidBeginInstallingNextProfileData:(id)_doMCIC params:(id)params;	// 0x357b6591
- (void)_doMCICDidFinish:(id)_doMCIC params:(id)params;	// 0x357b6815
- (void)_doMCICDidRequestCurrentPasscode:(id)_doMCIC params:(id)params;	// 0x357b644d
- (void)_doMCICDidUpdateStatus:(id)_doMCIC params:(id)params;	// 0x357b6351
- (void)_doMCICPreflightResponse:(id)response params:(id)params;	// 0x357b6011
- (void)_doMCICRequestUserInput:(id)input params:(id)params;	// 0x357b6b55
- (void)_doMCICShowUserWarnings:(id)warnings params:(id)params;	// 0x357b6e6d
- (void)_effectiveSettingsDidChange:(id)_effectiveSettings;	// 0x357875f9
- (int)_getPasscodeComplianceWarningExpiryDate:(id)date lastLockDate:(id)date2 outLocalizedTitle:(id *)title outLocalizedMessage:(id *)message;	// 0x357b94b1
- (id)_init;	// 0x35785dbd
- (void)_internalDefaultsDidChange;	// 0x35787541
- (BOOL)_openSensitiveURLString:(id)string unlock:(BOOL)unlock;	// 0x357b4bf1
- (void)_passcodeDidChange;	// 0x357871fd
- (void)_passcodePolicyDidChange;	// 0x357872e1
- (id)_pathsToInstalledProfilesWithFlags:(int)flags;	// 0x357b4019
- (void)_profileListDidChange;	// 0x357873c5
- (id)_queueDataForAcceptance:(id)acceptance originalFileName:(id)name transitionToUI:(BOOL)ui outError:(id *)error;	// 0x357b4365
- (void)_registerSelectorsForInteractionServer:(id)interactionServer;	// 0x357b55fd
- (void)_restrictionDidChange;	// 0x35787119
- (void)_setTimeoutWaitingForUserInputType:(int)userInputType;	// 0x357b5bd9
- (void)_tearDownInteractionServer;	// 0x357b5475
- (void)_userInputTimerFired;	// 0x357b5e35
- (id)acceptedFileExtensions;	// 0x357b4b7d
- (id)acceptedMIMETypes;	// 0x357b4b25
- (void)addObserver:(id)observer;	// 0x35787629
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x357b7ec9
- (int)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarningMessage:(id)message complianceBlocking:(int)blocking displayImmediateAlert:(BOOL)alert outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed9 outError:(id *)error;	// 0x357b77c9
- (BOOL)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarningMessage:(id)message outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outError:(id *)error;	// 0x357b7591
- (BOOL)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed5 outError:(id *)error;	// 0x357b35e9
- (int)boolRestrictionForFeature:(id)feature;	// 0x357b7465
- (void)cancelUserInputResponses;	// 0x357b613d
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x357b8e9d
- (id)chaperoneOrganization;	// 0x357b7381
- (void)checkCarrierProfile;	// 0x357ba351
- (void)checkCarrierProfileForceInstallation:(BOOL)installation;	// 0x357ba365
- (void)checkIn;	// 0x35786da5
- (void)checkInAsynchronously;	// 0x35786e11
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x357b9009
- (BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id *)globalRestrictionsOutError;	// 0x357b9351
- (BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id *)profileRestrictionsOutError;	// 0x357b9415
- (void)dealloc;	// 0x35786c39
- (int)defaultBoolValueForSetting:(id)setting;	// 0x357b878d
- (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x357b87c5
- (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x357b87e1
- (id)defaultValueForSetting:(id)setting;	// 0x357b87a9
- (id)doNotBackupAppIDs;	// 0x357ba1b5
- (id)doNotDocumentSyncAppIDs;	// 0x357ba1c9
- (int)effectiveBoolValueForSetting:(id)setting;	// 0x357b88cd
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x357b87fd
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x357b8865
- (int)effectiveRestrictedBoolValueForSetting:(id)setting;	// 0x357b3681
- (id)effectiveRestrictions;	// 0x357b7411
- (id)effectiveUserSettings;	// 0x357b8b55
- (id)effectiveValueForSetting:(id)setting;	// 0x357b8941
- (id)effectiveWhitelistedAppsAndOptions;	// 0x357b8105
- (void)getPasscodeComplianceWarningLastLockDate:(id)date completionBlock:(id)block;	// 0x357b9b2d
- (int)getPasscodeComplianceWarningLastLockDate:(id)date outLocalizedTitle:(id *)title outLocalizedMessage:(id *)message;	// 0x357b9ac1
- (void)installProfile:(id)profile interactionDelegate:(id)delegate;	// 0x357b58ad
- (id)installProfile:(id)profile outError:(id *)error;	// 0x357b4661
- (void)installProfileData:(id)data interactionDelegate:(id)delegate;	// 0x357b573d
- (id)installProfileData:(id)data managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x357b46d9
- (id)installProfileData:(id)data outError:(id *)error;	// 0x357b46b9
- (BOOL)installProvisioningProfileData:(id)data managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x357b5225
- (id)installedProfileWithIdentifier:(id)identifier;	// 0x357b41d5
- (id)installedProfilesWithFilterFlags:(int)filterFlags;	// 0x357b4071
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x357b8995
- (BOOL)isChaperoned;	// 0x357b7325
- (BOOL)isContentProtectionInEffect;	// 0x357b92c1
- (BOOL)isPasscodeRequired;	// 0x357b8cc5
- (BOOL)isPasscodeRequiredByPolicy;	// 0x357b358d
- (BOOL)isPasscodeRequiredByProfiles;	// 0x357b8d21
- (BOOL)isPasscodeSet;	// 0x357b8c7d
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x357b89f1
- (id)localizedDescriptionOfCurrentPasscodeConstraints;	// 0x357b9fe9
- (void)lockDevice;	// 0x357b8bf1
- (id)managedAppIDsWithFlags:(int)flags;	// 0x357ba1dd
- (id)managedSystemConfigurationServiceIDs;	// 0x357ba141
- (id)managedWiFiNetworkNames;	// 0x357ba069
- (void)migratePostDataMigrator;	// 0x357ba321
- (int)newPasscodeEntryScreenType;	// 0x357b9fa1
- (void)notifyClientsToRecomputeCompliance;	// 0x357b9e09
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x357b9e4d
- (id)objectForFeature:(id)feature;	// 0x357b3671
- (id)objectRestrictionForFeature:(id)feature;	// 0x357b7529
- (id)parametersForBoolSetting:(id)boolSetting;	// 0x357b8675
- (id)parametersForValueSetting:(id)valueSetting;	// 0x357b8701
- (BOOL)passcode:(id)passcode meetsCurrentConstraintsOutError:(id *)error;	// 0x357b92e1
- (id)passcodeExpiryDate;	// 0x357b35a5
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x357b9f01
- (void)performBootTimeChecks;	// 0x357ba439
- (id)popProfileFromHeadOfInstallationQueue;	// 0x357b41f1
- (id)popProvisioningProfileDataFromHeadOfInstallationQueue;	// 0x357b42f1
- (void)preflightUserInputResponses:(id)responses forPayloadIndex:(unsigned)payloadIndex;	// 0x357b5a65
- (void)processProfilesPostMigrate;	// 0x357ba2f1
- (void)processProfilesPostRestore;	// 0x357ba2c1
- (id)profileFromProfileData:(id)profileData outError:(id *)error;	// 0x357b3479
- (id)queueFileDataForAcceptance:(id)acceptance originalFileName:(id)name outError:(id *)error;	// 0x357b45d1
- (id)queueFileDataForProfileInstallation:(id)profileInstallation originalFileName:(id)name outError:(id *)error;	// 0x357b3541
- (id)queueProfileDataForAcceptance:(id)acceptance outError:(id *)error;	// 0x357b3495
- (id)queueProfileDataForInstallation:(id)installation outError:(id *)error;	// 0x357b351d
- (id)queueProfileForAcceptance:(id)acceptance outError:(id *)error;	// 0x357b456d
- (id)queueProfileForInstallation:(id)installation outError:(id *)error;	// 0x357b34b9
- (void)recomputeUserComplianceWarning;	// 0x357b9dd9
- (void)recomputeUserComplianceWarningSynchronously;	// 0x357b9d95
- (void)removeBoolSetting:(id)setting;	// 0x357b8a4d
- (void)removeObserver:(id)observer;	// 0x357876f1
- (void)removeOrphanedClientRestrictions;	// 0x357b80d5
- (void)removeProfileAsyncWithIdentifier:(id)identifier;	// 0x357b4889
- (void)removeProfileWithIdentifier:(id)identifier;	// 0x357b4805
- (void)removeProfileWithIdentifier:(id)identifier completion:(id)completion;	// 0x357b4905
- (void)removeProfilesFromInstallationQueue;	// 0x357b461d
- (BOOL)removeProvisioningProfileWithUUID:(id)uuid outError:(id *)error;	// 0x357b535d
- (void)removeValueSetting:(id)setting;	// 0x357b8ad1
- (void)resetAllSettingsToDefaults;	// 0x357b8ba9
- (void)respondToCurrentPasscodeRequestContinue:(BOOL)currentPasscodeRequestContinue passcode:(id)passcode;	// 0x357b71c5
- (void)respondToWarningsContinueInstallation:(BOOL)warningsContinueInstallation;	// 0x357b7089
- (int)restrictedBoolValueForFeature:(id)feature;	// 0x357b3651
- (void)setBoolValue:(BOOL)value forSetting:(id)setting;	// 0x357b8451
- (void)setDelegate:(id)delegate;	// 0x357b3409
- (void)setInteractionDelegate:(id)delegate;	// 0x357b5a4d
- (void)setParameters:(id)parameters forBoolSetting:(id)boolSetting;	// 0x357b8311
- (void)setParameters:(id)parameters forValueSetting:(id)valueSetting;	// 0x357b83b1
- (void)setParametersForSettingsByType:(id)settingsByType;	// 0x357b81e1
- (void)setPasscodeWasSetInBackup:(BOOL)backup;	// 0x357b364d
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x357b7f99
- (void)setValue:(id)value forSetting:(id)setting;	// 0x357b8545
- (BOOL)showProfileErrorUIWithProfileIdentifier:(id)profileIdentifier outError:(id *)error;	// 0x357b4e7d
- (void)shutDown;	// 0x357ba0dd
- (void)storeCertificateData:(id)data forHostIdentifier:(id)hostIdentifier;	// 0x357ba49d
- (void)submitUserInputResponses:(id)responses;	// 0x357b6215
- (BOOL)transitionToProfileAcceptanceUI;	// 0x357b4d4d
- (BOOL)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)bundleID;	// 0x357b4db9
- (BOOL)transitionToProfileOverviewUI;	// 0x357b4d25
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x357b91bd
- (int)unlockScreenType;	// 0x357b9f59
- (void)updateProfileWithIdentifier:(id)identifier interactionDelegate:(id)delegate;	// 0x357b5915
- (id)updateProfileWithIdentifier:(id)identifier outError:(id *)error;	// 0x357b4a25
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x357b7f31
- (id)userSettings;	// 0x357b8621
- (BOOL)validatePasscode:(id)passcode;	// 0x357b35b9
- (BOOL)validatePasscode:(id)passcode andUnlockContentProtectedDevice:(BOOL)device;	// 0x357b35d1
- (id)valueForFeature:(id)feature;	// 0x357b3661
- (id)valueRestrictionForFeature:(id)feature;	// 0x357b74c1
@end
