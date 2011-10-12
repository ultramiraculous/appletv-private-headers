/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAccount.h"

@class NSString;

@interface ATVOAuth2Account : BRAccount {
@private
	NSString *_refreshToken;	// 36 = 0x24
}
@property(retain) NSString *accessToken;	// G=0x3330fa45; S=0x3330fa29; @dynamic
@property(retain) NSString *refreshToken;	// G=0x3330fb41; S=0x3330fb55; @synthesize=_refreshToken
- (void)_readProtectedInfo:(id)info;	// 0x3330fab5
- (void)_writeProtectedInfo:(id)info;	// 0x3330fa61
// declared property getter: - (id)accessToken;	// 0x3330fa45
- (void)dealloc;	// 0x3330f9dd
- (BOOL)isAuthenticated;	// 0x3330fb05
// declared property getter: - (id)refreshToken;	// 0x3330fb41
// declared property setter: - (void)setAccessToken:(id)token;	// 0x3330fa29
// declared property setter: - (void)setRefreshToken:(id)token;	// 0x3330fb55
@end

