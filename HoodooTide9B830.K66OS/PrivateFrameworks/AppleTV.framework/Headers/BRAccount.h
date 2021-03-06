/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, BRAccountType, NSString;

@interface BRAccount : NSObject <NSCoding> {
@private
	int _version;	// 4 = 0x4
	NSString *_assignedGUID;	// 8 = 0x8
	NSString *_accountName;	// 12 = 0xc
	BOOL _accountOptionsSet;	// 16 = 0x10
	BOOL _isSystemAccount;	// 17 = 0x11
	NSMutableDictionary *_metadata;	// 20 = 0x14
	NSMutableDictionary *_session;	// 24 = 0x18
	BRAccountType *_accountType;	// 28 = 0x1c
	BOOL _lockedForAuthenticator;	// 32 = 0x20
}
@property(retain) NSString *accountName;	// G=0x32a75991; S=0x32a759a1; converted property
@property(readonly, assign) BOOL accountOptionsSet;	// G=0x32a75e3d; converted property
@property(retain) id type;	// G=0x32a75919; S=0x32a75951; converted property
+ (int)_currentVersion;	// 0x32a762ed
- (id)initWithAccountName:(id)accountName;	// 0x32a74ffd
- (id)initWithCoder:(id)coder;	// 0x32a75109
- (id)SSAccount;	// 0x32a76045
- (id)_accountQuery;	// 0x32a761e1
- (id)_assignedGUID;	// 0x32a644fd
- (id)_decryptPassword:(id)password;	// 0x32a76321
- (id)_encryptPassword:(id)password;	// 0x32a7631d
- (BOOL)_isSystemAccount;	// 0x32a64511
- (id)_keychainAccessGroup;	// 0x32a762f1
- (void)_readProtectedInfo:(id)info;	// 0x32a76319
- (void)_resetSession;	// 0x32a76325
- (void)_setVersion:(int)version;	// 0x32a76305
- (int)_version;	// 0x32a762f5
- (void)_writeProtectedInfo:(id)info;	// 0x32a76315
// converted property getter: - (id)accountName;	// 0x32a75991
// converted property getter: - (BOOL)accountOptionsSet;	// 0x32a75e3d
- (void)acquireAuthenticatorLock;	// 0x32a75ff5
- (void)dealloc;	// 0x32a7587d
- (void)encodeWithCoder:(id)coder;	// 0x32a754b5
- (BOOL)isAuthenticated;	// 0x32a75df5
- (void)markAccountOptionsAsSet;	// 0x32a75f15
- (void)markAsDirty;	// 0x32a75df9
- (id)metadataValueForKey:(id)key;	// 0x32a75a81
- (void)releaseAuthenticatorLock;	// 0x32a7601d
- (void)resetAccountOptions;	// 0x32a75e4d
- (void)resetSession;	// 0x32a75f3d
- (id)sessionValueForKey:(id)key;	// 0x32a75c11
// converted property setter: - (void)setAccountName:(id)name;	// 0x32a759a1
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x32a75b3d
- (void)setSessionValue:(id)value forKey:(id)key;	// 0x32a75ccd
// converted property setter: - (void)setType:(id)type;	// 0x32a75951
// converted property getter: - (id)type;	// 0x32a75919
- (void)willBeDeleted;	// 0x32a7629d
@end

