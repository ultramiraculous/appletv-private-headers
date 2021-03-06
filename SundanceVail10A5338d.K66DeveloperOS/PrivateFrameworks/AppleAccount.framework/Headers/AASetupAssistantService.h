/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library
#import "AppleAccount-Structs.h"

@class NSOperationQueue, NSString, AAAccount, AASigningSession;

@interface AASetupAssistantService : NSObject {
	NSOperationQueue *_requesterQueue;	// 4 = 0x4
	NSString *_appleID;	// 8 = 0x8
	NSString *_password;	// 12 = 0xc
	NSString *_emailChoice;	// 16 = 0x10
	AAAccount *_account;	// 20 = 0x14
	OpaqueCFHTTPCookieStorage *_cookieStorage;	// 24 = 0x18
	AASigningSession *_signingSession;	// 28 = 0x1c
}
@property(copy, nonatomic) NSString *appleID;	// G=0x34cd907d; S=0x34cd9091; @synthesize=_appleID
@property(copy, nonatomic) NSString *emailChoice;	// G=0x34cd90c5; S=0x34cd90d9; @synthesize=_emailChoice
@property(copy, nonatomic) NSString *password;	// G=0x34cd90a1; S=0x34cd90b5; @synthesize=_password
+ (void)resetURLConfiguration;	// 0x34cd69c9
+ (id)urlConfiguration;	// 0x34cd6779
- (id)init;	// 0x34cd69d9
- (id)initWithAccount:(id)account;	// 0x34cd6ae9
- (id)initWithAppleID:(id)appleID password:(id)password;	// 0x34cd6a51
- (void).cxx_destruct;	// 0x34cd90e9
- (id)_signingSession;	// 0x34cd8f65
// declared property getter: - (id)appleID;	// 0x34cd907d
- (void)authenticateWithHandler:(id)handler;	// 0x34cd6da1
- (void)createAppleIDWithParameters:(id)parameters handler:(id)handler;	// 0x34cd7195
- (void)dealloc;	// 0x34cd6b3d
- (void)downloadURLConfiguration:(id)configuration;	// 0x34cd6bc5
// declared property getter: - (id)emailChoice;	// 0x34cd90c5
- (void)fetchDelegateTokensWithAccountParameters:(id)accountParameters delegateHints:(id)hints handler:(id)handler;	// 0x34cd8501
// declared property getter: - (id)password;	// 0x34cd90a1
// declared property setter: - (void)setAppleID:(id)anId;	// 0x34cd9091
- (void)setCookieStorage:(OpaqueCFHTTPCookieStorage *)storage;	// 0x34cd6b81
// declared property setter: - (void)setEmailChoice:(id)choice;	// 0x34cd90d9
// declared property setter: - (void)setPassword:(id)password;	// 0x34cd90b5
- (void)setupDelegateAccountsWithParameters:(id)parameters handler:(id)handler;	// 0x34cd7e95
- (void)updateAppleIDWithParameters:(id)parameters handler:(id)handler;	// 0x34cd7815
@end

