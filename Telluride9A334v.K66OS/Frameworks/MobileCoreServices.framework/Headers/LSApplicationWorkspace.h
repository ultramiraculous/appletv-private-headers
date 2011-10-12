/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <NSObject.h> // Unknown library


@interface LSApplicationWorkspace : NSObject {
}
+ (id)defaultWorkspace;	// 0x33e772b5
- (id)applicationsAvailableForHandlingURLScheme:(id)handlingURLScheme;	// 0x33e77cad
- (id)applicationsAvailableForOpeningDocument:(id)openingDocument;	// 0x33e77ca1
- (BOOL)invalidateIconCache:(id)cache;	// 0x33e77fad
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info;	// 0x33e770f9
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info delegate:(id)delegate;	// 0x33e77099
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application userInfo:(id)info;	// 0x33e77129
- (BOOL)registerApplication:(id)application;	// 0x33e77f09
- (BOOL)unregisterApplication:(id)application;	// 0x33e77f21
@end

