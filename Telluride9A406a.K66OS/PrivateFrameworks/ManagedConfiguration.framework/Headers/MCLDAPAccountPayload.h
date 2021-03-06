/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSArray;

@interface MCLDAPAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	BOOL _useSSL;	// 56 = 0x38
	NSArray *_searchSettings;	// 60 = 0x3c
	NSString *_accountPersistentUUID;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x36470a6d; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x36470a0d; S=0x36470c05; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x36470a5d; @synthesize=_hostname
@property(retain, nonatomic) NSString *password;	// G=0x36470a3d; S=0x36470bdd; @synthesize=_password
@property(readonly, assign, nonatomic) NSArray *searchSettings;	// G=0x36470a1d; @synthesize=_searchSettings
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x36470a2d; @synthesize=_useSSL
@property(retain, nonatomic) NSString *username;	// G=0x36470a4d; S=0x36470bb5; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x36470b2d
+ (id)typeStrings;	// 0x36470b8d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x36470f85
// declared property getter: - (id)accountDescription;	// 0x36470a6d
// declared property getter: - (id)accountPersistentUUID;	// 0x36470a0d
- (void)dealloc;	// 0x36470a7d
- (id)description;	// 0x36470df9
// declared property getter: - (id)hostname;	// 0x36470a5d
// declared property getter: - (id)password;	// 0x36470a3d
// declared property getter: - (id)searchSettings;	// 0x36470a1d
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x36470c05
// declared property setter: - (void)setPassword:(id)password;	// 0x36470bdd
// declared property setter: - (void)setUsername:(id)username;	// 0x36470bb5
- (id)stubDictionary;	// 0x36470d15
- (id)subtitle1Description;	// 0x36470cc5
- (id)subtitle1Label;	// 0x36470cd5
- (id)subtitle2Description;	// 0x36470c29
- (id)subtitle2Label;	// 0x36470c75
- (id)title;	// 0x36470ce5
// declared property getter: - (BOOL)useSSL;	// 0x36470a2d
// declared property getter: - (id)username;	// 0x36470a4d
@end

