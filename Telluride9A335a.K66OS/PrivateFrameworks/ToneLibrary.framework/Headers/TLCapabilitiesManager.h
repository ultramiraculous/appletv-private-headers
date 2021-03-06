/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLCapabilitiesManager : NSObject {
	BOOL _isRingtoneStoreAvailable;	// 4 = 0x4
@private
	BOOL _isToneStoreAvailable;	// 5 = 0x5
}
@property(assign, nonatomic) BOOL isRingtoneStoreAvailable;	// G=0x30598999; S=0x305989a9; @synthesize=_isRingtoneStoreAvailable
@property(assign, nonatomic) BOOL isToneStoreAvailable;	// G=0x305989b9; S=0x305989c9; @synthesize=_isToneStoreAvailable
+ (void)_setDefaultCapabilitiesManager:(id)manager;	// 0x30598691
+ (id)defaultCapabilitiesManager;	// 0x30598649
- (id)init;	// 0x305986c9
- (void)_checkRingtoneStoreAvailability;	// 0x3059887d
- (BOOL)areCustomVibrationsAllowed;	// 0x30598855
- (void)dealloc;	// 0x3059876d
- (BOOL)hasAdditionalTextTones;	// 0x30598861
- (BOOL)hasTelephonyCapability;	// 0x305987f9
- (BOOL)hasVibratorCapability;	// 0x30598805
// declared property getter: - (BOOL)isRingtoneStoreAvailable;	// 0x30598999
- (BOOL)isSensitiveUIAllowed;	// 0x305987dd
// declared property getter: - (BOOL)isToneStoreAvailable;	// 0x305989b9
// declared property setter: - (void)setIsRingtoneStoreAvailable:(BOOL)available;	// 0x305989a9
// declared property setter: - (void)setIsToneStoreAvailable:(BOOL)available;	// 0x305989c9
@end

