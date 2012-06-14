/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <BasicAccount.h> // Unknown library


@interface BasicAccount (DAChildAccountExtensions)
- (id)childAccountPropertiesArrayBySettingChildProperties:(id)properties forChildAccountType:(id)childAccountType;	// 0x3259358d
- (id)childPropertiesForAccountType:(id)accountType defaultProperties:(id)properties outParentNeedsSave:(BOOL *)save;	// 0x325934ad
@end

@interface BasicAccount (DAMMeExtras)
- (BOOL)isValidDAMMeAccount;	// 0x3259b80d
- (id)subscribedCalendarRecords;	// 0x3259b8c1
@end

@interface BasicAccount (DAIMAPNotesExtensions)
- (BOOL)accountClassStringIsIMAPSubclass;	// 0x3259f41d
- (BOOL)accountTypeStringIsIMAPSubclass;	// 0x3259f375
- (BOOL)accountTypeStringOwnsIMAPChild;	// 0x3259f4ed
- (BOOL)isValidIMAPNotesAccount;	// 0x3259f56d
@end

@interface BasicAccount (DACalDAVChildExtensions)
- (BOOL)accountPropertiesHaveCalDAVEnabled:(id)enabled;	// 0x3259ff99
- (BOOL)accountTypeStringCanOwnCalDAVAccounts;	// 0x3259fef1
- (BOOL)isValidCalDAVChildAccount;	// 0x325a005d
@end

@interface BasicAccount (DACardDAVChildExtensions)
- (BOOL)accountPropertiesHaveCardDAVEnabled:(id)enabled;	// 0x325a0279
- (BOOL)accountTypeStringCanOwnCardDAVAccounts;	// 0x325a0211
- (BOOL)isValidCardDAVChildAccount;	// 0x325a0309
@end

@interface BasicAccount (BookmarkDAVChildExtensions)
- (BOOL)accountPropertiesHaveBookmarkDAVEnabled:(id)enabled;	// 0x325a59e9
- (BOOL)accountTypeStringCanOwnBookmarkDAVAccounts;	// 0x325a59a9
- (BOOL)isValidBookmarkDAVChildAccount;	// 0x325a5a79
@end
