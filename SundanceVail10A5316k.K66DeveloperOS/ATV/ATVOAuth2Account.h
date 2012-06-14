/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAccount.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVOAuth2Account : BRAccount {
	NSString *_refreshToken;	// 40 = 0x28
}
@property(retain) NSString *accessToken;	// G=0xbf6f1; S=0xbf6d5; @dynamic
@property(retain) NSString *refreshToken;	// G=0xbf7f5; S=0xbf809; @synthesize=_refreshToken
- (void)_readProtectedInfo:(id)info;	// 0xbf765
- (void)_writeProtectedInfo:(id)info;	// 0xbf70d
// declared property getter: - (id)accessToken;	// 0xbf6f1
- (void)dealloc;	// 0xbf689
- (BOOL)isAuthenticated;	// 0xbf7b5
// declared property getter: - (id)refreshToken;	// 0xbf7f5
// declared property setter: - (void)setAccessToken:(id)token;	// 0xbf6d5
// declared property setter: - (void)setRefreshToken:(id)token;	// 0xbf809
@end

