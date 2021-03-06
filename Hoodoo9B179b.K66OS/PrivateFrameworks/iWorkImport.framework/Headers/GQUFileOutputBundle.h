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
@interface GQUFileOutputBundle : NSObject <GQUOutputBundle> {
@private
	CFURLRef mOutputUrl;	// 4 = 0x4
}
- (id)initWithOutputPath:(CFStringRef)outputPath;	// 0x359b2b29
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x359b2add
- (void)dealloc;	// 0x359b2ae5
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x359b29a5
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x359b23fd
- (void)setDocumentSize:(CGSize)size;	// 0x359b23d1
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x359b23d5
@end

