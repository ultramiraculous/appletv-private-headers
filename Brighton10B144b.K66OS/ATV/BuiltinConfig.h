/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixConfigProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface BuiltinConfig : XXUnknownSuperclass <NetflixConfigProtocol> {
	BOOL deviceSupported_;	// 4 = 0x4
	BOOL login_;	// 5 = 0x5
	NSString *country_;	// 8 = 0x8
	NSString *geolocation_;	// 12 = 0xc
	NSString *geolocation_status_;	// 16 = 0x10
	NSString *geolocation_language_;	// 20 = 0x14
	NSString *geolocation_country_;	// 24 = 0x18
	NSString *geolocation_locale_;	// 28 = 0x1c
	NSString *uiBootUrl_;	// 32 = 0x20
	NSString *genericFeedUrl_;	// 36 = 0x24
	NSString *netflixApiHost_;	// 40 = 0x28
	BOOL testEnvironment_;	// 44 = 0x2c
	NSString *testNccpDataUrl_;	// 48 = 0x30
	NSString *testNccpIdentityUrl_;	// 52 = 0x34
	NSString *testNccpLoggingUrl_;	// 56 = 0x38
	NSString *nccpServerUrl_;	// 60 = 0x3c
	double timePeriodForReconfiguration_;	// 64 = 0x40
	BOOL supportDD5_1_;	// 72 = 0x48
	unsigned cdnRankingMethod_;	// 76 = 0x4c
	unsigned cdnMeasurementMethod_;	// 80 = 0x50
	BOOL supportPlaylist302Redirects_;	// 84 = 0x54
	BOOL dfxpUrlsRequireRangeRequest_;	// 85 = 0x55
}
@property(assign) unsigned cdnMeasurementMethod;	// G=0x4b59d9; S=0x4b59ed; @synthesize=cdnMeasurementMethod_
@property(assign) unsigned cdnRankingMethod;	// G=0x4b59ad; S=0x4b59c1; @synthesize=cdnRankingMethod_
@property(copy) NSString *country;	// G=0x4b5711; S=0x4b5725; @synthesize=country_
@property(assign) BOOL deviceSupported;	// G=0x4b56b1; S=0x4b56c9; @synthesize=deviceSupported_
@property(assign) BOOL dfxpUrlsRequireRangeRequest;	// G=0x4b5a35; S=0x4b5a4d; @synthesize=dfxpUrlsRequireRangeRequest_
@property(retain) id env;	// G=0x4b4d81; S=0x4b4dc1; converted property
@property(copy) NSString *genericFeedUrl;	// G=0x4b580d; S=0x4b5821; @synthesize=genericFeedUrl_
@property(copy) NSString *geolocation;	// G=0x4b5735; S=0x4b5749; @synthesize=geolocation_
@property(copy) NSString *geolocation_country;	// G=0x4b57a1; S=0x4b57b5; @synthesize=geolocation_country_
@property(copy) NSString *geolocation_language;	// G=0x4b577d; S=0x4b5791; @synthesize=geolocation_language_
@property(copy) NSString *geolocation_locale;	// G=0x4b57c5; S=0x4b57d9; @synthesize=geolocation_locale_
@property(copy) NSString *geolocation_status;	// G=0x4b5759; S=0x4b576d; @synthesize=geolocation_status_
@property(assign) BOOL login;	// G=0x4b56e1; S=0x4b56f9; @synthesize=login_
@property(retain) id loginWithString;	// G=0x4b4e15; S=0x4b4e55; converted property
@property(copy) NSString *nccpServerUrl;	// G=0x4b58f1; S=0x4b5905; @synthesize=nccpServerUrl_
@property(copy) NSString *netflixApiHost;	// G=0x4b5831; S=0x4b5845; @synthesize=netflixApiHost_
@property(assign) BOOL supportDD5_1;	// G=0x4b597d; S=0x4b5995; @synthesize=supportDD5_1_
@property(assign) BOOL supportPlaylist302Redirects;	// G=0x4b5a05; S=0x4b5a1d; @synthesize=supportPlaylist302Redirects_
@property(assign) BOOL testEnvironment;	// G=0x4b5855; S=0x4b586d; @synthesize=testEnvironment_
@property(copy) NSString *testNccpDataUrl;	// G=0x4b5885; S=0x4b5899; @synthesize=testNccpDataUrl_
@property(copy) NSString *testNccpIdentityUrl;	// G=0x4b58a9; S=0x4b58bd; @synthesize=testNccpIdentityUrl_
@property(copy) NSString *testNccpLoggingUrl;	// G=0x4b58cd; S=0x4b58e1; @synthesize=testNccpLoggingUrl_
@property(assign) double timePeriodForReconfiguration;	// G=0x4b5915; S=0x4b5949; @synthesize=timePeriodForReconfiguration_
@property(copy) NSString *uiBootUrl;	// G=0x4b57e9; S=0x4b57fd; @synthesize=uiBootUrl_
- (id)init;	// 0x4b4b71
// declared property getter: - (unsigned)cdnMeasurementMethod;	// 0x4b59d9
// declared property getter: - (unsigned)cdnRankingMethod;	// 0x4b59ad
// declared property getter: - (id)country;	// 0x4b5711
- (void)dealloc;	// 0x4b4c01
// declared property getter: - (BOOL)deviceSupported;	// 0x4b56b1
// declared property getter: - (BOOL)dfxpUrlsRequireRangeRequest;	// 0x4b5a35
// converted property getter: - (id)env;	// 0x4b4d81
// declared property getter: - (id)genericFeedUrl;	// 0x4b580d
// declared property getter: - (id)geolocation;	// 0x4b5735
// declared property getter: - (id)geolocation_country;	// 0x4b57a1
// declared property getter: - (id)geolocation_language;	// 0x4b577d
// declared property getter: - (id)geolocation_locale;	// 0x4b57c5
// declared property getter: - (id)geolocation_status;	// 0x4b5759
// declared property getter: - (BOOL)login;	// 0x4b56e1
// converted property getter: - (id)loginWithString;	// 0x4b4e15
// declared property getter: - (id)nccpServerUrl;	// 0x4b58f1
// declared property getter: - (id)netflixApiHost;	// 0x4b5831
- (id)parsableItems;	// 0x4b4e69
// declared property setter: - (void)setCdnMeasurementMethod:(unsigned)method;	// 0x4b59ed
// declared property setter: - (void)setCdnRankingMethod:(unsigned)method;	// 0x4b59c1
// declared property setter: - (void)setCountry:(id)country;	// 0x4b5725
// declared property setter: - (void)setDeviceSupported:(BOOL)supported;	// 0x4b56c9
// declared property setter: - (void)setDfxpUrlsRequireRangeRequest:(BOOL)request;	// 0x4b5a4d
// converted property setter: - (void)setEnv:(id)env;	// 0x4b4dc1
// declared property setter: - (void)setGenericFeedUrl:(id)url;	// 0x4b5821
// declared property setter: - (void)setGeolocation:(id)geolocation;	// 0x4b5749
// declared property setter: - (void)setGeolocation_country:(id)country;	// 0x4b57b5
// declared property setter: - (void)setGeolocation_language:(id)language;	// 0x4b5791
// declared property setter: - (void)setGeolocation_locale:(id)locale;	// 0x4b57d9
// declared property setter: - (void)setGeolocation_status:(id)status;	// 0x4b576d
// declared property setter: - (void)setLogin:(BOOL)login;	// 0x4b56f9
// converted property setter: - (void)setLoginWithString:(id)string;	// 0x4b4e55
// declared property setter: - (void)setNccpServerUrl:(id)url;	// 0x4b5905
// declared property setter: - (void)setNetflixApiHost:(id)host;	// 0x4b5845
// declared property setter: - (void)setSupportDD5_1:(BOOL)a1;	// 0x4b5995
// declared property setter: - (void)setSupportPlaylist302Redirects:(BOOL)redirects;	// 0x4b5a1d
// declared property setter: - (void)setTestEnvironment:(BOOL)environment;	// 0x4b586d
// declared property setter: - (void)setTestNccpDataUrl:(id)url;	// 0x4b5899
// declared property setter: - (void)setTestNccpIdentityUrl:(id)url;	// 0x4b58bd
// declared property setter: - (void)setTestNccpLoggingUrl:(id)url;	// 0x4b58e1
// declared property setter: - (void)setTimePeriodForReconfiguration:(double)reconfiguration;	// 0x4b5949
// declared property setter: - (void)setUiBootUrl:(id)url;	// 0x4b57fd
// declared property getter: - (BOOL)supportDD5_1;	// 0x4b597d
// declared property getter: - (BOOL)supportPlaylist302Redirects;	// 0x4b5a05
// declared property getter: - (BOOL)testEnvironment;	// 0x4b5855
// declared property getter: - (id)testNccpDataUrl;	// 0x4b5885
// declared property getter: - (id)testNccpIdentityUrl;	// 0x4b58a9
// declared property getter: - (id)testNccpLoggingUrl;	// 0x4b58cd
// declared property getter: - (double)timePeriodForReconfiguration;	// 0x4b5915
// declared property getter: - (id)uiBootUrl;	// 0x4b57e9
@end
