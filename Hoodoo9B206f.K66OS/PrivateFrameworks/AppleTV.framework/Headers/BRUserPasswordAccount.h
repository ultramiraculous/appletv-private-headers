/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAccount.h"

@class NSString;

@interface BRUserPasswordAccount : BRAccount {
@private
	NSString *_password;	// 36 = 0x24
}
@property(retain) NSString *password;	// G=0x367332a9; S=0x367332b9; converted property
- (void)_readProtectedInfo:(id)info;	// 0x367333e9
- (void)_writeProtectedInfo:(id)info;	// 0x3673339d
- (void)dealloc;	// 0x3673325d
// converted property getter: - (id)password;	// 0x367332a9
// converted property setter: - (void)setPassword:(id)password;	// 0x367332b9
@end
