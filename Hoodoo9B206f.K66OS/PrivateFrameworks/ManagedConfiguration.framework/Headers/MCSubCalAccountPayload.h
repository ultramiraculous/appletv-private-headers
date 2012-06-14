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
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x319026b1; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x31902661; S=0x319027e5; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x319026a1; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSString *password;	// G=0x31902681; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x31902671; @synthesize=_useSSL
@property(readonly, assign, nonatomic) NSString *username;	// G=0x31902691; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3190275d
+ (id)typeStrings;	// 0x319027bd
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x31902ac1
// declared property getter: - (id)accountDescription;	// 0x319026b1
// declared property getter: - (id)accountPersistentUUID;	// 0x31902661
- (void)dealloc;	// 0x319026c1
- (id)description;	// 0x3190295d
// declared property getter: - (id)hostname;	// 0x319026a1
// declared property getter: - (id)password;	// 0x31902681
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x319027e5
- (id)stubDictionary;	// 0x31902879
- (id)subtitle1Description;	// 0x31902829
- (id)subtitle1Label;	// 0x31902839
- (id)subtitle2Description;	// 0x31902809
- (id)subtitle2Label;	// 0x31902819
- (id)title;	// 0x31902849
// declared property getter: - (BOOL)useSSL;	// 0x31902671
// declared property getter: - (id)username;	// 0x31902691
@end
