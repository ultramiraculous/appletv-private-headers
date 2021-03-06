/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "MSSearchDelegate.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, MSSearch, AAAccount;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {
	NSOperationQueue *_requesterQueue;	// 4 = 0x4
	MSSearch *_search;	// 8 = 0x8
	AAAccount *_account;	// 12 = 0xc
	id _handler;	// 16 = 0x10
	int _attempts;	// 20 = 0x14
	BOOL _canceled;	// 24 = 0x18
}
@property(retain, nonatomic) AAAccount *account;	// G=0x3050b16d; S=0x3050b17d; @synthesize=_account
- (id)init;	// 0x3050a599
- (id)initWithAccount:(id)account;	// 0x3050a619
- (void)_validateToken:(id)token;	// 0x3050abdd
- (void)_verify;	// 0x3050a8c1
// declared property getter: - (id)account;	// 0x3050b16d
- (void)cancel;	// 0x3050a829
- (void)dealloc;	// 0x3050a659
- (BOOL)search:(id)search didFindResults:(id)results;	// 0x3050ae01
- (void)search:(id)search didFinishWithError:(id)error;	// 0x3050b059
- (void)sendVerificationEmail;	// 0x3050a6e1
// declared property setter: - (void)setAccount:(id)account;	// 0x3050b17d
- (void)verifyWithHandler:(id)handler;	// 0x3050a755
@end

