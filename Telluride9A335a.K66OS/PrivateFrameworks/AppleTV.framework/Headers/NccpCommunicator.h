/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NccpTransactionResult;
@protocol NccpHandlerDelegate;

__attribute__((visibility("hidden")))
@interface NccpCommunicator : NSObject {
@private
	NSObject<NccpHandlerDelegate> *mNccpHandlerDelegate;	// 4 = 0x4
	BOOL mNeedRegister;	// 8 = 0x8
	BOOL mNeedsCredentials;	// 9 = 0x9
	int fujiTarget;	// 12 = 0xc
	unsigned maxDownloadables;	// 16 = 0x10
	unsigned maxCdns;	// 20 = 0x14
	NccpTransactionResult *lastTransactionResult;	// 24 = 0x18
	NSMutableArray *rankedCDNList;	// 28 = 0x1c
	NSMutableArray *nccpRequestMetrics;	// 32 = 0x20
	BOOL mNeedCredentials;	// 36 = 0x24
}
@property(readonly, retain) NccpTransactionResult *lastTransactionResult;	// G=0x344b4a54; @synthesize
@property(readonly, assign, nonatomic) unsigned maxCdns;	// G=0x344b2cb8; @synthesize
@property(readonly, assign, nonatomic) unsigned maxDownloadables;	// G=0x344b2ccc; @synthesize
@property(readonly, assign) BOOL needCredentials;	// G=0x344b2ce0; @synthesize=mNeedCredentials
@property(readonly, assign) BOOL needRegister;	// G=0x344b2cf8; @synthesize=mNeedRegister
+ (id)NFErrToNWErr:(unsigned)nwerr;	// 0x344b3698
+ (id)NFErrToString:(unsigned)string;	// 0x344b37f8
+ (id)buildEsn:(int)esn;	// 0x344b3e9c
+ (void)cleanUp;	// 0x344b38a0
+ (BOOL)createWithDelegate:(id)delegate withTarget:(int)target useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp caFile:(id)file idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x344b3c60
+ (id)deviceUserAgent;	// 0x344b2b64
+ (void)enableOutputtingOfNCCPTransactionResponse:(BOOL)nccptransactionResponse;	// 0x344b367c
+ (void)enterShutdown;	// 0x344b2b38
+ (const char *)esnPrefix:(int)prefix;	// 0x344b4398
+ (id)esnPrefixAsNSString:(int)string;	// 0x344b42fc
+ (void)inactivePurgeSystemDataFiles;	// 0x344b3d70
+ (id)instance;	// 0x344b2b90
+ (BOOL)instantiated;	// 0x344b2bac
+ (BOOL)isNccpLoggingToConsole;	// 0x344b455c
+ (void)setDeviceUserAgent:(id)agent;	// 0x344b458c
+ (void)setDfxpURLsRequireRangeRequest:(BOOL)request;	// 0x344b2b7c
+ (void)setHashUDID:(BOOL)udid;	// 0x344b2b78
+ (void)setNccpLogToConsole:(BOOL)console;	// 0x344b4570
+ (void)setOSVersion:(id)version;	// 0x344b4648
+ (void)setPlaydataPersistor;	// 0x344b4928
+ (void)setSubtitlesManagesUpdates:(BOOL)updates;	// 0x344b2aac
+ (void)setUIVersion:(id)version;	// 0x344b47b8
+ (void)setUniqueIdentifier:(id)identifier;	// 0x344b4600
+ (BOOL)subtitlesManagesUpdates;	// 0x344b2a98
+ (id)uniqueIdentifier;	// 0x344b2b50
- (id)initWithDelegate:(id)delegate;	// 0x344b34fc
- (id)availableSubtitleLanguages;	// 0x344b73c8
- (id)availableSubtitleLanguagesWithBCP47;	// 0x344b7258
- (BOOL)buildRankedCDNList:(AuthResponseData *)list withErrorMsg:(id *)errorMsg;	// 0x344b6114
- (id)cdnDownloadDataWithCdnId:(unsigned)cdnId;	// 0x344b6c68
- (void)cleanUp;	// 0x344bbfec
- (void)dealloc;	// 0x344bbe84
- (void)disableSubtitles;	// 0x344b6efc
- (void)doBookmarkTh;	// 0x344b93bc
- (void)doRuntimeTh;	// 0x344b4c38
- (void)enableSubtitlesWithLanguage:(id)language pos:(double)pos;	// 0x344b6f30
- (id)extractClientHash:(id)hash;	// 0x344bdc44
- (void)fillLicenseResponseData:(LicenseResponseData *)data;	// 0x344b5518
- (int)getAuthorizationET;	// 0x344b2ac0
- (unsigned)getBookmark:(unsigned)bookmark;	// 0x344b94fc
- (unsigned)getBookmarkTh:(unsigned)th;	// 0x344b948c
- (int)getCdnSelectionET;	// 0x344b2b24
- (id)getCurrentMovieTitle;	// 0x344b4d80
- (unsigned)getDownloadableIdForLicenseReq;	// 0x344b2c8c
- (unsigned)getLastTriedAuthMovieId;	// 0x344b2c10
- (id)getLicense;	// 0x344b2c78
- (int)getLicenseET;	// 0x344b2ad4
- (int)getMetaDataET;	// 0x344b2ae8
- (id)getNccpRequestMetrics;	// 0x344b2bfc
- (int)getNccpRequestMetricsTotalTime;	// 0x344b5fc8
- (id)getRankedCDNList;	// 0x344b2be8
- (int)getRegisterET;	// 0x344b2afc
- (double)getRunTime:(unsigned)time;	// 0x344b4dd4
- (unsigned)getRunTimeTh:(unsigned)th;	// 0x344b4d10
- (id)getSubtitleText;	// 0x344b6d1c
- (int)getUserMetaDataET;	// 0x344b2b10
- (void)initializeForPlaylistGeneration;	// 0x344b4ae8
- (void)invalidateAllResponseData;	// 0x344bb734
- (void)invalidateAuthorizationResponseData;	// 0x344b2bcc
- (void)invalidateLicenseResponseData;	// 0x344b55ac
- (BOOL)is3GPlaybackAllowed;	// 0x344b2c24
// declared property getter: - (id)lastTransactionResult;	// 0x344b4a54
// declared property getter: - (unsigned)maxCdns;	// 0x344b2cb8
// declared property getter: - (unsigned)maxDownloadables;	// 0x344b2ccc
// declared property getter: - (BOOL)needCredentials;	// 0x344b2ce0
// declared property getter: - (BOOL)needRegister;	// 0x344b2cf8
- (BOOL)netflixIdsMatch:(id)match :(id)arg2;	// 0x344b348c
- (void)overRideSubtitleUrl:(BOOL)url url:(id)url2;	// 0x344b74c8
- (void)purgeUserRegistration;	// 0x344bbafc
- (void)removePreviousUserStoredData;	// 0x344bb6cc
- (BOOL)resendAuthorization;	// 0x344b5e2c
- (void)saveShopperId;	// 0x344babe8
- (void)selectCdnByCdnId:(unsigned)anId;	// 0x344b4a74
- (BOOL)sendAuthorization:(unsigned)authorization trackId:(int)anId withContentProfiles:(id)contentProfiles;	// 0x344b7bd8
- (BOOL)sendLicense:(id)license;	// 0x344b5628
- (BOOL)sendPing;	// 0x344ba650
- (BOOL)sendRegister:(id)aRegister;	// 0x344b9ca4
- (void)setCDNMeasurementMethod:(int)method;	// 0x344b2c64
- (void)setCDNRankingMethod:(int)method;	// 0x344b2c50
- (void)setCDNValue:(int)value;	// 0x344b2c3c
- (void)setNccpUrls:(int)urls useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp;	// 0x344bb768
- (void)setNeedCredentials;	// 0x344b2ca0
- (void)setNeedRegister;	// 0x344b54e8
- (bool)startNrdpWithServer:(int)server useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp caFile:(id)file idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x344bc090
- (void)subtitleSeek:(double)seek;	// 0x344b6e18
- (id)subtitlesAsNSArray;	// 0x344b78a8
- (void)subtitlesDidFailWithError;	// 0x344b771c
- (void)subtitlesDidFinishLoad;	// 0x344b77a0
- (void)subtitlesDidStartLoad;	// 0x344b7824
- (void)triggerGetBookmark:(unsigned)bookmark;	// 0x344b92f0
- (void)triggerGetRuntime:(unsigned)runtime;	// 0x344b4b6c
- (BOOL)updateAuthorizationResponseData:(AuthResponseData *)data withErrorMsg:(id *)errorMsg;	// 0x344b7b84
- (BOOL)updateCTicket:(unsigned long long)ticket;	// 0x344b89b8
- (BOOL)updateId:(id)anId idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue forceUpdate:(BOOL)update;	// 0x344badd8
- (void)updateLicenseResponseData:(LicenseResponseData *)data;	// 0x344b55e0
- (void)updateOSVersion;	// 0x344bbce8
- (void)updatePTS:(double)pts;	// 0x344b6e74
- (void)updateUIVersion;	// 0x344bbb4c
@end

