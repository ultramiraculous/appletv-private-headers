/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <UIView.h> // Unknown library

@class UIImage;

@interface ABPersonIconImageView : UIView {
	UIView *_imageView;	// 84 = 0x54
	int _imageType;	// 88 = 0x58
	CGSize _iconSize;	// 92 = 0x5c
	UIImage *_maskImage;	// 100 = 0x64
	UIImage *_overlayImage;	// 104 = 0x68
	id _styleHelper;	// 108 = 0x6c
}
@property(assign) void *displayedPerson;	// G=0x31003bf5; S=0x31003bd5; converted property
@property(readonly, assign, nonatomic) int imageType;	// G=0x31003c7d; @synthesize=_imageType
@property(retain, nonatomic) UIImage *maskImage;	// G=0x31003a89; S=0x31003969; @synthesize=_maskImage
@property(retain, nonatomic) UIImage *overlayImage;	// G=0x31003a39; S=0x310039c1; @synthesize=_overlayImage
@property(assign, nonatomic) BOOL shouldPickBestImage;	// G=0x31003c15; S=0x31003c39; 
+ (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlayForType:(int)_cardPlaceholderImage;	// 0x31003825
+ (id)_placeholderCompanyImageForType:(int)type size:(CGSize)size;	// 0x310037f5
+ (id)_placeholderPersonImageForType:(int)type size:(CGSize)size;	// 0x310037c5
+ (id)genericBlankPlaceholderImageOfSize:(CGSize)size;	// 0x31003731
+ (id)leftRightBorderOverlayImageOfSize:(CGSize)size;	// 0x31003681
+ (id)newImageViewWithIconSize:(CGSize)iconSize imageType:(int)type;	// 0x31003279
+ (CGSize)optimalIconSize;	// 0x3100324d
+ (id)rightBorderOverlayImageOfSize:(CGSize)size;	// 0x310035dd
- (id)init;	// 0x310032b5
- (id)initWithIconSize:(CGSize)iconSize imageType:(int)type;	// 0x31003341
- (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlay;	// 0x31003ad9
- (id)_maskImageOrNSNull;	// 0x31003a19
- (id)_overlayImageOrNSNull;	// 0x31003a29
- (id)_placeholderCompanyImage;	// 0x31003b79
- (id)_placeholderPersonImage;	// 0x31003b1d
- (void)_updateImages;	// 0x31003851
- (void)dealloc;	// 0x3100351d
// converted property getter: - (void *)displayedPerson;	// 0x31003bf5
- (BOOL)hasImageToDisplay;	// 0x31003c59
// declared property getter: - (int)imageType;	// 0x31003c7d
// declared property getter: - (id)maskImage;	// 0x31003a89
// declared property getter: - (id)overlayImage;	// 0x31003a39
- (id)personImageView;	// 0x31003331
// converted property setter: - (void)setDisplayedPerson:(void *)person;	// 0x31003bd5
// declared property setter: - (void)setMaskImage:(id)image;	// 0x31003969
- (void)setNeedsRecompositing;	// 0x31003831
- (void)setNeedsReload;	// 0x310035bd
// declared property setter: - (void)setOverlayImage:(id)image;	// 0x310039c1
// declared property setter: - (void)setShouldPickBestImage:(BOOL)pickBestImage;	// 0x31003c39
// declared property getter: - (BOOL)shouldPickBestImage;	// 0x31003c15
@end

