/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import </libobjc.A.h>

@class CertUITrustManager, NSString;

@interface CertUIConnectionDelegate : NSObject {
	CertUITrustManager *_trustManager;	// 4 = 0x4
	id _forwardingDelegate;	// 8 = 0x8
	NSString *_connectionDisplayName;	// 12 = 0xc
	struct {
		unsigned canAuthenticateAgainstProtectionSpace : 1;
		unsigned didReceiveAuthenticationChallenge : 1;
	} _delegateRespondsTo;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *connectionDisplayName;	// G=0x303aa70d; S=0x303aa721; @synthesize=_connectionDisplayName
@property(assign, nonatomic) id forwardingDelegate;	// G=0x303aa6fd; S=0x303a9f69; @synthesize=_forwardingDelegate
+ (id)defaultServiceForProtocol:(id)protocol;	// 0x303aa049
- (void)_continueConnectionWithResponse:(int)response challenge:(id)challenge service:(id)service;	// 0x303aa1f5
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x303aa185
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x303aa375
// declared property getter: - (id)connectionDisplayName;	// 0x303aa70d
- (void)dealloc;	// 0x303a9f1d
// declared property getter: - (id)forwardingDelegate;	// 0x303aa6fd
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x303aa039
- (BOOL)respondsToSelector:(SEL)selector;	// 0x303a9fed
// declared property setter: - (void)setConnectionDisplayName:(id)name;	// 0x303aa721
// declared property setter: - (void)setForwardingDelegate:(id)delegate;	// 0x303a9f69
@end

