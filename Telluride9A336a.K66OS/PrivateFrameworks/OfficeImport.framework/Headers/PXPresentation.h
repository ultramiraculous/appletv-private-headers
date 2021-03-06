/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PXPresentation : NSObject {
}
+ (id)readFromArchive:(id)archive asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x34d997f9
+ (id)readFromData:(id)data asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x34d99a45
+ (id)readFromPackage:(id)package fileName:(id)name reader:(id)reader cancel:(id)cancel asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x34d27e59
+ (void)readPresentationProperties:(id)properties to:(id)to;	// 0x34d28ee9
+ (CGSize)readSizeFromChildOfElement:(xmlNode *)element childName:(const char *)name;	// 0x34d28e41
+ (void)readSlideIndicesWithPresentationPart:(id)presentationPart presentationState:(id)state;	// 0x34d28ff1
@end

