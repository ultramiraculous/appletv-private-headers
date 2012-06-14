/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, AVMetadataItem;

__attribute__((visibility("hidden")))
@interface LTVideoImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSString *_identifier;	// 4 = 0x4
	AVMetadataItem *_metadataItem;	// 8 = 0x8
}
+ (id)imageProxyWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x5efcd
- (id)initWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x5f02d
- (void).cxx_destruct;	// 0x5f495
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x5f48d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x5f435
- (id)imageForImageSize:(int)imageSize;	// 0x5f0dd
- (id)imageIDForImageSize:(int)imageSize;	// 0x5f0c9
- (id)object;	// 0x5f491
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x5f489
@end

