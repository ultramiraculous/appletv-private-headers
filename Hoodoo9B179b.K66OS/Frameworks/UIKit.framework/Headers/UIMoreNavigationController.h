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
@property(assign, nonatomic) BOOL allowsCustomizing;	// G=0x330a7ca9; S=0x32ee7d15; 
@property(assign, nonatomic) UIViewController *displayedViewController;	// G=0x330a7b65; S=0x330a7bc1; 
@property(retain, nonatomic) NSArray *moreViewControllers;	// G=0x32f6e821; S=0x32f6e6cd; 
@property(assign, nonatomic) BOOL moreViewControllersChanged;	// G=0x330a7ccd; S=0x330a7cf1; 
- (id)init;	// 0x32f6d981
- (id)_preparedViewController:(id)controller;	// 0x32f6dac9
- (void)_restoreOriginalNavigationController;	// 0x330a7a9d
// declared property getter: - (BOOL)allowsCustomizing;	// 0x330a7ca9
- (void)dealloc;	// 0x32f84df5
- (void)didShowViewController:(id)controller animated:(BOOL)animated;	// 0x330a7c51
// declared property getter: - (id)displayedViewController;	// 0x330a7b65
// declared property getter: - (id)moreViewControllers;	// 0x32f6e821
// declared property getter: - (BOOL)moreViewControllersChanged;	// 0x330a7ccd
- (void)pushViewController:(id)controller animated:(BOOL)animated;	// 0x32f6da81
// declared property setter: - (void)setAllowsCustomizing:(BOOL)customizing;	// 0x32ee7d15
// declared property setter: - (void)setDisplayedViewController:(id)controller;	// 0x330a7bc1
// declared property setter: - (void)setMoreViewControllers:(id)controllers;	// 0x32f6e6cd
// declared property setter: - (void)setMoreViewControllersChanged:(BOOL)changed;	// 0x330a7cf1
@end

