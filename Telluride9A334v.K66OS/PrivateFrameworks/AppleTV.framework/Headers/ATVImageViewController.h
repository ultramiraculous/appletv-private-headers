/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRMerchant, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVImageViewController : BRViewController {
@private
	BOOL _waitingForImage;	// 84 = 0x54
	BRMerchant *_merchant;	// 88 = 0x58
	BRImage *_image;	// 92 = 0x5c
	id<BRImageProxy> _imageProxy;	// 96 = 0x60
}
@property(retain) BRImage *image;	// G=0x33193569; S=0x3319357d; @synthesize=_image
@property(retain) id<BRImageProxy> imageProxy;	// G=0x331935a1; S=0x331935b5; @synthesize=_imageProxy
@property(retain) BRMerchant *merchant;	// G=0x33193531; S=0x33193545; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x331932f9
- (void)_imageLoadFailed:(id)failed;	// 0x331936a9
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x331935d9
- (void)_setWaitingForImage:(BOOL)image;	// 0x33193769
- (void)dealloc;	// 0x331933d9
- (void)drawInContext:(CGContextRef)context;	// 0x3319347d
// declared property getter: - (id)image;	// 0x33193569
// declared property getter: - (id)imageProxy;	// 0x331935a1
// declared property getter: - (id)merchant;	// 0x33193531
// declared property setter: - (void)setImage:(id)image;	// 0x3319357d
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x331935b5
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x33193545
@end

