/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRViewController.h> // Unknown library

@class BRImage, BRMerchant;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVImageViewController : BRViewController {
@private
	BOOL _waitingForImage;	// 64 = 0x40
	BRMerchant *_merchant;	// 68 = 0x44
	BRImage *_image;	// 72 = 0x48
	id<BRImageProxy> _imageProxy;	// 76 = 0x4c
}
@property(retain) BRImage *image;	// G=0x3070062d; S=0x30700689; @synthesize=_image
@property(retain) id<BRImageProxy> imageProxy;	// G=0x30700645; S=0x307006b5; @synthesize=_imageProxy
@property(retain) BRMerchant *merchant;	// G=0x30700615; S=0x3070065d; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x30700469
- (void)_imageLoadFailed:(id)failed;	// 0x30700279
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x30700315
- (void)_setWaitingForImage:(BOOL)image;	// 0x30700181
- (void)dealloc;	// 0x307003d5
- (void)drawInContext:(CGContextRef)context;	// 0x3070056d
// declared property getter: - (id)image;	// 0x3070062d
// declared property getter: - (id)imageProxy;	// 0x30700645
// declared property getter: - (id)merchant;	// 0x30700615
// declared property setter: - (void)setImage:(id)image;	// 0x30700689
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x307006b5
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3070065d
@end
