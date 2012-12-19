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
- (id)init;	// 0x368f08e9
- (CFDictionaryRef)attachments;	// 0x368f0b19
- (CFDictionaryRef)createOutputDictionary;	// 0x368f0b29
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x368f0a1d
- (void)dealloc;	// 0x368f096d
- (CFDataRef)mainHtmlData;	// 0x368f0b09
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x368f0ab5
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x368f0a99
- (void)setDocumentSize:(CGSize)size;	// 0x368f0b9d
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x368f0ba1
- (void)setUriPrefix:(CFStringRef)prefix;	// 0x368f09f5
@end
