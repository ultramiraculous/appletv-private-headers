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
@private
	UIStatusBarItem *_item;	// 48 = 0x30
	int _foregroundStyle;	// 52 = 0x34
	BOOL _visible;	// 56 = 0x38
	BOOL _allowsUpdates;	// 57 = 0x39
	UIStatusBarLayoutManager *_layoutManager;	// 60 = 0x3c
	float _currentOverlap;	// 64 = 0x40
	CGContextRef _imageContext;	// 68 = 0x44
	float _imageContextScale;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL allowsUpdates;	// G=0x3003e4c9; S=0x3004f1c1; @synthesize=_allowsUpdates
@property(assign) float currentOverlap;	// G=0x3003ff95; S=0x30050f5d; converted property
@property(readonly, assign, nonatomic) int foregroundStyle;	// G=0x3003ffd5; @synthesize=_foregroundStyle
@property(readonly, assign, nonatomic) UIStatusBarItem *item;	// G=0x3003fca9; @synthesize=_item
@property(assign, nonatomic) UIStatusBarLayoutManager *layoutManager;	// G=0x30333d15; S=0x3004ff31; @synthesize=_layoutManager
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x3003fcf1; S=0x30050351; @synthesize=_visible
+ (id)createViewForItem:(id)item withData:(id)data actions:(int)actions foregroundStyle:(int)style;	// 0x3004efc5
+ (id)imageNamed:(id)named forForegroundStyle:(int)foregroundStyle;	// 0x300600b9
- (id)initWithItem:(id)item data:(id)data actions:(int)actions style:(int)style;	// 0x3004f085
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x30174c6d
// declared property getter: - (BOOL)allowsUpdates;	// 0x3003e4c9
- (BOOL)animatesDataChange;	// 0x3003e451
- (BOOL)animatesFrameChange;	// 0x3004f1d1
- (void)beginImageContextWithMinimumWidth:(float)minimumWidth;	// 0x3004f65d
- (id)contentsImageForStyle:(int)style;	// 0x30333ca9
- (float)currentLeftOverlap;	// 0x30051369
// converted property getter: - (float)currentOverlap;	// 0x3003ff95
- (float)currentRightOverlap;	// 0x30051595
- (void)dealloc;	// 0x30054771
- (id)description;	// 0x30333cad
- (void)drawText:(id)text forStyle:(int)style;	// 0x3004f8b5
- (void)drawText:(id)text forStyle:(int)style forWidth:(float)width lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x3004f8ed
- (void)endImageContext;	// 0x3004fed5
- (float)extraLeftPadding;	// 0x3003ff61
- (float)extraRightPadding;	// 0x300400dd
// declared property getter: - (int)foregroundStyle;	// 0x3003ffd5
- (id)imageFromImageContextClippedToWidth:(float)width;	// 0x3004fdc9
// declared property getter: - (BOOL)isVisible;	// 0x3003fcf1
// declared property getter: - (id)item;	// 0x3003fca9
// declared property getter: - (id)layoutManager;	// 0x30333d15
- (float)maximumOverlap;	// 0x30333ca5
- (void)performPendedActions;	// 0x300401fd
// declared property setter: - (void)setAllowsUpdates:(BOOL)updates;	// 0x3004f1c1
// converted property setter: - (void)setCurrentOverlap:(float)overlap;	// 0x30050f5d
// declared property setter: - (void)setLayoutManager:(id)manager;	// 0x3004ff31
- (float)setStatusBarData:(id)data actions:(int)actions;	// 0x3003e465
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x30050351
- (void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;	// 0x3005138d
- (float)shadowPadding;	// 0x3003ffa5
- (float)shadowPaddingForStyle:(int)style;	// 0x3003ffe5
- (float)standardPadding;	// 0x3003ff19
- (id)textColorForStyle:(int)style;	// 0x3004fd85
- (id)textFont;	// 0x3004f58d
- (float)updateContentsAndWidth;	// 0x3004f29d
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x3003ec9d
- (BOOL)usesSmallerTextFont;	// 0x3004f5d9
@end
