/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "DataAccess-Structs.h"


@interface DAKeychain : NSObject {
}
+ (id)sharedKeychain;	// 0x30966599
- (CFDictionaryRef)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)persistentUUID accessibility:(int)accessibility;	// 0x30966701
- (CFDictionaryRef)_DACopyMutableQueryForAccountWithPersistentUUID:(id)persistentUUID;	// 0x3096667d
- (int)_daKeychainAccessibilityForSecAccessibility:(void *)secAccessibility;	// 0x30966619
- (void)_removePersistentCredentialsForAccount:(id)account;	// 0x30966a29
- (void *)_secAccessibilityForDAKeychainAccessibility:(int)dakeychainAccessibility;	// 0x309665e1
- (id)guessPasswordForURL:(id)url;	// 0x309686f5
- (id)loadKeychainInformationsForURL:(id)url;	// 0x30967e35
- (void)migratePasswordForAccount:(id)account persistentUUID:(id)uuid passwordExpected:(BOOL)expected;	// 0x30966f7d
- (id)passwordForAccountWithPersistentUUID:(id)persistentUUID expectedAccessibility:(int)accessibility shouldSetAccessibility:(BOOL)accessibility3 passwordExpected:(BOOL)expected;	// 0x30966755
- (void)removeKeychainInformationsForURL:(id)url;	// 0x309682bd
- (BOOL)removePasswordForAccount:(id)account withPersistentUUID:(id)persistentUUID;	// 0x30966ea1
- (BOOL)saveKeychainInformationsForURL:(id)url andPassword:(id)password withAccessibility:(int)accessibility;	// 0x3096782d
- (BOOL)setPassword:(id)password forAccount:(id)account withPersistentUUID:(id)persistentUUID withAccessibility:(int)accessibility;	// 0x30966ce5
@end

