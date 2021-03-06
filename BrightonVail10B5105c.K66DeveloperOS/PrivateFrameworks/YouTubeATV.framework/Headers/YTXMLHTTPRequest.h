/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "XMLSAXHTTPRequest.h"
#import "YouTubeATV-Structs.h"

@class NSMutableURLRequest;

@interface YTXMLHTTPRequest : XMLSAXHTTPRequest {
	NSMutableURLRequest *_deferredRequest;	// 148 = 0x94
	BOOL _needsAccountAuth;	// 152 = 0x98
}
@property(assign, nonatomic) BOOL needsAccountAuth;	// G=0x352d9109; S=0x352d9119; @synthesize=_needsAccountAuth
- (void)dealloc;	// 0x352d90c5
- (void)didAuthenticate:(id)authenticate;	// 0x352d8fa5
- (void)failedToAuthenticate:(id)authenticate;	// 0x352d9041
- (void)listenForAuthenticationNotifications:(BOOL)authenticationNotifications;	// 0x352d8e11
- (void)loadRequest:(id)request;	// 0x352d8ee5
// declared property getter: - (BOOL)needsAccountAuth;	// 0x352d9109
// declared property setter: - (void)setNeedsAccountAuth:(BOOL)auth;	// 0x352d9119
@end

