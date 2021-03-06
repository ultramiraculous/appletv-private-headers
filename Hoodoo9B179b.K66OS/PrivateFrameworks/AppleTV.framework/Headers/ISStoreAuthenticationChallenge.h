/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISAuthenticationChallenge.h"

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

__attribute__((visibility("hidden")))
@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {
@private
	int _failureCount;	// 12 = 0xc
	BOOL _hasPassword;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	id<NSURLAuthenticationChallengeSender> _sender;	// 24 = 0x18
	NSString *_user;	// 28 = 0x1c
	BOOL _userNameIsEditable;	// 32 = 0x20
}
@property(assign) int failureCount;	// G=0x30412e29; S=0x30412e39; @synthesize=_failureCount
@property(assign) BOOL hasPassword;	// G=0x30412e49; S=0x30412e59; @synthesize=_hasPassword
@property(retain) NSString *password;	// G=0x30412e69; S=0x30412e7d; @synthesize=_password
@property(assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x30412ea1; S=0x30412eb1; @synthesize=_sender
@property(retain) NSString *user;	// G=0x30412ec1; S=0x30412ed5; @synthesize=_user
@property(assign) BOOL userNameIsEditable;	// G=0x30412ef9; S=0x30412f09; @synthesize=_userNameIsEditable
- (id)init;	// 0x30412d15
- (void)dealloc;	// 0x30412dcd
// declared property getter: - (int)failureCount;	// 0x30412e29
// declared property getter: - (BOOL)hasPassword;	// 0x30412e49
// declared property getter: - (id)password;	// 0x30412e69
// declared property getter: - (id)sender;	// 0x30412ea1
// declared property setter: - (void)setFailureCount:(int)count;	// 0x30412e39
// declared property setter: - (void)setHasPassword:(BOOL)password;	// 0x30412e59
// declared property setter: - (void)setPassword:(id)password;	// 0x30412e7d
// declared property setter: - (void)setSender:(id)sender;	// 0x30412eb1
// declared property setter: - (void)setUser:(id)user;	// 0x30412ed5
// declared property setter: - (void)setUserNameIsEditable:(BOOL)editable;	// 0x30412f09
// declared property getter: - (id)user;	// 0x30412ec1
// declared property getter: - (BOOL)userNameIsEditable;	// 0x30412ef9
- (BOOL)userNameIsEmail;	// 0x30412e25
@end

