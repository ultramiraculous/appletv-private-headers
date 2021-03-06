/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface BRAccount : NSObject <NSCoding> {
@private
	int _version;	// 4 = 0x4
	NSString *_assignedGUID;	// 8 = 0x8
	NSString *_accountName;	// 12 = 0xc
	BOOL _accountOptionsSet;	// 16 = 0x10
	BOOL _isSystemAccount;	// 17 = 0x11
	NSMutableDictionary *_metadata;	// 20 = 0x14
}
@property(retain) NSString *accountName;	// G=0x328aa179; S=0x329467b1; converted property
@property(readonly, assign) BOOL accountOptionsSet;	// G=0x32946591; converted property
- (id)initWithAccountName:(id)accountName;	// 0x329466e1
- (id)initWithCoder:(id)coder;	// 0x3289caf5
- (id)_accountQuery;	// 0x329465d1
- (id)_assignedGUID;	// 0x328aae2d
- (id)_decryptPassword:(id)password;	// 0x329465cd
- (id)_encryptPassword:(id)password;	// 0x329465c9
- (BOOL)_isSystemAccount;	// 0x3289cdd1
- (void)_readProtectedInfo:(id)info;	// 0x329465c5
- (void)_writeProtectedInfo:(id)info;	// 0x329465c1
// converted property getter: - (id)accountName;	// 0x328aa179
// converted property getter: - (BOOL)accountOptionsSet;	// 0x32946591
- (void)dealloc;	// 0x32946675
- (void)encodeWithCoder:(id)coder;	// 0x328ad85d
- (BOOL)isAuthenticated;	// 0x3294658d
- (void)markAccountOptionsAsSet;	// 0x329465b1
- (void)markAsDirty;	// 0x328ad681
- (id)metadataValueForKey:(id)key;	// 0x328aa261
- (void)resetAccountOptions;	// 0x329465a1
// converted property setter: - (void)setAccountName:(id)name;	// 0x329467b1
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x328ad5ad
- (id)type;	// 0x32946655
- (void)willBeDeleted;	// 0x3294687d
@end

