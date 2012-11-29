/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData, NSString;

@interface MCEmailAccountPayloadBase : MCPayload {
	BOOL _preventMove;	// 40 = 0x28
	BOOL _preventAppSheet;	// 41 = 0x29
	BOOL _SMIMEEnabled;	// 42 = 0x2a
	BOOL _SMIMEEncryptionEnabled;	// 43 = 0x2b
	NSString *_SMIMESigningIdentityUUID;	// 44 = 0x2c
	NSString *_SMIMEEncryptionIdentityUUID;	// 48 = 0x30
	NSData *_SMIMESigningIdentityPersistentID;	// 52 = 0x34
	NSData *_SMIMEEncryptionIdentityPersistentID;	// 56 = 0x38
	BOOL _isRecentsSyncingDisabled;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) BOOL SMIMEEnabled;	// G=0x32bb1475; @synthesize=_SMIMEEnabled
@property(readonly, assign, nonatomic) BOOL SMIMEEncryptionEnabled;	// G=0x32bb1485; @synthesize=_SMIMEEncryptionEnabled
@property(retain, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID;	// G=0x32bb14fd; S=0x32bb150d; @synthesize=_SMIMEEncryptionIdentityPersistentID
@property(readonly, assign, nonatomic) NSString *SMIMEEncryptionIdentityUUID;	// G=0x32bb14b5; @synthesize=_SMIMEEncryptionIdentityUUID
@property(retain, nonatomic) NSData *SMIMESigningIdentityPersistentID;	// G=0x32bb14c5; S=0x32bb14d5; @synthesize=_SMIMESigningIdentityPersistentID
@property(readonly, assign, nonatomic) NSString *SMIMESigningIdentityUUID;	// G=0x32bb14a5; @synthesize=_SMIMESigningIdentityUUID
@property(readonly, assign, nonatomic) BOOL isRecentsSyncingDisabled;	// G=0x32bb1495; @synthesize=_isRecentsSyncingDisabled
@property(readonly, assign, nonatomic) BOOL preventAppSheet;	// G=0x32bb1465; @synthesize=_preventAppSheet
@property(readonly, assign, nonatomic) BOOL preventMove;	// G=0x32bb1455; @synthesize=_preventMove
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32bb0ad1
- (void).cxx_destruct;	// 0x32bb1535
// declared property getter: - (BOOL)SMIMEEnabled;	// 0x32bb1475
// declared property getter: - (BOOL)SMIMEEncryptionEnabled;	// 0x32bb1485
// declared property getter: - (id)SMIMEEncryptionIdentityPersistentID;	// 0x32bb14fd
// declared property getter: - (id)SMIMEEncryptionIdentityUUID;	// 0x32bb14b5
// declared property getter: - (id)SMIMESigningIdentityPersistentID;	// 0x32bb14c5
// declared property getter: - (id)SMIMESigningIdentityUUID;	// 0x32bb14a5
- (id)description;	// 0x32bb121d
// declared property getter: - (BOOL)isRecentsSyncingDisabled;	// 0x32bb1495
// declared property getter: - (BOOL)preventAppSheet;	// 0x32bb1465
// declared property getter: - (BOOL)preventMove;	// 0x32bb1455
// declared property setter: - (void)setSMIMEEncryptionIdentityPersistentID:(id)anId;	// 0x32bb150d
// declared property setter: - (void)setSMIMESigningIdentityPersistentID:(id)anId;	// 0x32bb14d5
- (id)stubDictionary;	// 0x32bb107d
@end
