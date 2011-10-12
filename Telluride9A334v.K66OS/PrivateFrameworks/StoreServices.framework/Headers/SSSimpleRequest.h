/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class NSString, NSDictionary, CPDistributedMessagingCenter;

@interface SSSimpleRequest : SSRequest {
@private
	NSString *_messageName;	// 36 = 0x24
	CPDistributedMessagingCenter *_messagingCenter;	// 40 = 0x28
	id _didFailBlock;	// 44 = 0x2c
	id _didFinishBlock;	// 48 = 0x30
	id _responseBlock;	// 52 = 0x34
	NSDictionary *_userInfo;	// 56 = 0x38
}
@property(copy, nonatomic) id didFailBlock;	// G=0x324f5ac1; S=0x324f5ad1; @synthesize=_didFailBlock
@property(copy, nonatomic) id didFinishBlock;	// G=0x324f5af5; S=0x324f5b05; @synthesize=_didFinishBlock
@property(readonly, assign, nonatomic) NSString *messageName;	// G=0x324f5b29; @synthesize=_messageName
@property(readonly, assign, nonatomic) CPDistributedMessagingCenter *messagingCenter;	// G=0x324f5b39; @synthesize=_messagingCenter
@property(copy, nonatomic) id responseBlock;	// G=0x324f5b49; S=0x324f5b59; @synthesize=_responseBlock
@property(readonly, assign, nonatomic) NSDictionary *userInfo;	// G=0x324f5b7d; @synthesize=_userInfo
- (id)init;	// 0x324f5755
- (id)initWithMessageName:(id)messageName userInfo:(id)info;	// 0x324f5769
- (id)initWithMessagingCenter:(id)messagingCenter messageName:(id)name userInfo:(id)info;	// 0x324f5795
- (void)dealloc;	// 0x324f58a1
// declared property getter: - (id)didFailBlock;	// 0x324f5ac1
// declared property getter: - (id)didFinishBlock;	// 0x324f5af5
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x324f5951
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x324f59a9
// declared property getter: - (id)messageName;	// 0x324f5b29
// declared property getter: - (id)messagingCenter;	// 0x324f5b39
// declared property getter: - (id)responseBlock;	// 0x324f5b49
- (void)sendDidFailWithError:(id)send;	// 0x324f5a85
- (void)sendDidFinish;	// 0x324f5aa5
// declared property setter: - (void)setDidFailBlock:(id)failBlock;	// 0x324f5ad1
// declared property setter: - (void)setDidFinishBlock:(id)finishBlock;	// 0x324f5b05
// declared property setter: - (void)setResponseBlock:(id)block;	// 0x324f5b59
// declared property getter: - (id)userInfo;	// 0x324f5b7d
@end

