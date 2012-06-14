/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSBundle;

__attribute__((visibility("hidden")))
@interface ATVResourceImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSBundle *_bundle;	// 4 = 0x4
	NSString *_imageName;	// 8 = 0x8
	NSString *_imageType;	// 12 = 0xc
	BOOL _shouldCacheImage;	// 16 = 0x10
}
@property(retain, nonatomic) NSBundle *bundle;	// G=0x231ffd; S=0x23200d; @synthesize=_bundle
@property(retain, nonatomic) NSString *imageName;	// G=0x23201d; S=0x23202d; @synthesize=_imageName
@property(retain, nonatomic) NSString *imageType;	// G=0x23203d; S=0x23204d; @synthesize=_imageType
@property(assign, nonatomic) BOOL shouldCacheImage;	// G=0x23205d; S=0x23206d; @synthesize=_shouldCacheImage
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type;	// 0x231d09
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x231d59
- (id)initWithImageName:(id)imageName imageType:(id)type;	// 0x231db1
- (id)initWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x231df5
// declared property getter: - (id)bundle;	// 0x231ffd
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x231ff5
- (void)dealloc;	// 0x231e75
- (id)defaultImageForImageSize:(int)imageSize;	// 0x231fed
- (id)imageForImageSize:(int)imageSize;	// 0x231ef1
- (id)imageIDForImageSize:(int)imageSize;	// 0x231eed
// declared property getter: - (id)imageName;	// 0x23201d
// declared property getter: - (id)imageType;	// 0x23203d
- (id)object;	// 0x231ff9
// declared property setter: - (void)setBundle:(id)bundle;	// 0x23200d
// declared property setter: - (void)setImageName:(id)name;	// 0x23202d
// declared property setter: - (void)setImageType:(id)type;	// 0x23204d
// declared property setter: - (void)setShouldCacheImage:(BOOL)cacheImage;	// 0x23206d
// declared property getter: - (BOOL)shouldCacheImage;	// 0x23205d
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x231ff1
@end

