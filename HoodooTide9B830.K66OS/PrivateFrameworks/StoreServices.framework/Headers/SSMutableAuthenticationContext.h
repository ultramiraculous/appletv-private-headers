/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "SSAuthenticationContext.h"

@class NSDictionary, NSArray, NSNumber, NSString;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <NSCopying, NSMutableCopying> {
}
@property(copy, nonatomic) NSDictionary *HTTPHeaders;	// S=0x30500c65; @dynamic
@property(copy, nonatomic) NSString *accountName;	// S=0x30500945; @dynamic
@property(assign, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;	// S=0x30500989; @dynamic
@property(assign) int accountScope;	// S=0x30500999; @dynamic
@property(assign, nonatomic) BOOL canCreateNewAccount;	// S=0x305009a9; @dynamic
@property(copy, nonatomic) NSString *clientIdentifierHeader;	// S=0x30500c11; @dynamic
@property(assign, nonatomic, getter=isDemoAccount) BOOL demoAccount;	// S=0x30500c55; @dynamic
@property(copy, nonatomic) NSString *preferredITunesStoreClient;	// S=0x305009b9; @dynamic
@property(assign, nonatomic) int promptStyle;	// S=0x305009fd; @dynamic
@property(copy, nonatomic) NSDictionary *requestParameters;	// S=0x30500a0d; @dynamic
@property(retain, nonatomic) NSNumber *requiredUniqueIdentifier;	// S=0x30500a51; @dynamic
@property(assign, nonatomic) BOOL shouldFollowAccountButtons;	// S=0x30500a95; @dynamic
@property(assign, nonatomic) BOOL shouldIgnoreProtocol;	// S=0x30500aa5; @dynamic
@property(copy, nonatomic) NSDictionary *signupRequestParameters;	// S=0x30500ab5; @dynamic
@property(assign, nonatomic) int tokenType;	// S=0x30500ca9; @dynamic
@property(copy, nonatomic) NSArray *userAgentComponents;	// S=0x30500af9; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x3050089d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x305008f1
// declared property setter: - (void)setAccountName:(id)name;	// 0x30500945
// declared property setter: - (void)setAccountNameEditable:(BOOL)editable;	// 0x30500989
// declared property setter: - (void)setAccountScope:(int)scope;	// 0x30500999
// declared property setter: - (void)setCanCreateNewAccount:(BOOL)account;	// 0x305009a9
// declared property setter: - (void)setClientIdentifierHeader:(id)header;	// 0x30500c11
// declared property setter: - (void)setDemoAccount:(BOOL)account;	// 0x30500c55
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x30500c65
// declared property setter: - (void)setPreferredITunesStoreClient:(id)client;	// 0x305009b9
// declared property setter: - (void)setPromptStyle:(int)style;	// 0x305009fd
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x30500a0d
// declared property setter: - (void)setRequiredUniqueIdentifier:(id)identifier;	// 0x30500a51
// declared property setter: - (void)setShouldFollowAccountButtons:(BOOL)followAccountButtons;	// 0x30500a95
// declared property setter: - (void)setShouldIgnoreProtocol:(BOOL)ignoreProtocol;	// 0x30500aa5
// declared property setter: - (void)setSignupRequestParameters:(id)parameters;	// 0x30500ab5
// declared property setter: - (void)setTokenType:(int)type;	// 0x30500ca9
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x30500af9
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x30500b3d
@end

