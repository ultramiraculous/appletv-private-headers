/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVAccount.h"

@class BasicAccount;

@interface MobileCalDAVChildAccount : MobileCalDAVAccount {
	BasicAccount *_parent;	// 148 = 0x94
}
@property(readonly, assign, nonatomic) BasicAccount *parent;	// G=0x32d0ba51; @synthesize=_parent
@property(retain) id password;	// G=0x32d0be5d; S=0x32d0ba2d; converted property
+ (Class)accountClass;	// 0x32d0bb19
+ (Class)clientClass;	// 0x32d0baf9
+ (id)supportedDataclasses;	// 0x32d0bacd
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x32d0be7d
- (BOOL)_keyIsShared:(id)shared;	// 0x32d0bd35
- (id)accountCredentialsHandler;	// 0x32d0ba1d
- (id)accountPropertyForKey:(id)key;	// 0x32d0bb75
- (void)dealloc;	// 0x32d0bb2d
- (BOOL)enabledForDataclass:(int)dataclass;	// 0x32d0ba45
- (BOOL)isChildAccount;	// 0x32d0ba19
- (BOOL)isDisabled;	// 0x32d0ba41
// declared property getter: - (id)parent;	// 0x32d0ba51
// converted property getter: - (id)password;	// 0x32d0be5d
- (id)persistentUUID;	// 0x32d0bab9
- (void)removeAccountPropertyForKey:(id)key;	// 0x32d0bbd9
- (void)removePasswordFromKeychain;	// 0x32d0ba31
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x32d0be01
- (void)saveAccountProperties;	// 0x32d0bcd1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x32d0becd
- (id)scheduleIdentifier;	// 0x32d0ba99
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x32d0bc1d
// converted property setter: - (void)setPassword:(id)password;	// 0x32d0ba2d
- (BOOL)supportsDataclass:(int)dataclass;	// 0x32d0ba35
@end

