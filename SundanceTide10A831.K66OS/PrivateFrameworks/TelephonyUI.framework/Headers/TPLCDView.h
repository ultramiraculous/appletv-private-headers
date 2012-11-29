/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TPLCDBar.h"
#import "TelephonyUI-Structs.h"

@class TPLCDTextView, TPLCDSubImageView, UIView;

@interface TPLCDView : TPLCDBar {
	UIView *_contentView;	// 104 = 0x68
	TPLCDTextView *_textView;	// 108 = 0x6c
	TPLCDTextView *_secondLineTextView;	// 112 = 0x70
	TPLCDTextView *_labelView;	// 116 = 0x74
	TPLCDSubImageView *_imageView;	// 120 = 0x78
	unsigned _layoutAsLabelled : 1;	// 124 = 0x7c
}
@property(retain) id label;	// G=0x30e451f5; S=0x30e451e1; converted property
@property(retain) id secondLineText;	// G=0x30e44775; S=0x30e44db1; converted property
@property(retain) id subImage;	// G=0x30e454c5; S=0x30e453c1; converted property
@property(retain) id text;	// G=0x30e44289; S=0x30e4410d; converted property
+ (float)labelFontSize;	// 0x30e43eb9
+ (float)textFontSize;	// 0x30e43eb1
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x30e43df5
- (CGRect)_imageViewFrame;	// 0x30e44991
- (CGRect)_labelFrame;	// 0x30e44795
- (float)_labelVInset;	// 0x30e44061
- (void)_resetContentViewFrame;	// 0x30e43d85
- (CGRect)_text1Frame;	// 0x30e442ed
- (CGRect)_text2Frame;	// 0x30e44589
- (float)_textVInset;	// 0x30e440b5
- (void)blinkLabel;	// 0x30e45219
- (void)dealloc;	// 0x30e43ec1
- (void)didFinishAnimatingLCDLabelFadeOut:(id)anOut finished:(id)finished context:(id)context;	// 0x30e44f29
- (CGRect)fullSizedContentViewFrame;	// 0x30e43c61
// converted property getter: - (id)label;	// 0x30e451f5
- (void)layoutSubviews;	// 0x30e44ac1
// converted property getter: - (id)secondLineText;	// 0x30e44775
- (void)setContentsAlpha:(float)alpha;	// 0x30e44009
// converted property setter: - (void)setLabel:(id)label;	// 0x30e451e1
- (void)setLabel:(id)label animate:(BOOL)animate;	// 0x30e44f59
- (void)setLayoutAsLabelled:(BOOL)labelled;	// 0x30e4553d
// converted property setter: - (void)setSecondLineText:(id)text;	// 0x30e44db1
- (void)setShadowColor:(id)color;	// 0x30e454e5
// converted property setter: - (void)setSubImage:(id)image;	// 0x30e453c1
// converted property setter: - (void)setText:(id)text;	// 0x30e4410d
- (BOOL)shouldCenterContentView;	// 0x30e43fb1
- (BOOL)shouldCenterText;	// 0x30e43f81
- (BOOL)showImageViewOnLeftSide;	// 0x30e44005
// converted property getter: - (id)subImage;	// 0x30e454c5
// converted property getter: - (id)text;	// 0x30e44289
- (CGRect)textFrame;	// 0x30e44565
@end
