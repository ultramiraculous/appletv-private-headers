/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesAccount.h"

@class NSString, NSMutableDictionary, NSDate;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAccount : MEITunesAccount {
	NSDate *_lastAuthenticationDate;	// 40 = 0x28
	NSMutableDictionary *_authDictionary;	// 44 = 0x2c
	NSString *_dsidHash;	// 48 = 0x30
}
@property(retain) NSString *dsidHash;	// G=0xd7b1; S=0xd7c5; @synthesize=_dsidHash
@property(assign) BOOL storeServicesAuthenticated;	// G=0xd071; S=0xd161; converted property
+ (int)_currentVersion;	// 0xc8c5
- (id)initWithAccountName:(id)accountName;	// 0xc8c9
- (id)initWithCoder:(id)coder;	// 0xca05
- (void).cxx_destruct;	// 0xd7d5
- (id)_hashDSID:(id)dsid;	// 0xd9f9
- (void)_readProtectedInfo:(id)info;	// 0xd569
- (void)_resetSession;	// 0xd019
- (void)_upgradeToVersion2;	// 0xd81d
- (void)_writeProtectedInfo:(id)info;	// 0xd44d
// declared property getter: - (id)dsidHash;	// 0xd7b1
- (BOOL)isAuthenticated;	// 0xcfb1
- (id)metadataValueForKey:(id)key;	// 0xcb51
- (void)setAuthDictionary:(id)dictionary;	// 0xd255
// declared property setter: - (void)setDsidHash:(id)hash;	// 0xd7c5
- (void)setLastAuthenticationDate:(id)date;	// 0xd425
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0xcd85
// converted property setter: - (void)setStoreServicesAuthenticated:(BOOL)authenticated;	// 0xd161
// converted property getter: - (BOOL)storeServicesAuthenticated;	// 0xd071
- (id)type;	// 0xcf91
- (void)willBeDeleted;	// 0xd675
@end

