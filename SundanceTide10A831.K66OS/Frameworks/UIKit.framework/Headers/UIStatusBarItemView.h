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
@property(assign, nonatomic) BOOL allowsUpdates;	// G=0x31bdfcc5; S=0x31bdf845; @synthesize=_allowsUpdates
@property(assign) float currentOverlap;	// G=0x31be0cd9; S=0x31c1c759; converted property
@property(readonly, assign, nonatomic) int foregroundStyle;	// G=0x31be0d1d; @synthesize=_foregroundStyle
@property(readonly, assign, nonatomic) UIStatusBarItem *item;	// G=0x31be09dd; @synthesize=_item
@property(assign, nonatomic) UIStatusBarLayoutManager *layoutManager;	// G=0x31ef77f5; S=0x31c303ed; @synthesize=_layoutManager
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x31be0a25; S=0x31c1cd75; @synthesize=_visible
+ (id)createViewForItem:(id)item withData:(id)data actions:(int)actions foregroundStyle:(int)style;	// 0x31c30061
+ (id)imageNamed:(id)named forForegroundStyle:(int)foregroundStyle;	// 0x31c25e09
- (id)initWithItem:(id)item data:(id)data actions:(int)actions style:(int)style;	// 0x31c3010d
- (void)_drawText:(id)text inRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing textAlignment:(int)alignment;	// 0x31be9fe1
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x31d5d995
// declared property getter: - (BOOL)allowsUpdates;	// 0x31bdfcc5
- (BOOL)animatesDataChange;	// 0x31ef7781
- (BOOL)animatesFrameChange;	// 0x31c3024d
- (void)beginImageContextWithMinimumWidth:(float)minimumWidth;	// 0x31be9aa9
- (id)contentsImageForStyle:(int)style;	// 0x31ef7789
- (float)currentLeftOverlap;	// 0x31c1cc39
// converted property getter: - (float)currentOverlap;	// 0x31be0cd9
- (float)currentRightOverlap;	// 0x31c1b19d
- (void)dealloc;	// 0x31c25981
- (id)description;	// 0x31ef778d
- (void)drawText:(id)text forStyle:(int)style;	// 0x31be9bb1
- (void)drawText:(id)text forStyle:(int)style forWidth:(float)width lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x31be9be9
- (void)endImageContext;	// 0x31bea2b5
- (float)extraLeftPadding;	// 0x31be0ca1
- (float)extraRightPadding;	// 0x31be0e4d
// declared property getter: - (int)foregroundStyle;	// 0x31be0d1d
- (id)imageFromImageContextClippedToWidth:(float)width;	// 0x31bea10d
// declared property getter: - (BOOL)isVisible;	// 0x31be0a25
// declared property getter: - (id)item;	// 0x31be09dd
// declared property getter: - (id)layoutManager;	// 0x31ef77f5
- (float)maximumOverlap;	// 0x31ef7779
- (void)performPendedActions;	// 0x31be0f8d
// declared property setter: - (void)setAllowsUpdates:(BOOL)updates;	// 0x31bdf845
// converted property setter: - (void)setCurrentOverlap:(float)overlap;	// 0x31c1c759
// declared property setter: - (void)setLayoutManager:(id)manager;	// 0x31c303ed
- (float)setStatusBarData:(id)data actions:(int)actions;	// 0x31bdfc69
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x31c1cd75
- (void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;	// 0x31c1cc61
- (float)shadowPadding;	// 0x31be0ce9
- (float)shadowPaddingForStyle:(int)style;	// 0x31be0d31
- (float)standardPadding;	// 0x31be0c5d
- (int)textAlignment;	// 0x31be9f69
- (id)textColorForStyle:(int)style;	// 0x31bea0e5
- (id)textFont;	// 0x31be9a41
- (float)updateContentsAndWidth;	// 0x31be9759
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x31d4e535
- (BOOL)usesSmallerTextFont;	// 0x31be9a8d
@end
