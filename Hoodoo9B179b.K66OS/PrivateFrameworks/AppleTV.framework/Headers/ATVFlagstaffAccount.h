/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRUserPasswordAccount.h"
#import "ATVReadOnlyFeedResource.h"

@class NSString;

@interface ATVFlagstaffAccount : BRUserPasswordAccount <ATVReadOnlyFeedResource> {
@private
	NSString *ipid;	// 40 = 0x28
	NSString *fingerprint;	// 44 = 0x2c
	int statusCode;	// 48 = 0x30
	NSString *statusMessage;	// 52 = 0x34
}
@property(retain, nonatomic) NSString *fingerprint;	// G=0x301ee219; S=0x301ee229; @synthesize
@property(retain, nonatomic) NSString *ipid;	// G=0x301ee1e5; S=0x301ee1f5; @synthesize
@property(assign, nonatomic) int statusCode;	// G=0x301ee24d; S=0x301ee25d; @synthesize
@property(retain, nonatomic) NSString *statusMessage;	// G=0x301ee26d; S=0x301ee27d; @synthesize
- (void)_resetSession;	// 0x301ee0fd
- (void)dealloc;	// 0x301ee051
- (id)feedResourceNamed:(id)named;	// 0x301ee17d
// declared property getter: - (id)fingerprint;	// 0x301ee219
// declared property getter: - (id)ipid;	// 0x301ee1e5
- (BOOL)isAuthenticated;	// 0x301ee0dd
// declared property setter: - (void)setFingerprint:(id)fingerprint;	// 0x301ee229
// declared property setter: - (void)setIpid:(id)ipid;	// 0x301ee1f5
// declared property setter: - (void)setStatusCode:(int)code;	// 0x301ee25d
// declared property setter: - (void)setStatusMessage:(id)message;	// 0x301ee27d
// declared property getter: - (int)statusCode;	// 0x301ee24d
// declared property getter: - (id)statusMessage;	// 0x301ee26d
- (id)type;	// 0x301ee0c1
@end
