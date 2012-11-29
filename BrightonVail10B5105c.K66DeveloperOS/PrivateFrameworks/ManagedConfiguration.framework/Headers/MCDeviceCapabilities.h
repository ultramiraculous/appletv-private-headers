/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCDeviceCapabilities : NSObject {
	BOOL _supportsBlockLevelEncryption;	// 4 = 0x4
	BOOL _supportsFileLevelEncryption;	// 5 = 0x5
}
@property(readonly, assign, nonatomic) BOOL supportsBlockLevelEncryption;	// G=0x34512fe5; @synthesize=_supportsBlockLevelEncryption
@property(readonly, assign, nonatomic) BOOL supportsFileLevelEncryption;	// G=0x34512ff5; @synthesize=_supportsFileLevelEncryption
+ (id)currentDevice;	// 0x34512c91
- (id)init;	// 0x34512d9d
- (BOOL)_mediaDiskIsEncrypted;	// 0x34512d09
// declared property getter: - (BOOL)supportsBlockLevelEncryption;	// 0x34512fe5
// declared property getter: - (BOOL)supportsFileLevelEncryption;	// 0x34512ff5
- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)restrictions localizedIncompatibilityMessage:(id)message outError:(id *)error;	// 0x34512e6d
@end
