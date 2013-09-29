/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesAccount.h"

@class SSAccount;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAccount : MEITunesAccount {
	SSAccount *_storeServicesAccount;	// 40 = 0x28
}
@property(retain) id password;	// G=0x2c215; S=0x2c349; converted property
@property(readonly, assign, nonatomic) SSAccount *storeServicesAccount;	// G=0x2c8b1; @synthesize=_storeServicesAccount
+ (int)_currentVersion;	// 0x2b8b1
- (id)initWithAccount:(id)account;	// 0x2b8b5
- (id)initWithCoder:(id)coder;	// 0x2b9dd
- (void).cxx_destruct;	// 0x2c8c1
- (id)_hashDSID:(id)dsid;	// 0x2ce49
- (void)_upgradeMetadataForKey:(id)key;	// 0x2cd41
- (void)_upgradeToVersion4;	// 0x2c8d5
- (BOOL)accountOptionsSet;	// 0x2c109
- (void)awakeFromLoad;	// 0x2c4ad
- (BOOL)isAuthenticated;	// 0x2c76d
- (BOOL)isValid;	// 0x2c68d
- (id)metadataValueForKey:(id)key;	// 0x2bb19
// converted property getter: - (id)password;	// 0x2c215
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x2be05
// converted property setter: - (void)setPassword:(id)password;	// 0x2c349
// declared property getter: - (id)storeServicesAccount;	// 0x2c8b1
- (id)type;	// 0x2c491
@end
