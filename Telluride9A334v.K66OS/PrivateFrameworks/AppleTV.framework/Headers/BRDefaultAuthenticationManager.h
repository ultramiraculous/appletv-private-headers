/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticationManager.h"

@class BRAccountType;

@interface BRDefaultAuthenticationManager : BRAuthenticationManager {
@private
	BRAccountType *_accountType;	// 12 = 0xc
}
@property(readonly, assign) BRAccountType *accountType;	// G=0x33290cb5; @synthesize=_accountType
- (id)initWithAccountType:(id)accountType;	// 0x33290aa1
- (id)initWithAccountType:(id)accountType authenticatorCreation:(id)creation;	// 0x33290ab5
- (id)_basicAccount;	// 0x33290ba9
- (void)_markAsPreferredAccount:(id)account;	// 0x33290c55
- (void)_preferredAccountRemoved:(id)removed;	// 0x33290c1d
// declared property getter: - (id)accountType;	// 0x33290cb5
- (void)dealloc;	// 0x33290b0d
- (id)preferredAccount;	// 0x33290b59
@end
