/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray, NSNumber, NSDictionary, NSString;

@interface MCWiFiPayload : MCPayload {
	NSString *_ssid;	// 40 = 0x28
	BOOL _hidden;	// 44 = 0x2c
	NSString *_encryptionType;	// 48 = 0x30
	BOOL _isWEP;	// 52 = 0x34
	BOOL _isWPA;	// 53 = 0x35
	BOOL _autoJoin;	// 54 = 0x36
	NSDictionary *_eapClientConfig;	// 56 = 0x38
	BOOL _passwordRequired;	// 60 = 0x3c
	BOOL _usernameRequired;	// 61 = 0x3d
	NSString *_password;	// 64 = 0x40
	NSString *_username;	// 68 = 0x44
	NSString *_certificateUUID;	// 72 = 0x48
	NSArray *_payloadCertificateAnchorUUID;	// 76 = 0x4c
	int _proxyType;	// 80 = 0x50
	NSString *_proxyServer;	// 84 = 0x54
	NSNumber *_proxyServerPort;	// 88 = 0x58
	NSString *_proxyPassword;	// 92 = 0x5c
	NSString *_proxyPACURLString;	// 96 = 0x60
	NSString *_credentialUUID;	// 100 = 0x64
	NSString *_proxyUsername;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) BOOL autoJoin;	// G=0x3474b605; @synthesize=_autoJoin
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x3474b5a5; @synthesize=_certificateUUID
@property(retain, nonatomic) NSString *credentialUUID;	// G=0x3474b525; S=0x3474d359; @synthesize=_credentialUUID
@property(readonly, assign, nonatomic) NSDictionary *eapClientConfig;	// G=0x3474b5f5; @synthesize=_eapClientConfig
@property(readonly, assign, nonatomic) NSString *encryptionType;	// G=0x3474b635; @synthesize=_encryptionType
@property(readonly, assign, nonatomic) BOOL isHidden;	// G=0x3474b645; @synthesize=_hidden
@property(readonly, assign, nonatomic) BOOL isWEP;	// G=0x3474b625; @synthesize=_isWEP
@property(readonly, assign, nonatomic) BOOL isWPA;	// G=0x3474b615; @synthesize=_isWPA
@property(retain, nonatomic) NSString *password;	// G=0x3474b5b5; S=0x3474d331; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL passwordRequired;	// G=0x3474b5c5; @synthesize=_passwordRequired
@property(readonly, assign, nonatomic) NSArray *payloadCertificateAnchorUUID;	// G=0x3474b595; @synthesize=_payloadCertificateAnchorUUID
@property(readonly, assign, nonatomic) NSString *proxyPACURLString;	// G=0x3474b535; @synthesize=_proxyPACURLString
@property(readonly, assign, nonatomic) NSString *proxyPassword;	// G=0x3474b545; @synthesize=_proxyPassword
@property(readonly, assign, nonatomic) NSString *proxyServer;	// G=0x3474b575; @synthesize=_proxyServer
@property(readonly, assign, nonatomic) NSNumber *proxyServerPort;	// G=0x3474b565; @synthesize=_proxyServerPort
@property(readonly, assign, nonatomic) int proxyType;	// G=0x3474b585; @synthesize=_proxyType
@property(readonly, assign, nonatomic) NSString *proxyUsername;	// G=0x3474b555; @synthesize=_proxyUsername
@property(readonly, assign, nonatomic) NSString *ssid;	// G=0x3474b655; @synthesize=_ssid
@property(retain, nonatomic) NSString *username;	// G=0x3474b5d5; S=0x3474d309; @synthesize=_username
@property(readonly, assign, nonatomic) BOOL usernameRequired;	// G=0x3474b5e5; @synthesize=_usernameRequired
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3474d289
+ (id)typeStrings;	// 0x3474b861
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3474c265
- (BOOL)_configIsValid:(id)valid error:(id *)error;	// 0x3474b889
- (id)_eapPasswordFromConfig:(id)config isRequired:(BOOL *)required;	// 0x3474b729
- (id)_eapUsernameFromConfig:(id)config isRequired:(BOOL *)required;	// 0x3474b665
- (BOOL)_isEAPSIMConfig:(id)config;	// 0x3474b7ed
// declared property getter: - (BOOL)autoJoin;	// 0x3474b605
// declared property getter: - (id)certificateUUID;	// 0x3474b5a5
// declared property getter: - (id)credentialUUID;	// 0x3474b525
- (void)dealloc;	// 0x3474d7d1
- (id)description;	// 0x3474d381
// declared property getter: - (id)eapClientConfig;	// 0x3474b5f5
// declared property getter: - (id)encryptionType;	// 0x3474b635
// declared property getter: - (BOOL)isHidden;	// 0x3474b645
// declared property getter: - (BOOL)isWEP;	// 0x3474b625
// declared property getter: - (BOOL)isWPA;	// 0x3474b615
// declared property getter: - (id)password;	// 0x3474b5b5
// declared property getter: - (BOOL)passwordRequired;	// 0x3474b5c5
// declared property getter: - (id)payloadCertificateAnchorUUID;	// 0x3474b595
// declared property getter: - (id)proxyPACURLString;	// 0x3474b535
// declared property getter: - (id)proxyPassword;	// 0x3474b545
// declared property getter: - (id)proxyServer;	// 0x3474b575
// declared property getter: - (id)proxyServerPort;	// 0x3474b565
// declared property getter: - (int)proxyType;	// 0x3474b585
// declared property getter: - (id)proxyUsername;	// 0x3474b555
// declared property setter: - (void)setCredentialUUID:(id)uuid;	// 0x3474d359
// declared property setter: - (void)setPassword:(id)password;	// 0x3474d331
// declared property setter: - (void)setUsername:(id)username;	// 0x3474d309
// declared property getter: - (id)ssid;	// 0x3474b655
- (id)stubDictionary;	// 0x3474d62d
- (id)subtitle1Description;	// 0x3474b851
- (id)subtitle1Label;	// 0x3474d61d
- (id)subtitle2Description;	// 0x3474d5b5
- (id)subtitle2Label;	// 0x3474d60d
// declared property getter: - (id)username;	// 0x3474b5d5
// declared property getter: - (BOOL)usernameRequired;	// 0x3474b5e5
@end

