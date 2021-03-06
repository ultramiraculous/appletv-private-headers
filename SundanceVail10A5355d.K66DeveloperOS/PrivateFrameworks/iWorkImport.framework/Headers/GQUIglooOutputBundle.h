/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQUOutputBundle.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle> {
	CFDictionaryRef mAttachments;	// 4 = 0x4
	CFDataRef mMainHtmlData;	// 8 = 0x8
	CFStringRef mUriPrefix;	// 12 = 0xc
	CFStringRef mUuidStr;	// 16 = 0x10
}
- (id)init;	// 0x34c209d9
- (CFDictionaryRef)attachments;	// 0x34c20bdd
- (CFDictionaryRef)createOutputDictionary;	// 0x34c20bed
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x34c20b0d
- (void)dealloc;	// 0x34c20a5d
- (CFDataRef)mainHtmlData;	// 0x34c20bcd
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x34c20b79
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x34c20b5d
- (void)setDocumentSize:(CGSize)size;	// 0x34c20c61
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x34c20c65
- (void)setUriPrefix:(CFStringRef)prefix;	// 0x34c20ae5
@end

