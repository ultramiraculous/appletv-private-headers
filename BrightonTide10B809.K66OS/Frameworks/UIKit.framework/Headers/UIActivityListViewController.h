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
@property(retain, nonatomic) NSArray *activities;	// G=0x32f33fdd; S=0x32c780ed; @synthesize=_activities
@property(assign, nonatomic) UIActivityViewController *activityViewController;	// G=0x32f33fcd; S=0x32c780dd; @synthesize=_activityViewController
- (id)initWithActivityViewController:(id)activityViewController activities:(id)activities;	// 0x32c78079
// declared property getter: - (id)activities;	// 0x32f33fdd
// declared property getter: - (id)activityViewController;	// 0x32f33fcd
- (CGSize)contentSizeForViewInPopover;	// 0x32f33f1d
- (void)dealloc;	// 0x32c89489
- (void)dimStatusBar:(BOOL)bar animated:(BOOL)animated;	// 0x32f33f9d
- (void)loadView;	// 0x32c780fd
- (void)reloadActivity:(id)activity;	// 0x32f33f6d
// declared property setter: - (void)setActivities:(id)activities;	// 0x32c780ed
// declared property setter: - (void)setActivityViewController:(id)controller;	// 0x32c780dd
- (void)setHeaderVisible:(BOOL)visible;	// 0x32c7c0e1
- (unsigned)supportedInterfaceOrientations;	// 0x32f33ef1
- (void)viewWillAppear:(BOOL)view;	// 0x32c7c001
- (void)viewWillDisappear:(BOOL)view;	// 0x32c89029
@end

