/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSAccounts : MSMailDefaultService {
}
+ (void)accountValuesForKeys:(id)keys completionBlock:(id)block;	// 0x31489dd1
+ (void)accountValuesForKeys:(id)keys launchMobileMail:(BOOL)mail completionBlock:(id)block;	// 0x31489df1
+ (BOOL)canSendMail;	// 0x31489f55
+ (id)customSignatureForSendingEmailAddress:(id)sendingEmailAddress;	// 0x3148a195
+ (BOOL)deleteAccountsWithUniqueIdentifiers:(id)uniqueIdentifiers error:(id *)error;	// 0x3148a465
+ (BOOL)hasActiveAccounts;	// 0x31489ba1
- (void)_listAccountKeys:(id)keys handler:(id)handler;	// 0x31489e69
- (void)_simulateServicesMethod:(id)method arguments:(id)arguments callback:(id)callback;	// 0x3148a789
@end

