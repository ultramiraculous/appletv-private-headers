/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class ASTaskManager, ASPolicy, ASAccount, NSString;
@protocol ASPolicyPreflighterDelegate;

@interface ASPolicyPreflighter : NSObject {
	ASAccount *_account;	// 4 = 0x4
	NSString *_originalKey;	// 8 = 0x8
	NSString *_newKey;	// 12 = 0xc
	id<ASPolicyPreflighterDelegate> _delegate;	// 16 = 0x10
	ASPolicy *_policy;	// 20 = 0x14
	ASPolicy *_acknowledgedPolicy;	// 24 = 0x18
	ASTaskManager *_taskManager;	// 28 = 0x1c
	id _contextInfo;	// 32 = 0x20
	BOOL _invalidated;	// 36 = 0x24
}
@property(readonly, retain) ASAccount *account;	// G=0x318a6a65; converted property
@property(retain) id contextInfo;	// G=0x318a6801; S=0x318a67c1; converted property
@property(assign) id delegate;	// G=0x318a67b1; S=0x318a67a1; converted property
- (id)initWithAccount:(id)account policyKey:(id)key;	// 0x318a69ad
- (id)_acknowledgedPolicy;	// 0x318a6afd
- (void)_invalidate;	// 0x318a6811
- (id)_originalKey;	// 0x318a6b0d
- (void)_setAcknowledgedPolicy:(id)policy;	// 0x318a6ab9
- (void)_setPolicy:(id)policy;	// 0x318a6a75
// converted property getter: - (id)account;	// 0x318a6a65
- (void)acknowledgeIntentionToRemoteWipe;	// 0x318a70d1
- (void)acknowledgePolicyCompliance;	// 0x318a6ffd
- (void)cancelPendingPreflightRequest;	// 0x318a718d
// converted property getter: - (id)contextInfo;	// 0x318a6801
- (void)dealloc;	// 0x318a687d
// converted property getter: - (id)delegate;	// 0x318a67b1
- (void)invalidate;	// 0x318a6841
- (void)provisionTask:(id)task failedWithError:(id)error;	// 0x318a6b2d
- (void)provisionTask:(id)task wipeRequested:(BOOL)requested policies:(id)policies status:(int)status;	// 0x318a6b4d
// converted property setter: - (void)setContextInfo:(id)info;	// 0x318a67c1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x318a67a1
- (void)startPreflight;	// 0x318a6f51
@end

