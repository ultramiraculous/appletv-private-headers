/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRMerchant, ATVImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVImageViewController : BRViewController {
	BOOL _waitingForImage;	// 104 = 0x68
	BRMerchant *_merchant;	// 108 = 0x6c
	ATVImage *_image;	// 112 = 0x70
	id<BRImageProxy> _imageProxy;	// 116 = 0x74
}
@property(retain) ATVImage *image;	// G=0xe7b05; S=0xe7b19; @synthesize=_image
@property(retain) id<BRImageProxy> imageProxy;	// G=0xe7b29; S=0xe7b3d; @synthesize=_imageProxy
@property(retain) BRMerchant *merchant;	// G=0xe7ae1; S=0xe7af5; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0xe789d
- (void)_imageLoadFailed:(id)failed;	// 0xe7c29
- (void)_imageLoadSucceeded:(id)succeeded;	// 0xe7b4d
- (void)_setWaitingForImage:(BOOL)image;	// 0xe7ce9
- (void)dealloc;	// 0xe797d
- (void)drawRect:(CGRect)rect;	// 0xe7a21
// declared property getter: - (id)image;	// 0xe7b05
// declared property getter: - (id)imageProxy;	// 0xe7b29
// declared property getter: - (id)merchant;	// 0xe7ae1
// declared property setter: - (void)setImage:(id)image;	// 0xe7b19
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0xe7b3d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0xe7af5
@end

