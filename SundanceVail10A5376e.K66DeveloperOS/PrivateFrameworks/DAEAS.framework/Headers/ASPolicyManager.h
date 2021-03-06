/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@protocol ASPolicyManagerDelegate;

@interface ASPolicyManager : NSObject {
	id _delegate;	// 4 = 0x4
	BOOL _updatingPolicy;	// 8 = 0x8
}
@property(assign) id<ASPolicyManagerDelegate> delegate;	// G=0x322b6ba5; S=0x322b6bb9; @synthesize=_delegate
@property(readonly, assign) BOOL updatingPolicy;	// G=0x322b6af9; converted property
- (id)initWithAccount:(id)account;	// 0x322b6a55
- (id)currentPolicyKey;	// 0x322b6b11
// declared property getter: - (id)delegate;	// 0x322b6ba5
- (void)policyKeyChanged:(id)changed;	// 0x322b6b0d
- (void)requestPolicyUpdate;	// 0x322b6b09
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x322b6bb9
// converted property getter: - (BOOL)updatingPolicy;	// 0x322b6af9
@end

