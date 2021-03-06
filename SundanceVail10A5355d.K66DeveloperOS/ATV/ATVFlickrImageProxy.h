/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRPhotoMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVFlickrImageProxy : XXUnknownSuperclass <BRImageProxy> {
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
}
+ (id)imageProxyForAsset:(id)asset;	// 0x194dd1
- (id)initWithAsset:(id)asset;	// 0x194d79
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x19505d
- (void)dealloc;	// 0x194e0d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x194ff5
- (id)imageForImageSize:(int)imageSize;	// 0x194ecd
- (id)imageIDForImageSize:(int)imageSize;	// 0x194e69
- (id)object;	// 0x194e59
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x194ff1
@end

