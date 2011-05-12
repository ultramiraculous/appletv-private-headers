/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class ASAccount, ASTaskManager, ASPolicy, NSString;
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
@property(readonly, retain) ASAccount *account;	// G=0x32f12e09; converted property
@property(retain) id contextInfo;	// G=0x32f12df9; S=0x32f13145; converted property
@property(assign) id delegate;	// G=0x32f12de9; S=0x32f12dd9; converted property
- (id)initWithAccount:(id)account policyKey:(id)key;	// 0x32f131b9
- (id)_acknowledgedPolicy;	// 0x32f12e19
- (void)_invalidate;	// 0x32f13115
- (id)_originalKey;	// 0x32f12e29
- (void)_setAcknowledgedPolicy:(id)policy;	// 0x32f1309d
- (void)_setPolicy:(id)policy;	// 0x32f130d9
// converted property getter: - (id)account;	// 0x32f12e09
- (void)acknowledgeIntentionToRemoteWipe;	// 0x32f12e71
- (void)acknowledgePolicyCompliance;	// 0x32f12f21
- (void)cancelPendingPreflightRequest;	// 0x32f12e41
// converted property getter: - (id)contextInfo;	// 0x32f12df9
- (void)dealloc;	// 0x32f13265
// converted property getter: - (id)delegate;	// 0x32f12de9
- (void)invalidate;	// 0x32f1317d
- (void)provisionTask:(id)task failedWithError:(id)error;	// 0x32f13079
- (void)provisionTask:(id)task wipeRequested:(BOOL)requested policies:(id)policies status:(int)status;	// 0x32f13381
// converted property setter: - (void)setContextInfo:(id)info;	// 0x32f13145
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32f12dd9
- (void)startPreflight;	// 0x32f12fe1
@end
