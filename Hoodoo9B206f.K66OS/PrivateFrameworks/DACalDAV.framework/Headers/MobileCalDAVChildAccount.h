/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVAccount.h"

@class BasicAccount;

@interface MobileCalDAVChildAccount : MobileCalDAVAccount {
	BasicAccount *_parent;	// 140 = 0x8c
}
@property(readonly, assign, nonatomic) BasicAccount *parent;	// G=0x3315b7d1; @synthesize=_parent
+ (Class)accountClass;	// 0x3315b715
+ (Class)clientClass;	// 0x3315b725
+ (id)supportedDataclasses;	// 0x3315b741
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x3315b06d
- (id)accountCredentialsHandler;	// 0x3315b0e9
- (id)accountPropertyForKey:(id)key;	// 0x3315b659
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x3315b161
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x3315b275
- (void)dealloc;	// 0x3315b6c9
- (BOOL)isChildAccount;	// 0x3315b0c5
- (BOOL)isDisabled;	// 0x3315b79d
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x3315b4d5
// declared property getter: - (id)parent;	// 0x3315b7d1
- (id)password;	// 0x3315b0c9
- (id)persistentUUID;	// 0x3315b7a1
- (void)removeAccountPropertyForKey:(id)key;	// 0x3315b60d
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x3315b0f9
- (void)saveAccountProperties;	// 0x3315b465
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x3315b365
- (id)scheduleIdentifier;	// 0x3315b7b1
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x3315b4f9
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x3315b15d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3315b78d
@end

