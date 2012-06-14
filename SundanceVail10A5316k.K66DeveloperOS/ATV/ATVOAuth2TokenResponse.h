/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSError;

__attribute__((visibility("hidden")))
@interface ATVOAuth2TokenResponse : XXUnknownSuperclass {
	NSString *_accessToken;	// 4 = 0x4
	NSString *_refreshToken;	// 8 = 0x8
	double _expiresIn;	// 12 = 0xc
	NSError *_error;	// 20 = 0x14
}
@property(retain) NSString *accessToken;	// G=0xbfa51; S=0xbfa65; @synthesize=_accessToken
@property(retain) NSError *error;	// G=0xbfb01; S=0xbfb15; @synthesize=_error
@property(assign) double expiresIn;	// G=0xbfa99; S=0xbfacd; @synthesize=_expiresIn
@property(retain) NSString *refreshToken;	// G=0xbfa75; S=0xbfa89; @synthesize=_refreshToken
+ (id)tokenResponseFromResponse:(id)response data:(id)data;	// 0xbf819
// declared property getter: - (id)accessToken;	// 0xbfa51
- (void)dealloc;	// 0xbf9d9
// declared property getter: - (id)error;	// 0xbfb01
// declared property getter: - (double)expiresIn;	// 0xbfa99
// declared property getter: - (id)refreshToken;	// 0xbfa75
// declared property setter: - (void)setAccessToken:(id)token;	// 0xbfa65
// declared property setter: - (void)setError:(id)error;	// 0xbfb15
// declared property setter: - (void)setExpiresIn:(double)anIn;	// 0xbfacd
// declared property setter: - (void)setRefreshToken:(id)token;	// 0xbfa89
@end

