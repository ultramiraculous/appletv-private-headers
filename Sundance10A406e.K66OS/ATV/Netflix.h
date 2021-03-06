/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSDictionary, NetflixNrdObjectCallback, BuiltinConfig, NSMutableDictionary, PeriodicWorkerThread, NSLock, NSString, NSArray, NSError;
@protocol NetflixConfigProtocol, NSObject;

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
@property(copy) NSMutableArray *accounts;	// G=0x47e4d5; S=0x47e4e9; @synthesize=accounts_
@property(copy, nonatomic) NSString *apiServerHostname;	// G=0x47e541; S=0x47e555; @synthesize=apiServerHostname_
@property(copy, nonatomic) NSString *apiServerHostname;	// @dynamic
@property(readonly, assign, nonatomic) NSString *apiUUID;	// G=0x47c6bd; 
@property(readonly, assign, nonatomic) NSString *apiUUID;	// @dynamic
@property(copy, nonatomic) NSString *apiVersion;	// G=0x47e589; S=0x47e59d; @synthesize=apiVersion_
@property(readonly, assign, nonatomic) NSString *apiVersion;	// @dynamic
@property(assign) BOOL appleTV;	// G=0x47e179; S=0x47e191; @synthesize=appleTV_
@property(copy, nonatomic) NSString *applicationName;	// G=0x47e221; S=0x47e235; @synthesize=applicationName_
@property(copy, nonatomic) NSString *applicationName;	// @dynamic
@property(retain) BuiltinConfig *builtinConfig;	// G=0x47e83d; S=0x47e851; @synthesize=builtinConfig_
@property(retain) BuiltinConfig *builtinConfig;	// @dynamic
@property(readonly, assign, nonatomic) unsigned certificationVersion;	// G=0x47cbad; @dynamic
@property(retain) NSError *configError;	// G=0x47e819; S=0x47e82d; @synthesize=configError_
@property(retain) NSError *configError;	// @dynamic
@property(copy, nonatomic) NSString *configServerUrl;	// G=0x47e565; S=0x47e579; @synthesize=configServerUrl_
@property(copy, nonatomic) NSString *configServerUrl;	// @dynamic
@property(copy) NSMutableDictionary *configurationItems;	// G=0x47e51d; S=0x47e531; @synthesize=configurationItems_
@property(assign) ConsoleSink *consoleSink;	// G=0x47eb59; S=0x47eb6d; @synthesize=consoleSink_
@property(readonly, assign, nonatomic) NSDictionary *contentProfiles;	// G=0x47c909; @dynamic
@property(assign) BOOL cookiesDirty;	// @dynamic
@property(assign) BOOL cookiesDirty;	// G=0x47e9a5; S=0x47e9bd; @synthesize=cookiesDirty_
@property(retain) id<NSObject, NetflixConfigProtocol> customConfig;	// @dynamic
@property(retain) id<NSObject, NetflixConfigProtocol> customConfig;	// G=0x47e861; S=0x47e875; @synthesize=customConfig_
@property(retain) Class customNetflixConfigClass;	// G=0x47e05d; S=0x47e071; @synthesize=customNetflixConfigClass_
@property(copy, nonatomic) NSString *dataDirectory;	// G=0x47eb11; S=0x47eb25; @synthesize=dataDirectory_
@property(readonly, assign, nonatomic) NSString *dataDirectory;	// @dynamic
@property(copy, nonatomic) NSString *defaultGenericFeedUrl;	// G=0x47e5d1; S=0x47e5e5; @synthesize=defaultGenericFeedUrl_
@property(readonly, assign, nonatomic) NSString *defaultGenericFeedUrl;	// @dynamic
@property(readonly, assign, nonatomic) NSString *defaultUiBootUrl;	// @dynamic
@property(copy, nonatomic) NSString *defaultUiBootUrl;	// G=0x47e5ad; S=0x47e5c1; @synthesize=defaultUiBootUrl_
@property(assign) BOOL deferredStop;	// G=0x47e00d; S=0x47e025; @synthesize=deferredStop_
@property(copy, nonatomic) NSString *deviceLanguage;	// G=0x47e269; S=0x47cbb1; @synthesize=deviceLanguage_
@property(readonly, assign, nonatomic) NSString *deviceLanguage;	// @dynamic
@property(copy, nonatomic) NSString *deviceModel;	// G=0x47e0a5; S=0x47e0b9; @synthesize=deviceModel_
@property(copy, nonatomic) NSString *didFailLoginRequiredNotificationName;	// G=0x47e35d; S=0x47e371; @synthesize=didFailLoginRequiredNotificationName_
@property(readonly, assign, nonatomic) NSString *didFailLoginRequiredNotificationName;	// @dynamic
@property(readonly, assign, nonatomic) NSString *didLoginRequiredNotificationName;	// @dynamic
@property(copy, nonatomic) NSString *didLoginRequiredNotificationName;	// G=0x47e339; S=0x47e34d; @synthesize=didLoginRequiredNotificationName_
@property(copy, nonatomic) NSString *esn;	// G=0x47e135; S=0x47e149; @synthesize=esn_
@property(readonly, assign, nonatomic) NSString *esnPrefix;	// @dynamic
@property(copy, nonatomic) NSString *esnPrefix;	// G=0x47e111; S=0x47e125; @synthesize=esnPrefix_
@property(assign, nonatomic) bool factoryReset;	// G=0x47eb35; S=0x47eb49; @synthesize=factoryReset_
@property(copy) NSString *genericFeedUrl;	// @dynamic
@property(copy) NSString *genericFeedUrl;	// G=0x47e5f5; S=0x47e609; @synthesize=genericFeedUrl_
@property(copy, nonatomic) NSString *geolocation;	// @dynamic
@property(copy, nonatomic) NSString *geolocation;	// G=0x47e3a5; S=0x47e3b9; @synthesize=geolocation_
@property(copy, nonatomic) NSString *geolocationCountry;	// @dynamic
@property(copy, nonatomic) NSString *geolocationCountry;	// G=0x47e3c9; S=0x47e3dd; @synthesize=geolocationCountry_
@property(copy, nonatomic) NSString *geolocationLanguage;	// @dynamic
@property(copy, nonatomic) NSString *geolocationLanguage;	// G=0x47e411; S=0x47cc25; @synthesize=geolocationLanguage_
@property(copy, nonatomic) NSString *geolocationLocale;	// @dynamic
@property(copy, nonatomic) NSString *geolocationLocale;	// G=0x47e425; S=0x47e439; @synthesize=geolocationLocale_
@property(copy, nonatomic) NSString *geolocationStatus;	// @dynamic
@property(copy, nonatomic) NSString *geolocationStatus;	// G=0x47e3ed; S=0x47e401; @synthesize=geolocationStatus_
@property(assign) BOOL gettingDeviceTokens;	// G=0x47e1a9; S=0x47e1c1; @synthesize=gettingDeviceTokens_
@property(assign) BOOL gettingDeviceTokens;	// @dynamic
@property(retain) NSLock *gettingDeviceTokensLock;	// @dynamic
@property(retain) NSLock *gettingDeviceTokensLock;	// G=0x47e1d9; S=0x47e1ed; @synthesize=gettingDeviceTokensLock_
@property(copy, nonatomic) NSString *hashedUdid;	// G=0x47e0ed; S=0x47e101; @synthesize=hashedUdid_
@property(readonly, assign, nonatomic) NSString *hashedUdid;	// @dynamic
@property(copy, nonatomic) NSString *hostName;	// G=0x47e245; S=0x47e259; @synthesize=hostName_
@property(assign) BOOL initialConfigurationCompleted;	// G=0x47e735; S=0x47e74d; @synthesize=initialConfigurationCompleted_
@property(assign) BOOL initialLoginRequiredCompleted;	// G=0x47e795; S=0x47e7ad; @synthesize=initialLoginRequiredCompleted_
@property(retain) NSError *initialLoginRequiredError;	// G=0x47e7f5; S=0x47e809; @synthesize=initialLoginRequiredError_
@property(assign, nonatomic) BOOL intBasedM3u8;	// G=0x47ea71; S=0x47ea81; @synthesize=intBasedM3u8_
@property(readonly, assign, nonatomic) BOOL intBasedM3u8;	// @dynamic
@property(assign) BOOL iosSWUpdateCompleted;	// G=0x47e7c5; S=0x47e7dd; @synthesize=iosSWUpdateCompleted_
@property(readonly, assign) BOOL isTerminating;	// G=0x47ec0d; @synthesize=isTerminating_
@property(retain, nonatomic) NSString *localhost;	// G=0x47ead1; S=0x47eae1; @synthesize=localhost_
@property(readonly, assign, nonatomic) NSString *localhost;	// @dynamic
@property(readonly, assign, nonatomic) int localhostPort;	// @dynamic
@property(assign, nonatomic) int localhostPort;	// G=0x47eaf1; S=0x47eb01; @synthesize=localhostPort_
@property(retain) NSLock *loginLock;	// @dynamic
@property(retain) NSLock *loginLock;	// G=0x47e9f9; S=0x47ea0d; @synthesize=loginLock_
@property(assign) BOOL loginProcessing;	// @dynamic
@property(assign) BOOL loginProcessing;	// G=0x47ea1d; S=0x47ea35; @synthesize=loginProcessing_
@property(assign) BOOL loginRequiredAllowedForStartup;	// G=0x47e765; S=0x47e77d; @synthesize=loginRequiredAllowedForStartup_
@property(readonly, assign) BOOL loginRequiredAllowedForStartup;	// @dynamic
@property(readonly, assign, nonatomic) NSString *masterM3u8Prefix;	// @dynamic
@property(copy, nonatomic) NSString *masterM3u8Prefix;	// G=0x47ea4d; S=0x47ea61; @synthesize=masterM3u8Prefix_
@property(assign) NBPApplication *nbp;	// G=0x47ebb1; S=0x47ebc5; @synthesize=nbp_
@property(copy, nonatomic) NSString *nccpServerUrl;	// G=0x47cfb9; S=0x47d09d; @synthesize=nccpServerUrl_
@property(copy, nonatomic) NSString *nccpServerUrl;	// @dynamic
@property(copy) NSString *netflixIdKey;	// G=0x47e885; S=0x47e899; @synthesize=netflixIdKey_
@property(copy) NSString *netflixIdKey;	// @dynamic
@property(copy) NSString *netflixIdValue;	// G=0x47e8a9; S=0x47e8bd; @synthesize=netflixIdValue_
@property(copy) NSString *netflixIdValue;	// @dynamic
@property(assign, nonatomic) BOOL nfhlsProtocol;	// G=0x47e03d; S=0x47c7e9; @synthesize=nfhlsProtocol_
@property(readonly, assign) NrdLib *nrdLib;	// @dynamic
@property(assign) NrdLib *nrdLib;	// G=0x47eb85; S=0x47eb99; @synthesize=nrdLib_
@property(assign, nonatomic) int nrdLogLevel;	// G=0x47e04d; S=0x47df49; @synthesize=nrdLogLevel_
@property(assign) BOOL nrdpStartCompleted;	// G=0x47e6e1; S=0x47e6f9; @synthesize=nrdpStartCompleted_
@property(retain) NSError *nrdpStartError;	// G=0x47e711; S=0x47e725; @synthesize=nrdpStartError_
@property(copy) NSMutableDictionary *parameterItems;	// G=0x47e4f9; S=0x47e50d; @synthesize=parameterItems_
@property(readonly, assign) PeriodicWorkerThread *periodicWorkerThread;	// @dynamic
@property(retain) PeriodicWorkerThread *periodicWorkerThread;	// G=0x47e655; S=0x47e669; @synthesize=periodicWorkerThread_
@property(readonly, assign, nonatomic) double periodicWorkerTimeInterval;	// @dynamic
@property(assign, nonatomic) double periodicWorkerTimeInterval;	// G=0x47e63d; S=0x47c8c5; @synthesize=periodicWorkerTimeInterval_
@property(retain) NSLock *pingLock;	// @dynamic
@property(retain) NSLock *pingLock;	// G=0x47e9d5; S=0x47e9e9; @synthesize=pingLock_
@property(assign, nonatomic) int pinnedCdnId;	// G=0x47ea91; S=0x47eaa1; @synthesize=pinnedCdnId_
@property(readonly, assign, nonatomic) int pinnedCdnId;	// @dynamic
@property(copy) NSString *preferredLanguagesForApi;	// G=0x47e2e5; S=0x47e2f9; @synthesize=preferredLanguagesForApi_
@property(copy) NSString *preferredLanguagesForApi;	// @dynamic
@property(assign) BOOL preferredLanguagesSuccess;	// @dynamic
@property(assign) BOOL preferredLanguagesSuccess;	// G=0x47e309; S=0x47e321; @synthesize=preferredLanguagesSuccess_
@property(assign) double reconfigureTimeInterval;	// G=0x47e679; S=0x47e6ad; @synthesize=reconfigureTimeInterval_
@property(assign) double reconfigureTimeInterval;	// @dynamic
@property(readonly, assign, nonatomic) NSDictionary *reportablePlaybackActionId;	// G=0x480b61; 
@property(assign) int runtimeState;	// G=0x47dfe1; S=0x47dff5; @synthesize=runtimeState_
@property(assign) BOOL scheduledPreferredLanguages;	// @dynamic
@property(assign) BOOL scheduledPreferredLanguages;	// G=0x47e2b5; S=0x47e2cd; @synthesize=scheduledPreferredLanguages_
@property(retain) NSLock *scheduledPreferredLanguagesLock;	// G=0x47e291; S=0x47e2a5; @synthesize=scheduledPreferredLanguagesLock_
@property(retain) NSLock *scheduledPreferredLanguagesLock;	// @dynamic
@property(copy) NSString *secureNetflixIdKey;	// @dynamic
@property(copy) NSString *secureNetflixIdKey;	// G=0x47e8cd; S=0x47e8e1; @synthesize=secureNetflixIdKey_
@property(copy) NSString *secureNetflixIdValue;	// @dynamic
@property(copy) NSString *secureNetflixIdValue;	// G=0x47e8f1; S=0x47e905; @synthesize=secureNetflixIdValue_
@property(copy, nonatomic) NSString *softwareVersion;	// G=0x47e4b1; S=0x47e4c5; @synthesize=softwareVersion_
@property(readonly, assign, nonatomic) NSString *softwareVersion;	// @dynamic
@property(readonly, assign, nonatomic) BOOL supportUnmuxedStreams;	// @dynamic
@property(assign, nonatomic) BOOL supportUnmuxedStreams;	// G=0x47eab1; S=0x47eac1; @synthesize=supportUnmuxedStreams_
@property(copy, nonatomic) NSString *swUpgradedFromVersion;	// @dynamic
@property(copy, nonatomic) NSString *swUpgradedFromVersion;	// G=0x47e381; S=0x47e395; @synthesize=swUpgradedFromVersion_
@property(readonly, assign, nonatomic) int targetType;	// @dynamic
@property(assign, nonatomic) int targetType;	// G=0x47e159; S=0x47e169; @synthesize=targetType_
@property(assign) BOOL testEnv;	// G=0x47cd11; S=0x47cd35; @synthesize=testEnv_
@property(copy, nonatomic) NSString *udid;	// G=0x47e0c9; S=0x47e0dd; @synthesize=udid_
@property(readonly, assign, nonatomic) NSString *udid;	// @dynamic
@property(copy) NSString *uiBootUrl;	// @dynamic
@property(copy) NSString *uiBootUrl;	// G=0x47e619; S=0x47e62d; @synthesize=uiBootUrl_
@property(copy, nonatomic) NSArray *userAccountPreferredLanguages;	// @dynamic
@property(copy, nonatomic) NSArray *userAccountPreferredLanguages;	// G=0x47e27d; S=0x47cc99; @synthesize=userAccountPreferredLanguages_
@property(readonly, assign, nonatomic) NSMutableArray *userAgentApplicationComments;	// @dynamic
@property(retain, nonatomic) NSMutableArray *userAgentApplicationComments;	// G=0x47e491; S=0x47e4a1; @synthesize=userAgentApplicationComments_
@property(readonly, assign, nonatomic) NSString *userAgentApplicationName;	// @dynamic
@property(copy, nonatomic) NSString *userAgentApplicationName;	// G=0x47e449; S=0x47e45d; @synthesize=userAgentApplicationName_
@property(readonly, assign, nonatomic) NSString *userAgentApplicationVersion;	// @dynamic
@property(copy, nonatomic) NSString *userAgentApplicationVersion;	// G=0x47e46d; S=0x47e481; @synthesize=userAgentApplicationVersion_
@property(copy) NSString *userEmail;	// @dynamic
@property(copy) NSString *userEmail;	// G=0x47e915; S=0x47e929; @synthesize=userEmail_
@property(assign) BOOL userForciblyLoggedOut;	// @dynamic
@property(assign) BOOL userForciblyLoggedOut;	// G=0x47ebdd; S=0x47ebf5; @synthesize=userForciblyLoggedOut_
@property(copy) NSString *userId;	// @dynamic
@property(copy) NSString *userId;	// G=0x47e95d; S=0x47e971; @synthesize=userId_
@property(copy) NSString *userPassword;	// @dynamic
@property(copy) NSString *userPassword;	// G=0x47e939; S=0x47e94d; @synthesize=userPassword_
@property(copy, nonatomic) NSString *uuidStartTime;	// G=0x47e1fd; S=0x47e211; @synthesize=uuidStartTime_
@property(retain) NetflixNrdObjectCallback *validateDeviceCallback;	// @dynamic
@property(retain) NetflixNrdObjectCallback *validateDeviceCallback;	// G=0x47e981; S=0x47e995; @synthesize=validateDeviceCallback_
@property(copy, nonatomic) NSString *version;	// G=0x47e081; S=0x47e095; @synthesize=version_
@property(readonly, assign, nonatomic) NSString *version;	// @dynamic
+ (id)allocWithZone:(NSZone *)zone;	// 0x4780bd
+ (id)sharedInstance;	// 0x477fd1
- (id)init;	// 0x4781b9
// declared property getter: - (id)accounts;	// 0x47e4d5
- (void)addDeviceTokensCallback:(id)callback;	// 0x4e6ea1
// declared property getter: - (id)apiServerHostname;	// 0x47e541
// declared property getter: - (id)apiUUID;	// 0x47c6bd
// declared property getter: - (id)apiVersion;	// 0x47e589
// declared property getter: - (BOOL)appleTV;	// 0x47e179
// declared property getter: - (id)applicationName;	// 0x47e221
- (void)applyBuiltinConfig:(id)config;	// 0x47eccd
- (id)autorelease;	// 0x4781ad
- (void)buildPreferredLanguagesForApi;	// 0x47aff1
// declared property getter: - (id)builtinConfig;	// 0x47e83d
// declared property getter: - (unsigned)certificationVersion;	// 0x47cbad
- (void)checkIfStartupComplete;	// 0x47a525
// declared property getter: - (id)configError;	// 0x47e819
- (id)configQueryParams;	// 0x480b95
// declared property getter: - (id)configServerUrl;	// 0x47e565
// declared property getter: - (id)configurationItems;	// 0x47e51d
- (void)configure:(id)configure;	// 0x47ff99
- (id)configure:(id)configure error:(id *)error;	// 0x47f9e1
// declared property getter: - (ConsoleSink *)consoleSink;	// 0x47eb59
// declared property getter: - (id)contentProfiles;	// 0x47c909
- (void)cookieChanged:(id)changed;	// 0x47f699
// declared property getter: - (BOOL)cookiesDirty;	// 0x47e9a5
- (id)copyWithZone:(NSZone *)zone;	// 0x4781a1
- (void)createDeviceAccountForValidateDeviceCallback:(id)validateDeviceCallback;	// 0x4e3fa9
- (id)createEsn:(id)esn model:(id)model udid:(id)udid;	// 0x479c39
// declared property getter: - (id)customConfig;	// 0x47e861
// declared property getter: - (Class)customNetflixConfigClass;	// 0x47e05d
// declared property getter: - (id)dataDirectory;	// 0x47eb11
- (void)dealloc;	// 0x47861d
- (void)debugHttp:(BOOL)http;	// 0x47df8d
- (void)debugNfhlsProtocol:(BOOL)protocol;	// 0x47dfc5
// declared property getter: - (id)defaultGenericFeedUrl;	// 0x47e5d1
- (double)defaultReconfigureTimeInterval;	// 0x47f681
// declared property getter: - (id)defaultUiBootUrl;	// 0x47e5ad
// declared property getter: - (BOOL)deferredStop;	// 0x47e00d
// declared property getter: - (id)deviceLanguage;	// 0x47e269
// declared property getter: - (id)deviceModel;	// 0x47e0a5
// declared property getter: - (id)didFailLoginRequiredNotificationName;	// 0x47e35d
// declared property getter: - (id)didLoginRequiredNotificationName;	// 0x47e339
// declared property getter: - (id)esn;	// 0x47e135
// declared property getter: - (id)esnPrefix;	// 0x47e111
- (id)esnPrefix:(int)prefix model:(id)model;	// 0x479b41
// declared property getter: - (bool)factoryReset;	// 0x47eb35
- (void)factoryResetDevice;	// 0x479759
- (id)fetchPreferredLanguages:(BOOL)languages error:(id *)error;	// 0x4e7ab1
- (id)fetchUserId:(BOOL)anId error:(id *)error;	// 0x4e7535
- (void)finishShutdown;	// 0x47afad
- (void)forceLogoutUser:(BOOL)user;	// 0x4e7155
// declared property getter: - (id)genericFeedUrl;	// 0x47e5f5
// declared property getter: - (id)geolocation;	// 0x47e3a5
// declared property getter: - (id)geolocationCountry;	// 0x47e3c9
// declared property getter: - (id)geolocationLanguage;	// 0x47e411
// declared property getter: - (id)geolocationLocale;	// 0x47e425
// declared property getter: - (id)geolocationStatus;	// 0x47e3ed
- (void)getDeviceTokens;	// 0x4e6951
- (void)getDeviceTokensCallback:(id)callback;	// 0x4e6895
- (void)getDeviceTokensValidateDeviceAccountCallback:(id)callback;	// 0x4e6a29
// declared property getter: - (BOOL)gettingDeviceTokens;	// 0x47e1a9
// declared property getter: - (id)gettingDeviceTokensLock;	// 0x47e1d9
- (id)handleCompletedActivation:(id)activation useInternal:(BOOL)internal error:(id *)error;	// 0x4e8205
- (id)handleError:(id)error defaultErrorCode:(int)code;	// 0x4e3cb1
- (void)handleNetflixDidFailInitialConfigurationNotification:(id)handleNetflix;	// 0x47c0a1
- (void)handleNetflixDidFailInitialLoginRequiredNotification:(id)handleNetflix;	// 0x47c319
- (void)handleNetflixDidFailSWUpgradeUserUpgradeNotification:(id)handleNetflix;	// 0x47c551
- (void)handleNetflixDidFailStartNrdpNotification:(id)handleNetflix;	// 0x47bf1d
- (void)handleNetflixDidFailStopNrdpNotification:(id)handleNetflix;	// 0x47bfa5
- (void)handleNetflixDidFailUpdateConfigurationNotification:(id)handleNetflix;	// 0x47c209
- (void)handleNetflixDidInitialConfigurationNotification:(id)handleNetflix;	// 0x47bfb5
- (void)handleNetflixDidInitialLoginRequiredNotification:(id)handleNetflix;	// 0x47c281
- (void)handleNetflixDidSWUpgradeUserUpgradeNotification:(id)handleNetflix;	// 0x47c3e5
- (void)handleNetflixDidStartNrdpNotification:(id)handleNetflix;	// 0x47bc4d
- (void)handleNetflixDidStopNrdpNotification:(id)handleNetflix;	// 0x47bf95
- (void)handleNetflixDidUpdateConfigurationNotification:(id)handleNetflix;	// 0x47c141
- (BOOL)hasDoubleBoundCookies;	// 0x4e6f9d
- (id)hashUdid:(id)udid;	// 0x4799bd
// declared property getter: - (id)hashedUdid;	// 0x47e0ed
- (id)hexify:(char *)hexify length:(unsigned)length;	// 0x47993d
// declared property getter: - (id)hostName;	// 0x47e245
- (void)indicateGettingDeviceTokens;	// 0x4e6e45
// declared property getter: - (BOOL)initialConfigurationCompleted;	// 0x47e735
// declared property getter: - (BOOL)initialLoginRequiredCompleted;	// 0x47e795
// declared property getter: - (id)initialLoginRequiredError;	// 0x47e7f5
// declared property getter: - (BOOL)intBasedM3u8;	// 0x47ea71
// declared property getter: - (BOOL)iosSWUpdateCompleted;	// 0x47e7c5
- (BOOL)isLoggingToConsole;	// 0x47df15
// declared property getter: - (BOOL)isTerminating;	// 0x47ec0d
// declared property getter: - (id)localhost;	// 0x47ead1
// declared property getter: - (int)localhostPort;	// 0x47eaf1
- (void)login:(id)login password:(id)password;	// 0x4e3541
- (void)loginEmailActivateCallback:(id)callback;	// 0x4e5659
// declared property getter: - (id)loginLock;	// 0x47e9f9
- (void)loginNewUserSignUpActivateCallback:(id)callback;	// 0x4e5a61
// declared property getter: - (BOOL)loginProcessing;	// 0x47ea1d
- (void)loginRequired;	// 0x4e3505
// declared property getter: - (BOOL)loginRequiredAllowedForStartup;	// 0x47e765
- (void)loginRequiredAsync;	// 0x4e4581
- (void)loginRequiredDeactivateAllCallback:(id)callback;	// 0x4e4bd9
- (void)loginRequiredDeviceTokensCallback:(id)callback;	// 0x4e47e5
- (void)loginRequiredValidateDeviceAccountAfterDeactivateAllCallback:(id)callback;	// 0x4e4a7d
- (void)loginRequiredValidateDeviceAccountCallback:(id)callback;	// 0x4e4cd9
- (void)loginValidateDeviceAccountCallback:(id)callback;	// 0x4e580d
- (void)loginWithTokens:(id)tokens;	// 0x4e37b5
- (void)logout;	// 0x4e3a3d
- (void)logoutDeactivateAllCallback:(id)callback;	// 0x4e6031
- (void)logoutDeviceTokensCallback:(id)callback;	// 0x4e5d89
- (void)logoutValidateDeviceAccountCallback:(id)callback;	// 0x4e5eed
// declared property getter: - (id)masterM3u8Prefix;	// 0x47ea4d
- (void)mediaAudioSelect:(id)select;	// 0x4e34cd
- (void)mediaBuffering:(double)buffering;	// 0x4e3305
- (void)mediaBufferingComplete:(double)complete;	// 0x4e3341
- (void)mediaClose;	// 0x4e3169
- (void)mediaEnd:(double)end reason:(id)reason;	// 0x4e31d9
- (void)mediaNetworkSelection:(id)selection;	// 0x4e3495
- (void)mediaOpen:(id)open params:(id)params;	// 0x4e2e35
- (void)mediaPause:(double)pause;	// 0x4e3251
- (void)mediaPlay:(double)play;	// 0x4e3215
- (void)mediaReposition:(double)reposition;	// 0x4e32c9
- (void)mediaStop:(double)stop;	// 0x4e319d
- (void)mediaSubtitlesDisable;	// 0x4e342d
- (void)mediaSubtitlesSelect:(id)select;	// 0x4e33f5
- (void)mediaSubtitlesSelectAbort;	// 0x4e3461
- (void)mediaUnpause:(double)unpause;	// 0x4e328d
- (void)mediaUpdatePts:(double)pts;	// 0x4e337d
- (void)mediaUpdatePts:(double)pts accessLogEvents:(id)events;	// 0x4e33b9
- (id)modelGroupKeys;	// 0x47f2fd
- (id)modelName;	// 0x479ad1
// declared property getter: - (NBPApplication *)nbp;	// 0x47ebb1
- (id)nccpCAFilePath;	// 0x47f615
// declared property getter: - (id)nccpServerUrl;	// 0x47cfb9
// declared property getter: - (id)netflixIdKey;	// 0x47e885
// declared property getter: - (id)netflixIdValue;	// 0x47e8a9
// declared property getter: - (BOOL)nfhlsProtocol;	// 0x47e03d
// declared property getter: - (NrdLib *)nrdLib;	// 0x47eb85
// declared property getter: - (int)nrdLogLevel;	// 0x47e04d
- (BOOL)nrdpIdentityMatchesCookies;	// 0x4e4169
// declared property getter: - (BOOL)nrdpStartCompleted;	// 0x47e6e1
// declared property getter: - (id)nrdpStartError;	// 0x47e711
- (void)observeRuntimeNotifications;	// 0x47b91d
- (void)observeSWUpgradeNotifications;	// 0x47bb29
- (void)observeShutdownNotifications;	// 0x47ac4d
- (void)observeStartupNotifications;	// 0x47a2a9
// declared property getter: - (id)parameterItems;	// 0x47e4f9
// declared property getter: - (id)periodicWorkerThread;	// 0x47e655
// declared property getter: - (double)periodicWorkerTimeInterval;	// 0x47e63d
// declared property getter: - (id)pingLock;	// 0x47e9d5
// declared property getter: - (int)pinnedCdnId;	// 0x47ea91
- (void)postFailureNotification:(id)notification error:(id)error clearProgress:(BOOL)progress;	// 0x4e6ba1
- (void)postInternalNotificationName:(id)name object:(id)object error:(id)error;	// 0x47f91d
- (void)postInternalNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x47f999
- (void)postLoginFailure;	// 0x4e7281
- (void)postLoginFailure:(id)failure clearProgress:(BOOL)progress;	// 0x4e6d3d
- (void)postLoginRequiredFailure:(id)failure clearProgress:(BOOL)progress;	// 0x4e6ce1
- (void)postLoginRequiredSuccess:(id)success;	// 0x4e6cad
- (void)postLoginSuccess:(id)success;	// 0x4e6d1d
- (void)postLoginWithTokensFailure:(id)tokensFailure clearProgress:(BOOL)progress;	// 0x4e6da9
- (void)postLoginWithTokensSuccess:(id)tokensSuccess;	// 0x4e6d89
- (void)postLogoutFailure:(id)failure clearProgress:(BOOL)progress;	// 0x4e6e15
- (void)postLogoutSuccess:(id)success;	// 0x4e6df5
- (void)postNotificationName:(id)name object:(id)object error:(id)error;	// 0x47f805
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x47f881
- (void)postNotificationOnMainThread:(id)thread;	// 0x480cb1
- (void)postSuccessNotification:(id)notification userInfo:(id)info;	// 0x4e6b21
// declared property getter: - (id)preferredLanguagesForApi;	// 0x47e2e5
// declared property getter: - (BOOL)preferredLanguagesSuccess;	// 0x47e309
- (void)purgeIdentity;	// 0x4e6689
- (void)reconfigure:(id)reconfigure;	// 0x480071
// declared property getter: - (double)reconfigureTimeInterval;	// 0x47e679
- (void)refreshCookiesFromAPI;	// 0x4eab09
- (void)registerDefaultParameterItems;	// 0x47b335
- (void)registerNfhlsProtocol:(BOOL)protocol;	// 0x47de0d
- (oneway void)release;	// 0x4781a9
- (void)removeDeviceTokensCallback:(id)callback;	// 0x4e6efd
// declared property getter: - (id)reportablePlaybackActionId;	// 0x480b61
- (BOOL)reset;	// 0x47867d
- (void)resetFeedUrls;	// 0x47f6ad
- (id)retain;	// 0x4781a5
- (unsigned)retainCount;	// 0x4781b1
- (void)retrieveDeviceTokens;	// 0x4e7e6d
// declared property getter: - (int)runtimeState;	// 0x47dfe1
- (void)scheduleFetchPreferredLanguage:(BOOL)language;	// 0x480589
- (void)scheduleReconfigure;	// 0x47ec29
// declared property getter: - (BOOL)scheduledPreferredLanguages;	// 0x47e2b5
// declared property getter: - (id)scheduledPreferredLanguagesLock;	// 0x47e291
// declared property getter: - (id)secureNetflixIdKey;	// 0x47e8cd
// declared property getter: - (id)secureNetflixIdValue;	// 0x47e8f1
- (void)selectDeviceAccountForValidateDeviceCallback:(id)validateDeviceCallback;	// 0x4e3f3d
// declared property setter: - (void)setAccounts:(id)accounts;	// 0x47e4e9
- (void)setActivationTokensFromHttpCookies;	// 0x4e7389
// declared property setter: - (void)setApiServerHostname:(id)hostname;	// 0x47e555
// declared property setter: - (void)setApiVersion:(id)version;	// 0x47e59d
// declared property setter: - (void)setAppleTV:(BOOL)tv;	// 0x47e191
// declared property setter: - (void)setApplicationName:(id)name;	// 0x47e235
// declared property setter: - (void)setBuiltinConfig:(id)config;	// 0x47e851
// declared property setter: - (void)setConfigError:(id)error;	// 0x47e82d
// declared property setter: - (void)setConfigServerUrl:(id)url;	// 0x47e579
// declared property setter: - (void)setConfigurationItems:(id)items;	// 0x47e531
// declared property setter: - (void)setConsoleSink:(ConsoleSink *)sink;	// 0x47eb6d
// declared property setter: - (void)setCookiesDirty:(BOOL)dirty;	// 0x47e9bd
// declared property setter: - (void)setCustomConfig:(id)config;	// 0x47e875
// declared property setter: - (void)setCustomNetflixConfigClass:(Class)aClass;	// 0x47e071
// declared property setter: - (void)setDataDirectory:(id)directory;	// 0x47eb25
// declared property setter: - (void)setDefaultGenericFeedUrl:(id)url;	// 0x47e5e5
// declared property setter: - (void)setDefaultUiBootUrl:(id)url;	// 0x47e5c1
// declared property setter: - (void)setDeferredStop:(BOOL)stop;	// 0x47e025
// declared property setter: - (void)setDeviceLanguage:(id)language;	// 0x47cbb1
// declared property setter: - (void)setDeviceModel:(id)model;	// 0x47e0b9
- (BOOL)setDeviceTokensFromNccpCookies:(id)nccpCookies;	// 0x4e6131
// declared property setter: - (void)setDidFailLoginRequiredNotificationName:(id)failLoginRequiredNotificationName;	// 0x47e371
// declared property setter: - (void)setDidLoginRequiredNotificationName:(id)loginRequiredNotificationName;	// 0x47e34d
// declared property setter: - (void)setEsn:(id)esn;	// 0x47e149
// declared property setter: - (void)setEsnPrefix:(id)prefix;	// 0x47e125
// declared property setter: - (void)setFactoryReset:(bool)reset;	// 0x47eb49
// declared property setter: - (void)setGenericFeedUrl:(id)url;	// 0x47e609
// declared property setter: - (void)setGeolocation:(id)geolocation;	// 0x47e3b9
// declared property setter: - (void)setGeolocationCountry:(id)country;	// 0x47e3dd
// declared property setter: - (void)setGeolocationLanguage:(id)language;	// 0x47cc25
// declared property setter: - (void)setGeolocationLocale:(id)locale;	// 0x47e439
// declared property setter: - (void)setGeolocationStatus:(id)status;	// 0x47e401
// declared property setter: - (void)setGettingDeviceTokens:(BOOL)tokens;	// 0x47e1c1
// declared property setter: - (void)setGettingDeviceTokensLock:(id)lock;	// 0x47e1ed
// declared property setter: - (void)setHashedUdid:(id)udid;	// 0x47e101
// declared property setter: - (void)setHostName:(id)name;	// 0x47e259
// declared property setter: - (void)setInitialConfigurationCompleted:(BOOL)completed;	// 0x47e74d
// declared property setter: - (void)setInitialLoginRequiredCompleted:(BOOL)completed;	// 0x47e7ad
// declared property setter: - (void)setInitialLoginRequiredError:(id)error;	// 0x47e809
// declared property setter: - (void)setIntBasedM3u8:(BOOL)a8;	// 0x47ea81
// declared property setter: - (void)setIosSWUpdateCompleted:(BOOL)completed;	// 0x47e7dd
// declared property setter: - (void)setLocalhost:(id)localhost;	// 0x47eae1
// declared property setter: - (void)setLocalhostPort:(int)port;	// 0x47eb01
- (void)setLogToConsole:(BOOL)console;	// 0x47dedd
// declared property setter: - (void)setLoginLock:(id)lock;	// 0x47ea0d
// declared property setter: - (void)setLoginProcessing:(BOOL)processing;	// 0x47ea35
// declared property setter: - (void)setLoginRequiredAllowedForStartup:(BOOL)startup;	// 0x47e77d
// declared property setter: - (void)setMasterM3u8Prefix:(id)prefix;	// 0x47ea61
// declared property setter: - (void)setNbp:(NBPApplication *)nbp;	// 0x47ebc5
// declared property setter: - (void)setNccpServerUrl:(id)url;	// 0x47d09d
// declared property setter: - (void)setNetflixIdKey:(id)key;	// 0x47e899
// declared property setter: - (void)setNetflixIdValue:(id)value;	// 0x47e8bd
- (void)setNetflixTokensFromNccpCookies:(id)nccpCookies;	// 0x4e63c5
// declared property setter: - (void)setNfhlsProtocol:(BOOL)protocol;	// 0x47c7e9
// declared property setter: - (void)setNrdLib:(NrdLib *)lib;	// 0x47eb99
// declared property setter: - (void)setNrdLogLevel:(int)level;	// 0x47df49
// declared property setter: - (void)setNrdpStartCompleted:(BOOL)completed;	// 0x47e6f9
// declared property setter: - (void)setNrdpStartError:(id)error;	// 0x47e725
// declared property setter: - (void)setParameterItems:(id)items;	// 0x47e50d
// declared property setter: - (void)setPeriodicWorkerThread:(id)thread;	// 0x47e669
// declared property setter: - (void)setPeriodicWorkerTimeInterval:(double)interval;	// 0x47c8c5
// declared property setter: - (void)setPingLock:(id)lock;	// 0x47e9e9
// declared property setter: - (void)setPinnedCdnId:(int)anId;	// 0x47eaa1
// declared property setter: - (void)setPreferredLanguagesForApi:(id)api;	// 0x47e2f9
// declared property setter: - (void)setPreferredLanguagesSuccess:(BOOL)success;	// 0x47e321
// declared property setter: - (void)setReconfigureTimeInterval:(double)interval;	// 0x47e6ad
// declared property setter: - (void)setRuntimeState:(int)state;	// 0x47dff5
// declared property setter: - (void)setScheduledPreferredLanguages:(BOOL)languages;	// 0x47e2cd
// declared property setter: - (void)setScheduledPreferredLanguagesLock:(id)lock;	// 0x47e2a5
// declared property setter: - (void)setSecureNetflixIdKey:(id)key;	// 0x47e8e1
// declared property setter: - (void)setSecureNetflixIdValue:(id)value;	// 0x47e905
// declared property setter: - (void)setSoftwareVersion:(id)version;	// 0x47e4c5
// declared property setter: - (void)setSupportUnmuxedStreams:(BOOL)streams;	// 0x47eac1
// declared property setter: - (void)setSwUpgradedFromVersion:(id)version;	// 0x47e395
// declared property setter: - (void)setTargetType:(int)type;	// 0x47e169
// declared property setter: - (void)setTestEnv:(BOOL)env;	// 0x47cd35
// declared property setter: - (void)setUdid:(id)udid;	// 0x47e0dd
// declared property setter: - (void)setUiBootUrl:(id)url;	// 0x47e62d
- (void)setUseHttpServer:(BOOL)server;	// 0x47c7c9
// declared property setter: - (void)setUserAccountPreferredLanguages:(id)languages;	// 0x47cc99
- (void)setUserAgent:(id)agent;	// 0x479d89
// declared property setter: - (void)setUserAgentApplicationComments:(id)comments;	// 0x47e4a1
// declared property setter: - (void)setUserAgentApplicationName:(id)name;	// 0x47e45d
// declared property setter: - (void)setUserAgentApplicationVersion:(id)version;	// 0x47e481
// declared property setter: - (void)setUserEmail:(id)email;	// 0x47e929
// declared property setter: - (void)setUserForciblyLoggedOut:(BOOL)anOut;	// 0x47ebf5
// declared property setter: - (void)setUserId:(id)anId;	// 0x47e971
// declared property setter: - (void)setUserPassword:(id)password;	// 0x47e94d
// declared property setter: - (void)setUuidStartTime:(id)time;	// 0x47e211
// declared property setter: - (void)setValidateDeviceCallback:(id)callback;	// 0x47e995
// declared property setter: - (void)setVersion:(id)version;	// 0x47e095
- (void)shutdown;	// 0x478be9
// declared property getter: - (id)softwareVersion;	// 0x47e4b1
- (void)start:(id)start params:(id)params;	// 0x47d245
- (void)startNrdp;	// 0x47ab95
- (void)stop;	// 0x47dab9
- (void)stopAll;	// 0x47ad71
- (void)stopNrdp;	// 0x47adad
- (void)stopToTerminate:(BOOL)terminate;	// 0x47db15
// declared property getter: - (BOOL)supportUnmuxedStreams;	// 0x47eab1
// declared property getter: - (id)swUpgradedFromVersion;	// 0x47e381
- (BOOL)syncNrdpWithCookies;	// 0x4e42dd
// declared property getter: - (int)targetType;	// 0x47e159
// declared property getter: - (BOOL)testEnv;	// 0x47cd11
// declared property getter: - (id)udid;	// 0x47e0c9
// declared property getter: - (id)uiBootUrl;	// 0x47e619
- (void)unobserveRuntimeNotifications;	// 0x47b9bd
- (void)unobserveSWUpgradeNotifications;	// 0x47bbc9
- (void)unobserveShutdownNotifications;	// 0x47aced
- (void)unobserveStartupNotifications;	// 0x47a411
- (void)unsupportedSWVersion:(id)version;	// 0x47f72d
- (void)updateParams:(id)params;	// 0x47dbc1
- (BOOL)updateStaleCredentials;	// 0x47f705
- (void)upgradeCustomerBoundCookiesToDoubleBound;	// 0x4ea9b9
- (BOOL)upgradeUserForSWUpgrade;	// 0x47ba41
- (id)urlRequest:(id)request params:(id)params withHttpMethod:(id)httpMethod;	// 0x47de5d
- (id)urlRequestInternal:(id)internal params:(id)params withHttpMethod:(id)httpMethod;	// 0x4806e1
// declared property getter: - (id)userAccountPreferredLanguages;	// 0x47e27d
// declared property getter: - (id)userAgentApplicationComments;	// 0x47e491
// declared property getter: - (id)userAgentApplicationName;	// 0x47e449
// declared property getter: - (id)userAgentApplicationVersion;	// 0x47e46d
// declared property getter: - (id)userEmail;	// 0x47e915
// declared property getter: - (BOOL)userForciblyLoggedOut;	// 0x47ebdd
// declared property getter: - (id)userId;	// 0x47e95d
// declared property getter: - (id)userPassword;	// 0x47e939
- (void)userUpgradeTokenActivateCallback:(id)callback;	// 0x4eae95
- (void)userUpgradeValidateDeviceCallback:(id)callback;	// 0x4ead09
// declared property getter: - (id)uuidStartTime;	// 0x47e1fd
- (void)validateDevice:(id)device;	// 0x4e7fc1
// declared property getter: - (id)validateDeviceCallback;	// 0x47e981
// declared property getter: - (id)version;	// 0x47e081
- (long long)webServiceGetLogTimeInMS;	// 0x480539
@end

