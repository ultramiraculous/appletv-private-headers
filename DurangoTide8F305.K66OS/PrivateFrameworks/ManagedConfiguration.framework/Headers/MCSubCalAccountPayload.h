/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCSubCalAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	BOOL _useSSL;	// 56 = 0x38
	NSString *_accountPersistentUUID;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x32b1a6f1; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x32b1a6a1; S=0x32b1ada5; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x32b1a6e1; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSString *password;	// G=0x32b1a6c1; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x32b1a6b1; @synthesize=_useSSL
@property(readonly, assign, nonatomic) NSString *username;	// G=0x32b1a6d1; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x32b1add1
+ (id)typeStrings;	// 0x32b1a9e1
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32b1aa09
// declared property getter: - (id)accountDescription;	// 0x32b1a6f1
// declared property getter: - (id)accountPersistentUUID;	// 0x32b1a6a1
- (void)dealloc;	// 0x32b1a951
- (id)description;	// 0x32b1a819
// declared property getter: - (id)hostname;	// 0x32b1a6e1
// declared property getter: - (id)password;	// 0x32b1a6c1
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x32b1ada5
- (id)stubDictionary;	// 0x32b1a751
- (id)subtitle1Description;	// 0x32b1a715
- (id)subtitle1Label;	// 0x32b1ad91
- (id)subtitle2Description;	// 0x32b1a701
- (id)subtitle2Label;	// 0x32b1ad7d
- (id)title;	// 0x32b1a729
// declared property getter: - (BOOL)useSSL;	// 0x32b1a6b1
// declared property getter: - (id)username;	// 0x32b1a6d1
@end
