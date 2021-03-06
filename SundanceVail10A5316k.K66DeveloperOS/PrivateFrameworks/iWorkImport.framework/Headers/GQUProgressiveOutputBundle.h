/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQUOutputBundle.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQUProgressiveHelper;

__attribute__((visibility("hidden")))
@interface GQUProgressiveOutputBundle : NSObject <GQUOutputBundle> {
@private
	GQUProgressiveHelper *mHelper;	// 4 = 0x4
	CFDictionaryRef mQuickLookProperties;	// 8 = 0x8
	CFDictionaryRef mAttachmentsURLs;	// 12 = 0xc
	CFDictionaryRef mComputedAttachments;	// 16 = 0x10
	CFStringRef mUuidStr;	// 20 = 0x14
	CFStringRef mUriScheme;	// 24 = 0x18
	BOOL mPreviewStarted;	// 28 = 0x1c
}
- (id)initWithHandler:(id)handler;	// 0x36c83f59
- (BOOL)appendData:(CFDataRef)data mimeType:(CFStringRef)type resourceName:(CFStringRef)name;	// 0x36c841d5
- (void)closeAttachment:(CFStringRef)attachment;	// 0x36c84409
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x36c8413d
- (void)dealloc;	// 0x36c8406d
- (CFURLRef)getAttachmentURL:(CFStringRef)url mimeType:(CFStringRef)type;	// 0x36c84449
- (void)setCurrentSheetUri:(CFStringRef)uri;	// 0x36c8453d
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x36c84229
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x36c841a9
- (void)setDocumentSize:(CGSize)size;	// 0x36c843a1
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x36c843a5
- (void)startProgressiveData;	// 0x36c843a9
@end

