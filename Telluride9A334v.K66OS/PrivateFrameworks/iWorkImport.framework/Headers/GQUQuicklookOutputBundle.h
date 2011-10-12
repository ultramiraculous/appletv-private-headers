/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQUOutputBundle.h"


__attribute__((visibility("hidden")))
@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle> {
@private
	CFDictionaryRef mQuicklookProperties;	// 4 = 0x4
	CFDictionaryRef mAttachments;	// 8 = 0x8
	CFDataRef mMainHtmlData;	// 12 = 0xc
	CFStringRef mUriScheme;	// 16 = 0x10
	CFStringRef mUuidStr;	// 20 = 0x14
}
- (id)init;	// 0x32c0f3dd
- (id)initWithUriScheme:(CFStringRef)uriScheme;	// 0x32c0f865
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x32c0f785
- (void)dealloc;	// 0x32c0f7c9
- (BOOL)giveOutputToPreviewRequest:(QLPreviewRequestRef)previewRequest;	// 0x32c0f389
- (CFDataRef)mainHtmlData;	// 0x32c0f369
- (CFDictionaryRef)quicklookDictionary;	// 0x32c0f379
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x32c0f679
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x32c0f765
- (void)setDocumentSize:(CGSize)size;	// 0x32c0f605
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x32c0f3a1
@end

