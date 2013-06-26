/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "StoreBookkeeper-Structs.h"
#import <Foundation/NSError.h>

@class SBKTransaction, NSString;

@interface SBKStoreError : NSError {
	SBKTransaction *_transaction;	// 20 = 0x14
}
@property(readonly, assign) NSString *currentStoreAccountName;	// G=0x327ad7a5; 
@property(readonly, assign) BOOL isAccountsChangedError;	// G=0x327ad665; 
@property(readonly, assign) BOOL isAuthenticationError;	// G=0x327ad641; 
@property(readonly, assign) BOOL isClampError;	// G=0x327ad6e9; 
@property(readonly, assign) BOOL isRecoverableError;	// G=0x327ad68d; 
@property(readonly, assign) BOOL isTransactionCancelledError;	// G=0x327ad70d; 
@property(readonly, assign) BOOL isTransactionMissingInformationError;	// G=0x327ad731; 
@property(readonly, assign) NSString *previousStoreAccountName;	// G=0x327ad755; 
@property(readonly, assign) double retrySeconds;	// G=0x327ad7f5; 
@property(retain) SBKTransaction *transaction;	// G=0x327ad85d; S=0x327ad871; @synthesize=_transaction
+ (id)delegateCancelledErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327aee85
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327adb3d
+ (id)keyValueStoreErrorWithCode:(int)code localizedDescription:(id)description transaction:(id)transaction underlyingError:(id)error;	// 0x327ad895
+ (id)killSwitchErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327ae4e9
+ (id)networkingBlockedErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327ae465
+ (id)noStoreAccountErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327aeb71
+ (id)serverClampErrorWithTransaction:(id)transaction retrySeconds:(double)seconds underlyingError:(id)error;	// 0x327af071
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)previousStoreAccountName currentStoreAccountName:(id)name transaction:(id)transaction underlyingError:(id)error;	// 0x327ae6e9
+ (id)storeAccountSessionExpiredWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327aebf1
+ (id)storeGenericErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327ae88d
+ (id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)previousStoreAccountName transaction:(id)transaction underlyingError:(id)error;	// 0x327ae56d
+ (id)storeValidationErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327ae97d
+ (id)transactionCancelledErrorWithTransaction:(id)transaction code:(int)code underlyingError:(id)error;	// 0x327aed7d
+ (id)transactionCancelledErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327aee41
+ (id)transactionMissingDomainErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327aec75
+ (id)transactionMissingURLErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327aecf9
+ (id)transactionTimeoutErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327aedf9
+ (id)unknownErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327ada49
+ (id)userCancelledSignInErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327aea6d
+ (id)userClampErrorWithTransaction:(id)transaction retrySeconds:(double)seconds underlyingError:(id)error;	// 0x327aeecd
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x327aeaed
- (void).cxx_destruct;	// 0x327ad881
- (id)copyWithZone:(NSZone *)zone;	// 0x327ad5d9
// declared property getter: - (id)currentStoreAccountName;	// 0x327ad7a5
- (id)description;	// 0x327ad541
// declared property getter: - (BOOL)isAccountsChangedError;	// 0x327ad665
// declared property getter: - (BOOL)isAuthenticationError;	// 0x327ad641
// declared property getter: - (BOOL)isClampError;	// 0x327ad6e9
// declared property getter: - (BOOL)isRecoverableError;	// 0x327ad68d
// declared property getter: - (BOOL)isTransactionCancelledError;	// 0x327ad70d
// declared property getter: - (BOOL)isTransactionMissingInformationError;	// 0x327ad731
// declared property getter: - (id)previousStoreAccountName;	// 0x327ad755
// declared property getter: - (double)retrySeconds;	// 0x327ad7f5
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x327ad871
// declared property getter: - (id)transaction;	// 0x327ad85d
@end
