/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSAccounts : MSMailDefaultService {
}
+ (void)accountValuesForKeys:(id)keys completionBlock:(id)block;	// 0x3444c069
+ (void)accountValuesForKeys:(id)keys launchMobileMail:(BOOL)mail completionBlock:(id)block;	// 0x3444c089
+ (BOOL)canSendMail;	// 0x3444c1ed
+ (BOOL)deleteAccountsWithUniqueIdentifiers:(id)uniqueIdentifiers error:(id *)error;	// 0x3444c42d
+ (BOOL)hasActiveAccounts;	// 0x3444be39
- (void)_listAccountKeys:(id)keys handler:(id)handler;	// 0x3444c101
- (void)_simulateServicesMethod:(id)method arguments:(id)arguments callback:(id)callback;	// 0x3444c765
@end

