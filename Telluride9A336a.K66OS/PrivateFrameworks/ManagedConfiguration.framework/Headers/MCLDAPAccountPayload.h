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
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x33086a59; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x330869f9; S=0x33086bf1; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x33086a49; @synthesize=_hostname
@property(retain, nonatomic) NSString *password;	// G=0x33086a29; S=0x33086bc9; @synthesize=_password
@property(readonly, assign, nonatomic) NSArray *searchSettings;	// G=0x33086a09; @synthesize=_searchSettings
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x33086a19; @synthesize=_useSSL
@property(retain, nonatomic) NSString *username;	// G=0x33086a39; S=0x33086ba1; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33086b19
+ (id)typeStrings;	// 0x33086b79
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33086f71
// declared property getter: - (id)accountDescription;	// 0x33086a59
// declared property getter: - (id)accountPersistentUUID;	// 0x330869f9
- (void)dealloc;	// 0x33086a69
- (id)description;	// 0x33086de5
// declared property getter: - (id)hostname;	// 0x33086a49
// declared property getter: - (id)password;	// 0x33086a29
// declared property getter: - (id)searchSettings;	// 0x33086a09
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x33086bf1
// declared property setter: - (void)setPassword:(id)password;	// 0x33086bc9
// declared property setter: - (void)setUsername:(id)username;	// 0x33086ba1
- (id)stubDictionary;	// 0x33086d01
- (id)subtitle1Description;	// 0x33086cb1
- (id)subtitle1Label;	// 0x33086cc1
- (id)subtitle2Description;	// 0x33086c15
- (id)subtitle2Label;	// 0x33086c61
- (id)title;	// 0x33086cd1
// declared property getter: - (BOOL)useSSL;	// 0x33086a19
// declared property getter: - (id)username;	// 0x33086a39
@end

