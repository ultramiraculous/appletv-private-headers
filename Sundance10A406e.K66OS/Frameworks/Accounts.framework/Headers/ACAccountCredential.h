/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSMutableDictionary, NSString;

@interface ACAccountCredential : NSObject {
	NSMutableDictionary *_credentialItems;	// 4 = 0x4
	NSString *_credentialType;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *appleidFacetimeToken;	// G=0x33a2ceb9; S=0x33a2cdd1; 
@property(copy, nonatomic) NSString *appleidGameCenterToken;	// G=0x33a2ced5; S=0x33a2ce15; 
@property(copy, nonatomic) NSString *appleidMadridToken;	// G=0x33a2cef1; S=0x33a2ce59; 
@property(copy, nonatomic) NSString *appleidiCloudToken;	// G=0x33a2ce9d; S=0x33a2cd8d; 
@property(readonly, retain) NSMutableDictionary *credentialItems;	// G=0x33a2cab9; converted property
@property(copy, nonatomic) NSString *credentialType;	// G=0x33a2cf41; S=0x33a2cf0d; 
@property(retain, nonatomic) NSDate *expiryDate;	// G=0x33a2cc69; S=0x33a2ccdd; 
@property(copy, nonatomic) NSString *oauthRefreshToken;	// G=0x33a2cc09; S=0x33a2cc25; 
@property(copy, nonatomic) NSString *oauthToken;	// G=0x33a2cb8d; S=0x33a2cb49; 
@property(copy, nonatomic) NSString *oauthTokenSecret;	// G=0x33a2cbed; S=0x33a2cba9; 
@property(copy, nonatomic) NSString *password;	// G=0x33a2cd71; S=0x33a2cd55; 
+ (id)credentialWithOAuthToken:(id)oauthToken tokenSecret:(id)secret;	// 0x33a2c5f1
+ (id)credentialWithPassword:(id)password;	// 0x33a2c66d
+ (id)keysForType:(id)type;	// 0x33a2c6d1
+ (id)nonPersistentCredentialItemsForType:(id)type;	// 0x33a2c875
- (id)init;	// 0x33a2c8d9
- (id)initWithAppleIDiCloudToken:(id)appleIDiCloudToken facetimeToken:(id)token madridToken:(id)token3 gamecenterToken:(id)token4;	// 0x33a2c4a1
- (id)initWithCoder:(id)coder;	// 0x33a2c951
- (id)initWithOAuth2Token:(id)oauth2Token refreshToken:(id)token expiryDate:(id)date;	// 0x33a2c1c1
- (id)initWithOAuthToken:(id)oauthToken tokenSecret:(id)secret;	// 0x33a2c2dd
- (id)initWithPassword:(id)password;	// 0x33a2c3d5
- (void).cxx_destruct;	// 0x33a2cf55
// declared property getter: - (id)appleidFacetimeToken;	// 0x33a2ceb9
// declared property getter: - (id)appleidGameCenterToken;	// 0x33a2ced5
// declared property getter: - (id)appleidMadridToken;	// 0x33a2cef1
// declared property getter: - (id)appleidiCloudToken;	// 0x33a2ce9d
- (id)credentialItemForKey:(id)key;	// 0x33a2caed
// converted property getter: - (id)credentialItems;	// 0x33a2cab9
// declared property getter: - (id)credentialType;	// 0x33a2cf41
- (void)encodeWithCoder:(id)coder;	// 0x33a2ca45
// declared property getter: - (id)expiryDate;	// 0x33a2cc69
- (unsigned)hash;	// 0x33a2c161
- (BOOL)isEqual:(id)equal;	// 0x33a2c005
- (id)keysForCredentialItems;	// 0x33a2cacd
// declared property getter: - (id)oauthRefreshToken;	// 0x33a2cc09
// declared property getter: - (id)oauthToken;	// 0x33a2cb8d
// declared property getter: - (id)oauthTokenSecret;	// 0x33a2cbed
// declared property getter: - (id)password;	// 0x33a2cd71
// declared property setter: - (void)setAppleidFacetimeToken:(id)token;	// 0x33a2cdd1
// declared property setter: - (void)setAppleidGameCenterToken:(id)token;	// 0x33a2ce15
// declared property setter: - (void)setAppleidMadridToken:(id)token;	// 0x33a2ce59
// declared property setter: - (void)setAppleidiCloudToken:(id)token;	// 0x33a2cd8d
- (void)setCredentialItem:(id)item forKey:(id)key;	// 0x33a2cb0d
// declared property setter: - (void)setCredentialType:(id)type;	// 0x33a2cf0d
// declared property setter: - (void)setExpiryDate:(id)date;	// 0x33a2ccdd
// declared property setter: - (void)setOauthRefreshToken:(id)token;	// 0x33a2cc25
// declared property setter: - (void)setOauthToken:(id)token;	// 0x33a2cb49
// declared property setter: - (void)setOauthTokenSecret:(id)secret;	// 0x33a2cba9
// declared property setter: - (void)setPassword:(id)password;	// 0x33a2cd55
@end

