/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVImage, NSDictionary, BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserBannerButton : BRControl {
	BRControl *_focusControl;	// 84 = 0x54
	BRImageControl *_imageControl;	// 88 = 0x58
	ATVImage *_focusedImage;	// 92 = 0x5c
	ATVImage *_unFocusedImage;	// 96 = 0x60
	BRTextControl *_textControl;	// 100 = 0x64
	NSDictionary *_textAttributes;	// 104 = 0x68
}
@property(retain) ATVImage *focusedImage;	// G=0x3d3fe1; S=0x3d3f91; converted property
@property(retain) id text;	// G=0x3d3f59; S=0x3d3ed9; converted property
@property(retain) ATVImage *unFocusedImage;	// G=0x3d4041; S=0x3d3ff1; converted property
+ (id)button;	// 0x3d3ae1
+ (id)removeSavedSearchButton;	// 0x3d3bd1
+ (id)saveSearchButton;	// 0x3d3b75
+ (id)slideshowButton;	// 0x3d3b19
- (id)init;	// 0x3d3c2d
- (void)_updateContents;	// 0x3d4471
- (id)accessibilityLabel;	// 0x3d4435
- (id)accessibilityTraitsList;	// 0x3d4445
- (void)controlWasFocused;	// 0x3d3e59
- (void)controlWasUnfocused;	// 0x3d3e99
- (void)dealloc;	// 0x3d3da5
// converted property getter: - (id)focusedImage;	// 0x3d3fe1
- (BOOL)isAccessibilityElement;	// 0x3d4431
- (void)layoutSubcontrols;	// 0x3d4199
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x3d3f91
// converted property setter: - (void)setText:(id)text;	// 0x3d3ed9
// converted property setter: - (void)setUnFocusedImage:(id)image;	// 0x3d3ff1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3d4051
// converted property getter: - (id)text;	// 0x3d3f59
// converted property getter: - (id)unFocusedImage;	// 0x3d4041
@end
