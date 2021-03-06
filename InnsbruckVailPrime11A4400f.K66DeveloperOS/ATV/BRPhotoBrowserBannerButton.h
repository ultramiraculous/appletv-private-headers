/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class ATVImage, BRImageControl, NSDictionary, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserBannerButton : BRControl {
	BRControl *_focusControl;	// 84 = 0x54
	BRImageControl *_imageControl;	// 88 = 0x58
	ATVImage *_focusedImage;	// 92 = 0x5c
	ATVImage *_unFocusedImage;	// 96 = 0x60
	BRTextControl *_textControl;	// 100 = 0x64
	NSDictionary *_textAttributes;	// 104 = 0x68
}
@property(retain) ATVImage *focusedImage;	// G=0x39d449; S=0x39d3f9; converted property
@property(retain) id text;	// G=0x39d3c1; S=0x39d341; converted property
@property(retain) ATVImage *unFocusedImage;	// G=0x39d4a9; S=0x39d459; converted property
+ (id)button;	// 0x39cf49
+ (id)removeSavedSearchButton;	// 0x39d039
+ (id)saveSearchButton;	// 0x39cfdd
+ (id)slideshowButton;	// 0x39cf81
- (id)init;	// 0x39d095
- (void)_updateContents;	// 0x39d8d9
- (id)accessibilityLabel;	// 0x39d89d
- (id)accessibilityTraitsList;	// 0x39d8ad
- (void)controlWasFocused;	// 0x39d2c1
- (void)controlWasUnfocused;	// 0x39d301
- (void)dealloc;	// 0x39d20d
// converted property getter: - (id)focusedImage;	// 0x39d449
- (BOOL)isAccessibilityElement;	// 0x39d899
- (void)layoutSubcontrols;	// 0x39d601
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x39d3f9
// converted property setter: - (void)setText:(id)text;	// 0x39d341
// converted property setter: - (void)setUnFocusedImage:(id)image;	// 0x39d459
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x39d4b9
// converted property getter: - (id)text;	// 0x39d3c1
// converted property getter: - (id)unFocusedImage;	// 0x39d4a9
@end

