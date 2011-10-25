/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, BRTextControl, NSDictionary, BRImageControl;

@interface BRPhotoBrowserBannerButton : BRControl {
@private
	BRControl *_focusControl;	// 48 = 0x30
	BRImageControl *_imageControl;	// 52 = 0x34
	BRImage *_focusedImage;	// 56 = 0x38
	BRImage *_unFocusedImage;	// 60 = 0x3c
	BRTextControl *_textControl;	// 64 = 0x40
	NSDictionary *_textAttributes;	// 68 = 0x44
}
@property(retain) BRImage *focusedImage;	// G=0x33af2acd; S=0x33af2a79; converted property
@property(retain) id text;	// G=0x33af2a41; S=0x33af29bd; converted property
@property(retain) BRImage *unFocusedImage;	// G=0x33af2b31; S=0x33af2add; converted property
+ (id)button;	// 0x33af24a9
+ (id)removeSavedSearchButton;	// 0x33af2671
+ (id)saveSearchButton;	// 0x33af2615
+ (id)settingsButton;	// 0x33af26cd
+ (id)slideshowButton;	// 0x33af24e1
- (id)init;	// 0x33af2729
- (void)_updateContents;	// 0x33af305d
- (id)accessibilityLabel;	// 0x33af3021
- (id)accessibilityTraits;	// 0x33af3031
- (void)controlWasFocused;	// 0x33af293d
- (void)controlWasUnfocused;	// 0x33af297d
- (void)dealloc;	// 0x33af288d
// converted property getter: - (id)focusedImage;	// 0x33af2acd
- (BOOL)isAccessibilityElement;	// 0x33af301d
- (void)layoutSubcontrols;	// 0x33af2d29
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x33af2a79
// converted property setter: - (void)setText:(id)text;	// 0x33af29bd
// converted property setter: - (void)setUnFocusedImage:(id)image;	// 0x33af2add
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33af2b41
// converted property getter: - (id)text;	// 0x33af2a41
// converted property getter: - (id)unFocusedImage;	// 0x33af2b31
@end

