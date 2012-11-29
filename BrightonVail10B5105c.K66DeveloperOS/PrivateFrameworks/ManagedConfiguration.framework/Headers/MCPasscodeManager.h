/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCPasscodeManager : NSObject {
}
+ (BOOL)_passcodeCharacteristics:(id)characteristics compliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x344eaf45
+ (id)characteristicsDictionaryFromPasscode:(id)passcode;	// 0x344ec05d
+ (id)generateSalt;	// 0x344e9a85
+ (id)hashForPasscode:(id)passcode usingMethod:(int)method salt:(id)salt;	// 0x344ec485
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)restrictions;	// 0x344ea7dd
+ (BOOL)passcode:(id)passcode compliesWithPolicyFromRestrictions:(id)restrictions checkHistory:(BOOL)history outError:(id *)error;	// 0x344ead15
+ (BOOL)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions;	// 0x344ebeed
+ (id)sharedManager;	// 0x344e96b5
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)passcodeCharacteristics;	// 0x344ea5dd
+ (int)unlockScreenTypeForRestrictions:(id)restrictions;	// 0x344ea685
- (BOOL)_checkPasscode:(id)passcode againstHistoryWithRestrictions:(id)restrictions outError:(id *)error;	// 0x344eb6c1
- (id)_init;	// 0x344e9679
- (id)_passcodeCharacteristics;	// 0x344ea461
- (id)_privatePasscodeDict;	// 0x344e97c9
- (id)_publicPasscodeDict;	// 0x344e9709
- (void)_sendPasscodeChangedNotification;	// 0x344e9ab5
- (void)_setPrivatePasscodeDict:(id)dict;	// 0x344e9851
- (id)_wrongPasscodeError;	// 0x344e996d
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x344e9ad9
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x344ea1d9
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x344eade1
- (int)currentUnlockScreenType;	// 0x344ea4b1
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)error;	// 0x344eaecd
- (BOOL)isDeviceLocked;	// 0x344e9951
- (BOOL)isPasscodeSet;	// 0x344e991d
- (id)localizedDescriptionOfPasscodePolicy;	// 0x344ea75d
- (void)lockDevice;	// 0x344e9935
- (int)newPasscodeEntryScreenType;	// 0x344ea519
- (BOOL)passcode:(id)passcode compliesWithPolicyCheckHistory:(BOOL)policyCheckHistory outError:(id *)error;	// 0x344eac79
- (void)passcodeExpiryDateCompletionBlock:(id)block;	// 0x344ebc4d
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x344eba09
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x344e99f1
@end
