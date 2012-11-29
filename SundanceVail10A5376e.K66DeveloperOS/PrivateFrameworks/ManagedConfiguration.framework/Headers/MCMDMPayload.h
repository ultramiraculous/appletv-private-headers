/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData, NSString, NSArray;

@interface MCMDMPayload : MCPayload {
	NSString *_identityUUID;	// 40 = 0x28
	NSData *_identityPersistentID;	// 44 = 0x2c
	BOOL _useDevelopmentAPNS;	// 48 = 0x30
	NSString *_topic;	// 52 = 0x34
	NSString *_serverURLString;	// 56 = 0x38
	NSString *_checkInURLString;	// 60 = 0x3c
	int _accessRights;	// 64 = 0x40
	BOOL _signMessage;	// 68 = 0x44
	BOOL _checkOutWhenRemoved;	// 69 = 0x45
}
@property(readonly, assign, nonatomic) int accessRights;	// G=0x32b96a6d; @synthesize=_accessRights
@property(readonly, assign, nonatomic) NSString *checkInURLString;	// G=0x32b96a5d; @synthesize=_checkInURLString
@property(readonly, assign, nonatomic) BOOL checkOutWhenRemoved;	// G=0x32b96a8d; @synthesize=_checkOutWhenRemoved
@property(retain, nonatomic) NSData *identityPersistentID;	// G=0x32b969f5; S=0x32b96a05; @synthesize=_identityPersistentID
@property(readonly, assign, nonatomic) NSString *identityUUID;	// G=0x32b969e5; @synthesize=_identityUUID
@property(readonly, assign, nonatomic) NSArray *localizedAccessRightDescriptions;	// G=0x32b963b5; 
@property(readonly, assign, nonatomic) NSString *serverURLString;	// G=0x32b96a3d; @synthesize=_serverURLString
@property(readonly, assign, nonatomic) BOOL signMessage;	// G=0x32b96a7d; @synthesize=_signMessage
@property(readonly, assign, nonatomic) NSString *topic;	// G=0x32b96a2d; @synthesize=_topic
@property(readonly, assign, nonatomic) BOOL useDevelopmentAPNS;	// G=0x32b96a4d; @synthesize=_useDevelopmentAPNS
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x32b950cd
+ (id)typeStrings;	// 0x32b950a5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32b9529d
- (void).cxx_destruct;	// 0x32b96a9d
- (id)_invalidRightsError;	// 0x32b950dd
- (id)_invalidTopicError;	// 0x32b95179
- (id)_nonHTTPSURLErrorForField:(id)field;	// 0x32b95215
// declared property getter: - (int)accessRights;	// 0x32b96a6d
// declared property getter: - (id)checkInURLString;	// 0x32b96a5d
// declared property getter: - (BOOL)checkOutWhenRemoved;	// 0x32b96a8d
- (id)description;	// 0x32b95ff1
// declared property getter: - (id)identityPersistentID;	// 0x32b969f5
// declared property getter: - (id)identityUUID;	// 0x32b969e5
- (id)installationWarnings;	// 0x32b96709
// declared property getter: - (id)localizedAccessRightDescriptions;	// 0x32b963b5
// declared property getter: - (id)serverURLString;	// 0x32b96a3d
// declared property setter: - (void)setIdentityPersistentID:(id)anId;	// 0x32b96a05
// declared property getter: - (BOOL)signMessage;	// 0x32b96a7d
- (id)stubDictionary;	// 0x32b95e01
- (id)subtitle1Description;	// 0x32b969ad
- (id)subtitle1Label;	// 0x32b9699d
- (id)subtitle2Description;	// 0x32b969d1
- (id)subtitle2Label;	// 0x32b969c1
- (id)title;	// 0x32b9698d
// declared property getter: - (id)topic;	// 0x32b96a2d
// declared property getter: - (BOOL)useDevelopmentAPNS;	// 0x32b96a4d
@end
