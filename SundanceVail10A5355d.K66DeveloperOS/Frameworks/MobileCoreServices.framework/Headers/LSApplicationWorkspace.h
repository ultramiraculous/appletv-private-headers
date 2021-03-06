/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <NSObject.h> // Unknown library


@interface LSApplicationWorkspace : NSObject {
}
+ (id)defaultWorkspace;	// 0x31a21f0d
- (id)URLOverrideForURL:(id)url;	// 0x31a223a9
- (id)applicationForOpeningResource:(id)openingResource;	// 0x31a21f6d
- (id)applicationsAvailableForHandlingURLScheme:(id)handlingURLScheme;	// 0x31a223a1
- (id)applicationsAvailableForOpeningDocument:(id)openingDocument;	// 0x31a22395
- (id)deviceIdentifierForAdvertising;	// 0x31a2310d
- (id)deviceIdentifierForVendor;	// 0x31a231e1
- (id)directionsApplications;	// 0x31a22281
- (id)installedApplications;	// 0x31a22785
- (BOOL)invalidateIconCache:(id)cache;	// 0x31a230fd
- (BOOL)openSensitiveURL:(id)url withOptions:(id)options;	// 0x31a225f9
- (BOOL)openURL:(id)url;	// 0x31a225e1
- (BOOL)openURL:(id)url withOptions:(id)options;	// 0x31a2243d
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info;	// 0x31a22731
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info delegate:(id)delegate;	// 0x31a226c9
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application userInfo:(id)info;	// 0x31a22761
- (id)privateURLSchemes;	// 0x31a22c19
- (id)publicURLSchemes;	// 0x31a22a69
- (BOOL)registerApplication:(id)application;	// 0x31a22f2d
- (BOOL)registerApplicationDictionary:(id)dictionary;	// 0x31a22c59
- (BOOL)unregisterApplication:(id)application;	// 0x31a22f81
@end

