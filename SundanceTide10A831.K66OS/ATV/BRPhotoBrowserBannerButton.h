/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, NSDictionary, BRTextControl, BRImage;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserBannerButton : BRControl {
	BRControl *_focusControl;	// 84 = 0x54
	BRImageControl *_imageControl;	// 88 = 0x58
	BRImage *_focusedImage;	// 92 = 0x5c
	BRImage *_unFocusedImage;	// 96 = 0x60
	BRTextControl *_textControl;	// 100 = 0x64
	NSDictionary *_textAttributes;	// 104 = 0x68
}
@property(retain) BRImage *focusedImage;	// G=0x33aa05; S=0x33a9b5; converted property
@property(retain) id text;	// G=0x33a97d; S=0x33a8f1; converted property
@property(retain) BRImage *unFocusedImage;	// G=0x33aa65; S=0x33aa15; converted property
+ (id)button;	// 0x33a4f9
+ (id)removeSavedSearchButton;	// 0x33a5e9
+ (id)saveSearchButton;	// 0x33a58d
+ (id)slideshowButton;	// 0x33a531
- (id)init;	// 0x33a645
- (void)_updateContents;	// 0x33ae89
- (id)accessibilityLabel;	// 0x33ae4d
- (id)accessibilityTraitsList;	// 0x33ae5d
- (void)controlWasFocused;	// 0x33a871
- (void)controlWasUnfocused;	// 0x33a8b1
- (void)dealloc;	// 0x33a7bd
// converted property getter: - (id)focusedImage;	// 0x33aa05
- (BOOL)isAccessibilityElement;	// 0x33ae49
- (void)layoutSubcontrols;	// 0x33abb1
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x33a9b5
// converted property setter: - (void)setText:(id)text;	// 0x33a8f1
// converted property setter: - (void)setUnFocusedImage:(id)image;	// 0x33aa15
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33aa75
// converted property getter: - (id)text;	// 0x33a97d
// converted property getter: - (id)unFocusedImage;	// 0x33aa65
@end
