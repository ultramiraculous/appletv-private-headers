/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCEmailAccountPayloadBase.h"

@class NSData, NSString, NSNumber;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {
	NSString *_accountDescription;	// 60 = 0x3c
	NSString *_hostname;	// 64 = 0x40
	NSString *_username;	// 68 = 0x44
	NSString *_password;	// 72 = 0x48
	NSString *_emailAddress;	// 76 = 0x4c
	BOOL _useSSL;	// 80 = 0x50
	NSNumber *_mailNumberOfPastDaysToSync;	// 84 = 0x54
	NSData *_embeddedCertificate;	// 88 = 0x58
	NSString *_embeddedCertificateName;	// 92 = 0x5c
	NSString *_embeddedCertificatePassword;	// 96 = 0x60
	NSString *_certificateUUID;	// 100 = 0x64
	NSString *_accountPersistentUUID;	// 104 = 0x68
	NSData *_certificatePersistentID;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x36472095; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x36471ff5; S=0x364722d1; @synthesize=_accountPersistentUUID
@property(retain, nonatomic) NSData *certificatePersistentID;	// G=0x36471fe5; S=0x364722f5; @synthesize=_certificatePersistentID
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x36472005; @synthesize=_certificateUUID
@property(copy, nonatomic) NSString *emailAddress;	// G=0x364723a9; S=0x36472289; @synthesize=_emailAddress
@property(readonly, assign, nonatomic) NSData *embeddedCertificate;	// G=0x36472035; @synthesize=_embeddedCertificate
@property(readonly, assign, nonatomic) NSString *embeddedCertificateName;	// G=0x36472025; @synthesize=_embeddedCertificateName
@property(copy, nonatomic) NSString *embeddedCertificatePassword;	// G=0x36472015; S=0x364722ad; @synthesize=_embeddedCertificatePassword
@property(readonly, assign, nonatomic) BOOL hasCertificate;	// G=0x36471fb9; 
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x36472085; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSNumber *mailNumberOfPastDaysToSync;	// G=0x36472045; @synthesize=_mailNumberOfPastDaysToSync
@property(copy, nonatomic) NSString *password;	// G=0x36472065; S=0x36472265; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x36472055; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x36472075; S=0x36472241; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x364721b9
+ (id)typeStrings;	// 0x36472219
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x36472785
// declared property getter: - (id)accountDescription;	// 0x36472095
// declared property getter: - (id)accountPersistentUUID;	// 0x36471ff5
// declared property getter: - (id)certificatePersistentID;	// 0x36471fe5
// declared property getter: - (id)certificateUUID;	// 0x36472005
- (void)dealloc;	// 0x364720a5
- (id)description;	// 0x3647257d
// declared property getter: - (id)emailAddress;	// 0x364723a9
// declared property getter: - (id)embeddedCertificate;	// 0x36472035
// declared property getter: - (id)embeddedCertificateName;	// 0x36472025
// declared property getter: - (id)embeddedCertificatePassword;	// 0x36472015
// declared property getter: - (BOOL)hasCertificate;	// 0x36471fb9
// declared property getter: - (id)hostname;	// 0x36472085
// declared property getter: - (id)mailNumberOfPastDaysToSync;	// 0x36472045
// declared property getter: - (id)password;	// 0x36472065
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x364722d1
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x364722f5
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x36472289
// declared property setter: - (void)setEmbeddedCertificatePassword:(id)password;	// 0x364722ad
// declared property setter: - (void)setPassword:(id)password;	// 0x36472265
// declared property setter: - (void)setUsername:(id)username;	// 0x36472241
- (id)stubDictionary;	// 0x36472469
- (id)subtitle1Description;	// 0x36472359
- (id)subtitle1Label;	// 0x36472369
- (id)subtitle2Description;	// 0x3647231d
- (id)subtitle2Label;	// 0x3647232d
- (id)title;	// 0x36472379
// declared property getter: - (BOOL)useSSL;	// 0x36472055
// declared property getter: - (id)username;	// 0x36472075
@end

