/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIStatusBarItem, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView {
	UIStatusBarItem *_item;	// 84 = 0x54
	int _foregroundStyle;	// 88 = 0x58
	BOOL _visible;	// 92 = 0x5c
	BOOL _allowsUpdates;	// 93 = 0x5d
	UIStatusBarLayoutManager *_layoutManager;	// 96 = 0x60
	float _currentOverlap;	// 100 = 0x64
	CGContextRef _imageContext;	// 104 = 0x68
	float _imageContextScale;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL allowsUpdates;	// G=0x33a02245; S=0x33a1367d; @synthesize=_allowsUpdates
@property(assign) float currentOverlap;	// G=0x33a03df1; S=0x33a14c19; converted property
@property(readonly, assign, nonatomic) int foregroundStyle;	// G=0x33a03e35; @synthesize=_foregroundStyle
@property(readonly, assign, nonatomic) UIStatusBarItem *item;	// G=0x33a03af5; @synthesize=_item
@property(assign, nonatomic) UIStatusBarLayoutManager *layoutManager;	// G=0x33cf2cad; S=0x33a14365; @synthesize=_layoutManager
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x33a03b3d; S=0x33a1475d; @synthesize=_visible
+ (id)createViewForItem:(id)item withData:(id)data actions:(int)actions foregroundStyle:(int)style;	// 0x33a13491
+ (id)imageNamed:(id)named forForegroundStyle:(int)foregroundStyle;	// 0x33a230e1
- (id)initWithItem:(id)item data:(id)data actions:(int)actions style:(int)style;	// 0x33a1353d
- (void)_drawText:(id)text inRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing textAlignment:(int)alignment;	// 0x33cf2b81
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x33b283fd
// declared property getter: - (BOOL)allowsUpdates;	// 0x33a02245
- (BOOL)animatesDataChange;	// 0x33a021d1
- (BOOL)animatesFrameChange;	// 0x33a1368d
- (void)beginImageContextWithMinimumWidth:(float)minimumWidth;	// 0x33a13b11
- (id)contentsImageForStyle:(int)style;	// 0x33cf2c41
- (float)currentLeftOverlap;	// 0x33a15099
// converted property getter: - (float)currentOverlap;	// 0x33a03df1
- (float)currentRightOverlap;	// 0x33a152cd
- (void)dealloc;	// 0x33a17ea9
- (id)description;	// 0x33cf2c45
- (void)drawText:(id)text forStyle:(int)style;	// 0x33a13db9
- (void)drawText:(id)text forStyle:(int)style forWidth:(float)width lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x33a13df1
- (void)endImageContext;	// 0x33a142fd
- (float)extraLeftPadding;	// 0x33a03db9
- (float)extraRightPadding;	// 0x33a03f65
// declared property getter: - (int)foregroundStyle;	// 0x33a03e35
- (id)imageFromImageContextClippedToWidth:(float)width;	// 0x33a141ed
// declared property getter: - (BOOL)isVisible;	// 0x33a03b3d
// declared property getter: - (id)item;	// 0x33a03af5
// declared property getter: - (id)layoutManager;	// 0x33cf2cad
- (float)maximumOverlap;	// 0x33cf2c39
- (void)performPendedActions;	// 0x33a040a5
// declared property setter: - (void)setAllowsUpdates:(BOOL)updates;	// 0x33a1367d
// converted property setter: - (void)setCurrentOverlap:(float)overlap;	// 0x33a14c19
// declared property setter: - (void)setLayoutManager:(id)manager;	// 0x33a14365
- (float)setStatusBarData:(id)data actions:(int)actions;	// 0x33a021e9
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x33a1475d
- (void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;	// 0x33a150c1
- (float)shadowPadding;	// 0x33a03e01
- (float)shadowPaddingForStyle:(int)style;	// 0x33a03e49
- (float)standardPadding;	// 0x33a03d75
- (int)textAlignment;	// 0x33cf2c31
- (id)textColorForStyle:(int)style;	// 0x33a141c5
- (id)textFont;	// 0x33a13a41
- (float)updateContentsAndWidth;	// 0x33a13759
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x33a02af5
- (BOOL)usesSmallerTextFont;	// 0x33a13a8d
@end

