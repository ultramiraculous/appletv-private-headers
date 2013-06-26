/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

#import "IDSCore-Structs.h"
#import <IDSFoundation/IDSBaseMessage.h>
#import "NSCopying.h"

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface IDSInitializeValidationMessage : IDSBaseMessage <NSCopying> {
	NSData *_sessionInfoRequest;	// 84 = 0x54
	NSData *_responseSessionInfo;	// 88 = 0x58
	NSNumber *_responseTTL;	// 92 = 0x5c
	NSData *_pushToken;	// 96 = 0x60
}
@property(copy, nonatomic) NSData *pushToken;	// G=0x311b98a9; S=0x311b98bd; @synthesize=_pushToken
@property(copy, nonatomic) NSData *responseSessionInfo;	// G=0x311b9861; S=0x311b9875; @synthesize=_responseSessionInfo
@property(copy, nonatomic) NSNumber *responseTTL;	// G=0x311b9885; S=0x311b9899; @synthesize=_responseTTL
@property(copy, nonatomic) NSData *sessionInfoRequest;	// G=0x311b983d; S=0x311b9851; @synthesize=_sessionInfoRequest
- (id)init;	// 0x311b93cd
- (id)additionalMessageHeaders;	// 0x311b96fd
- (id)bagKey;	// 0x311b95bd
- (int)command;	// 0x311b95b5
- (id)copyWithZone:(NSZone *)zone;	// 0x311b94d9
- (void)dealloc;	// 0x311b944d
- (void)handleResponseDictionary:(id)dictionary;	// 0x311b97a9
- (id)messageBody;	// 0x311b962d
// declared property getter: - (id)pushToken;	// 0x311b98a9
- (id)requiredKeys;	// 0x311b95c9
- (int)responseCommand;	// 0x311b95b9
// declared property getter: - (id)responseSessionInfo;	// 0x311b9861
// declared property getter: - (id)responseTTL;	// 0x311b9885
// declared property getter: - (id)sessionInfoRequest;	// 0x311b983d
// declared property setter: - (void)setPushToken:(id)token;	// 0x311b98bd
// declared property setter: - (void)setResponseSessionInfo:(id)info;	// 0x311b9875
// declared property setter: - (void)setResponseTTL:(id)ttl;	// 0x311b9899
// declared property setter: - (void)setSessionInfoRequest:(id)request;	// 0x311b9851
- (BOOL)wantsBagKey;	// 0x311b95a5
- (BOOL)wantsBinaryPush;	// 0x311b95b1
- (BOOL)wantsCompressedBody;	// 0x311b95ad
- (BOOL)wantsHTTPHeaders;	// 0x311b95a9
@end
