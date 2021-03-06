/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import "CertUI-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CertUIPrompt : NSObject {
	SecTrust *_trust;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	NSString *_service;	// 12 = 0xc
	NSString *_connectionDisplayName;	// 16 = 0x10
	id _responseBlock;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *connectionDisplayName;	// G=0x310b9339; S=0x310b9c2d; @synthesize=_connectionDisplayName
@property(retain, nonatomic) NSString *host;	// G=0x310b8f65; S=0x310b9bdd; @synthesize=_host
@property(retain, nonatomic) NSString *service;	// G=0x310b8f55; S=0x310b9c05; @synthesize=_service
@property(assign) SecTrust *trust;	// G=0x310b8f45; S=0x310b945d; converted property
+ (dispatch_queue_s *)promptQueue;	// 0x310b9c79
+ (id)stringForResponse:(int)response;	// 0x310b8f11
- (id)_copyPropertiesFromTrust:(SecTrust *)trust;	// 0x310b9781
- (id)_digestFromTrust:(SecTrust *)trust;	// 0x310b98f1
- (id)_expirationFromTrust:(SecTrust *)trust;	// 0x310b9861
- (void)_informConsumerOfResponse:(int)response;	// 0x310b9b3d
- (id)_messagingCenter;	// 0x310b8fb1
- (id)_newUserInfoForDisplayName:(id)displayName hostname:(id)hostname trust:(SecTrust *)trust;	// 0x310b8fdd
- (id)_propertyNamed:(id)named ofType:(id)type inProperties:(id)properties;	// 0x310b949d
- (id)_purposeFromTrustProperties:(id)trustProperties;	// 0x310b9191
- (int)_responseFromReplyDict:(id)replyDict;	// 0x310b99f5
- (int)_sendRemoteMessage;	// 0x310b9931
- (id)_sendablePropertiesFromProperties:(id)properties;	// 0x310b969d
- (id)_sendablePropertiesFromTrust:(SecTrust *)trust;	// 0x310b959d
- (id)_sendablePropertyFromProperty:(id)property;	// 0x310b9211
- (id)_subtitleFromTrust:(SecTrust *)trust;	// 0x310b9801
- (id)_titleFromTrust:(SecTrust *)trust;	// 0x310b9831
// declared property getter: - (id)connectionDisplayName;	// 0x310b9339
- (void)dealloc;	// 0x310b93d9
- (id)description;	// 0x310b9375
// declared property getter: - (id)host;	// 0x310b8f65
// declared property getter: - (id)service;	// 0x310b8f55
// declared property setter: - (void)setConnectionDisplayName:(id)name;	// 0x310b9c2d
// declared property setter: - (void)setHost:(id)host;	// 0x310b9bdd
// declared property setter: - (void)setService:(id)service;	// 0x310b9c05
// converted property setter: - (void)setTrust:(SecTrust *)trust;	// 0x310b945d
- (int)showAndWaitForResponse;	// 0x310b9b69
- (void)showPromptWithResponseBlock:(id)responseBlock;	// 0x310b9a69
// converted property getter: - (SecTrust *)trust;	// 0x310b8f45
@end

