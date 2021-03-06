/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NetflixNrdObjectCallback, NSString, BuiltinConfig, NSMutableDictionary, PeriodicWorkerThread, NSLock, NSArray, NSError, NSMutableArray, NSDictionary;
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
@property(copy) NSMutableArray *accounts;	// G=0x4a0e4d; S=0x4a0e61; @synthesize=accounts_
@property(copy, nonatomic) NSString *apiServerHostname;	// G=0x4a0eb9; S=0x4a0ecd; @synthesize=apiServerHostname_
@property(copy, nonatomic) NSString *apiServerHostname;	// @dynamic
@property(readonly, assign, nonatomic) NSString *apiUUID;	// G=0x49f035; 
@property(readonly, assign, nonatomic) NSString *apiUUID;	// @dynamic
@property(copy, nonatomic) NSString *apiVersion;	// G=0x4a0f01; S=0x4a0f15; @synthesize=apiVersion_
@property(readonly, assign, nonatomic) NSString *apiVersion;	// @dynamic
@property(assign) BOOL appleTV;	// G=0x4a0af1; S=0x4a0b09; @synthesize=appleTV_
@property(copy, nonatomic) NSString *applicationName;	// G=0x4a0b99; S=0x4a0bad; @synthesize=applicationName_
@property(copy, nonatomic) NSString *applicationName;	// @dynamic
@property(retain) BuiltinConfig *builtinConfig;	// G=0x4a11b5; S=0x4a11c9; @synthesize=builtinConfig_
@property(retain) BuiltinConfig *builtinConfig;	// @dynamic
@property(readonly, assign, nonatomic) unsigned certificationVersion;	// G=0x49f525; @dynamic
@property(retain) NSError *configError;	// G=0x4a1191; S=0x4a11a5; @synthesize=configError_
@property(retain) NSError *configError;	// @dynamic
@property(copy, nonatomic) NSString *configServerUrl;	// G=0x4a0edd; S=0x4a0ef1; @synthesize=configServerUrl_
@property(copy, nonatomic) NSString *configServerUrl;	// @dynamic
@property(copy) NSMutableDictionary *configurationItems;	// G=0x4a0e95; S=0x4a0ea9; @synthesize=configurationItems_
@property(assign) ConsoleSink *consoleSink;	// G=0x4a14d1; S=0x4a14e5; @synthesize=consoleSink_
@property(readonly, assign, nonatomic) NSDictionary *contentProfiles;	// G=0x49f281; @dynamic
@property(assign) BOOL cookiesDirty;	// @dynamic
@property(assign) BOOL cookiesDirty;	// G=0x4a131d; S=0x4a1335; @synthesize=cookiesDirty_
@property(retain) id<NSObject, NetflixConfigProtocol> customConfig;	// @dynamic
@property(retain) id<NSObject, NetflixConfigProtocol> customConfig;	// G=0x4a11d9; S=0x4a11ed; @synthesize=customConfig_
@property(retain) Class customNetflixConfigClass;	// G=0x4a09d5; S=0x4a09e9; @synthesize=customNetflixConfigClass_
@property(copy, nonatomic) NSString *dataDirectory;	// G=0x4a1489; S=0x4a149d; @synthesize=dataDirectory_
@property(readonly, assign, nonatomic) NSString *dataDirectory;	// @dynamic
@property(copy, nonatomic) NSString *defaultGenericFeedUrl;	// G=0x4a0f49; S=0x4a0f5d; @synthesize=defaultGenericFeedUrl_
@property(readonly, assign, nonatomic) NSString *defaultGenericFeedUrl;	// @dynamic
@property(readonly, assign, nonatomic) NSString *defaultUiBootUrl;	// @dynamic
@property(copy, nonatomic) NSString *defaultUiBootUrl;	// G=0x4a0f25; S=0x4a0f39; @synthesize=defaultUiBootUrl_
@property(assign) BOOL deferredStop;	// G=0x4a0985; S=0x4a099d; @synthesize=deferredStop_
@property(copy, nonatomic) NSString *deviceLanguage;	// G=0x4a0be1; S=0x49f529; @synthesize=deviceLanguage_
@property(readonly, assign, nonatomic) NSString *deviceLanguage;	// @dynamic
@property(copy, nonatomic) NSString *deviceModel;	// G=0x4a0a1d; S=0x4a0a31; @synthesize=deviceModel_
@property(copy, nonatomic) NSString *didFailLoginRequiredNotificationName;	// G=0x4a0cd5; S=0x4a0ce9; @synthesize=didFailLoginRequiredNotificationName_
@property(readonly, assign, nonatomic) NSString *didFailLoginRequiredNotificationName;	// @dynamic
@property(readonly, assign, nonatomic) NSString *didLoginRequiredNotificationName;	// @dynamic
@property(copy, nonatomic) NSString *didLoginRequiredNotificationName;	// G=0x4a0cb1; S=0x4a0cc5; @synthesize=didLoginRequiredNotificationName_
@property(copy, nonatomic) NSString *esn;	// G=0x4a0aad; S=0x4a0ac1; @synthesize=esn_
@property(readonly, assign, nonatomic) NSString *esnPrefix;	// @dynamic
@property(copy, nonatomic) NSString *esnPrefix;	// G=0x4a0a89; S=0x4a0a9d; @synthesize=esnPrefix_
@property(assign, nonatomic) bool factoryReset;	// G=0x4a14ad; S=0x4a14c1; @synthesize=factoryReset_
@property(copy) NSString *genericFeedUrl;	// @dynamic
@property(copy) NSString *genericFeedUrl;	// G=0x4a0f6d; S=0x4a0f81; @synthesize=genericFeedUrl_
@property(copy, nonatomic) NSString *geolocation;	// @dynamic
@property(copy, nonatomic) NSString *geolocation;	// G=0x4a0d1d; S=0x4a0d31; @synthesize=geolocation_
@property(copy, nonatomic) NSString *geolocationCountry;	// @dynamic
@property(copy, nonatomic) NSString *geolocationCountry;	// G=0x4a0d41; S=0x4a0d55; @synthesize=geolocationCountry_
@property(copy, nonatomic) NSString *geolocationLanguage;	// @dynamic
@property(copy, nonatomic) NSString *geolocationLanguage;	// G=0x4a0d89; S=0x49f59d; @synthesize=geolocationLanguage_
@property(copy, nonatomic) NSString *geolocationLocale;	// @dynamic
@property(copy, nonatomic) NSString *geolocationLocale;	// G=0x4a0d9d; S=0x4a0db1; @synthesize=geolocationLocale_
@property(copy, nonatomic) NSString *geolocationStatus;	// @dynamic
@property(copy, nonatomic) NSString *geolocationStatus;	// G=0x4a0d65; S=0x4a0d79; @synthesize=geolocationStatus_
@property(assign) BOOL gettingDeviceTokens;	// G=0x4a0b21; S=0x4a0b39; @synthesize=gettingDeviceTokens_
@property(assign) BOOL gettingDeviceTokens;	// @dynamic
@property(retain) NSLock *gettingDeviceTokensLock;	// @dynamic
@property(retain) NSLock *gettingDeviceTokensLock;	// G=0x4a0b51; S=0x4a0b65; @synthesize=gettingDeviceTokensLock_
@property(copy, nonatomic) NSString *hashedUdid;	// G=0x4a0a65; S=0x4a0a79; @synthesize=hashedUdid_
@property(readonly, assign, nonatomic) NSString *hashedUdid;	// @dynamic
@property(copy, nonatomic) NSString *hostName;	// G=0x4a0bbd; S=0x4a0bd1; @synthesize=hostName_
@property(assign) BOOL initialConfigurationCompleted;	// G=0x4a10ad; S=0x4a10c5; @synthesize=initialConfigurationCompleted_
@property(assign) BOOL initialLoginRequiredCompleted;	// G=0x4a110d; S=0x4a1125; @synthesize=initialLoginRequiredCompleted_
@property(retain) NSError *initialLoginRequiredError;	// G=0x4a116d; S=0x4a1181; @synthesize=initialLoginRequiredError_
@property(assign, nonatomic) BOOL intBasedM3u8;	// G=0x4a13e9; S=0x4a13f9; @synthesize=intBasedM3u8_
@property(readonly, assign, nonatomic) BOOL intBasedM3u8;	// @dynamic
@property(assign) BOOL iosSWUpdateCompleted;	// G=0x4a113d; S=0x4a1155; @synthesize=iosSWUpdateCompleted_
@property(readonly, assign) BOOL isTerminating;	// G=0x4a1585; @synthesize=isTerminating_
@property(retain, nonatomic) NSString *localhost;	// G=0x4a1449; S=0x4a1459; @synthesize=localhost_
@property(readonly, assign, nonatomic) NSString *localhost;	// @dynamic
@property(readonly, assign, nonatomic) int localhostPort;	// @dynamic
@property(assign, nonatomic) int localhostPort;	// G=0x4a1469; S=0x4a1479; @synthesize=localhostPort_
@property(retain) NSLock *loginLock;	// @dynamic
@property(retain) NSLock *loginLock;	// G=0x4a1371; S=0x4a1385; @synthesize=loginLock_
@property(assign) BOOL loginProcessing;	// @dynamic
@property(assign) BOOL loginProcessing;	// G=0x4a1395; S=0x4a13ad; @synthesize=loginProcessing_
@property(assign) BOOL loginRequiredAllowedForStartup;	// G=0x4a10dd; S=0x4a10f5; @synthesize=loginRequiredAllowedForStartup_
@property(readonly, assign) BOOL loginRequiredAllowedForStartup;	// @dynamic
@property(readonly, assign, nonatomic) NSString *masterM3u8Prefix;	// @dynamic
@property(copy, nonatomic) NSString *masterM3u8Prefix;	// G=0x4a13c5; S=0x4a13d9; @synthesize=masterM3u8Prefix_
@property(assign) NBPApplication *nbp;	// G=0x4a1529; S=0x4a153d; @synthesize=nbp_
@property(copy, nonatomic) NSString *nccpServerUrl;	// G=0x49f931; S=0x49fa15; @synthesize=nccpServerUrl_
@property(copy, nonatomic) NSString *nccpServerUrl;	// @dynamic
@property(copy) NSString *netflixIdKey;	// G=0x4a11fd; S=0x4a1211; @synthesize=netflixIdKey_
@property(copy) NSString *netflixIdKey;	// @dynamic
@property(copy) NSString *netflixIdValue;	// G=0x4a1221; S=0x4a1235; @synthesize=netflixIdValue_
@property(copy) NSString *netflixIdValue;	// @dynamic
@property(assign, nonatomic) BOOL nfhlsProtocol;	// G=0x4a09b5; S=0x49f161; @synthesize=nfhlsProtocol_
@property(readonly, assign) NrdLib *nrdLib;	// @dynamic
@property(assign) NrdLib *nrdLib;	// G=0x4a14fd; S=0x4a1511; @synthesize=nrdLib_
@property(assign, nonatomic) int nrdLogLevel;	// G=0x4a09c5; S=0x4a08c1; @synthesize=nrdLogLevel_
@property(assign) BOOL nrdpStartCompleted;	// G=0x4a1059; S=0x4a1071; @synthesize=nrdpStartCompleted_
@property(retain) NSError *nrdpStartError;	// G=0x4a1089; S=0x4a109d; @synthesize=nrdpStartError_
@property(copy) NSMutableDictionary *parameterItems;	// G=0x4a0e71; S=0x4a0e85; @synthesize=parameterItems_
@property(readonly, assign) PeriodicWorkerThread *periodicWorkerThread;	// @dynamic
@property(retain) PeriodicWorkerThread *periodicWorkerThread;	// G=0x4a0fcd; S=0x4a0fe1; @synthesize=periodicWorkerThread_
@property(readonly, assign, nonatomic) double periodicWorkerTimeInterval;	// @dynamic
@property(assign, nonatomic) double periodicWorkerTimeInterval;	// G=0x4a0fb5; S=0x49f23d; @synthesize=periodicWorkerTimeInterval_
@property(retain) NSLock *pingLock;	// @dynamic
@property(retain) NSLock *pingLock;	// G=0x4a134d; S=0x4a1361; @synthesize=pingLock_
@property(assign, nonatomic) int pinnedCdnId;	// G=0x4a1409; S=0x4a1419; @synthesize=pinnedCdnId_
@property(readonly, assign, nonatomic) int pinnedCdnId;	// @dynamic
@property(copy) NSString *preferredLanguagesForApi;	// G=0x4a0c5d; S=0x4a0c71; @synthesize=preferredLanguagesForApi_
@property(copy) NSString *preferredLanguagesForApi;	// @dynamic
@property(assign) BOOL preferredLanguagesSuccess;	// @dynamic
@property(assign) BOOL preferredLanguagesSuccess;	// G=0x4a0c81; S=0x4a0c99; @synthesize=preferredLanguagesSuccess_
@property(assign) double reconfigureTimeInterval;	// G=0x4a0ff1; S=0x4a1025; @synthesize=reconfigureTimeInterval_
@property(assign) double reconfigureTimeInterval;	// @dynamic
@property(readonly, assign, nonatomic) NSDictionary *reportablePlaybackActionId;	// G=0x4a34d9; 
@property(assign) int runtimeState;	// G=0x4a0959; S=0x4a096d; @synthesize=runtimeState_
@property(assign) BOOL scheduledPreferredLanguages;	// @dynamic
@property(assign) BOOL scheduledPreferredLanguages;	// G=0x4a0c2d; S=0x4a0c45; @synthesize=scheduledPreferredLanguages_
@property(retain) NSLock *scheduledPreferredLanguagesLock;	// G=0x4a0c09; S=0x4a0c1d; @synthesize=scheduledPreferredLanguagesLock_
@property(retain) NSLock *scheduledPreferredLanguagesLock;	// @dynamic
@property(copy) NSString *secureNetflixIdKey;	// @dynamic
@property(copy) NSString *secureNetflixIdKey;	// G=0x4a1245; S=0x4a1259; @synthesize=secureNetflixIdKey_
@property(copy) NSString *secureNetflixIdValue;	// @dynamic
@property(copy) NSString *secureNetflixIdValue;	// G=0x4a1269; S=0x4a127d; @synthesize=secureNetflixIdValue_
@property(copy, nonatomic) NSString *softwareVersion;	// G=0x4a0e29; S=0x4a0e3d; @synthesize=softwareVersion_
@property(readonly, assign, nonatomic) NSString *softwareVersion;	// @dynamic
@property(readonly, assign, nonatomic) BOOL supportUnmuxedStreams;	// @dynamic
@property(assign, nonatomic) BOOL supportUnmuxedStreams;	// G=0x4a1429; S=0x4a1439; @synthesize=supportUnmuxedStreams_
@property(copy, nonatomic) NSString *swUpgradedFromVersion;	// @dynamic
@property(copy, nonatomic) NSString *swUpgradedFromVersion;	// G=0x4a0cf9; S=0x4a0d0d; @synthesize=swUpgradedFromVersion_
@property(readonly, assign, nonatomic) int targetType;	// @dynamic
@property(assign, nonatomic) int targetType;	// G=0x4a0ad1; S=0x4a0ae1; @synthesize=targetType_
@property(assign) BOOL testEnv;	// G=0x49f689; S=0x49f6ad; @synthesize=testEnv_
@property(copy, nonatomic) NSString *udid;	// G=0x4a0a41; S=0x4a0a55; @synthesize=udid_
@property(readonly, assign, nonatomic) NSString *udid;	// @dynamic
@property(copy) NSString *uiBootUrl;	// @dynamic
@property(copy) NSString *uiBootUrl;	// G=0x4a0f91; S=0x4a0fa5; @synthesize=uiBootUrl_
@property(copy, nonatomic) NSArray *userAccountPreferredLanguages;	// @dynamic
@property(copy, nonatomic) NSArray *userAccountPreferredLanguages;	// G=0x4a0bf5; S=0x49f611; @synthesize=userAccountPreferredLanguages_
@property(readonly, assign, nonatomic) NSMutableArray *userAgentApplicationComments;	// @dynamic
@property(retain, nonatomic) NSMutableArray *userAgentApplicationComments;	// G=0x4a0e09; S=0x4a0e19; @synthesize=userAgentApplicationComments_
@property(readonly, assign, nonatomic) NSString *userAgentApplicationName;	// @dynamic
@property(copy, nonatomic) NSString *userAgentApplicationName;	// G=0x4a0dc1; S=0x4a0dd5; @synthesize=userAgentApplicationName_
@property(readonly, assign, nonatomic) NSString *userAgentApplicationVersion;	// @dynamic
@property(copy, nonatomic) NSString *userAgentApplicationVersion;	// G=0x4a0de5; S=0x4a0df9; @synthesize=userAgentApplicationVersion_
@property(copy) NSString *userEmail;	// @dynamic
@property(copy) NSString *userEmail;	// G=0x4a128d; S=0x4a12a1; @synthesize=userEmail_
@property(assign) BOOL userForciblyLoggedOut;	// @dynamic
@property(assign) BOOL userForciblyLoggedOut;	// G=0x4a1555; S=0x4a156d; @synthesize=userForciblyLoggedOut_
@property(copy) NSString *userId;	// @dynamic
@property(copy) NSString *userId;	// G=0x4a12d5; S=0x4a12e9; @synthesize=userId_
@property(copy) NSString *userPassword;	// @dynamic
@property(copy) NSString *userPassword;	// G=0x4a12b1; S=0x4a12c5; @synthesize=userPassword_
@property(copy, nonatomic) NSString *uuidStartTime;	// G=0x4a0b75; S=0x4a0b89; @synthesize=uuidStartTime_
@property(retain) NetflixNrdObjectCallback *validateDeviceCallback;	// @dynamic
@property(retain) NetflixNrdObjectCallback *validateDeviceCallback;	// G=0x4a12f9; S=0x4a130d; @synthesize=validateDeviceCallback_
@property(copy, nonatomic) NSString *version;	// G=0x4a09f9; S=0x4a0a0d; @synthesize=version_
@property(readonly, assign, nonatomic) NSString *version;	// @dynamic
+ (id)allocWithZone:(NSZone *)zone;	// 0x49aaed
+ (id)sharedInstance;	// 0x49aa01
- (id)init;	// 0x49abe9
// declared property getter: - (id)accounts;	// 0x4a0e4d
- (void)addDeviceTokensCallback:(id)callback;	// 0x50a7d1
// declared property getter: - (id)apiServerHostname;	// 0x4a0eb9
// declared property getter: - (id)apiUUID;	// 0x49f035
// declared property getter: - (id)apiVersion;	// 0x4a0f01
// declared property getter: - (BOOL)appleTV;	// 0x4a0af1
// declared property getter: - (id)applicationName;	// 0x4a0b99
- (void)applyBuiltinConfig:(id)config;	// 0x4a1645
- (id)autorelease;	// 0x49abdd
- (void)buildPreferredLanguagesForApi;	// 0x49d969
// declared property getter: - (id)builtinConfig;	// 0x4a11b5
// declared property getter: - (unsigned)certificationVersion;	// 0x49f525
- (void)checkIfStartupComplete;	// 0x49cf55
// declared property getter: - (id)configError;	// 0x4a1191
- (id)configQueryParams;	// 0x4a350d
// declared property getter: - (id)configServerUrl;	// 0x4a0edd
// declared property getter: - (id)configurationItems;	// 0x4a0e95
- (void)configure:(id)configure;	// 0x4a2911
- (id)configure:(id)configure error:(id *)error;	// 0x4a2359
// declared property getter: - (ConsoleSink *)consoleSink;	// 0x4a14d1
// declared property getter: - (id)contentProfiles;	// 0x49f281
- (void)cookieChanged:(id)changed;	// 0x4a2011
// declared property getter: - (BOOL)cookiesDirty;	// 0x4a131d
- (id)copyWithZone:(NSZone *)zone;	// 0x49abd1
- (void)createDeviceAccountForValidateDeviceCallback:(id)validateDeviceCallback;	// 0x5078d9
- (id)createEsn:(id)esn model:(id)model udid:(id)udid;	// 0x49c669
// declared property getter: - (id)customConfig;	// 0x4a11d9
// declared property getter: - (Class)customNetflixConfigClass;	// 0x4a09d5
// declared property getter: - (id)dataDirectory;	// 0x4a1489
- (void)dealloc;	// 0x49b04d
- (void)debugHttp:(BOOL)http;	// 0x4a0905
- (void)debugNfhlsProtocol:(BOOL)protocol;	// 0x4a093d
// declared property getter: - (id)defaultGenericFeedUrl;	// 0x4a0f49
- (double)defaultReconfigureTimeInterval;	// 0x4a1ff9
// declared property getter: - (id)defaultUiBootUrl;	// 0x4a0f25
// declared property getter: - (BOOL)deferredStop;	// 0x4a0985
// declared property getter: - (id)deviceLanguage;	// 0x4a0be1
// declared property getter: - (id)deviceModel;	// 0x4a0a1d
// declared property getter: - (id)didFailLoginRequiredNotificationName;	// 0x4a0cd5
// declared property getter: - (id)didLoginRequiredNotificationName;	// 0x4a0cb1
// declared property getter: - (id)esn;	// 0x4a0aad
// declared property getter: - (id)esnPrefix;	// 0x4a0a89
- (id)esnPrefix:(int)prefix model:(id)model;	// 0x49c571
// declared property getter: - (bool)factoryReset;	// 0x4a14ad
- (void)factoryResetDevice;	// 0x49c189
- (id)fetchPreferredLanguages:(BOOL)languages error:(id *)error;	// 0x50b3e1
- (id)fetchUserId:(BOOL)anId error:(id *)error;	// 0x50ae65
- (void)finishShutdown;	// 0x49d925
- (void)forceLogoutUser:(BOOL)user;	// 0x50aa85
// declared property getter: - (id)genericFeedUrl;	// 0x4a0f6d
// declared property getter: - (id)geolocation;	// 0x4a0d1d
// declared property getter: - (id)geolocationCountry;	// 0x4a0d41
// declared property getter: - (id)geolocationLanguage;	// 0x4a0d89
// declared property getter: - (id)geolocationLocale;	// 0x4a0d9d
// declared property getter: - (id)geolocationStatus;	// 0x4a0d65
- (void)getDeviceTokens;	// 0x50a281
- (void)getDeviceTokensCallback:(id)callback;	// 0x50a1c5
- (void)getDeviceTokensValidateDeviceAccountCallback:(id)callback;	// 0x50a359
// declared property getter: - (BOOL)gettingDeviceTokens;	// 0x4a0b21
// declared property getter: - (id)gettingDeviceTokensLock;	// 0x4a0b51
- (id)handleCompletedActivation:(id)activation useInternal:(BOOL)internal error:(id *)error;	// 0x50bb35
- (id)handleError:(id)error defaultErrorCode:(int)code;	// 0x5075e1
- (void)handleNetflixDidFailInitialConfigurationNotification:(id)handleNetflix;	// 0x49ea19
- (void)handleNetflixDidFailInitialLoginRequiredNotification:(id)handleNetflix;	// 0x49ec91
- (void)handleNetflixDidFailSWUpgradeUserUpgradeNotification:(id)handleNetflix;	// 0x49eec9
- (void)handleNetflixDidFailStartNrdpNotification:(id)handleNetflix;	// 0x49e895
- (void)handleNetflixDidFailStopNrdpNotification:(id)handleNetflix;	// 0x49e91d
- (void)handleNetflixDidFailUpdateConfigurationNotification:(id)handleNetflix;	// 0x49eb81
- (void)handleNetflixDidInitialConfigurationNotification:(id)handleNetflix;	// 0x49e92d
- (void)handleNetflixDidInitialLoginRequiredNotification:(id)handleNetflix;	// 0x49ebf9
- (void)handleNetflixDidSWUpgradeUserUpgradeNotification:(id)handleNetflix;	// 0x49ed5d
- (void)handleNetflixDidStartNrdpNotification:(id)handleNetflix;	// 0x49e5c5
- (void)handleNetflixDidStopNrdpNotification:(id)handleNetflix;	// 0x49e90d
- (void)handleNetflixDidUpdateConfigurationNotification:(id)handleNetflix;	// 0x49eab9
- (BOOL)hasDoubleBoundCookies;	// 0x50a8cd
- (id)hashUdid:(id)udid;	// 0x49c3ed
// declared property getter: - (id)hashedUdid;	// 0x4a0a65
- (id)hexify:(char *)hexify length:(unsigned)length;	// 0x49c36d
// declared property getter: - (id)hostName;	// 0x4a0bbd
- (void)indicateGettingDeviceTokens;	// 0x50a775
// declared property getter: - (BOOL)initialConfigurationCompleted;	// 0x4a10ad
// declared property getter: - (BOOL)initialLoginRequiredCompleted;	// 0x4a110d
// declared property getter: - (id)initialLoginRequiredError;	// 0x4a116d
// declared property getter: - (BOOL)intBasedM3u8;	// 0x4a13e9
// declared property getter: - (BOOL)iosSWUpdateCompleted;	// 0x4a113d
- (BOOL)isLoggingToConsole;	// 0x4a088d
// declared property getter: - (BOOL)isTerminating;	// 0x4a1585
// declared property getter: - (id)localhost;	// 0x4a1449
// declared property getter: - (int)localhostPort;	// 0x4a1469
- (void)login:(id)login password:(id)password;	// 0x506e71
- (void)loginEmailActivateCallback:(id)callback;	// 0x508f89
// declared property getter: - (id)loginLock;	// 0x4a1371
- (void)loginNewUserSignUpActivateCallback:(id)callback;	// 0x509391
// declared property getter: - (BOOL)loginProcessing;	// 0x4a1395
- (void)loginRequired;	// 0x506e35
// declared property getter: - (BOOL)loginRequiredAllowedForStartup;	// 0x4a10dd
- (void)loginRequiredAsync;	// 0x507eb1
- (void)loginRequiredDeactivateAllCallback:(id)callback;	// 0x508509
- (void)loginRequiredDeviceTokensCallback:(id)callback;	// 0x508115
- (void)loginRequiredValidateDeviceAccountAfterDeactivateAllCallback:(id)callback;	// 0x5083ad
- (void)loginRequiredValidateDeviceAccountCallback:(id)callback;	// 0x508609
- (void)loginValidateDeviceAccountCallback:(id)callback;	// 0x50913d
- (void)loginWithTokens:(id)tokens;	// 0x5070e5
- (void)logout;	// 0x50736d
- (void)logoutDeactivateAllCallback:(id)callback;	// 0x509961
- (void)logoutDeviceTokensCallback:(id)callback;	// 0x5096b9
- (void)logoutValidateDeviceAccountCallback:(id)callback;	// 0x50981d
// declared property getter: - (id)masterM3u8Prefix;	// 0x4a13c5
- (void)mediaAudioSelect:(id)select;	// 0x506dc5
- (void)mediaBuffering:(double)buffering;	// 0x506bfd
- (void)mediaBufferingComplete:(double)complete;	// 0x506c39
- (void)mediaClose;	// 0x506a61
- (void)mediaEnd:(double)end reason:(id)reason;	// 0x506ad1
- (void)mediaNetworkSelection:(id)selection;	// 0x506d8d
- (void)mediaOpen:(id)open params:(id)params;	// 0x50672d
- (void)mediaPause:(double)pause;	// 0x506b49
- (void)mediaPlay:(double)play;	// 0x506b0d
- (void)mediaReposition:(double)reposition;	// 0x506bc1
- (void)mediaStop:(double)stop;	// 0x506a95
- (void)mediaSubtitlesDisable;	// 0x506d25
- (void)mediaSubtitlesSelect:(id)select;	// 0x506ced
- (void)mediaSubtitlesSelectAbort;	// 0x506d59
- (void)mediaTrickplay:(BOOL)trickplay;	// 0x506dfd
- (void)mediaUnpause:(double)unpause;	// 0x506b85
- (void)mediaUpdatePts:(double)pts;	// 0x506c75
- (void)mediaUpdatePts:(double)pts accessLogEvents:(id)events;	// 0x506cb1
- (id)modelGroupKeys;	// 0x4a1c75
- (id)modelName;	// 0x49c501
// declared property getter: - (NBPApplication *)nbp;	// 0x4a1529
- (id)nccpCAFilePath;	// 0x4a1f8d
// declared property getter: - (id)nccpServerUrl;	// 0x49f931
// declared property getter: - (id)netflixIdKey;	// 0x4a11fd
// declared property getter: - (id)netflixIdValue;	// 0x4a1221
// declared property getter: - (BOOL)nfhlsProtocol;	// 0x4a09b5
// declared property getter: - (NrdLib *)nrdLib;	// 0x4a14fd
// declared property getter: - (int)nrdLogLevel;	// 0x4a09c5
- (BOOL)nrdpIdentityMatchesCookies;	// 0x507a99
// declared property getter: - (BOOL)nrdpStartCompleted;	// 0x4a1059
// declared property getter: - (id)nrdpStartError;	// 0x4a1089
- (void)observeRuntimeNotifications;	// 0x49e295
- (void)observeSWUpgradeNotifications;	// 0x49e4a1
- (void)observeShutdownNotifications;	// 0x49d67d
- (void)observeStartupNotifications;	// 0x49ccd9
// declared property getter: - (id)parameterItems;	// 0x4a0e71
// declared property getter: - (id)periodicWorkerThread;	// 0x4a0fcd
// declared property getter: - (double)periodicWorkerTimeInterval;	// 0x4a0fb5
// declared property getter: - (id)pingLock;	// 0x4a134d
// declared property getter: - (int)pinnedCdnId;	// 0x4a1409
- (void)postFailureNotification:(id)notification error:(id)error clearProgress:(BOOL)progress;	// 0x50a4d1
- (void)postInternalNotificationName:(id)name object:(id)object error:(id)error;	// 0x4a2295
- (void)postInternalNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x4a2311
- (void)postLoginFailure;	// 0x50abb1
- (void)postLoginFailure:(id)failure clearProgress:(BOOL)progress;	// 0x50a66d
- (void)postLoginRequiredFailure:(id)failure clearProgress:(BOOL)progress;	// 0x50a611
- (void)postLoginRequiredSuccess:(id)success;	// 0x50a5dd
- (void)postLoginSuccess:(id)success;	// 0x50a64d
- (void)postLoginWithTokensFailure:(id)tokensFailure clearProgress:(BOOL)progress;	// 0x50a6d9
- (void)postLoginWithTokensSuccess:(id)tokensSuccess;	// 0x50a6b9
- (void)postLogoutFailure:(id)failure clearProgress:(BOOL)progress;	// 0x50a745
- (void)postLogoutSuccess:(id)success;	// 0x50a725
- (void)postNotificationName:(id)name object:(id)object error:(id)error;	// 0x4a217d
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x4a21f9
- (void)postNotificationOnMainThread:(id)thread;	// 0x4a3629
- (void)postSuccessNotification:(id)notification userInfo:(id)info;	// 0x50a451
// declared property getter: - (id)preferredLanguagesForApi;	// 0x4a0c5d
// declared property getter: - (BOOL)preferredLanguagesSuccess;	// 0x4a0c81
- (void)purgeIdentity;	// 0x509fb9
- (void)reconfigure:(id)reconfigure;	// 0x4a29e9
// declared property getter: - (double)reconfigureTimeInterval;	// 0x4a0ff1
- (void)refreshCookiesFromAPI;	// 0x50e439
- (void)registerDefaultParameterItems;	// 0x49dcad
- (void)registerNfhlsProtocol:(BOOL)protocol;	// 0x4a0785
- (oneway void)release;	// 0x49abd9
- (void)removeDeviceTokensCallback:(id)callback;	// 0x50a82d
// declared property getter: - (id)reportablePlaybackActionId;	// 0x4a34d9
- (BOOL)reset;	// 0x49b0ad
- (void)resetFeedUrls;	// 0x4a2025
- (id)retain;	// 0x49abd5
- (unsigned)retainCount;	// 0x49abe1
- (void)retrieveDeviceTokens;	// 0x50b79d
// declared property getter: - (int)runtimeState;	// 0x4a0959
- (void)scheduleFetchPreferredLanguage:(BOOL)language;	// 0x4a2f01
- (void)scheduleReconfigure;	// 0x4a15a1
// declared property getter: - (BOOL)scheduledPreferredLanguages;	// 0x4a0c2d
// declared property getter: - (id)scheduledPreferredLanguagesLock;	// 0x4a0c09
// declared property getter: - (id)secureNetflixIdKey;	// 0x4a1245
// declared property getter: - (id)secureNetflixIdValue;	// 0x4a1269
- (void)selectDeviceAccountForValidateDeviceCallback:(id)validateDeviceCallback;	// 0x50786d
// declared property setter: - (void)setAccounts:(id)accounts;	// 0x4a0e61
- (void)setActivationTokensFromHttpCookies;	// 0x50acb9
// declared property setter: - (void)setApiServerHostname:(id)hostname;	// 0x4a0ecd
// declared property setter: - (void)setApiVersion:(id)version;	// 0x4a0f15
// declared property setter: - (void)setAppleTV:(BOOL)tv;	// 0x4a0b09
// declared property setter: - (void)setApplicationName:(id)name;	// 0x4a0bad
// declared property setter: - (void)setBuiltinConfig:(id)config;	// 0x4a11c9
// declared property setter: - (void)setConfigError:(id)error;	// 0x4a11a5
// declared property setter: - (void)setConfigServerUrl:(id)url;	// 0x4a0ef1
// declared property setter: - (void)setConfigurationItems:(id)items;	// 0x4a0ea9
// declared property setter: - (void)setConsoleSink:(ConsoleSink *)sink;	// 0x4a14e5
// declared property setter: - (void)setCookiesDirty:(BOOL)dirty;	// 0x4a1335
// declared property setter: - (void)setCustomConfig:(id)config;	// 0x4a11ed
// declared property setter: - (void)setCustomNetflixConfigClass:(Class)aClass;	// 0x4a09e9
// declared property setter: - (void)setDataDirectory:(id)directory;	// 0x4a149d
// declared property setter: - (void)setDefaultGenericFeedUrl:(id)url;	// 0x4a0f5d
// declared property setter: - (void)setDefaultUiBootUrl:(id)url;	// 0x4a0f39
// declared property setter: - (void)setDeferredStop:(BOOL)stop;	// 0x4a099d
// declared property setter: - (void)setDeviceLanguage:(id)language;	// 0x49f529
// declared property setter: - (void)setDeviceModel:(id)model;	// 0x4a0a31
- (BOOL)setDeviceTokensFromNccpCookies:(id)nccpCookies;	// 0x509a61
// declared property setter: - (void)setDidFailLoginRequiredNotificationName:(id)failLoginRequiredNotificationName;	// 0x4a0ce9
// declared property setter: - (void)setDidLoginRequiredNotificationName:(id)loginRequiredNotificationName;	// 0x4a0cc5
// declared property setter: - (void)setEsn:(id)esn;	// 0x4a0ac1
// declared property setter: - (void)setEsnPrefix:(id)prefix;	// 0x4a0a9d
// declared property setter: - (void)setFactoryReset:(bool)reset;	// 0x4a14c1
// declared property setter: - (void)setGenericFeedUrl:(id)url;	// 0x4a0f81
// declared property setter: - (void)setGeolocation:(id)geolocation;	// 0x4a0d31
// declared property setter: - (void)setGeolocationCountry:(id)country;	// 0x4a0d55
// declared property setter: - (void)setGeolocationLanguage:(id)language;	// 0x49f59d
// declared property setter: - (void)setGeolocationLocale:(id)locale;	// 0x4a0db1
// declared property setter: - (void)setGeolocationStatus:(id)status;	// 0x4a0d79
// declared property setter: - (void)setGettingDeviceTokens:(BOOL)tokens;	// 0x4a0b39
// declared property setter: - (void)setGettingDeviceTokensLock:(id)lock;	// 0x4a0b65
// declared property setter: - (void)setHashedUdid:(id)udid;	// 0x4a0a79
// declared property setter: - (void)setHostName:(id)name;	// 0x4a0bd1
// declared property setter: - (void)setInitialConfigurationCompleted:(BOOL)completed;	// 0x4a10c5
// declared property setter: - (void)setInitialLoginRequiredCompleted:(BOOL)completed;	// 0x4a1125
// declared property setter: - (void)setInitialLoginRequiredError:(id)error;	// 0x4a1181
// declared property setter: - (void)setIntBasedM3u8:(BOOL)a8;	// 0x4a13f9
// declared property setter: - (void)setIosSWUpdateCompleted:(BOOL)completed;	// 0x4a1155
// declared property setter: - (void)setLocalhost:(id)localhost;	// 0x4a1459
// declared property setter: - (void)setLocalhostPort:(int)port;	// 0x4a1479
- (void)setLogToConsole:(BOOL)console;	// 0x4a0855
// declared property setter: - (void)setLoginLock:(id)lock;	// 0x4a1385
// declared property setter: - (void)setLoginProcessing:(BOOL)processing;	// 0x4a13ad
// declared property setter: - (void)setLoginRequiredAllowedForStartup:(BOOL)startup;	// 0x4a10f5
// declared property setter: - (void)setMasterM3u8Prefix:(id)prefix;	// 0x4a13d9
// declared property setter: - (void)setNbp:(NBPApplication *)nbp;	// 0x4a153d
// declared property setter: - (void)setNccpServerUrl:(id)url;	// 0x49fa15
// declared property setter: - (void)setNetflixIdKey:(id)key;	// 0x4a1211
// declared property setter: - (void)setNetflixIdValue:(id)value;	// 0x4a1235
- (void)setNetflixTokensFromNccpCookies:(id)nccpCookies;	// 0x509cf5
// declared property setter: - (void)setNfhlsProtocol:(BOOL)protocol;	// 0x49f161
// declared property setter: - (void)setNrdLib:(NrdLib *)lib;	// 0x4a1511
// declared property setter: - (void)setNrdLogLevel:(int)level;	// 0x4a08c1
// declared property setter: - (void)setNrdpStartCompleted:(BOOL)completed;	// 0x4a1071
// declared property setter: - (void)setNrdpStartError:(id)error;	// 0x4a109d
// declared property setter: - (void)setParameterItems:(id)items;	// 0x4a0e85
// declared property setter: - (void)setPeriodicWorkerThread:(id)thread;	// 0x4a0fe1
// declared property setter: - (void)setPeriodicWorkerTimeInterval:(double)interval;	// 0x49f23d
// declared property setter: - (void)setPingLock:(id)lock;	// 0x4a1361
// declared property setter: - (void)setPinnedCdnId:(int)anId;	// 0x4a1419
// declared property setter: - (void)setPreferredLanguagesForApi:(id)api;	// 0x4a0c71
// declared property setter: - (void)setPreferredLanguagesSuccess:(BOOL)success;	// 0x4a0c99
// declared property setter: - (void)setReconfigureTimeInterval:(double)interval;	// 0x4a1025
// declared property setter: - (void)setRuntimeState:(int)state;	// 0x4a096d
// declared property setter: - (void)setScheduledPreferredLanguages:(BOOL)languages;	// 0x4a0c45
// declared property setter: - (void)setScheduledPreferredLanguagesLock:(id)lock;	// 0x4a0c1d
// declared property setter: - (void)setSecureNetflixIdKey:(id)key;	// 0x4a1259
// declared property setter: - (void)setSecureNetflixIdValue:(id)value;	// 0x4a127d
// declared property setter: - (void)setSoftwareVersion:(id)version;	// 0x4a0e3d
// declared property setter: - (void)setSupportUnmuxedStreams:(BOOL)streams;	// 0x4a1439
// declared property setter: - (void)setSwUpgradedFromVersion:(id)version;	// 0x4a0d0d
// declared property setter: - (void)setTargetType:(int)type;	// 0x4a0ae1
// declared property setter: - (void)setTestEnv:(BOOL)env;	// 0x49f6ad
// declared property setter: - (void)setUdid:(id)udid;	// 0x4a0a55
// declared property setter: - (void)setUiBootUrl:(id)url;	// 0x4a0fa5
- (void)setUseHttpServer:(BOOL)server;	// 0x49f141
// declared property setter: - (void)setUserAccountPreferredLanguages:(id)languages;	// 0x49f611
- (void)setUserAgent:(id)agent;	// 0x49c7b9
// declared property setter: - (void)setUserAgentApplicationComments:(id)comments;	// 0x4a0e19
// declared property setter: - (void)setUserAgentApplicationName:(id)name;	// 0x4a0dd5
// declared property setter: - (void)setUserAgentApplicationVersion:(id)version;	// 0x4a0df9
// declared property setter: - (void)setUserEmail:(id)email;	// 0x4a12a1
// declared property setter: - (void)setUserForciblyLoggedOut:(BOOL)anOut;	// 0x4a156d
// declared property setter: - (void)setUserId:(id)anId;	// 0x4a12e9
// declared property setter: - (void)setUserPassword:(id)password;	// 0x4a12c5
// declared property setter: - (void)setUuidStartTime:(id)time;	// 0x4a0b89
// declared property setter: - (void)setValidateDeviceCallback:(id)callback;	// 0x4a130d
// declared property setter: - (void)setVersion:(id)version;	// 0x4a0a0d
- (void)shutdown;	// 0x49b619
// declared property getter: - (id)softwareVersion;	// 0x4a0e29
- (void)start:(id)start params:(id)params;	// 0x49fbbd
- (void)startNrdp;	// 0x49d5c5
- (void)stop;	// 0x4a0431
- (void)stopAll;	// 0x49d7a1
- (void)stopNrdp;	// 0x49d7dd
- (void)stopToTerminate:(BOOL)terminate;	// 0x4a048d
// declared property getter: - (BOOL)supportUnmuxedStreams;	// 0x4a1429
// declared property getter: - (id)swUpgradedFromVersion;	// 0x4a0cf9
- (BOOL)syncNrdpWithCookies;	// 0x507c0d
// declared property getter: - (int)targetType;	// 0x4a0ad1
// declared property getter: - (BOOL)testEnv;	// 0x49f689
// declared property getter: - (id)udid;	// 0x4a0a41
// declared property getter: - (id)uiBootUrl;	// 0x4a0f91
- (void)unobserveRuntimeNotifications;	// 0x49e335
- (void)unobserveSWUpgradeNotifications;	// 0x49e541
- (void)unobserveShutdownNotifications;	// 0x49d71d
- (void)unobserveStartupNotifications;	// 0x49ce41
- (void)unsupportedSWVersion:(id)version;	// 0x4a20a5
- (void)updateParams:(id)params;	// 0x4a0539
- (BOOL)updateStaleCredentials;	// 0x4a207d
- (void)upgradeCustomerBoundCookiesToDoubleBound;	// 0x50e2e9
- (BOOL)upgradeUserForSWUpgrade;	// 0x49e3b9
- (id)urlRequest:(id)request params:(id)params withHttpMethod:(id)httpMethod;	// 0x4a07d5
- (id)urlRequestInternal:(id)internal params:(id)params withHttpMethod:(id)httpMethod;	// 0x4a3059
// declared property getter: - (id)userAccountPreferredLanguages;	// 0x4a0bf5
// declared property getter: - (id)userAgentApplicationComments;	// 0x4a0e09
// declared property getter: - (id)userAgentApplicationName;	// 0x4a0dc1
// declared property getter: - (id)userAgentApplicationVersion;	// 0x4a0de5
// declared property getter: - (id)userEmail;	// 0x4a128d
// declared property getter: - (BOOL)userForciblyLoggedOut;	// 0x4a1555
// declared property getter: - (id)userId;	// 0x4a12d5
// declared property getter: - (id)userPassword;	// 0x4a12b1
- (void)userUpgradeTokenActivateCallback:(id)callback;	// 0x50e7c5
- (void)userUpgradeValidateDeviceCallback:(id)callback;	// 0x50e639
// declared property getter: - (id)uuidStartTime;	// 0x4a0b75
- (void)validateDevice:(id)device;	// 0x50b8f1
// declared property getter: - (id)validateDeviceCallback;	// 0x4a12f9
// declared property getter: - (id)version;	// 0x4a09f9
- (long long)webServiceGetLogTimeInMS;	// 0x4a2eb1
@end

