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
@property(assign) void *displayedPerson;	// G=0x370c3631; S=0x370c3611; converted property
@property(readonly, assign, nonatomic) int imageType;	// G=0x370c36b9; @synthesize=_imageType
@property(retain, nonatomic) UIImage *maskImage;	// G=0x370c34c5; S=0x370c33a5; @synthesize=_maskImage
@property(retain, nonatomic) UIImage *overlayImage;	// G=0x370c3475; S=0x370c33fd; @synthesize=_overlayImage
@property(assign, nonatomic) BOOL shouldPickBestImage;	// G=0x370c3651; S=0x370c3675; 
+ (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlayForType:(int)_cardPlaceholderImage;	// 0x370c3261
+ (id)_placeholderCompanyImageForType:(int)type size:(CGSize)size;	// 0x370c3231
+ (id)_placeholderPersonImageForType:(int)type size:(CGSize)size;	// 0x370c3201
+ (id)genericBlankPlaceholderImageOfSize:(CGSize)size;	// 0x370c316d
+ (id)leftRightBorderOverlayImageOfSize:(CGSize)size;	// 0x370c30bd
+ (id)newImageViewWithIconSize:(CGSize)iconSize imageType:(int)type;	// 0x370c2cb5
+ (CGSize)optimalIconSize;	// 0x370c2c89
+ (id)rightBorderOverlayImageOfSize:(CGSize)size;	// 0x370c3019
- (id)init;	// 0x370c2cf1
- (id)initWithIconSize:(CGSize)iconSize imageType:(int)type;	// 0x370c2d7d
- (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlay;	// 0x370c3515
- (id)_maskImageOrNSNull;	// 0x370c3455
- (id)_overlayImageOrNSNull;	// 0x370c3465
- (id)_placeholderCompanyImage;	// 0x370c35b5
- (id)_placeholderPersonImage;	// 0x370c3559
- (void)_updateImages;	// 0x370c328d
- (void)dealloc;	// 0x370c2f59
// converted property getter: - (void *)displayedPerson;	// 0x370c3631
- (BOOL)hasImageToDisplay;	// 0x370c3695
// declared property getter: - (int)imageType;	// 0x370c36b9
// declared property getter: - (id)maskImage;	// 0x370c34c5
// declared property getter: - (id)overlayImage;	// 0x370c3475
- (id)personImageView;	// 0x370c2d6d
// converted property setter: - (void)setDisplayedPerson:(void *)person;	// 0x370c3611
// declared property setter: - (void)setMaskImage:(id)image;	// 0x370c33a5
- (void)setNeedsRecompositing;	// 0x370c326d
- (void)setNeedsReload;	// 0x370c2ff9
// declared property setter: - (void)setOverlayImage:(id)image;	// 0x370c33fd
// declared property setter: - (void)setShouldPickBestImage:(BOOL)pickBestImage;	// 0x370c3675
// declared property getter: - (BOOL)shouldPickBestImage;	// 0x370c3651
@end
