/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library
#import "AccountsDaemon-Structs.h"

@class NSManagedObjectContext, NSPersistentStore, NSArray;

@interface ACDDatabaseInitializer : NSObject {
	NSManagedObjectContext *_context;	// 4 = 0x4
	NSPersistentStore *_store;	// 8 = 0x8
	NSArray *_dataclasses;	// 12 = 0xc
	NSArray *_accountTypes;	// 16 = 0x10
	NSArray *_accounts;	// 20 = 0x14
	NSArray *_accessKeys;	// 24 = 0x18
}
@property(readonly, retain) NSArray *accessKeys;	// G=0x37629e3d; converted property
- (id)initWithManagedObjectContext:(id)managedObjectContext forStoreAtPath:(id)path;	// 0x37629b95
- (void).cxx_destruct;	// 0x3762bf95
- (id)_accessKeyWithName:(id)name;	// 0x3762a54d
- (id)_accountTypeWithIdentifier:(id)identifier;	// 0x3762a419
- (id)_accountTypes;	// 0x37629d9d
- (id)_accounts;	// 0x37629d4d
- (void)_addAccessKeyWithName:(NSString *)name;	// 0x3762a9b5
- (void)_addAccessKeysAttributeToFacebookAccountType;	// 0x3762be11
- (void)_addAccountTypeWithIdentifier:(id)identifier displayName:(id)name visibility:(int)visibility supportedDataclasses:(id)dataclasses credentialType:(id)type credentialAvailability:(int)availability supportsAuthentication:(BOOL)authentication supportsMultipleAccounts:(BOOL)accounts;	// 0x3762a681
- (void)_addAppleIDAccountType;	// 0x3762aaed
- (void)_addCalDAVAccountType;	// 0x3762ad49
- (void)_addCardDAVAccountType;	// 0x3762ae0d
- (void)_addContactsCalendarsDataclassesToFB;	// 0x3762b1d5
- (void)_addDataclassWithName:(NSString *)name;	// 0x3762a8dd
- (void)_addFacebookAccessKeys;	// 0x3762bda1
- (void)_addFacebookAccountType;	// 0x3762ab81
- (void)_addFlickrAccountType;	// 0x3762aed1
- (void)_addLinkedInAccountType;	// 0x3762afc9
- (void)_addMissingAccountTypes;	// 0x3762b75d
- (void)_addSupportsAuthenticationAttributeToAccountTypes;	// 0x3762b2c1
- (void)_addSupportsAuthenticationAttributeToAccounts;	// 0x3762b5a1
- (void)_addSupportsMultipleAccountsAttributeToAccountTypes;	// 0x3762bc09
- (void)_addSyncableDataclassesToCardAndCalDAV;	// 0x3762ba9d
- (void)_addTudouAccountType;	// 0x3762b045
- (void)_addTwitterAccountType;	// 0x3762aa8d
- (void)_addVimeoAccountType;	// 0x3762af4d
- (void)_addWeiboAccountType;	// 0x3762ac6d
- (void)_addYelpAccountType;	// 0x3762b13d
- (void)_addYoukuAccountType;	// 0x3762b0c1
- (id)_dataclassWithName:(NSString *)name;	// 0x3762a2e5
- (id)_dataclasses;	// 0x37629ded
- (id)_resultsForEntityNamed:(id)entityNamed;	// 0x37629c95
- (void)_setVersion:(int)version;	// 0x3762a229
- (void)_updateWeiboAccountTypeIfNecessary;	// 0x3762accd
- (int)_version;	// 0x3762a1b1
// converted property getter: - (id)accessKeys;	// 0x37629e3d
- (void)insertAllDefaultContent;	// 0x37629e8d
- (void)updateDefaultContent;	// 0x37629ec1
@end
