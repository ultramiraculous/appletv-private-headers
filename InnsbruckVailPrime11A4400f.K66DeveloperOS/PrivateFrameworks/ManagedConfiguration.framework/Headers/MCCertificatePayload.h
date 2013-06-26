/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCPayload.h"

@class NSString, NSData, NSDate;

@interface MCCertificatePayload : MCPayload {
	NSData *_certificatePersistentID;	// 44 = 0x2c
	NSString *_installedOnDeviceID;	// 48 = 0x30
}
@property(retain, nonatomic) NSData *certificatePersistentID;	// G=0x313915a5; S=0x313915b5; @synthesize=_certificatePersistentID
@property(readonly, assign, nonatomic) NSDate *expiry;	// G=0x3139154d; 
@property(copy, nonatomic) NSString *installedOnDeviceID;	// G=0x313915dd; S=0x313915f1; @synthesize=_installedOnDeviceID
@property(readonly, assign, nonatomic) BOOL isIdentity;	// G=0x31390f59; 
@property(readonly, assign, nonatomic) BOOL isRoot;	// G=0x31390f2d; 
@property(readonly, assign, nonatomic) BOOL isSigned;	// G=0x31390e29; 
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x31390ac1
- (void).cxx_destruct;	// 0x31391601
// declared property getter: - (id)certificatePersistentID;	// 0x313915a5
- (SecCertificate *)copyCertificate;	// 0x31390ec5
- (SecIdentity *)copyIdentityFromKeychain;	// 0x31390ef9
- (id)description;	// 0x313912fd
// declared property getter: - (id)expiry;	// 0x3139154d
// declared property getter: - (id)installedOnDeviceID;	// 0x313915dd
// declared property getter: - (BOOL)isIdentity;	// 0x31390f59
// declared property getter: - (BOOL)isRoot;	// 0x31390f2d
// declared property getter: - (BOOL)isSigned;	// 0x31390e29
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x313915b5
// declared property setter: - (void)setInstalledOnDeviceID:(id)anId;	// 0x313915f1
- (id)stubDictionary;	// 0x31390e2d
- (id)subtitle1Description;	// 0x313910b1
- (id)subtitle1Label;	// 0x31391039
- (id)subtitle2Description;	// 0x313911b5
- (id)subtitle2Label;	// 0x3139113d
- (id)title;	// 0x31390f81
@end
