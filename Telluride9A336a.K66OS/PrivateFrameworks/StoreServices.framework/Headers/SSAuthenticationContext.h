/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSArray, NSNumber, NSString;

@interface SSAuthenticationContext : NSObject <SSCoding, NSCopying, NSMutableCopying> {
@private
	NSString *_accountName;	// 4 = 0x4
	BOOL _accountNameEditable;	// 8 = 0x8
	int _accountScope;	// 12 = 0xc
	BOOL _canCreateNewAccount;	// 16 = 0x10
	NSString *_clientIdentifierHeader;	// 20 = 0x14
	BOOL _demoAccount;	// 24 = 0x18
	NSDictionary *_httpHeaders;	// 28 = 0x1c
	BOOL _ignoresTokenExpiration;	// 32 = 0x20
	NSString *_preferredITunesStoreClient;	// 36 = 0x24
	int _promptStyle;	// 40 = 0x28
	NSDictionary *_requestParameters;	// 44 = 0x2c
	NSNumber *_requiredUniqueIdentifier;	// 48 = 0x30
	BOOL _shouldFollowAccountButtons;	// 52 = 0x34
	BOOL _shouldIgnoreProtocol;	// 53 = 0x35
	NSDictionary *_signupRequestParameters;	// 56 = 0x38
	int _tokenType;	// 60 = 0x3c
	NSArray *_userAgentComponents;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) NSDictionary *HTTPHeaders;	// G=0x341f0d41; @synthesize=_httpHeaders
@property(readonly, assign, nonatomic) NSString *accountName;	// G=0x341f0cf1; @synthesize=_accountName
@property(readonly, assign, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;	// G=0x341f0b11; @synthesize=_accountNameEditable
@property(readonly, assign) int accountScope;	// G=0x341f0d01; @synthesize=_accountScope
@property(readonly, assign, nonatomic) BOOL canCreateNewAccount;	// G=0x341f0d11; @synthesize=_canCreateNewAccount
@property(readonly, assign, nonatomic) NSString *clientIdentifierHeader;	// G=0x341f0d21; @synthesize=_clientIdentifierHeader
@property(readonly, assign, nonatomic, getter=isDemoAccount) BOOL demoAccount;	// G=0x341f0d31; @synthesize=_demoAccount
@property(readonly, assign, nonatomic) NSString *preferredITunesStoreClient;	// G=0x341f0d51; @synthesize=_preferredITunesStoreClient
@property(readonly, assign, nonatomic) int promptStyle;	// G=0x341f0d61; @synthesize=_promptStyle
@property(readonly, assign, nonatomic) NSDictionary *requestParameters;	// G=0x341f0d71; @synthesize=_requestParameters
@property(readonly, assign, nonatomic) NSNumber *requiredUniqueIdentifier;	// G=0x341f0d81; @synthesize=_requiredUniqueIdentifier
@property(readonly, assign, nonatomic) BOOL shouldFollowAccountButtons;	// G=0x341f0d91; @synthesize=_shouldFollowAccountButtons
@property(readonly, assign, nonatomic) BOOL shouldIgnoreProtocol;	// G=0x341f0da1; @synthesize=_shouldIgnoreProtocol
@property(readonly, assign, nonatomic) NSDictionary *signupRequestParameters;	// G=0x341f0db1; @synthesize=_signupRequestParameters
@property(readonly, assign, nonatomic) int tokenType;	// G=0x341f0dc1; @synthesize=_tokenType
@property(readonly, assign, nonatomic) NSArray *userAgentComponents;	// G=0x341f0dd1; @synthesize=_userAgentComponents
+ (id)contextForSignIn;	// 0x341f03a5
- (id)init;	// 0x341f00f5
- (id)initWithAccount:(id)account;	// 0x341f0105
- (id)initWithAccountIdentifier:(id)accountIdentifier;	// 0x341f0205
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x341f06d1
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x341f0989
// declared property getter: - (id)HTTPHeaders;	// 0x341f0d41
- (void)_copyIvarsToCopy:(id)copy withZone:(NSZone *)zone;	// 0x341f0b51
- (id)_initSSAuthenticationContext;	// 0x341f00a9
// declared property getter: - (id)accountName;	// 0x341f0cf1
// declared property getter: - (int)accountScope;	// 0x341f0d01
// declared property getter: - (BOOL)canCreateNewAccount;	// 0x341f0d11
// declared property getter: - (id)clientIdentifierHeader;	// 0x341f0d21
- (id)copyPropertyListEncoding;	// 0x341f042d
- (id)copyWithZone:(NSZone *)zone;	// 0x341f09c5
- (void *)copyXPCEncoding;	// 0x341f069d
- (void)dealloc;	// 0x341f02cd
- (id)description;	// 0x341f0a6d
// declared property getter: - (BOOL)isAccountNameEditable;	// 0x341f0b11
// declared property getter: - (BOOL)isDemoAccount;	// 0x341f0d31
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x341f0a19
// declared property getter: - (id)preferredITunesStoreClient;	// 0x341f0d51
// declared property getter: - (int)promptStyle;	// 0x341f0d61
// declared property getter: - (id)requestParameters;	// 0x341f0d71
// declared property getter: - (id)requiredUniqueIdentifier;	// 0x341f0d81
// declared property getter: - (BOOL)shouldFollowAccountButtons;	// 0x341f0d91
// declared property getter: - (BOOL)shouldIgnoreProtocol;	// 0x341f0da1
// declared property getter: - (id)signupRequestParameters;	// 0x341f0db1
// declared property getter: - (int)tokenType;	// 0x341f0dc1
// declared property getter: - (id)userAgentComponents;	// 0x341f0dd1
@end

