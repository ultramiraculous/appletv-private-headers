/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSData, NSNumber, NSString;

@interface SSMachineDataRequest : SSRequest <SSXPCCoding> {
	NSNumber *_accountID;	// 28 = 0x1c
	NSData *_actionData;	// 32 = 0x20
	NSString *_actionName;	// 36 = 0x24
}
@property(copy) NSNumber *accountIdentifier;	// G=0x3284f261; S=0x3284f761; 
@property(copy) NSData *actionData;	// G=0x3284f419; S=0x3284f841; 
@property(copy) NSString *actionName;	// G=0x3284f5bd; S=0x3284f921; 
- (id)initWithURLResponse:(id)urlresponse;	// 0x3284f091
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3284fbe1
// declared property getter: - (id)accountIdentifier;	// 0x3284f261
// declared property getter: - (id)actionData;	// 0x3284f419
// declared property getter: - (id)actionName;	// 0x3284f5bd
- (id)copyXPCEncoding;	// 0x3284fce9
- (void)dealloc;	// 0x3284f1e9
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x3284f761
// declared property setter: - (void)setActionData:(id)data;	// 0x3284f841
// declared property setter: - (void)setActionName:(id)name;	// 0x3284f921
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x3284fa01
@end

