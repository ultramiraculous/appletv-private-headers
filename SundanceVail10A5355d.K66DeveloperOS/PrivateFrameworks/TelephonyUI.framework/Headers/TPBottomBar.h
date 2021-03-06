/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIView.h> // Unknown library

@class UIImageView;

@interface TPBottomBar : UIView {
	int _orientation;	// 84 = 0x54
	int _style;	// 88 = 0x58
	BOOL _suppressDrawingBackground;	// 92 = 0x5c
	UIImageView *_shadowView;	// 96 = 0x60
}
@property(assign) int orientation;	// G=0x3589ecd5; S=0x3589ecc1; converted property
@property(readonly, assign) UIImageView *shadowView;	// G=0x3589eeb5; @synthesize=_shadowView
@property(assign, nonatomic) BOOL suppressDrawingBackground;	// G=0x3589eea5; S=0x3589ece5; @synthesize=_suppressDrawingBackground
+ (id)_backgroundImage;	// 0x3589e69d
+ (float)defaultHeight;	// 0x3589e7c9
+ (float)defaultHeightForOrientation:(int)orientation;	// 0x3589e789
+ (float)defaultHeightForStyle:(int)style;	// 0x3589e769
+ (float)defaultHeightForStyle:(int)style orientation:(int)orientation;	// 0x3589e71d
+ (int)fullscreenStyle;	// 0x3589e8a9
+ (int)overlayStyle;	// 0x3589e8e5
+ (id)upsideDownShadowImage;	// 0x3589e6f5
- (id)init;	// 0x3589eaf1
- (id)initWithDefaultSize;	// 0x3589e7dd
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x3589e7f1
- (id)initWithFrame:(CGRect)frame;	// 0x3589e921
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x3589e96d
- (void)dealloc;	// 0x3589eb5d
- (void)drawRect:(CGRect)rect;	// 0x3589ee39
- (void)layoutSubviews;	// 0x3589ed11
// converted property getter: - (int)orientation;	// 0x3589ecd5
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x3589ecc1
- (void)setOrientation:(int)orientation updateFrame:(BOOL)frame;	// 0x3589eba9
// declared property setter: - (void)setSuppressDrawingBackground:(BOOL)background;	// 0x3589ece5
- (void)setWellAlpha:(float)alpha;	// 0x3589eea1
// declared property getter: - (id)shadowView;	// 0x3589eeb5
// declared property getter: - (BOOL)suppressDrawingBackground;	// 0x3589eea5
@end

