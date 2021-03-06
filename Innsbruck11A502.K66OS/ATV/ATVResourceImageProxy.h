/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface ATVResourceImageProxy : XXUnknownSuperclass <BRImageProxy> {
	BOOL _shouldCacheImage;	// 4 = 0x4
	NSBundle *_bundle;	// 8 = 0x8
	NSString *_imageName;	// 12 = 0xc
	NSString *_imageType;	// 16 = 0x10
}
@property(retain, nonatomic) NSBundle *bundle;	// G=0x282781; S=0x282791; @synthesize=_bundle
@property(retain, nonatomic) NSString *imageName;	// G=0x2827a1; S=0x2827b1; @synthesize=_imageName
@property(retain, nonatomic) NSString *imageType;	// G=0x2827c1; S=0x2827d1; @synthesize=_imageType
@property(assign, nonatomic) BOOL shouldCacheImage;	// G=0x2827e1; S=0x2827f1; @synthesize=_shouldCacheImage
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type;	// 0x2823f9
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x282449
- (id)initWithImageName:(id)imageName imageType:(id)type;	// 0x2824a1
- (id)initWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x2824e5
// declared property getter: - (id)bundle;	// 0x282781
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x282779
- (void)dealloc;	// 0x282565
- (id)defaultImageForImageSize:(int)imageSize;	// 0x282771
- (id)imageForImageSize:(int)imageSize;	// 0x282671
- (id)imageIDForImageSize:(int)imageSize;	// 0x2825dd
// declared property getter: - (id)imageName;	// 0x2827a1
// declared property getter: - (id)imageType;	// 0x2827c1
- (id)object;	// 0x28277d
// declared property setter: - (void)setBundle:(id)bundle;	// 0x282791
// declared property setter: - (void)setImageName:(id)name;	// 0x2827b1
// declared property setter: - (void)setImageType:(id)type;	// 0x2827d1
// declared property setter: - (void)setShouldCacheImage:(BOOL)cacheImage;	// 0x2827f1
// declared property getter: - (BOOL)shouldCacheImage;	// 0x2827e1
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x282775
@end

