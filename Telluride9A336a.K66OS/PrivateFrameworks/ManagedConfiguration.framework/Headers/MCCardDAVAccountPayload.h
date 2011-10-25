/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x3308751d; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x330874ad; S=0x330876ad; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x3308750d; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x330874ed; S=0x33087689; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x330874bd; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x330874dd; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x330874cd; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x330874fd; S=0x33087665; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x330875dd
+ (id)typeStrings;	// 0x3308763d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x330879dd
// declared property getter: - (id)accountDescription;	// 0x3308751d
// declared property getter: - (id)accountPersistentUUID;	// 0x330874ad
- (void)dealloc;	// 0x3308752d
- (id)description;	// 0x33087825
// declared property getter: - (id)hostname;	// 0x3308750d
// declared property getter: - (id)password;	// 0x330874ed
// declared property getter: - (int)port;	// 0x330874bd
// declared property getter: - (id)principalURL;	// 0x330874dd
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x330876ad
// declared property setter: - (void)setPassword:(id)password;	// 0x33087689
// declared property setter: - (void)setUsername:(id)username;	// 0x33087665
- (id)stubDictionary;	// 0x33087741
- (id)subtitle1Description;	// 0x330876f1
- (id)subtitle1Label;	// 0x33087701
- (id)subtitle2Description;	// 0x330876d1
- (id)subtitle2Label;	// 0x330876e1
- (id)title;	// 0x33087711
// declared property getter: - (BOOL)useSSL;	// 0x330874cd
// declared property getter: - (id)username;	// 0x330874fd
@end

