/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class NSArray, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedImageAssetProxy : XXUnknownSuperclass <BRImageProxy> {
	BOOL _imageIsScaledToFill;	// 4 = 0x4
	id _object;	// 8 = 0x8
	NSArray *_imageAssets;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
}
@property(copy, nonatomic) NSArray *imageAssets;	// G=0x419bd1; S=0x419be5; @synthesize=_imageAssets
@property(assign, nonatomic) BOOL imageIsScaledToFill;	// G=0x419c2d; S=0x419c3d; @synthesize=_imageIsScaledToFill
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x419bf5; S=0x419c05; @synthesize=_merchant
@property(retain, nonatomic) id object;	// G=0x419bad; S=0x419bbd; @synthesize=_object
- (id)initWithObject:(id)object imageAssets:(id)assets merchant:(id)merchant;	// 0x419319
- (void).cxx_destruct;	// 0x419c4d
- (id)_imageIDForImageSize:(int)imageSize imageAsset:(id *)asset;	// 0x419639
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x419515
- (id)defaultImageForImageSize:(int)imageSize;	// 0x4194f9
// declared property getter: - (id)imageAssets;	// 0x419bd1
- (id)imageForImageSize:(int)imageSize;	// 0x4193d1
- (id)imageIDForImageSize:(int)imageSize;	// 0x4193bd
// declared property getter: - (BOOL)imageIsScaledToFill;	// 0x419c2d
// declared property getter: - (id)merchant;	// 0x419bf5
// declared property getter: - (id)object;	// 0x419bad
// declared property setter: - (void)setImageAssets:(id)assets;	// 0x419be5
// declared property setter: - (void)setImageIsScaledToFill:(BOOL)fill;	// 0x419c3d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x419c05
// declared property setter: - (void)setObject:(id)object;	// 0x419bbd
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x419511
@end
