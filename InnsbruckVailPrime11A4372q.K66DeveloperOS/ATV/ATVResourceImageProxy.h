/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface ATVResourceImageProxy : XXUnknownSuperclass <BRImageProxy> {
	BOOL _shouldCacheImage;	// 4 = 0x4
	NSBundle *_bundle;	// 8 = 0x8
	NSString *_imageName;	// 12 = 0xc
	NSString *_imageType;	// 16 = 0x10
}
@property(retain, nonatomic) NSBundle *bundle;	// G=0x264fc9; S=0x264fd9; @synthesize=_bundle
@property(retain, nonatomic) NSString *imageName;	// G=0x264fe9; S=0x264ff9; @synthesize=_imageName
@property(retain, nonatomic) NSString *imageType;	// G=0x265009; S=0x265019; @synthesize=_imageType
@property(assign, nonatomic) BOOL shouldCacheImage;	// G=0x265029; S=0x265039; @synthesize=_shouldCacheImage
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type;	// 0x264c41
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x264c91
- (id)initWithImageName:(id)imageName imageType:(id)type;	// 0x264ce9
- (id)initWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x264d2d
// declared property getter: - (id)bundle;	// 0x264fc9
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x264fc1
- (void)dealloc;	// 0x264dad
- (id)defaultImageForImageSize:(int)imageSize;	// 0x264fb9
- (id)imageForImageSize:(int)imageSize;	// 0x264eb9
- (id)imageIDForImageSize:(int)imageSize;	// 0x264e25
// declared property getter: - (id)imageName;	// 0x264fe9
// declared property getter: - (id)imageType;	// 0x265009
- (id)object;	// 0x264fc5
// declared property setter: - (void)setBundle:(id)bundle;	// 0x264fd9
// declared property setter: - (void)setImageName:(id)name;	// 0x264ff9
// declared property setter: - (void)setImageType:(id)type;	// 0x265019
// declared property setter: - (void)setShouldCacheImage:(BOOL)cacheImage;	// 0x265039
// declared property getter: - (BOOL)shouldCacheImage;	// 0x265029
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x264fbd
@end
