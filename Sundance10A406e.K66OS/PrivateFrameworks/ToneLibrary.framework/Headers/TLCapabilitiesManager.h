/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLCapabilitiesManager : NSObject {
	BOOL _isRingtoneStoreAvailable;	// 4 = 0x4
	BOOL _isToneStoreAvailable;	// 5 = 0x5
}
@property(assign, nonatomic) BOOL isRingtoneStoreAvailable;	// G=0x32a797a5; S=0x32a797b5; @synthesize=_isRingtoneStoreAvailable
@property(assign, nonatomic) BOOL isToneStoreAvailable;	// G=0x32a797c5; S=0x32a797d5; @synthesize=_isToneStoreAvailable
+ (void)_setDefaultCapabilitiesManager:(id)manager;	// 0x32a79499
+ (id)defaultCapabilitiesManager;	// 0x32a79451
- (id)init;	// 0x32a794d1
- (void)_checkRingtoneStoreAvailability;	// 0x32a79671
- (void)dealloc;	// 0x32a79589
- (BOOL)hasAdditionalTextTones;	// 0x32a79655
- (BOOL)hasTelephonyCapability;	// 0x32a795f9
- (BOOL)hasVibratorCapability;	// 0x32a79605
// declared property getter: - (BOOL)isRingtoneStoreAvailable;	// 0x32a797a5
// declared property getter: - (BOOL)isToneStoreAvailable;	// 0x32a797c5
// declared property setter: - (void)setIsRingtoneStoreAvailable:(BOOL)available;	// 0x32a797b5
// declared property setter: - (void)setIsToneStoreAvailable:(BOOL)available;	// 0x32a797d5
@end

