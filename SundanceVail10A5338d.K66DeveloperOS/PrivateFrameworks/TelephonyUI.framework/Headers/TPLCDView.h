/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TPLCDBar.h"
#import "TelephonyUI-Structs.h"

@class TPLCDSubImageView, UIView, TPLCDTextView;

@interface TPLCDView : TPLCDBar {
	UIView *_contentView;	// 104 = 0x68
	TPLCDTextView *_textView;	// 108 = 0x6c
	TPLCDTextView *_secondLineTextView;	// 112 = 0x70
	TPLCDTextView *_labelView;	// 116 = 0x74
	TPLCDSubImageView *_imageView;	// 120 = 0x78
	unsigned _layoutAsLabelled : 1;	// 124 = 0x7c
}
@property(retain) id label;	// G=0x32ad4da5; S=0x32ad4d91; converted property
@property(retain) id secondLineText;	// G=0x32ad4325; S=0x32ad4961; converted property
@property(retain) id subImage;	// G=0x32ad5075; S=0x32ad4f71; converted property
@property(retain) id text;	// G=0x32ad3e39; S=0x32ad3cbd; converted property
+ (float)labelFontSize;	// 0x32ad3a69
+ (float)textFontSize;	// 0x32ad3a61
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x32ad39a5
- (CGRect)_imageViewFrame;	// 0x32ad4541
- (CGRect)_labelFrame;	// 0x32ad4345
- (float)_labelVInset;	// 0x32ad3c11
- (void)_resetContentViewFrame;	// 0x32ad3935
- (CGRect)_text1Frame;	// 0x32ad3e9d
- (CGRect)_text2Frame;	// 0x32ad4139
- (float)_textVInset;	// 0x32ad3c65
- (void)blinkLabel;	// 0x32ad4dc9
- (void)dealloc;	// 0x32ad3a71
- (void)didFinishAnimatingLCDLabelFadeOut:(id)anOut finished:(id)finished context:(id)context;	// 0x32ad4ad9
- (CGRect)fullSizedContentViewFrame;	// 0x32ad3811
// converted property getter: - (id)label;	// 0x32ad4da5
- (void)layoutSubviews;	// 0x32ad4671
// converted property getter: - (id)secondLineText;	// 0x32ad4325
- (void)setContentsAlpha:(float)alpha;	// 0x32ad3bb9
// converted property setter: - (void)setLabel:(id)label;	// 0x32ad4d91
- (void)setLabel:(id)label animate:(BOOL)animate;	// 0x32ad4b09
- (void)setLayoutAsLabelled:(BOOL)labelled;	// 0x32ad50ed
// converted property setter: - (void)setSecondLineText:(id)text;	// 0x32ad4961
- (void)setShadowColor:(id)color;	// 0x32ad5095
// converted property setter: - (void)setSubImage:(id)image;	// 0x32ad4f71
// converted property setter: - (void)setText:(id)text;	// 0x32ad3cbd
- (BOOL)shouldCenterContentView;	// 0x32ad3b61
- (BOOL)shouldCenterText;	// 0x32ad3b31
- (BOOL)showImageViewOnLeftSide;	// 0x32ad3bb5
// converted property getter: - (id)subImage;	// 0x32ad5075
// converted property getter: - (id)text;	// 0x32ad3e39
- (CGRect)textFrame;	// 0x32ad4115
@end

