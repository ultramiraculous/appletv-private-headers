/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAccount.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRUserPasswordAccount : BRAccount {
	NSString *_password;	// 36 = 0x24
}
@property(retain) NSString *password;	// G=0x373ae1; S=0x373af1; converted property
- (void)_readProtectedInfo:(id)info;	// 0x373c29
- (void)_writeProtectedInfo:(id)info;	// 0x373bdd
- (void)dealloc;	// 0x373a95
// converted property getter: - (id)password;	// 0x373ae1
// converted property setter: - (void)setPassword:(id)password;	// 0x373af1
@end

