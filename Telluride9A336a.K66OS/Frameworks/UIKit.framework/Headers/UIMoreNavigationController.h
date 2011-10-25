/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class NSArray, UIMoreListController;

@interface UIMoreNavigationController : UINavigationController {
	UIMoreListController *_moreListController;	// 240 = 0xf0
	UINavigationController *_originalNavigationController;	// 244 = 0xf4
	UIViewController *_originalRootViewController;	// 248 = 0xf8
}
@property(assign, nonatomic) BOOL allowsCustomizing;	// G=0x352a1165; S=0x350e25d1; 
@property(assign, nonatomic) UIViewController *displayedViewController;	// G=0x352a1021; S=0x352a107d; 
@property(retain, nonatomic) NSArray *moreViewControllers;	// G=0x3516a215; S=0x3516a0c1; 
@property(assign, nonatomic) BOOL moreViewControllersChanged;	// G=0x352a1189; S=0x352a11ad; 
- (id)init;	// 0x35169375
- (id)_preparedViewController:(id)controller;	// 0x351694bd
- (void)_restoreOriginalNavigationController;	// 0x352a0f59
// declared property getter: - (BOOL)allowsCustomizing;	// 0x352a1165
- (void)dealloc;	// 0x3517fedd
- (void)didShowViewController:(id)controller animated:(BOOL)animated;	// 0x352a110d
// declared property getter: - (id)displayedViewController;	// 0x352a1021
// declared property getter: - (id)moreViewControllers;	// 0x3516a215
// declared property getter: - (BOOL)moreViewControllersChanged;	// 0x352a1189
- (void)pushViewController:(id)controller animated:(BOOL)animated;	// 0x35169475
// declared property setter: - (void)setAllowsCustomizing:(BOOL)customizing;	// 0x350e25d1
// declared property setter: - (void)setDisplayedViewController:(id)controller;	// 0x352a107d
// declared property setter: - (void)setMoreViewControllers:(id)controllers;	// 0x3516a0c1
// declared property setter: - (void)setMoreViewControllersChanged:(BOOL)changed;	// 0x352a11ad
@end

