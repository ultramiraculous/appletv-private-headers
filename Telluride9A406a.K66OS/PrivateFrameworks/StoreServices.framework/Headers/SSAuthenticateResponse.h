/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import <NSObject.h> // Unknown library

@class SSAccount, NSDictionary;

@interface SSAuthenticateResponse : NSObject <SSCoding> {
@private
	SSAccount *_authenticatedAccount;	// 4 = 0x4
	NSDictionary *_responseDictionary;	// 8 = 0x8
	int _responseType;	// 12 = 0xc
}
@property(assign, nonatomic) int authenticateResponseType;	// G=0x315579bd; S=0x315579cd; @synthesize=_responseType
@property(retain, nonatomic) SSAccount *authenticatedAccount;	// G=0x31557989; S=0x31557999; @synthesize=_authenticatedAccount
@property(copy, nonatomic) NSDictionary *responseDictionary;	// G=0x315579dd; S=0x315579ed; @synthesize=_responseDictionary
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3155784d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3155794d
// declared property getter: - (int)authenticateResponseType;	// 0x315579bd
// declared property getter: - (id)authenticatedAccount;	// 0x31557989
- (id)copyPropertyListEncoding;	// 0x31557759
- (void *)copyXPCEncoding;	// 0x31557819
- (void)dealloc;	// 0x315576f9
// declared property getter: - (id)responseDictionary;	// 0x315579dd
// declared property setter: - (void)setAuthenticateResponseType:(int)type;	// 0x315579cd
// declared property setter: - (void)setAuthenticatedAccount:(id)account;	// 0x31557999
// declared property setter: - (void)setResponseDictionary:(id)dictionary;	// 0x315579ed
@end
