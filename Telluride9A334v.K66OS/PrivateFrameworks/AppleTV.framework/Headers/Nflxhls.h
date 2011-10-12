/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface Nflxhls : NSObject {
@private
	NSString *crashFormat;	// 4 = 0x4
	NSString *crashReport;	// 8 = 0x8
	double lastPingTime;	// 12 = 0xc
	double timePeriodForReconfiguration;	// 20 = 0x14
	NSString *trueNetflixIDNameValue;	// 28 = 0x1c
	NSString *trueSecureNetflixIDNameValue;	// 32 = 0x20
	NSString *netflixIDNameValue;	// 36 = 0x24
	NSString *secureNetflixIDNameValue;	// 40 = 0x28
	NSString *shopperIDNameValue;	// 44 = 0x2c
	NSString *secureShopperIDNameValue;	// 48 = 0x30
}
@property(retain) id netflixApiHost;	// G=0x333ed784; S=0x333eef28; converted property
@property(retain) id netflixApiUserHost;	// G=0x333ed798; S=0x333eef8c; converted property
@property(readonly, assign, nonatomic) NSString *netflixIDNameValue;	// G=0x333ed89c; @synthesize
@property(readonly, assign, nonatomic) NSString *secureNetflixIDNameValue;	// G=0x333ed888; @synthesize
@property(readonly, assign, nonatomic) NSString *secureShopperIDNameValue;	// G=0x333ed860; @synthesize
@property(readonly, assign, nonatomic) NSString *shopperIDNameValue;	// G=0x333ed874; @synthesize
@property(assign, nonatomic) BOOL subtitlesManagesUpdates;	// G=0x333ed9b0; S=0x333ed9d8; 
@property(assign) BOOL supportPlaylist302Redirects;	// G=0x333ed5e8; S=0x333ed5cc; converted property
@property(readonly, assign, nonatomic) NSString *trueNetflixIDNameValue;	// G=0x333ed8c4; @synthesize
@property(readonly, assign, nonatomic) NSString *trueSecureNetflixIDNameValue;	// G=0x333ed8b0; @synthesize
@property(retain) id userId;	// G=0x333ed6bc; S=0x333ed6d0; converted property
+ (int)defaultCDNMeasurementMethod;	// 0x333ed588
+ (int)defaultCDNRankingMethod;	// 0x333ed544
+ (double)defaultMinimumTimePeriodForReconfiguration;	// 0x333ed610
+ (BOOL)defaultSupportPlaylist302Redirects;	// 0x333ed5e0
+ (double)defaultTimePeriodForReconfiguration;	// 0x333ed5fc
+ (void)enterShutdown;	// 0x333efecc
+ (id)instance;	// 0x333efe78
- (id)init;	// 0x333f9708
- (void)initAndStartNccp;	// 0x333ef9ec
- (BOOL)LogCollectorBackgroundProcessingEnabled;	// 0x333ed720
- (void)_logout;	// 0x333f204c
- (void)appLogError:(id)error withInfoMessage:(id)infoMessage withException:(id)exception withStacktrace:(id)stacktrace;	// 0x333effa0
- (id)availableSubtitleLanguages;	// 0x333eda48
- (id)availableSubtitleLanguagesWithBCP47;	// 0x333eda80
- (id)cdnMeasurementMethodAsNSString:(int)string;	// 0x333ed5a4
- (id)cdnRankingMethodAsNSString:(int)string;	// 0x333ed560
- (BOOL)configBackgroundProcessingEnabled;	// 0x333ed734
- (BOOL)configure:(id)configure forView:(id)view;	// 0x333f8128
- (void)configureWithFujiConfig:(id)fujiConfig;	// 0x333ef6e8
- (id)cookieExpiresForNameKey:(id)nameKey;	// 0x333f5524
- (id)cookieValueForNameKey:(id)nameKey;	// 0x333f560c
- (id)countryDomain;	// 0x333eeb20
- (id)createURLRequest:(id)request;	// 0x333f2f6c
- (void)dealloc;	// 0x333f9350
- (void)debugHttp:(BOOL)http;	// 0x333eff60
- (void)debugNfhlsProtocol:(BOOL)protocol;	// 0x333eff38
- (void)deleteConfig;	// 0x333edd24
- (void)deleteNetflixCookies;	// 0x333f52a0
- (void)deleteNflxId;	// 0x333edc58
- (void)deleteUserExistence;	// 0x333f5170
- (void)didEnterBackground;	// 0x333f57cc
- (void)disableSubtitles;	// 0x333edaf0
- (void)enableConfigBackgroundProcessing:(BOOL)processing;	// 0x333eeda8
- (void)enableLogCollectorBackgroundProcessing:(BOOL)processing;	// 0x333eed5c
- (void)enableOutputtingOfNCCPTransactionResponse:(BOOL)nccptransactionResponse;	// 0x333eff10
- (void)enablePeriodicWorkerTimer:(BOOL)timer;	// 0x333f0c10
- (void)enableSubtitlesWithLanguage:(id)language pos:(double)pos;	// 0x333edb78
- (id)encodedURLParameterString:(id)string;	// 0x333f4000
- (id)esn;	// 0x333ef6b0
- (const char *)esnPrefix;	// 0x333ef640
- (id)esnPrefixAsNSString;	// 0x333ef678
- (void)generateNewUUIDStartTime;	// 0x333ef060
- (id)genericFeedURL;	// 0x333ef4c8
- (id)getAPIRequestContextParameters;	// 0x333ef258
- (int)getCDNMeasurementMethod;	// 0x333ed590
- (int)getCDNRankingMethod;	// 0x333ed54c
- (id)getConfigurationFromAPI;	// 0x333f2390
- (id)getCountry;	// 0x333ed7e0
- (id)getCurrentBitrate;	// 0x333ee72c
- (id)getLanguage;	// 0x333ed7f4
- (id)getLocalhost;	// 0x333ed688
- (float)getM3u8ChunkRatio;	// 0x333ed938
- (id)getNflxIdKey;	// 0x333ed4c8
- (id)getNflxIdValue;	// 0x333ed4dc
- (id)getNflxSecretKey;	// 0x333ed4f0
- (id)getNflxSecretValue;	// 0x333ed504
- (id)getNflxUserId;	// 0x333ed4b4
- (id)getSubtitleText;	// 0x333edab8
- (int)getTarget;	// 0x333ed84c
- (id)getTestNCCPDataURL;	// 0x333ed748
- (id)getTestNCCPIdentityURL;	// 0x333ed75c
- (id)getTestNCCPLoggingURL;	// 0x333ed770
- (id)getUUID;	// 0x333ef138
- (void)installPeriodicWorkerTimer:(id)timer;	// 0x333f0c98
- (BOOL)isLoggingToConsole;	// 0x333f0bbc
- (BOOL)isNato;	// 0x333f9318
- (BOOL)isUsingPeriodicWorkerTimer;	// 0x333ed838
- (BOOL)isUsingStagingNCCP;	// 0x333ed7ac
- (BOOL)isUsingTestEnv;	// 0x333ed6e4
- (BOOL)login:(id)login password:(id)password error:(id *)error;	// 0x333f1d1c
- (BOOL)loginRequired:(id *)required;	// 0x333f2184
- (void)logout;	// 0x333f212c
- (void)nccpSendPing;	// 0x333ef864
- (BOOL)nccpStarted;	// 0x333ed518
// converted property getter: - (id)netflixApiHost;	// 0x333ed784
// converted property getter: - (id)netflixApiUserHost;	// 0x333ed798
// declared property getter: - (id)netflixIDNameValue;	// 0x333ed89c
- (id)nflxIdKey;	// 0x333ed638
- (id)nflxIdValue;	// 0x333ed64c
- (id)nflxSecretKey;	// 0x333ed660
- (id)nflxSecretValue;	// 0x333ed674
- (id)nflxUserId;	// 0x333ed624
- (void)notifyErrorMessage:(BOOL)message message:(id)message2;	// 0x333f0d4c
- (void)notifyLogin;	// 0x333f1fc0
- (void)notifyNetworkStatus:(id)status;	// 0x333f0f78
- (void)notifyNetworkStatus:(id)status netspec:(id)netspec;	// 0x333f0f18
- (void)notifyNetworkStatus:(id)status netspec:(id)netspec mcc:(id)mcc mnc:(id)mnc carrier:(id)carrier;	// 0x333f0eb4
- (BOOL)notifyPlayerEnd:(double)end reason:(id)reason error:(id *)error;	// 0x333f15f4
- (void)notifyPlayerLoadState:(double)state playing:(BOOL)playing;	// 0x333f154c
- (void)notifyPlayerPause:(double)pause;	// 0x333f139c
- (void)notifyPlayerResume:(double)resume;	// 0x333f14bc
- (void)notifyPlayerSeek:(double)seek;	// 0x333f130c
- (BOOL)notifyPlayerStartFailed:(double)failed reason:(id)reason error:(id *)error;	// 0x333f0fd0
- (BOOL)notifyPlayerStartSucceeded:(double)succeeded error:(id *)error;	// 0x333f1180
- (void)notifyProgress:(double)progress;	// 0x333f142c
- (void)notifyScreenSelection:(int)selection;	// 0x333f0e74
- (id)oAuthSignRequest:(id)request params:(id)params withHTTPMethod:(id)httpmethod;	// 0x333f2ab0
- (void)overRideSubtitleUrl:(BOOL)url url:(id)url2;	// 0x333eda00
- (void)periodicWorkerThreadFunc:(id)func;	// 0x333edf1c
- (void)periodicWorkerTrigger:(id)trigger;	// 0x333edecc
- (BOOL)preparePlayList:(id)list returningPlayUrl:(id *)url audioEncoding:(int *)encoding position:(double *)position duration:(double *)duration error:(id *)error;	// 0x333f1788
- (id)pseudoLocalizeString:(id)string withValue:(id)value;	// 0x333ee7b4
- (void)queueReconfigure;	// 0x333eeec0
- (BOOL)reconfigure:(id)reconfigure;	// 0x333f70ec
- (void)reconfigureIfNecessary;	// 0x333eedfc
- (void)registerCrashReport:(id)report report:(id)report2;	// 0x333ef808
- (void)registerNfhlsProtocol;	// 0x333f5854
- (void)reportAndAssignAuthorizationToken:(id)token;	// 0x333f42b8
- (void)requestAccessToken:(id)token didFailWithError:(id)error;	// 0x333f3080
- (void)requestAccessToken:(id)token didFinishWithData:(id)data;	// 0x333f318c
- (void)requestAccessTokenWorker;	// 0x333f36a4
- (void)requestAuthorizationToken:(id)token didFailWithError:(id)error;	// 0x333f4300
- (void)requestAuthorizationToken:(id)token didFinishWithData:(id)data;	// 0x333f4058
- (void)requestAuthorizationTokenWorker;	// 0x333f440c
- (void)requestNetflixLogin;	// 0x333f3814
- (BOOL)restoreNeededConfigCookies:(BOOL)cookies;	// 0x333f457c
- (BOOL)restoreNeededLoginCookies;	// 0x333f4b14
- (BOOL)saveNeededConfigCookies:(id)cookies;	// 0x333f478c
- (BOOL)saveNeededLoginCookies:(id)cookies;	// 0x333f4ecc
// declared property getter: - (id)secureNetflixIDNameValue;	// 0x333ed888
// declared property getter: - (id)secureShopperIDNameValue;	// 0x333ed860
- (void)setCDNMeasurementMethod:(int)method;	// 0x333ed574
- (void)setCDNRankingMethod:(int)method;	// 0x333ed530
- (void)setCDNValue:(int)value;	// 0x333ed8f8
- (void)setCountryCode:(id)code;	// 0x333eeab4
- (void)setCred:(id)cred idtype:(id)idtype secid:(id)secid secidtype:(id)secidtype;	// 0x333ee2cc
- (BOOL)setCredentialFromCookie;	// 0x333ee3d4
- (BOOL)setCredentialUsingCookie;	// 0x333ee2a0
- (void)setDeviceUserAgent:(id)agent;	// 0x333eea28
- (void)setDownloadableContentProfile:(int)profile;	// 0x333ee9a8
- (void)setExpiresThreshold:(double)threshold;	// 0x333ed808
- (void)setInitialBitrate3G:(unsigned)g;	// 0x333ee6ec
- (void)setInitialBitrateWifi:(unsigned)wifi;	// 0x333ee6ac
- (void)setIntm3u8:(BOOL)a8;	// 0x333ed970
- (void)setKeyUseCustom:(BOOL)custom;	// 0x333ee968
- (void)setLanguage:(id)language;	// 0x333ef5cc
- (void)setLogToConsole:(BOOL)console;	// 0x333f0bd0
// converted property setter: - (void)setNetflixApiHost:(id)host;	// 0x333eef28
// converted property setter: - (void)setNetflixApiUserHost:(id)host;	// 0x333eef8c
- (void)setOSVersion:(id)version;	// 0x333f0e24
- (void)setPlayListUseCustom:(BOOL)custom;	// 0x333ee918
// declared property setter: - (void)setSubtitlesManagesUpdates:(BOOL)updates;	// 0x333ed9d8
// converted property setter: - (void)setSupportPlaylist302Redirects:(BOOL)redirects;	// 0x333ed5cc
- (void)setUIVersion:(id)version;	// 0x333f0e4c
- (void)setUseHttp:(BOOL)http;	// 0x333ee614
- (void)setUsePseudoLocalizedString:(BOOL)string;	// 0x333ee764
// converted property setter: - (void)setUserId:(id)anId;	// 0x333ed6d0
- (void)setUsing3g:(BOOL)g;	// 0x333f0de4
- (void)setm3u8bandwithSource:(int)source;	// 0x333ee9e8
- (void)setupFujiTarget:(int)target;	// 0x333f9b08
// declared property getter: - (id)shopperIDNameValue;	// 0x333ed874
- (void)showCookies;	// 0x333f53d4
- (void)startWithParams:(id)params;	// 0x333f6c28
- (void)startWithParams:(id)params withSettings:(id)settings;	// 0x333f6bf4
- (void)startWithParamsPrologue:(id)paramsPrologue;	// 0x333f6af8
- (void)startWithParamsPrologue:(id)paramsPrologue withSettings:(id)settings;	// 0x333f6bb8
- (void)stop;	// 0x333f587c
// declared property getter: - (BOOL)subtitlesManagesUpdates;	// 0x333ed9b0
- (BOOL)supportDD5_1;	// 0x333ed6f8
// converted property getter: - (BOOL)supportPlaylist302Redirects;	// 0x333ed5e8
// declared property getter: - (id)trueNetflixIDNameValue;	// 0x333ed8c4
// declared property getter: - (id)trueSecureNetflixIDNameValue;	// 0x333ed8b0
- (id)uibootURL;	// 0x333ed7c0
- (void)unregisterNfhlsProtocol;	// 0x333f582c
- (void)updateParams:(id)params;	// 0x333f5be0
- (BOOL)useDD5_1_profiles_v2;	// 0x333ed70c
- (BOOL)usePseudoLocalizedStrings;	// 0x333ed5b8
- (void)useStagingNCCP:(BOOL)nccp;	// 0x333eeff0
- (void)useTestEnv:(BOOL)env;	// 0x333eebac
// converted property getter: - (id)userId;	// 0x333ed6bc
- (id)version;	// 0x333ede68
- (long long)webServiceGetLogTimeInMS;	// 0x333f0b68
- (void)webServiceLogActivity:(id)activity forAction:(id)action onView:(id)view withStartTimeInMS:(long long)ms withResponseTimeInMS:(long long)ms5;	// 0x333f0804
- (void)webServiceLogError:(id)error withNSError:(id)nserror withInfoMessage:(id)infoMessage forAction:(id)action onView:(id)view;	// 0x333f03dc
- (void)webServiceLogError:(id)error withSubCodeError:(int)subCodeError withInfoMessage:(id)infoMessage forAction:(id)action onView:(id)view;	// 0x333efffc
- (void)willEnterForeground;	// 0x333f5740
@end

