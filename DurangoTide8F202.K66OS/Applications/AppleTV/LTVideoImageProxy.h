/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class AVMetadataItem, NSString;

@interface LTVideoImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSString *_identifier;	// 4 = 0x4
	AVMetadataItem *_metadataItem;	// 8 = 0x8
}
+ (id)imageProxyWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x3fb29
- (id)initWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x3fab9
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x3f8e1
- (void)dealloc;	// 0x3fa5d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x3f8e9
- (id)imageForImageSize:(int)imageSize;	// 0x3f915
- (id)imageIDForImageSize:(int)imageSize;	// 0x3f8cd
- (id)object;	// 0x3f8e5
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x3f8dd
@end
