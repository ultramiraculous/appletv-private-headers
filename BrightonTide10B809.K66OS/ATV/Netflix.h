/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString, NSMutableArray, NSDictionary, NetflixNrdObjectCallback, BuiltinConfig, NSMutableDictionary, PeriodicWorkerThread, NSLock, NSArray, NSError;
@protocol NSObject, NetflixConfigProtocol;

@interface Netflix : XXUnknownSuperclass {
	int runtimeState_;	// 4 = 0x4
	BOOL deferredStop_;	// 8 = 0x8
	BOOL nfhlsProtocol_;	// 9 = 0x9
	BOOL testEnv_;	// 10 = 0xa
	int nrdLogLevel_;	// 12 = 0xc
	Class customNetflixConfigClass_;	// 16 = 0x10
	NSString *version_;	// 20 = 0x14
	NSString *deviceModel_;	// 24 = 0x18
	NSString *udid_;	// 28 = 0x1c
	NSString *hashedUdid_;	// 32 = 0x20
	NSString *esnPrefix_;	// 36 = 0x24
	NSString *esn_;	// 40 = 0x28
	int targetType_;	// 44 = 0x2c
	BOOL appleTV_;	// 48 = 0x30
	BOOL gettingDeviceTokens_;	// 49 = 0x31
	NSLock *gettingDeviceTokensLock_;	// 52 = 0x34
	NSString *uuidStartTime_;	// 56 = 0x38
	NSString *applicationName_;	// 60 = 0x3c
	NSString *hostName_;	// 64 = 0x40
	NSString *deviceLanguage_;	// 68 = 0x44
	NSArray *userAccountPreferredLanguages_;	// 72 = 0x48
	NSLock *scheduledPreferredLanguagesLock_;	// 76 = 0x4c
	BOOL scheduledPreferredLanguages_;	// 80 = 0x50
	NSString *preferredLanguagesForApi_;	// 84 = 0x54
	BOOL preferredLanguagesSuccess_;	// 88 = 0x58
	NSString *didLoginRequiredNotificationName_;	// 92 = 0x5c
	NSString *didFailLoginRequiredNotificationName_;	// 96 = 0x60
	NSString *swUpgradedFromVersion_;	// 100 = 0x64
	NSString *geolocation_;	// 104 = 0x68
	NSString *geolocationCountry_;	// 108 = 0x6c
	NSString *geolocationStatus_;	// 112 = 0x70
	NSString *geolocationLanguage_;	// 116 = 0x74
	NSString *geolocationLocale_;	// 120 = 0x78
	NSString *userAgentApplicationName_;	// 124 = 0x7c
	NSString *userAgentApplicationVersion_;	// 128 = 0x80
	NSMutableArray *userAgentApplicationComments_;	// 132 = 0x84
	NSString *softwareVersion_;	// 136 = 0x88
	NSMutableArray *accounts_;	// 140 = 0x8c
	NSMutableDictionary *parameterItems_;	// 144 = 0x90
	NSMutableDictionary *configurationItems_;	// 148 = 0x94
	NSString *apiServerHostname_;	// 152 = 0x98
	NSString *configServerUrl_;	// 156 = 0x9c
	NSString *apiVersion_;	// 160 = 0xa0
	NSString *defaultUiBootUrl_;	// 164 = 0xa4
	NSString *defaultGenericFeedUrl_;	// 168 = 0xa8
	NSString *nccpServerUrl_;	// 172 = 0xac
	NSString *genericFeedUrl_;	// 176 = 0xb0
	NSString *uiBootUrl_;	// 180 = 0xb4
	double periodicWorkerTimeInterval_;	// 184 = 0xb8
	PeriodicWorkerThread *periodicWorkerThread_;	// 192 = 0xc0
	double reconfigureTimeInterval_;	// 196 = 0xc4
	BOOL nrdpStartCompleted_;	// 204 = 0xcc
	NSError *nrdpStartError_;	// 208 = 0xd0
	BOOL initialConfigurationCompleted_;	// 212 = 0xd4
	BOOL loginRequiredAllowedForStartup_;	// 213 = 0xd5
	BOOL initialLoginRequiredCompleted_;	// 214 = 0xd6
	BOOL iosSWUpdateCompleted_;	// 215 = 0xd7
	NSError *initialLoginRequiredError_;	// 216 = 0xd8
	NSError *configError_;	// 220 = 0xdc
	BuiltinConfig *builtinConfig_;	// 224 = 0xe0
	id<NSObject, NetflixConfigProtocol> customConfig_;	// 228 = 0xe4
	NSString *netflixIdKey_;	// 232 = 0xe8
	NSString *netflixIdValue_;	// 236 = 0xec
	NSString *secureNetflixIdKey_;	// 240 = 0xf0
	NSString *secureNetflixIdValue_;	// 244 = 0xf4
	NSString *userEmail_;	// 248 = 0xf8
	NSString *userPassword_;	// 252 = 0xfc
	NSString *userId_;	// 256 = 0x100
	NetflixNrdObjectCallback *validateDeviceCallback_;	// 260 = 0x104
	BOOL cookiesDirty_;	// 264 = 0x108
	NSLock *pingLock_;	// 268 = 0x10c
	NSLock *loginLock_;	// 272 = 0x110
	BOOL loginProcessing_;	// 276 = 0x114
	NSString *masterM3u8Prefix_;	// 280 = 0x118
	BOOL intBasedM3u8_;	// 284 = 0x11c
	int pinnedCdnId_;	// 288 = 0x120
	BOOL supportUnmuxedStreams_;	// 292 = 0x124
	NSString *localhost_;	// 296 = 0x128
	int localhostPort_;	// 300 = 0x12c
	NSString *dataDirectory_;	// 304 = 0x130
	bool factoryReset_;	// 308 = 0x134
	ConsoleSink *consoleSink_;	// 312 = 0x138
	NrdLib *nrdLib_;	// 316 = 0x13c
	NBPApplication *nbp_;	// 320 = 0x140
	BOOL userForciblyLoggedOut_;	// 324 = 0x144
	BOOL isTerminating_;	// 325 = 0x145
}
@property(copy) NSMutableArray *accounts;	// G=0x4ac665; S=0x4ac679; @synthesize=accounts_
@property(copy, nonatomic) NSString *apiServerHostname;	// G=0x4ac6d1; S=0x4ac6e5; @synthesize=apiServerHostname_
@property(copy, nonatomic) NSString *apiServerHostname;	// @dynamic
@property(readonly, assign, nonatomic) NSString *apiUUID;	// G=0x4aa84d; 
@property(readonly, assign, nonatomic) NSString *apiUUID;	// @dynamic
@property(copy, nonatomic) NSString *apiVersion;	// G=0x4ac719; S=0x4ac72d; @synthesize=apiVersion_
@property(readonly, assign, nonatomic) NSString *apiVersion;	// @dynamic
@property(assign) BOOL appleTV;	// G=0x4ac309; S=0x4ac321; @synthesize=appleTV_
@property(copy, nonatomic) NSString *applicationName;	// G=0x4ac3b1; S=0x4ac3c5; @synthesize=applicationName_
@property(copy, nonatomic) NSString *applicationName;	// @dynamic
@property(retain) BuiltinConfig *builtinConfig;	// G=0x4ac9cd; S=0x4ac9e1; @synthesize=builtinConfig_
@property(retain) BuiltinConfig *builtinConfig;	// @dynamic
@property(readonly, assign, nonatomic) unsigned certificationVersion;	// G=0x4aad3d; @dynamic
@property(retain) NSError *configError;	// G=0x4ac9a9; S=0x4ac9bd; @synthesize=configError_
@property(retain) NSError *configError;	// @dynamic
@property(copy, nonatomic) NSString *configServerUrl;	// G=0x4ac6f5; S=0x4ac709; @synthesize=configServerUrl_
@property(copy, nonatomic) NSString *configServerUrl;	// @dynamic
@property(copy) NSMutableDictionary *configurationItems;	// G=0x4ac6ad; S=0x4ac6c1; @synthesize=configurationItems_
@property(assign) ConsoleSink *consoleSink;	// G=0x4acce9; S=0x4accfd; @synthesize=consoleSink_
@property(readonly, assign, nonatomic) NSDictionary *contentProfiles;	// G=0x4aaa99; @dynamic
@property(assign) BOOL cookiesDirty;	// @dynamic
@property(assign) BOOL cookiesDirty;	// G=0x4acb35; S=0x4acb4d; @synthesize=cookiesDirty_
@property(retain) id<NSObject, NetflixConfigProtocol> customConfig;	// @dynamic
@property(retain) id<NSObject, NetflixConfigProtocol> customConfig;	// G=0x4ac9f1; S=0x4aca05; @synthesize=customConfig_
@property(retain) Class customNetflixConfigClass;	// G=0x4ac1ed; S=0x4ac201; @synthesize=customNetflixConfigClass_
@property(copy, nonatomic) NSString *dataDirectory;	// G=0x4acca1; S=0x4accb5; @synthesize=dataDirectory_
@property(readonly, assign, nonatomic) NSString *dataDirectory;	// @dynamic
@property(copy, nonatomic) NSString *defaultGenericFeedUrl;	// G=0x4ac761; S=0x4ac775; @synthesize=defaultGenericFeedUrl_
@property(readonly, assign, nonatomic) NSString *defaultGenericFeedUrl;	// @dynamic
@property(readonly, assign, nonatomic) NSString *defaultUiBootUrl;	// @dynamic
@property(copy, nonatomic) NSString *defaultUiBootUrl;	// G=0x4ac73d; S=0x4ac751; @synthesize=defaultUiBootUrl_
@property(assign) BOOL deferredStop;	// G=0x4ac19d; S=0x4ac1b5; @synthesize=deferredStop_
@property(copy, nonatomic) NSString *deviceLanguage;	// G=0x4ac3f9; S=0x4aad41; @synthesize=deviceLanguage_
@property(readonly, assign, nonatomic) NSString *deviceLanguage;	// @dynamic
@property(copy, nonatomic) NSString *deviceModel;	// G=0x4ac235; S=0x4ac249; @synthesize=deviceModel_
@property(copy, nonatomic) NSString *didFailLoginRequiredNotificationName;	// G=0x4ac4ed; S=0x4ac501; @synthesize=didFailLoginRequiredNotificationName_
@property(readonly, assign, nonatomic) NSString *didFailLoginRequiredNotificationName;	// @dynamic
@property(readonly, assign, nonatomic) NSString *didLoginRequiredNotificationName;	// @dynamic
@property(copy, nonatomic) NSString *didLoginRequiredNotificationName;	// G=0x4ac4c9; S=0x4ac4dd; @synthesize=didLoginRequiredNotificationName_
@property(copy, nonatomic) NSString *esn;	// G=0x4ac2c5; S=0x4ac2d9; @synthesize=esn_
@property(readonly, assign, nonatomic) NSString *esnPrefix;	// @dynamic
@property(copy, nonatomic) NSString *esnPrefix;	// G=0x4ac2a1; S=0x4ac2b5; @synthesize=esnPrefix_
@property(assign, nonatomic) bool factoryReset;	// G=0x4accc5; S=0x4accd9; @synthesize=factoryReset_
@property(copy) NSString *genericFeedUrl;	// @dynamic
@property(copy) NSString *genericFeedUrl;	// G=0x4ac785; S=0x4ac799; @synthesize=genericFeedUrl_
@property(copy, nonatomic) NSString *geolocation;	// @dynamic
@property(copy, nonatomic) NSString *geolocation;	// G=0x4ac535; S=0x4ac549; @synthesize=geolocation_
@property(copy, nonatomic) NSString *geolocationCountry;	// @dynamic
@property(copy, nonatomic) NSString *geolocationCountry;	// G=0x4ac559; S=0x4ac56d; @synthesize=geolocationCountry_
@property(copy, nonatomic) NSString *geolocationLanguage;	// @dynamic
@property(copy, nonatomic) NSString *geolocationLanguage;	// G=0x4ac5a1; S=0x4aadb5; @synthesize=geolocationLanguage_
@property(copy, nonatomic) NSString *geolocationLocale;	// @dynamic
@property(copy, nonatomic) NSString *geolocationLocale;	// G=0x4ac5b5; S=0x4ac5c9; @synthesize=geolocationLocale_
@property(copy, nonatomic) NSString *geolocationStatus;	// @dynamic
@property(copy, nonatomic) NSString *geolocationStatus;	// G=0x4ac57d; S=0x4ac591; @synthesize=geolocationStatus_
@property(assign) BOOL gettingDeviceTokens;	// G=0x4ac339; S=0x4ac351; @synthesize=gettingDeviceTokens_
@property(assign) BOOL gettingDeviceTokens;	// @dynamic
@property(retain) NSLock *gettingDeviceTokensLock;	// @dynamic
@property(retain) NSLock *gettingDeviceTokensLock;	// G=0x4ac369; S=0x4ac37d; @synthesize=gettingDeviceTokensLock_
@property(copy, nonatomic) NSString *hashedUdid;	// G=0x4ac27d; S=0x4ac291; @synthesize=hashedUdid_
@property(readonly, assign, nonatomic) NSString *hashedUdid;	// @dynamic
@property(copy, nonatomic) NSString *hostName;	// G=0x4ac3d5; S=0x4ac3e9; @synthesize=hostName_
@property(assign) BOOL initialConfigurationCompleted;	// G=0x4ac8c5; S=0x4ac8dd; @synthesize=initialConfigurationCompleted_
@property(assign) BOOL initialLoginRequiredCompleted;	// G=0x4ac925; S=0x4ac93d; @synthesize=initialLoginRequiredCompleted_
@property(retain) NSError *initialLoginRequiredError;	// G=0x4ac985; S=0x4ac999; @synthesize=initialLoginRequiredError_
@property(assign, nonatomic) BOOL intBasedM3u8;	// G=0x4acc01; S=0x4acc11; @synthesize=intBasedM3u8_
@property(readonly, assign, nonatomic) BOOL intBasedM3u8;	// @dynamic
@property(assign) BOOL iosSWUpdateCompleted;	// G=0x4ac955; S=0x4ac96d; @synthesize=iosSWUpdateCompleted_
@property(readonly, assign) BOOL isTerminating;	// G=0x4acd9d; @synthesize=isTerminating_
@property(retain, nonatomic) NSString *localhost;	// G=0x4acc61; S=0x4acc71; @synthesize=localhost_
@property(readonly, assign, nonatomic) NSString *localhost;	// @dynamic
@property(readonly, assign, nonatomic) int localhostPort;	// @dynamic
@property(assign, nonatomic) int localhostPort;	// G=0x4acc81; S=0x4acc91; @synthesize=localhostPort_
@property(retain) NSLock *loginLock;	// @dynamic
@property(retain) NSLock *loginLock;	// G=0x4acb89; S=0x4acb9d; @synthesize=loginLock_
@property(assign) BOOL loginProcessing;	// @dynamic
@property(assign) BOOL loginProcessing;	// G=0x4acbad; S=0x4acbc5; @synthesize=loginProcessing_
@property(assign) BOOL loginRequiredAllowedForStartup;	// G=0x4ac8f5; S=0x4ac90d; @synthesize=loginRequiredAllowedForStartup_
@property(readonly, assign) BOOL loginRequiredAllowedForStartup;	// @dynamic
@property(readonly, assign, nonatomic) NSString *masterM3u8Prefix;	// @dynamic
@property(copy, nonatomic) NSString *masterM3u8Prefix;	// G=0x4acbdd; S=0x4acbf1; @synthesize=masterM3u8Prefix_
@property(assign) NBPApplication *nbp;	// G=0x4acd41; S=0x4acd55; @synthesize=nbp_
@property(copy, nonatomic) NSString *nccpServerUrl;	// G=0x4ab149; S=0x4ab22d; @synthesize=nccpServerUrl_
@property(copy, nonatomic) NSString *nccpServerUrl;	// @dynamic
@property(copy) NSString *netflixIdKey;	// G=0x4aca15; S=0x4aca29; @synthesize=netflixIdKey_
@property(copy) NSString *netflixIdKey;	// @dynamic
@property(copy) NSString *netflixIdValue;	// G=0x4aca39; S=0x4aca4d; @synthesize=netflixIdValue_
@property(copy) NSString *netflixIdValue;	// @dynamic
@property(assign, nonatomic) BOOL nfhlsProtocol;	// G=0x4ac1cd; S=0x4aa979; @synthesize=nfhlsProtocol_
@property(readonly, assign) NrdLib *nrdLib;	// @dynamic
@property(assign) NrdLib *nrdLib;	// G=0x4acd15; S=0x4acd29; @synthesize=nrdLib_
@property(assign, nonatomic) int nrdLogLevel;	// G=0x4ac1dd; S=0x4ac0d9; @synthesize=nrdLogLevel_
@property(assign) BOOL nrdpStartCompleted;	// G=0x4ac871; S=0x4ac889; @synthesize=nrdpStartCompleted_
@property(retain) NSError *nrdpStartError;	// G=0x4ac8a1; S=0x4ac8b5; @synthesize=nrdpStartError_
@property(copy) NSMutableDictionary *parameterItems;	// G=0x4ac689; S=0x4ac69d; @synthesize=parameterItems_
@property(readonly, assign) PeriodicWorkerThread *periodicWorkerThread;	// @dynamic
@property(retain) PeriodicWorkerThread *periodicWorkerThread;	// G=0x4ac7e5; S=0x4ac7f9; @synthesize=periodicWorkerThread_
@property(readonly, assign, nonatomic) double periodicWorkerTimeInterval;	// @dynamic
@property(assign, nonatomic) double periodicWorkerTimeInterval;	// G=0x4ac7cd; S=0x4aaa55; @synthesize=periodicWorkerTimeInterval_
@property(retain) NSLock *pingLock;	// @dynamic
@property(retain) NSLock *pingLock;	// G=0x4acb65; S=0x4acb79; @synthesize=pingLock_
@property(assign, nonatomic) int pinnedCdnId;	// G=0x4acc21; S=0x4acc31; @synthesize=pinnedCdnId_
@property(readonly, assign, nonatomic) int pinnedCdnId;	// @dynamic
@property(copy) NSString *preferredLanguagesForApi;	// G=0x4ac475; S=0x4ac489; @synthesize=preferredLanguagesForApi_
@property(copy) NSString *preferredLanguagesForApi;	// @dynamic
@property(assign) BOOL preferredLanguagesSuccess;	// @dynamic
@property(assign) BOOL preferredLanguagesSuccess;	// G=0x4ac499; S=0x4ac4b1; @synthesize=preferredLanguagesSuccess_
@property(assign) double reconfigureTimeInterval;	// G=0x4ac809; S=0x4ac83d; @synthesize=reconfigureTimeInterval_
@property(assign) double reconfigureTimeInterval;	// @dynamic
@property(readonly, assign, nonatomic) NSDictionary *reportablePlaybackActionId;	// G=0x4aecf1; 
@property(assign) int runtimeState;	// G=0x4ac171; S=0x4ac185; @synthesize=runtimeState_
@property(assign) BOOL scheduledPreferredLanguages;	// @dynamic
@property(assign) BOOL scheduledPreferredLanguages;	// G=0x4ac445; S=0x4ac45d; @synthesize=scheduledPreferredLanguages_
@property(retain) NSLock *scheduledPreferredLanguagesLock;	// G=0x4ac421; S=0x4ac435; @synthesize=scheduledPreferredLanguagesLock_
@property(retain) NSLock *scheduledPreferredLanguagesLock;	// @dynamic
@property(copy) NSString *secureNetflixIdKey;	// @dynamic
@property(copy) NSString *secureNetflixIdKey;	// G=0x4aca5d; S=0x4aca71; @synthesize=secureNetflixIdKey_
@property(copy) NSString *secureNetflixIdValue;	// @dynamic
@property(copy) NSString *secureNetflixIdValue;	// G=0x4aca81; S=0x4aca95; @synthesize=secureNetflixIdValue_
@property(copy, nonatomic) NSString *softwareVersion;	// G=0x4ac641; S=0x4ac655; @synthesize=softwareVersion_
@property(readonly, assign, nonatomic) NSString *softwareVersion;	// @dynamic
@property(readonly, assign, nonatomic) BOOL supportUnmuxedStreams;	// @dynamic
@property(assign, nonatomic) BOOL supportUnmuxedStreams;	// G=0x4acc41; S=0x4acc51; @synthesize=supportUnmuxedStreams_
@property(copy, nonatomic) NSString *swUpgradedFromVersion;	// @dynamic
@property(copy, nonatomic) NSString *swUpgradedFromVersion;	// G=0x4ac511; S=0x4ac525; @synthesize=swUpgradedFromVersion_
@property(readonly, assign, nonatomic) int targetType;	// @dynamic
@property(assign, nonatomic) int targetType;	// G=0x4ac2e9; S=0x4ac2f9; @synthesize=targetType_
@property(assign) BOOL testEnv;	// G=0x4aaea1; S=0x4aaec5; @synthesize=testEnv_
@property(copy, nonatomic) NSString *udid;	// G=0x4ac259; S=0x4ac26d; @synthesize=udid_
@property(readonly, assign, nonatomic) NSString *udid;	// @dynamic
@property(copy) NSString *uiBootUrl;	// @dynamic
@property(copy) NSString *uiBootUrl;	// G=0x4ac7a9; S=0x4ac7bd; @synthesize=uiBootUrl_
@property(copy, nonatomic) NSArray *userAccountPreferredLanguages;	// @dynamic
@property(copy, nonatomic) NSArray *userAccountPreferredLanguages;	// G=0x4ac40d; S=0x4aae29; @synthesize=userAccountPreferredLanguages_
@property(readonly, assign, nonatomic) NSMutableArray *userAgentApplicationComments;	// @dynamic
@property(retain, nonatomic) NSMutableArray *userAgentApplicationComments;	// G=0x4ac621; S=0x4ac631; @synthesize=userAgentApplicationComments_
@property(readonly, assign, nonatomic) NSString *userAgentApplicationName;	// @dynamic
@property(copy, nonatomic) NSString *userAgentApplicationName;	// G=0x4ac5d9; S=0x4ac5ed; @synthesize=userAgentApplicationName_
@property(readonly, assign, nonatomic) NSString *userAgentApplicationVersion;	// @dynamic
@property(copy, nonatomic) NSString *userAgentApplicationVersion;	// G=0x4ac5fd; S=0x4ac611; @synthesize=userAgentApplicationVersion_
@property(copy) NSString *userEmail;	// @dynamic
@property(copy) NSString *userEmail;	// G=0x4acaa5; S=0x4acab9; @synthesize=userEmail_
@property(assign) BOOL userForciblyLoggedOut;	// @dynamic
@property(assign) BOOL userForciblyLoggedOut;	// G=0x4acd6d; S=0x4acd85; @synthesize=userForciblyLoggedOut_
@property(copy) NSString *userId;	// @dynamic
@property(copy) NSString *userId;	// G=0x4acaed; S=0x4acb01; @synthesize=userId_
@property(copy) NSString *userPassword;	// @dynamic
@property(copy) NSString *userPassword;	// G=0x4acac9; S=0x4acadd; @synthesize=userPassword_
@property(copy, nonatomic) NSString *uuidStartTime;	// G=0x4ac38d; S=0x4ac3a1; @synthesize=uuidStartTime_
@property(retain) NetflixNrdObjectCallback *validateDeviceCallback;	// @dynamic
@property(retain) NetflixNrdObjectCallback *validateDeviceCallback;	// G=0x4acb11; S=0x4acb25; @synthesize=validateDeviceCallback_
@property(copy, nonatomic) NSString *version;	// G=0x4ac211; S=0x4ac225; @synthesize=version_
@property(readonly, assign, nonatomic) NSString *version;	// @dynamic
+ (id)allocWithZone:(NSZone *)zone;	// 0x4a6305
+ (id)sharedInstance;	// 0x4a6219
- (id)init;	// 0x4a6401
// declared property getter: - (id)accounts;	// 0x4ac665
- (void)addDeviceTokensCallback:(id)callback;	// 0x515ff9
// declared property getter: - (id)apiServerHostname;	// 0x4ac6d1
// declared property getter: - (id)apiUUID;	// 0x4aa84d
// declared property getter: - (id)apiVersion;	// 0x4ac719
// declared property getter: - (BOOL)appleTV;	// 0x4ac309
// declared property getter: - (id)applicationName;	// 0x4ac3b1
- (void)applyBuiltinConfig:(id)config;	// 0x4ace5d
- (id)autorelease;	// 0x4a63f5
- (void)buildPreferredLanguagesForApi;	// 0x4a9181
// declared property getter: - (id)builtinConfig;	// 0x4ac9cd
// declared property getter: - (unsigned)certificationVersion;	// 0x4aad3d
- (void)checkIfStartupComplete;	// 0x4a876d
// declared property getter: - (id)configError;	// 0x4ac9a9
- (id)configQueryParams;	// 0x4aed25
// declared property getter: - (id)configServerUrl;	// 0x4ac6f5
// declared property getter: - (id)configurationItems;	// 0x4ac6ad
- (void)configure:(id)configure;	// 0x4ae129
- (id)configure:(id)configure error:(id *)error;	// 0x4adb71
// declared property getter: - (ConsoleSink *)consoleSink;	// 0x4acce9
// declared property getter: - (id)contentProfiles;	// 0x4aaa99
- (void)cookieChanged:(id)changed;	// 0x4ad829
// declared property getter: - (BOOL)cookiesDirty;	// 0x4acb35
- (id)copyWithZone:(NSZone *)zone;	// 0x4a63e9
- (void)createDeviceAccountForValidateDeviceCallback:(id)validateDeviceCallback;	// 0x513101
- (id)createEsn:(id)esn model:(id)model udid:(id)udid;	// 0x4a7e81
// declared property getter: - (id)customConfig;	// 0x4ac9f1
// declared property getter: - (Class)customNetflixConfigClass;	// 0x4ac1ed
// declared property getter: - (id)dataDirectory;	// 0x4acca1
- (void)dealloc;	// 0x4a6865
- (void)debugHttp:(BOOL)http;	// 0x4ac11d
- (void)debugNfhlsProtocol:(BOOL)protocol;	// 0x4ac155
// declared property getter: - (id)defaultGenericFeedUrl;	// 0x4ac761
- (double)defaultReconfigureTimeInterval;	// 0x4ad811
// declared property getter: - (id)defaultUiBootUrl;	// 0x4ac73d
// declared property getter: - (BOOL)deferredStop;	// 0x4ac19d
// declared property getter: - (id)deviceLanguage;	// 0x4ac3f9
// declared property getter: - (id)deviceModel;	// 0x4ac235
// declared property getter: - (id)didFailLoginRequiredNotificationName;	// 0x4ac4ed
// declared property getter: - (id)didLoginRequiredNotificationName;	// 0x4ac4c9
// declared property getter: - (id)esn;	// 0x4ac2c5
// declared property getter: - (id)esnPrefix;	// 0x4ac2a1
- (id)esnPrefix:(int)prefix model:(id)model;	// 0x4a7d89
// declared property getter: - (bool)factoryReset;	// 0x4accc5
- (void)factoryResetDevice;	// 0x4a79a1
- (id)fetchPreferredLanguages:(BOOL)languages error:(id *)error;	// 0x516c09
- (id)fetchUserId:(BOOL)anId error:(id *)error;	// 0x51668d
- (void)finishShutdown;	// 0x4a913d
- (void)forceLogoutUser:(BOOL)user;	// 0x5162ad
// declared property getter: - (id)genericFeedUrl;	// 0x4ac785
// declared property getter: - (id)geolocation;	// 0x4ac535
// declared property getter: - (id)geolocationCountry;	// 0x4ac559
// declared property getter: - (id)geolocationLanguage;	// 0x4ac5a1
// declared property getter: - (id)geolocationLocale;	// 0x4ac5b5
// declared property getter: - (id)geolocationStatus;	// 0x4ac57d
- (void)getDeviceTokens;	// 0x515aa9
- (void)getDeviceTokensCallback:(id)callback;	// 0x5159ed
- (void)getDeviceTokensValidateDeviceAccountCallback:(id)callback;	// 0x515b81
// declared property getter: - (BOOL)gettingDeviceTokens;	// 0x4ac339
// declared property getter: - (id)gettingDeviceTokensLock;	// 0x4ac369
- (id)handleCompletedActivation:(id)activation useInternal:(BOOL)internal error:(id *)error;	// 0x51735d
- (id)handleError:(id)error defaultErrorCode:(int)code;	// 0x512e09
- (void)handleNetflixDidFailInitialConfigurationNotification:(id)handleNetflix;	// 0x4aa231
- (void)handleNetflixDidFailInitialLoginRequiredNotification:(id)handleNetflix;	// 0x4aa4a9
- (void)handleNetflixDidFailSWUpgradeUserUpgradeNotification:(id)handleNetflix;	// 0x4aa6e1
- (void)handleNetflixDidFailStartNrdpNotification:(id)handleNetflix;	// 0x4aa0ad
- (void)handleNetflixDidFailStopNrdpNotification:(id)handleNetflix;	// 0x4aa135
- (void)handleNetflixDidFailUpdateConfigurationNotification:(id)handleNetflix;	// 0x4aa399
- (void)handleNetflixDidInitialConfigurationNotification:(id)handleNetflix;	// 0x4aa145
- (void)handleNetflixDidInitialLoginRequiredNotification:(id)handleNetflix;	// 0x4aa411
- (void)handleNetflixDidSWUpgradeUserUpgradeNotification:(id)handleNetflix;	// 0x4aa575
- (void)handleNetflixDidStartNrdpNotification:(id)handleNetflix;	// 0x4a9ddd
- (void)handleNetflixDidStopNrdpNotification:(id)handleNetflix;	// 0x4aa125
- (void)handleNetflixDidUpdateConfigurationNotification:(id)handleNetflix;	// 0x4aa2d1
- (BOOL)hasDoubleBoundCookies;	// 0x5160f5
- (id)hashUdid:(id)udid;	// 0x4a7c05
// declared property getter: - (id)hashedUdid;	// 0x4ac27d
- (id)hexify:(char *)hexify length:(unsigned)length;	// 0x4a7b85
// declared property getter: - (id)hostName;	// 0x4ac3d5
- (void)indicateGettingDeviceTokens;	// 0x515f9d
// declared property getter: - (BOOL)initialConfigurationCompleted;	// 0x4ac8c5
// declared property getter: - (BOOL)initialLoginRequiredCompleted;	// 0x4ac925
// declared property getter: - (id)initialLoginRequiredError;	// 0x4ac985
// declared property getter: - (BOOL)intBasedM3u8;	// 0x4acc01
// declared property getter: - (BOOL)iosSWUpdateCompleted;	// 0x4ac955
- (BOOL)isLoggingToConsole;	// 0x4ac0a5
// declared property getter: - (BOOL)isTerminating;	// 0x4acd9d
// declared property getter: - (id)localhost;	// 0x4acc61
// declared property getter: - (int)localhostPort;	// 0x4acc81
- (void)login:(id)login password:(id)password;	// 0x512699
- (void)loginEmailActivateCallback:(id)callback;	// 0x5147b1
// declared property getter: - (id)loginLock;	// 0x4acb89
- (void)loginNewUserSignUpActivateCallback:(id)callback;	// 0x514bb9
// declared property getter: - (BOOL)loginProcessing;	// 0x4acbad
- (void)loginRequired;	// 0x51265d
// declared property getter: - (BOOL)loginRequiredAllowedForStartup;	// 0x4ac8f5
- (void)loginRequiredAsync;	// 0x5136d9
- (void)loginRequiredDeactivateAllCallback:(id)callback;	// 0x513d31
- (void)loginRequiredDeviceTokensCallback:(id)callback;	// 0x51393d
- (void)loginRequiredValidateDeviceAccountAfterDeactivateAllCallback:(id)callback;	// 0x513bd5
- (void)loginRequiredValidateDeviceAccountCallback:(id)callback;	// 0x513e31
- (void)loginValidateDeviceAccountCallback:(id)callback;	// 0x514965
- (void)loginWithTokens:(id)tokens;	// 0x51290d
- (void)logout;	// 0x512b95
- (void)logoutDeactivateAllCallback:(id)callback;	// 0x515189
- (void)logoutDeviceTokensCallback:(id)callback;	// 0x514ee1
- (void)logoutValidateDeviceAccountCallback:(id)callback;	// 0x515045
// declared property getter: - (id)masterM3u8Prefix;	// 0x4acbdd
- (void)mediaAudioSelect:(id)select;	// 0x5125ed
- (void)mediaBuffering:(double)buffering;	// 0x512425
- (void)mediaBufferingComplete:(double)complete;	// 0x512461
- (void)mediaClose;	// 0x512289
- (void)mediaEnd:(double)end reason:(id)reason;	// 0x5122f9
- (void)mediaNetworkSelection:(id)selection;	// 0x5125b5
- (void)mediaOpen:(id)open params:(id)params;	// 0x511f55
- (void)mediaPause:(double)pause;	// 0x512371
- (void)mediaPlay:(double)play;	// 0x512335
- (void)mediaReposition:(double)reposition;	// 0x5123e9
- (void)mediaStop:(double)stop;	// 0x5122bd
- (void)mediaSubtitlesDisable;	// 0x51254d
- (void)mediaSubtitlesSelect:(id)select;	// 0x512515
- (void)mediaSubtitlesSelectAbort;	// 0x512581
- (void)mediaTrickplay:(BOOL)trickplay;	// 0x512625
- (void)mediaUnpause:(double)unpause;	// 0x5123ad
- (void)mediaUpdatePts:(double)pts;	// 0x51249d
- (void)mediaUpdatePts:(double)pts accessLogEvents:(id)events;	// 0x5124d9
- (id)modelGroupKeys;	// 0x4ad48d
- (id)modelName;	// 0x4a7d19
// declared property getter: - (NBPApplication *)nbp;	// 0x4acd41
- (id)nccpCAFilePath;	// 0x4ad7a5
// declared property getter: - (id)nccpServerUrl;	// 0x4ab149
// declared property getter: - (id)netflixIdKey;	// 0x4aca15
// declared property getter: - (id)netflixIdValue;	// 0x4aca39
// declared property getter: - (BOOL)nfhlsProtocol;	// 0x4ac1cd
// declared property getter: - (NrdLib *)nrdLib;	// 0x4acd15
// declared property getter: - (int)nrdLogLevel;	// 0x4ac1dd
- (BOOL)nrdpIdentityMatchesCookies;	// 0x5132c1
// declared property getter: - (BOOL)nrdpStartCompleted;	// 0x4ac871
// declared property getter: - (id)nrdpStartError;	// 0x4ac8a1
- (void)observeRuntimeNotifications;	// 0x4a9aad
- (void)observeSWUpgradeNotifications;	// 0x4a9cb9
- (void)observeShutdownNotifications;	// 0x4a8e95
- (void)observeStartupNotifications;	// 0x4a84f1
// declared property getter: - (id)parameterItems;	// 0x4ac689
// declared property getter: - (id)periodicWorkerThread;	// 0x4ac7e5
// declared property getter: - (double)periodicWorkerTimeInterval;	// 0x4ac7cd
// declared property getter: - (id)pingLock;	// 0x4acb65
// declared property getter: - (int)pinnedCdnId;	// 0x4acc21
- (void)postFailureNotification:(id)notification error:(id)error clearProgress:(BOOL)progress;	// 0x515cf9
- (void)postInternalNotificationName:(id)name object:(id)object error:(id)error;	// 0x4adaad
- (void)postInternalNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x4adb29
- (void)postLoginFailure;	// 0x5163d9
- (void)postLoginFailure:(id)failure clearProgress:(BOOL)progress;	// 0x515e95
- (void)postLoginRequiredFailure:(id)failure clearProgress:(BOOL)progress;	// 0x515e39
- (void)postLoginRequiredSuccess:(id)success;	// 0x515e05
- (void)postLoginSuccess:(id)success;	// 0x515e75
- (void)postLoginWithTokensFailure:(id)tokensFailure clearProgress:(BOOL)progress;	// 0x515f01
- (void)postLoginWithTokensSuccess:(id)tokensSuccess;	// 0x515ee1
- (void)postLogoutFailure:(id)failure clearProgress:(BOOL)progress;	// 0x515f6d
- (void)postLogoutSuccess:(id)success;	// 0x515f4d
- (void)postNotificationName:(id)name object:(id)object error:(id)error;	// 0x4ad995
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x4ada11
- (void)postNotificationOnMainThread:(id)thread;	// 0x4aee41
- (void)postSuccessNotification:(id)notification userInfo:(id)info;	// 0x515c79
// declared property getter: - (id)preferredLanguagesForApi;	// 0x4ac475
// declared property getter: - (BOOL)preferredLanguagesSuccess;	// 0x4ac499
- (void)purgeIdentity;	// 0x5157e1
- (void)reconfigure:(id)reconfigure;	// 0x4ae201
// declared property getter: - (double)reconfigureTimeInterval;	// 0x4ac809
- (void)refreshCookiesFromAPI;	// 0x519c61
- (void)registerDefaultParameterItems;	// 0x4a94c5
- (void)registerNfhlsProtocol:(BOOL)protocol;	// 0x4abf9d
- (oneway void)release;	// 0x4a63f1
- (void)removeDeviceTokensCallback:(id)callback;	// 0x516055
// declared property getter: - (id)reportablePlaybackActionId;	// 0x4aecf1
- (BOOL)reset;	// 0x4a68c5
- (void)resetFeedUrls;	// 0x4ad83d
- (id)retain;	// 0x4a63ed
- (unsigned)retainCount;	// 0x4a63f9
- (void)retrieveDeviceTokens;	// 0x516fc5
// declared property getter: - (int)runtimeState;	// 0x4ac171
- (void)scheduleFetchPreferredLanguage:(BOOL)language;	// 0x4ae719
- (void)scheduleReconfigure;	// 0x4acdb9
// declared property getter: - (BOOL)scheduledPreferredLanguages;	// 0x4ac445
// declared property getter: - (id)scheduledPreferredLanguagesLock;	// 0x4ac421
// declared property getter: - (id)secureNetflixIdKey;	// 0x4aca5d
// declared property getter: - (id)secureNetflixIdValue;	// 0x4aca81
- (void)selectDeviceAccountForValidateDeviceCallback:(id)validateDeviceCallback;	// 0x513095
// declared property setter: - (void)setAccounts:(id)accounts;	// 0x4ac679
- (void)setActivationTokensFromHttpCookies;	// 0x5164e1
// declared property setter: - (void)setApiServerHostname:(id)hostname;	// 0x4ac6e5
// declared property setter: - (void)setApiVersion:(id)version;	// 0x4ac72d
// declared property setter: - (void)setAppleTV:(BOOL)tv;	// 0x4ac321
// declared property setter: - (void)setApplicationName:(id)name;	// 0x4ac3c5
// declared property setter: - (void)setBuiltinConfig:(id)config;	// 0x4ac9e1
// declared property setter: - (void)setConfigError:(id)error;	// 0x4ac9bd
// declared property setter: - (void)setConfigServerUrl:(id)url;	// 0x4ac709
// declared property setter: - (void)setConfigurationItems:(id)items;	// 0x4ac6c1
// declared property setter: - (void)setConsoleSink:(ConsoleSink *)sink;	// 0x4accfd
// declared property setter: - (void)setCookiesDirty:(BOOL)dirty;	// 0x4acb4d
// declared property setter: - (void)setCustomConfig:(id)config;	// 0x4aca05
// declared property setter: - (void)setCustomNetflixConfigClass:(Class)aClass;	// 0x4ac201
// declared property setter: - (void)setDataDirectory:(id)directory;	// 0x4accb5
// declared property setter: - (void)setDefaultGenericFeedUrl:(id)url;	// 0x4ac775
// declared property setter: - (void)setDefaultUiBootUrl:(id)url;	// 0x4ac751
// declared property setter: - (void)setDeferredStop:(BOOL)stop;	// 0x4ac1b5
// declared property setter: - (void)setDeviceLanguage:(id)language;	// 0x4aad41
// declared property setter: - (void)setDeviceModel:(id)model;	// 0x4ac249
- (BOOL)setDeviceTokensFromNccpCookies:(id)nccpCookies;	// 0x515289
// declared property setter: - (void)setDidFailLoginRequiredNotificationName:(id)failLoginRequiredNotificationName;	// 0x4ac501
// declared property setter: - (void)setDidLoginRequiredNotificationName:(id)loginRequiredNotificationName;	// 0x4ac4dd
// declared property setter: - (void)setEsn:(id)esn;	// 0x4ac2d9
// declared property setter: - (void)setEsnPrefix:(id)prefix;	// 0x4ac2b5
// declared property setter: - (void)setFactoryReset:(bool)reset;	// 0x4accd9
// declared property setter: - (void)setGenericFeedUrl:(id)url;	// 0x4ac799
// declared property setter: - (void)setGeolocation:(id)geolocation;	// 0x4ac549
// declared property setter: - (void)setGeolocationCountry:(id)country;	// 0x4ac56d
// declared property setter: - (void)setGeolocationLanguage:(id)language;	// 0x4aadb5
// declared property setter: - (void)setGeolocationLocale:(id)locale;	// 0x4ac5c9
// declared property setter: - (void)setGeolocationStatus:(id)status;	// 0x4ac591
// declared property setter: - (void)setGettingDeviceTokens:(BOOL)tokens;	// 0x4ac351
// declared property setter: - (void)setGettingDeviceTokensLock:(id)lock;	// 0x4ac37d
// declared property setter: - (void)setHashedUdid:(id)udid;	// 0x4ac291
// declared property setter: - (void)setHostName:(id)name;	// 0x4ac3e9
// declared property setter: - (void)setInitialConfigurationCompleted:(BOOL)completed;	// 0x4ac8dd
// declared property setter: - (void)setInitialLoginRequiredCompleted:(BOOL)completed;	// 0x4ac93d
// declared property setter: - (void)setInitialLoginRequiredError:(id)error;	// 0x4ac999
// declared property setter: - (void)setIntBasedM3u8:(BOOL)a8;	// 0x4acc11
// declared property setter: - (void)setIosSWUpdateCompleted:(BOOL)completed;	// 0x4ac96d
// declared property setter: - (void)setLocalhost:(id)localhost;	// 0x4acc71
// declared property setter: - (void)setLocalhostPort:(int)port;	// 0x4acc91
- (void)setLogToConsole:(BOOL)console;	// 0x4ac06d
// declared property setter: - (void)setLoginLock:(id)lock;	// 0x4acb9d
// declared property setter: - (void)setLoginProcessing:(BOOL)processing;	// 0x4acbc5
// declared property setter: - (void)setLoginRequiredAllowedForStartup:(BOOL)startup;	// 0x4ac90d
// declared property setter: - (void)setMasterM3u8Prefix:(id)prefix;	// 0x4acbf1
// declared property setter: - (void)setNbp:(NBPApplication *)nbp;	// 0x4acd55
// declared property setter: - (void)setNccpServerUrl:(id)url;	// 0x4ab22d
// declared property setter: - (void)setNetflixIdKey:(id)key;	// 0x4aca29
// declared property setter: - (void)setNetflixIdValue:(id)value;	// 0x4aca4d
- (void)setNetflixTokensFromNccpCookies:(id)nccpCookies;	// 0x51551d
// declared property setter: - (void)setNfhlsProtocol:(BOOL)protocol;	// 0x4aa979
// declared property setter: - (void)setNrdLib:(NrdLib *)lib;	// 0x4acd29
// declared property setter: - (void)setNrdLogLevel:(int)level;	// 0x4ac0d9
// declared property setter: - (void)setNrdpStartCompleted:(BOOL)completed;	// 0x4ac889
// declared property setter: - (void)setNrdpStartError:(id)error;	// 0x4ac8b5
// declared property setter: - (void)setParameterItems:(id)items;	// 0x4ac69d
// declared property setter: - (void)setPeriodicWorkerThread:(id)thread;	// 0x4ac7f9
// declared property setter: - (void)setPeriodicWorkerTimeInterval:(double)interval;	// 0x4aaa55
// declared property setter: - (void)setPingLock:(id)lock;	// 0x4acb79
// declared property setter: - (void)setPinnedCdnId:(int)anId;	// 0x4acc31
// declared property setter: - (void)setPreferredLanguagesForApi:(id)api;	// 0x4ac489
// declared property setter: - (void)setPreferredLanguagesSuccess:(BOOL)success;	// 0x4ac4b1
// declared property setter: - (void)setReconfigureTimeInterval:(double)interval;	// 0x4ac83d
// declared property setter: - (void)setRuntimeState:(int)state;	// 0x4ac185
// declared property setter: - (void)setScheduledPreferredLanguages:(BOOL)languages;	// 0x4ac45d
// declared property setter: - (void)setScheduledPreferredLanguagesLock:(id)lock;	// 0x4ac435
// declared property setter: - (void)setSecureNetflixIdKey:(id)key;	// 0x4aca71
// declared property setter: - (void)setSecureNetflixIdValue:(id)value;	// 0x4aca95
// declared property setter: - (void)setSoftwareVersion:(id)version;	// 0x4ac655
// declared property setter: - (void)setSupportUnmuxedStreams:(BOOL)streams;	// 0x4acc51
// declared property setter: - (void)setSwUpgradedFromVersion:(id)version;	// 0x4ac525
// declared property setter: - (void)setTargetType:(int)type;	// 0x4ac2f9
// declared property setter: - (void)setTestEnv:(BOOL)env;	// 0x4aaec5
// declared property setter: - (void)setUdid:(id)udid;	// 0x4ac26d
// declared property setter: - (void)setUiBootUrl:(id)url;	// 0x4ac7bd
- (void)setUseHttpServer:(BOOL)server;	// 0x4aa959
// declared property setter: - (void)setUserAccountPreferredLanguages:(id)languages;	// 0x4aae29
- (void)setUserAgent:(id)agent;	// 0x4a7fd1
// declared property setter: - (void)setUserAgentApplicationComments:(id)comments;	// 0x4ac631
// declared property setter: - (void)setUserAgentApplicationName:(id)name;	// 0x4ac5ed
// declared property setter: - (void)setUserAgentApplicationVersion:(id)version;	// 0x4ac611
// declared property setter: - (void)setUserEmail:(id)email;	// 0x4acab9
// declared property setter: - (void)setUserForciblyLoggedOut:(BOOL)anOut;	// 0x4acd85
// declared property setter: - (void)setUserId:(id)anId;	// 0x4acb01
// declared property setter: - (void)setUserPassword:(id)password;	// 0x4acadd
// declared property setter: - (void)setUuidStartTime:(id)time;	// 0x4ac3a1
// declared property setter: - (void)setValidateDeviceCallback:(id)callback;	// 0x4acb25
// declared property setter: - (void)setVersion:(id)version;	// 0x4ac225
- (void)shutdown;	// 0x4a6e31
// declared property getter: - (id)softwareVersion;	// 0x4ac641
- (void)start:(id)start params:(id)params;	// 0x4ab3d5
- (void)startNrdp;	// 0x4a8ddd
- (void)stop;	// 0x4abc49
- (void)stopAll;	// 0x4a8fb9
- (void)stopNrdp;	// 0x4a8ff5
- (void)stopToTerminate:(BOOL)terminate;	// 0x4abca5
// declared property getter: - (BOOL)supportUnmuxedStreams;	// 0x4acc41
// declared property getter: - (id)swUpgradedFromVersion;	// 0x4ac511
- (BOOL)syncNrdpWithCookies;	// 0x513435
// declared property getter: - (int)targetType;	// 0x4ac2e9
// declared property getter: - (BOOL)testEnv;	// 0x4aaea1
// declared property getter: - (id)udid;	// 0x4ac259
// declared property getter: - (id)uiBootUrl;	// 0x4ac7a9
- (void)unobserveRuntimeNotifications;	// 0x4a9b4d
- (void)unobserveSWUpgradeNotifications;	// 0x4a9d59
- (void)unobserveShutdownNotifications;	// 0x4a8f35
- (void)unobserveStartupNotifications;	// 0x4a8659
- (void)unsupportedSWVersion:(id)version;	// 0x4ad8bd
- (void)updateParams:(id)params;	// 0x4abd51
- (BOOL)updateStaleCredentials;	// 0x4ad895
- (void)upgradeCustomerBoundCookiesToDoubleBound;	// 0x519b11
- (BOOL)upgradeUserForSWUpgrade;	// 0x4a9bd1
- (id)urlRequest:(id)request params:(id)params withHttpMethod:(id)httpMethod;	// 0x4abfed
- (id)urlRequestInternal:(id)internal params:(id)params withHttpMethod:(id)httpMethod;	// 0x4ae871
// declared property getter: - (id)userAccountPreferredLanguages;	// 0x4ac40d
// declared property getter: - (id)userAgentApplicationComments;	// 0x4ac621
// declared property getter: - (id)userAgentApplicationName;	// 0x4ac5d9
// declared property getter: - (id)userAgentApplicationVersion;	// 0x4ac5fd
// declared property getter: - (id)userEmail;	// 0x4acaa5
// declared property getter: - (BOOL)userForciblyLoggedOut;	// 0x4acd6d
// declared property getter: - (id)userId;	// 0x4acaed
// declared property getter: - (id)userPassword;	// 0x4acac9
- (void)userUpgradeTokenActivateCallback:(id)callback;	// 0x519fed
- (void)userUpgradeValidateDeviceCallback:(id)callback;	// 0x519e61
// declared property getter: - (id)uuidStartTime;	// 0x4ac38d
- (void)validateDevice:(id)device;	// 0x517119
// declared property getter: - (id)validateDeviceCallback;	// 0x4acb11
// declared property getter: - (id)version;	// 0x4ac211
- (long long)webServiceGetLogTimeInMS;	// 0x4ae6c9
@end

