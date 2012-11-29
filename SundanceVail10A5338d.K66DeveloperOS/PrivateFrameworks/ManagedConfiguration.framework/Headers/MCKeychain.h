/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library


@interface MCKeychain : NSObject {
}
+ (CFDictionaryRef)_newQueryWithService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x336486cd
+ (SecCertificate *)copyCertificateWithPersistentID:(id)persistentID;	// 0x336490f1
+ (SecIdentity *)copyIdentityWithPersistentID:(id)persistentID;	// 0x33649149
+ (void *)copyItemWithPersistentID:(id)persistentID;	// 0x33649001
+ (id)dataFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x33648dad
+ (BOOL)itemExistsInKeychain:(void *)keychain;	// 0x336493fd
+ (void)removeDataForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x33648fb1
+ (void)removeItemWithPersistentID:(id)persistentID;	// 0x33649345
+ (void)removeStringForService:(id)service account:(id)account label:(id)label description:(id)description;	// 0x336489b9
+ (id)saveItem:(void *)item withLabel:(id)label group:(id)group;	// 0x33649185
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description access:(void *)access outError:(id *)error;	// 0x33648a15
+ (BOOL)setData:(id)data forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x336489d5
+ (BOOL)setString:(id)string forService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x33648901
+ (id)stringFromService:(id)service account:(id)account label:(id)label description:(id)description outError:(id *)error;	// 0x33648875
@end
