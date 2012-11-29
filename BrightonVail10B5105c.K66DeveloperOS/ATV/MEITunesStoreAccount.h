/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesAccount.h"

@class NSNumber, NSString, NSMutableDictionary, NSDate, SSAccount;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAccount : MEITunesAccount {
	NSDate *_lastAuthenticationDate;	// 40 = 0x28
	NSMutableDictionary *_authDictionary;	// 44 = 0x2c
	NSString *_dsidHash;	// 48 = 0x30
}
@property(retain, nonatomic) NSNumber *dsid;	// G=0xd869; S=0xd889; 
@property(retain) NSString *dsidHash;	// G=0xdf21; S=0xdf35; @synthesize=_dsidHash
@property(readonly, assign) SSAccount *storeServicesAccount;	// G=0xd569; 
@property(assign) BOOL storeServicesAuthenticated;	// G=0xd2a1; S=0xd391; converted property
+ (int)_currentVersion;	// 0xca05
- (id)initWithAccountName:(id)accountName;	// 0xca09
- (id)initWithCoder:(id)coder;	// 0xcb45
- (void).cxx_destruct;	// 0xdf45
- (id)_hashDSID:(id)dsid;	// 0xe1c1
- (void)_readProtectedInfo:(id)info;	// 0xdcd9
- (void)_resetSession;	// 0xd249
- (void)_upgradeToVersion3;	// 0xdf8d
- (void)_writeProtectedInfo:(id)info;	// 0xdbbd
// declared property getter: - (id)dsid;	// 0xd869
// declared property getter: - (id)dsidHash;	// 0xdf21
- (BOOL)isAuthenticated;	// 0xd1e1
- (id)metadataValueForKey:(id)key;	// 0xcc81
- (void)setAuthDictionary:(id)dictionary;	// 0xd9a9
// declared property setter: - (void)setDsid:(id)dsid;	// 0xd889
// declared property setter: - (void)setDsidHash:(id)hash;	// 0xdf35
- (void)setLastAuthenticationDate:(id)date;	// 0xdb95
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0xcef9
// converted property setter: - (void)setStoreServicesAuthenticated:(BOOL)authenticated;	// 0xd391
// declared property getter: - (id)storeServicesAccount;	// 0xd569
- (id)storeServicesAccountWithAccountName:(id)accountName;	// 0xd661
// converted property getter: - (BOOL)storeServicesAuthenticated;	// 0xd2a1
- (id)type;	// 0xd1c1
- (void)willBeDeleted;	// 0xdde5
@end
