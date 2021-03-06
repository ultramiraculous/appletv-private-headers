/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import "BookmarkDAVAccount.h"

@class BasicAccount;

@interface BookmarkDAVChildAccount : BookmarkDAVAccount {
	BasicAccount *_parent;	// 72 = 0x48
}
+ (Class)accountClass;	// 0x33b6b125
+ (Class)clientClass;	// 0x33b6b135
+ (id)supportedDataclasses;	// 0x33b6b151
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x33b6abed
- (id)accountPropertyForKey:(id)key;	// 0x33b6b06d
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x33b6acc5
- (void)dealloc;	// 0x33b6b0d9
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x33b6b18d
- (BOOL)isChildAccount;	// 0x33b6ac45
- (BOOL)isDisabled;	// 0x33b6b189
- (id)localizedInvalidPasswordMessage;	// 0x33b6b1c9
- (id)password;	// 0x33b6ac81
- (id)persistentUUID;	// 0x33b6b199
- (void)removeAccountPropertyForKey:(id)key;	// 0x33b6b021
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x33b6aca1
- (void)saveAccountProperties;	// 0x33b6ae9d
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x33b6ada5
- (id)scheduleIdentifier;	// 0x33b6b1a9
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x33b6af0d
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x33b6acc1
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x33b6b17d
- (id)username;	// 0x33b6ac49
@end

