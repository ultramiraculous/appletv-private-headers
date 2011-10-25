/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import <MCTunnelParser.h> // Unknown library

@class NSString, MCMDMServer;

@interface MCMDMParser : MCTunnelParser {
@private
	NSString *_managingProfileIdentifier;	// 4 = 0x4
	MCMDMServer *_server;	// 8 = 0x8
	BOOL _isChaperone;	// 12 = 0xc
}
@property(readonly, assign) BOOL isChaperone;	// G=0x328f22fd; @synthesize=_isChaperone
@property(assign, nonatomic) MCMDMServer *server;	// G=0x328f230d; S=0x328f231d; @synthesize=_server
- (id)initWithManagingProfileIdentifier:(id)managingProfileIdentifier;	// 0x328f730d
- (id)initWithManagingProfileIdentifier:(id)managingProfileIdentifier isChaperone:(BOOL)chaperone;	// 0x328f232d
- (id)_allCommands;	// 0x328f7125
- (id)_allSettingsItems;	// 0x328f70f9
- (id)_appStoreDisabledError;	// 0x328f2d69
- (BOOL)_appStoreEnabled;	// 0x328f2dc9
- (id)_applyRedemptionCode:(id)code;	// 0x328f2869
- (id)_availableCommandsWhileLocked;	// 0x328f7151
- (id)_certificateList:(id)list;	// 0x328f4899
- (id)_clearPasscode:(id)passcode;	// 0x328f5b69
- (id)_deviceInformationWithRequest:(id)request accessRights:(int)rights;	// 0x328f5429
- (id)_deviceLock:(id)lock;	// 0x328f5d95
- (id)_eraseDevice:(id)device;	// 0x328f59dd
- (id)_installApplication:(id)application;	// 0x328f29cd
- (id)_installProfile:(id)profile accessRights:(int)rights;	// 0x328f3ba9
- (id)_installProvisioningProfile:(id)profile;	// 0x328f45dd
- (id)_installedApplicationList:(id)list;	// 0x328f409d
- (id)_invalidRequestTypeError:(id)error;	// 0x328f7261
- (BOOL)_isProfileIdentifierManaged:(id)managed;	// 0x328f4559
- (BOOL)_isProvisioningProfileUUIDManaged:(id)managed;	// 0x328f44d5
- (id)_managedApplicationList:(id)list;	// 0x328f25b5
- (id)_notAuthorizedError;	// 0x328f7201
- (void)_performQuery:(id)query withResultDictionary:(id)resultDictionary;	// 0x328f4c71
- (id)_performSetDataRoaming:(id)roaming;	// 0x328f32e5
- (id)_performSetVoiceRoaming:(id)roaming;	// 0x328f325d
- (id)_performSetWallpaper:(id)wallpaper;	// 0x328f336d
- (id)_performSetting:(id)setting;	// 0x328f30fd
- (id)_processRequest:(id)request withAccessRights:(int)accessRights;	// 0x328f661d
- (id)_profileList:(id)list;	// 0x328f5dc9
- (id)_provisioningProfileList:(id)list;	// 0x328f4689
- (id)_removeApplication:(id)application;	// 0x328f2395
- (id)_removeProfile:(id)profile;	// 0x328f3a01
- (id)_removeProvisioningProfile:(id)profile;	// 0x328f43a5
- (id)_requestUnlockToken:(id)token;	// 0x328f5ad5
- (id)_restrictions:(id)restrictions;	// 0x328f3d75
- (id)_securityInfo:(id)info;	// 0x328f37c1
- (id)_settings:(id)settings accessRights:(int)rights;	// 0x328f2e15
- (BOOL)_validateSetting:(id)setting accessRights:(int)rights outError:(id *)error;	// 0x328f34c9
- (void)dealloc;	// 0x328f72c1
// declared property getter: - (BOOL)isChaperone;	// 0x328f22fd
- (id)malformedRequestErrorResult;	// 0x328f717d
- (id)processRequest:(id)request withAccessRights:(int)accessRights;	// 0x328f69d9
// declared property getter: - (id)server;	// 0x328f230d
// declared property setter: - (void)setServer:(id)server;	// 0x328f231d
@end

