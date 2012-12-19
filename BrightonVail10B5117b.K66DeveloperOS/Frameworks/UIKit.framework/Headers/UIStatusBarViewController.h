/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class _UIClassicCornersWindow, UIClassicStatusBarView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIStatusBarViewController : UIViewController {
	BOOL _iPhoneWS;	// 197 = 0xc5
	UIWindow *_window;	// 200 = 0xc8
	UIView *_statusBar;	// 204 = 0xcc
	UIClassicStatusBarView *_statusBarBackgroundView;	// 208 = 0xd0
	_UIClassicCornersWindow *_cornersWindow;	// 212 = 0xd4
	BOOL _keyboardVisible;	// 216 = 0xd8
}
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x32f9ec8d; @synthesize=_window
+ (double)statusBarOrientationAnimationDurationFrom:(int)from to:(int)to;	// 0x32f9e7d1
- (id)init;	// 0x32f9d2c5
- (void)_changeStatusBarOrientationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;	// 0x32f9eabd
- (void)_changeStatusBarOrientationFrom:(int)from toOrientation:(int)orientation;	// 0x32f9e84d
- (void)_prepareForZoom:(BOOL)zoom;	// 0x32f9de55
- (void)_setStatusBarBackgroundImageForOrientation:(int)orientation;	// 0x32f9e011
- (void)_statusBarHideAnimationFinished:(id)finished finished:(BOOL)finished2 hidden:(id)hidden;	// 0x32f9e6dd
- (CGSize)_statusBarSizeForOrientation:(int)orientation;	// 0x32f9e659
- (void)_statusBarViewControllerKeyboardDidHide:(id)_statusBarViewControllerKeyboard;	// 0x32f9ebf9
- (void)_statusBarViewControllerKeyboardWillShow:(id)_statusBarViewControllerKeyboard;	// 0x32f9eb65
- (void)_updateCornersForRotationFromOrientation:(int)orientation toOrientation:(int)orientation2 withStatusBarStyle:(int)statusBarStyle statusBarShouldHide:(BOOL)statusBar;	// 0x32f9ea31
- (void)_updateStatusBarForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 style:(int)style hidden:(BOOL)hidden slideUp:(BOOL)up;	// 0x32f9e3b5
- (void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 hidden:(BOOL)hidden slideUp:(BOOL)up;	// 0x32f9e061
- (void)_zoom:(BOOL)zoom animated:(BOOL)animated;	// 0x32f9de81
- (void)dealloc;	// 0x32f9d3a1
- (BOOL)isClassicControlWindow:(id)window;	// 0x32f9d46d
- (void)loadView;	// 0x32f9d49d
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x32f9d921
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x32f9dd29
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x32f9dbc1
// declared property getter: - (id)window;	// 0x32f9ec8d
@end
