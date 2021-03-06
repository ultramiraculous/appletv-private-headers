/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCPasscodeManager : NSObject {
}
+ (BOOL)_passcodeCharacteristics:(id)characteristics compliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x32dedf55
+ (id)characteristicsDictionaryFromPasscode:(id)passcode;	// 0x32def06d
+ (id)generateSalt;	// 0x32deca95
+ (id)hashForPasscode:(id)passcode usingMethod:(int)method salt:(id)salt;	// 0x32def495
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)restrictions;	// 0x32ded7ed
+ (BOOL)passcode:(id)passcode compliesWithPolicyFromRestrictions:(id)restrictions checkHistory:(BOOL)history outError:(id *)error;	// 0x32dedd25
+ (BOOL)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions;	// 0x32deeefd
+ (id)sharedManager;	// 0x32dec6c5
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)passcodeCharacteristics;	// 0x32ded5ed
+ (int)unlockScreenTypeForRestrictions:(id)restrictions;	// 0x32ded695
- (BOOL)_checkPasscode:(id)passcode againstHistoryWithRestrictions:(id)restrictions outError:(id *)error;	// 0x32dee6d1
- (id)_init;	// 0x32dec689
- (id)_passcodeCharacteristics;	// 0x32ded471
- (id)_privatePasscodeDict;	// 0x32dec7d9
- (id)_publicPasscodeDict;	// 0x32dec719
- (void)_sendPasscodeChangedNotification;	// 0x32decac5
- (void)_setPrivatePasscodeDict:(id)dict;	// 0x32dec861
- (id)_wrongPasscodeError;	// 0x32dec97d
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x32decae9
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x32ded1e9
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x32deddf1
- (int)currentUnlockScreenType;	// 0x32ded4c1
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)error;	// 0x32dededd
- (BOOL)isDeviceLocked;	// 0x32dec961
- (BOOL)isPasscodeSet;	// 0x32dec92d
- (id)localizedDescriptionOfPasscodePolicy;	// 0x32ded76d
- (void)lockDevice;	// 0x32dec945
- (int)newPasscodeEntryScreenType;	// 0x32ded529
- (BOOL)passcode:(id)passcode compliesWithPolicyCheckHistory:(BOOL)policyCheckHistory outError:(id *)error;	// 0x32dedc89
- (void)passcodeExpiryDateCompletionBlock:(id)block;	// 0x32deec5d
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x32deea19
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x32deca01
@end

