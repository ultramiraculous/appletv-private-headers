/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicyManager.h"

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager {
	NSString *_powerAssertionGroupIdentifier;	// 12 = 0xc
}
- (id)initWithAccount:(id)account;	// 0x339fa585
- (void)dealloc;	// 0x339fa5b1
- (void)policyKeyChanged:(id)changed;	// 0x339fa669
- (void)requestPolicyUpdate;	// 0x339fa739
- (void)setDelegate:(id)delegate;	// 0x339fa839
@end

