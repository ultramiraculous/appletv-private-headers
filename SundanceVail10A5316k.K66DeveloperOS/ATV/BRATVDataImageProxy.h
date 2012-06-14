/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, ATVDataClient;

__attribute__((visibility("hidden")))
@interface BRATVDataImageProxy : XXUnknownSuperclass <BRImageProxy> {
	id _mediaObject;	// 4 = 0x4
	ATVDataClient *_dataClient;	// 8 = 0x8
	NSMutableArray *_savedTokens;	// 12 = 0xc
	BOOL _usesScreenSaverImageManager;	// 16 = 0x10
}
+ (id)imageProxyWithMediaObject:(id)mediaObject;	// 0x2712f1
- (id)initWithMediaObject:(id)mediaObject;	// 0x27132d
- (void)_cancelImageForImageID:(id)imageID;	// 0x271bed
- (id)_imageIDForImageSize:(int)imageSize;	// 0x271cf9
- (id)_imageIDStringForSize:(int)size;	// 0x271cb1
- (id)_imageManager;	// 0x271f05
- (id)_mediaID;	// 0x271f89
- (void)_removeTokenForImageID:(id)imageID;	// 0x271b91
- (void)_saveToken:(id)token forImageID:(id)imageID;	// 0x271b41
- (id)_tokenInfoForImageID:(id)imageID;	// 0x271ac5
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x27199d
- (void)dealloc;	// 0x27146d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x271969
- (id)imageForImageSize:(int)imageSize;	// 0x2714f5
- (BOOL)imageForImageSizeIsAvailable:(int)imageSizeIsAvailable;	// 0x271a75
- (id)imageIDForImageSize:(int)imageSize;	// 0x2714e5
- (id)object;	// 0x271a65
- (void)setUsesScreenSaverImageManager:(BOOL)manager;	// 0x271ab5
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x271999
@end

