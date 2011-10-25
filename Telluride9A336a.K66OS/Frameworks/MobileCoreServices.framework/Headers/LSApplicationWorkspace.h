/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <NSObject.h> // Unknown library


@interface LSApplicationWorkspace : NSObject {
}
+ (id)defaultWorkspace;	// 0x3255b2b5
- (id)applicationsAvailableForHandlingURLScheme:(id)handlingURLScheme;	// 0x3255bcad
- (id)applicationsAvailableForOpeningDocument:(id)openingDocument;	// 0x3255bca1
- (BOOL)invalidateIconCache:(id)cache;	// 0x3255bfad
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info;	// 0x3255b0f9
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info delegate:(id)delegate;	// 0x3255b099
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application userInfo:(id)info;	// 0x3255b129
- (BOOL)registerApplication:(id)application;	// 0x3255bf09
- (BOOL)unregisterApplication:(id)application;	// 0x3255bf21
@end

