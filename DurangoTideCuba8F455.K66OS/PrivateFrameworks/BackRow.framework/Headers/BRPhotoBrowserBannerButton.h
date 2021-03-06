/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSDictionary, BRImageControl, BRImage, BRTextControl;

@interface BRPhotoBrowserBannerButton : BRControl {
@private
	float _minimumWidth;	// 44 = 0x2c
	BRControl *_focusControl;	// 48 = 0x30
	BRImageControl *_imageControl;	// 52 = 0x34
	BRImage *_focusedImage;	// 56 = 0x38
	BRImage *_unFocusedImage;	// 60 = 0x3c
	BRTextControl *_textControl;	// 64 = 0x40
	NSDictionary *_textAttributes;	// 68 = 0x44
}
@property(retain) BRImage *focusedImage;	// G=0x32fa005d; S=0x32fa01bd; converted property
@property(retain) id text;	// G=0x32fa0205; S=0x32fa04e1; converted property
@property(retain) BRImage *unFocusedImage;	// G=0x32fa006d; S=0x32fa0175; converted property
+ (id)button;	// 0x32fa0351
+ (id)removeSavedSearchButton;	// 0x32fa0a45
+ (id)saveSearchButton;	// 0x32fa0a99
+ (id)settingsButton;	// 0x32fa09f1
+ (id)slideshowButton;	// 0x32fa0aed
- (id)init;	// 0x32fa0381
- (void)_updateContents;	// 0x32fa0081
- (id)accessibilityLabel;	// 0x32fa0161
- (id)accessibilityTraits;	// 0x32fa0135
- (void)controlWasFocused;	// 0x32fa0271
- (void)controlWasUnfocused;	// 0x32fa0235
- (void)dealloc;	// 0x32fa02ad
// converted property getter: - (id)focusedImage;	// 0x32fa005d
- (BOOL)isAccessibilityElement;	// 0x32fa007d
- (void)layoutSubcontrols;	// 0x32fa0565
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x32fa01bd
// converted property setter: - (void)setText:(id)text;	// 0x32fa04e1
// converted property setter: - (void)setUnFocusedImage:(id)image;	// 0x32fa0175
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32fa0861
// converted property getter: - (id)text;	// 0x32fa0205
// converted property getter: - (id)unFocusedImage;	// 0x32fa006d
@end

