/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPopoverControllerDelegate.h"
#import "UIViewController.h"

@class UIActivityViewController, NSArray;

__attribute__((visibility("hidden")))
@interface UIActivityListViewController : UIViewController <UIPopoverControllerDelegate> {
	UIActivityViewController *_activityViewController;	// 196 = 0xc4
	NSArray *_activities;	// 200 = 0xc8
}
@property(retain, nonatomic) NSArray *activities;	// G=0x32f33fdd; S=0x32c780f5; @synthesize=_activities
@property(assign, nonatomic) UIActivityViewController *activityViewController;	// G=0x32f33fcd; S=0x32c780e5; @synthesize=_activityViewController
- (id)initWithActivityViewController:(id)activityViewController activities:(id)activities;	// 0x32c78081
// declared property getter: - (id)activities;	// 0x32f33fdd
// declared property getter: - (id)activityViewController;	// 0x32f33fcd
- (CGSize)contentSizeForViewInPopover;	// 0x32f33f1d
- (void)dealloc;	// 0x32c89491
- (void)dimStatusBar:(BOOL)bar animated:(BOOL)animated;	// 0x32f33f9d
- (void)loadView;	// 0x32c78105
- (void)reloadActivity:(id)activity;	// 0x32f33f6d
// declared property setter: - (void)setActivities:(id)activities;	// 0x32c780f5
// declared property setter: - (void)setActivityViewController:(id)controller;	// 0x32c780e5
- (void)setHeaderVisible:(BOOL)visible;	// 0x32c7c0e9
- (unsigned)supportedInterfaceOrientations;	// 0x32f33ef1
- (void)viewWillAppear:(BOOL)view;	// 0x32c7c009
- (void)viewWillDisappear:(BOOL)view;	// 0x32c89031
@end

