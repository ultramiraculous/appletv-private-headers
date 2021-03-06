/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIImageView.h> // Unknown library

@class UIImage;

@interface TPLCDBar : UIImageView {
	UIImage *_barBackground;	// 96 = 0x60
	UIImageView *_shadowView;	// 100 = 0x64
}
@property(retain, nonatomic) UIImage *barBackground;	// G=0x355e0f49; S=0x355e0f59; @synthesize=_barBackground
@property(readonly, assign) UIImageView *shadowView;	// G=0x355e0f7d; @synthesize=_shadowView
+ (id)backgroundImage;	// 0x355e096d
+ (float)defaultHeight;	// 0x355e09cd
+ (float)defaultHeightForOrientation:(int)orientation;	// 0x355e09e1
+ (id)shadowImage;	// 0x355e09a5
- (id)initWithDefaultSize;	// 0x355e0d09
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x355e0a4d
- (id)initWithFrame:(CGRect)frame;	// 0x355e0d1d
// declared property getter: - (id)barBackground;	// 0x355e0f49
- (CGRect)contentStretchRect;	// 0x355e0ec1
- (void)dealloc;	// 0x355e0d79
// declared property setter: - (void)setBarBackground:(id)background;	// 0x355e0f59
- (void)setOrientation:(int)orientation;	// 0x355e0ead
- (void)setOrientation:(int)orientation updateFrame:(BOOL)frame;	// 0x355e0ddd
// declared property getter: - (id)shadowView;	// 0x355e0f7d
@end

