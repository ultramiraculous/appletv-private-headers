/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWindow.h"
#import "UIKit-Structs.h"

@class UIStatusBar, UIStatusBarCorners;

@interface UIStatusBarWindow : UIWindow {
	UIStatusBar *_statusBar;	// 124 = 0x7c
	int _orientation;	// 128 = 0x80
	UIStatusBarCorners *_topCorners;	// 132 = 0x84
	UIStatusBarCorners *_bottomCorners;	// 136 = 0x88
	BOOL _cornersHidden;	// 140 = 0x8c
}
@property(readonly, assign) int orientation;	// G=0x3008b479; converted property
+ (CGRect)statusBarWindowFrame;	// 0x300a75d5
- (id)initWithFrame:(CGRect)frame;	// 0x300a7561
- (BOOL)_disableGroupOpacity;	// 0x300a8125
- (BOOL)_disableViewScaling;	// 0x3030c7a9
- (void)_fadeAnimationStopped:(id)stopped finished:(id)finished context:(void *)context;	// 0x3030c7d5
- (BOOL)_isStatusBarWindow;	// 0x3030c7ad
- (void)_rotate;	// 0x300ac009
- (void)_updateTransformLayerForClassicPresentation;	// 0x3030c7b1
- (void)dealloc;	// 0x3030c8a1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x300910b9
// converted property getter: - (int)orientation;	// 0x3008b479
- (void)setCornersHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x30177e99
- (void)setOrientation:(int)orientation animationParameters:(id)parameters;	// 0x300abddd
- (void)setStatusBar:(id)bar;	// 0x300a8649
- (void)setTopCornerStyle:(int)style bottomCornerStyle:(int)style2 animationParameters:(id)parameters;	// 0x30099dc5
@end

