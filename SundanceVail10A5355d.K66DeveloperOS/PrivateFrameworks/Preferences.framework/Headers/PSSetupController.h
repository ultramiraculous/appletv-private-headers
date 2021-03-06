/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSRootController.h"

@class NSDictionary, UIViewController;

@interface PSSetupController : PSRootController {
	NSDictionary *_rootInfo;	// 296 = 0x128
	UIViewController<PSController> *_parentController;	// 300 = 0x12c
	PSRootController *_parentRootController;	// 304 = 0x130
}
@property(retain) id parentController;	// G=0x34db1205; S=0x34db1525; converted property
- (id)init;	// 0x34db10d9
- (id)controller;	// 0x34db15a9
- (void)dealloc;	// 0x34db1135
- (void)dismiss;	// 0x34db15d5
- (void)dismissAnimated:(BOOL)animated;	// 0x34db15e9
- (void)handleURL:(id)url;	// 0x34db11ad
// converted property getter: - (id)parentController;	// 0x34db1205
- (void)popControllerOnParent;	// 0x34db1785
- (BOOL)popupStyleIsModal;	// 0x34db17fd
- (void)pushController:(id)controller;	// 0x34db14a1
- (void)pushControllerOnParentWithSpecifier:(id)specifier;	// 0x34db1681
// converted property setter: - (void)setParentController:(id)controller;	// 0x34db1525
- (void)setupController;	// 0x34db1215
- (void)statusBarWillChangeHeight:(id)statusBar;	// 0x34db1801
- (BOOL)usePopupStyle;	// 0x34db17f9
- (void)viewDidDisappear:(BOOL)view;	// 0x34db1411
- (void)viewWillDisappear:(BOOL)view;	// 0x34db1381
@end

