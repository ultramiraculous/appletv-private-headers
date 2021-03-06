/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivity.h"

@class UIViewController;

@interface UIPrintActivity : UIActivity {
	UIViewController *_wrapperViewController;	// 8 = 0x8
}
@property(retain) UIViewController *wrapperViewController;	// G=0x349915f9; S=0x3499160d; @synthesize=_wrapperViewController
- (id)_activityImage;	// 0x346d392d
- (id)_embeddedActivityViewController;	// 0x3499121d
- (void)activityDidFinish:(BOOL)activity;	// 0x349915a5
- (id)activityTitle;	// 0x346d5345
- (id)activityType;	// 0x346d1ce5
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x346d21d5
- (void)cancelPrintOptions;	// 0x34991575
- (void)dealloc;	// 0x34990ad5
- (void)performActivity;	// 0x34991409
- (void)prepareWithActivityItems:(id)activityItems;	// 0x34990b69
- (id)printInteractionController;	// 0x34991589
- (id)printInteractionControllerParentViewController:(id)controller;	// 0x349915e9
// declared property setter: - (void)setWrapperViewController:(id)controller;	// 0x3499160d
// declared property getter: - (id)wrapperViewController;	// 0x349915f9
@end

