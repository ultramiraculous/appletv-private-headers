/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTAccount.h"
#import "BRUserPasswordAccount.h"


__attribute__((visibility("hidden")))
@interface RUIYTUserPasswordAccount : BRUserPasswordAccount <RUIYTAccount> {
}
@property(assign) BOOL ytAllowsInappropriate;	// G=0x26ccb9; S=0x26ccfd; 
+ (int)_currentVersion;	// 0x26cbf5
- (id)initWithCoder:(id)coder;	// 0x26cbf9
- (id)_keychainAccessGroup;	// 0x26cd6d
// declared property setter: - (void)setYtAllowsInappropriate:(BOOL)inappropriate;	// 0x26ccfd
- (id)type;	// 0x26cd51
// declared property getter: - (BOOL)ytAllowsInappropriate;	// 0x26ccb9
@end

