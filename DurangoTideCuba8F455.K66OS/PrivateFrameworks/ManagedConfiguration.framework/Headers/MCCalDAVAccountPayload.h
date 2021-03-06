/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCalDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x340f8e99; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x340f8e29; S=0x340f96d9; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x340f8e89; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x340f8e69; S=0x340f96ad; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x340f8e39; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x340f8e59; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x340f8e49; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x340f8e79; S=0x340f9681; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x340f9705
+ (id)typeStrings;	// 0x340f91e9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x340f9211
// declared property getter: - (id)accountDescription;	// 0x340f8e99
// declared property getter: - (id)accountPersistentUUID;	// 0x340f8e29
- (void)dealloc;	// 0x340f9145
- (id)description;	// 0x340f8fc1
// declared property getter: - (id)hostname;	// 0x340f8e89
// declared property getter: - (id)password;	// 0x340f8e69
// declared property getter: - (int)port;	// 0x340f8e39
// declared property getter: - (id)principalURL;	// 0x340f8e59
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x340f96d9
// declared property setter: - (void)setPassword:(id)password;	// 0x340f96ad
// declared property setter: - (void)setUsername:(id)username;	// 0x340f9681
- (id)stubDictionary;	// 0x340f8ef9
- (id)subtitle1Description;	// 0x340f8ebd
- (id)subtitle1Label;	// 0x340f966d
- (id)subtitle2Description;	// 0x340f8ea9
- (id)subtitle2Label;	// 0x340f9659
- (id)title;	// 0x340f8ed1
// declared property getter: - (BOOL)useSSL;	// 0x340f8e49
// declared property getter: - (id)username;	// 0x340f8e79
@end

