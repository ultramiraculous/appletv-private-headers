/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class MEAirTunesMediaAsset;

__attribute__((visibility("hidden")))
@interface MEAirTunesImageProxy : XXUnknownSuperclass <BRImageProxy> {
	MEAirTunesMediaAsset *_asset;	// 4 = 0x4
}
+ (id)imageProxyWithAsset:(id)asset;	// 0x593a1
- (id)initWithAsset:(id)asset;	// 0x593f1
- (void).cxx_destruct;	// 0x5954d
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x59535
- (id)defaultImageForImageSize:(int)imageSize;	// 0x594a9
- (id)imageForImageSize:(int)imageSize;	// 0x59489
- (id)imageIDForImageSize:(int)imageSize;	// 0x59469
- (id)object;	// 0x59539
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x59511
@end
