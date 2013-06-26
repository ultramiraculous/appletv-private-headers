/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>

@class UIPrintPaper, UIWindow, UINavigationController, UIPopoverController, UIPrintPanelTableViewController, UIPrintInteractionController, UIViewController, PKPrinter, NSArray;

__attribute__((visibility("hidden")))
@interface UIPrintPanelViewController : NSObject {
	UIPrintInteractionController *_printInteractionController;	// 4 = 0x4
	UINavigationController *_navigationController;	// 8 = 0x8
	UIPrintPanelTableViewController *_tableViewController;	// 12 = 0xc
	UIViewController *_parentController;	// 16 = 0x10
	UIPopoverController *_poverController;	// 20 = 0x14
	UIWindow *_window;	// 24 = 0x18
	PKPrinter *_printer;	// 28 = 0x1c
	BOOL _dismissed;	// 32 = 0x20
	BOOL _animated;	// 33 = 0x21
	BOOL _observingRotation;	// 34 = 0x22
	BOOL _parentHasNoPopover;	// 35 = 0x23
}
@property(assign, nonatomic) int copies;	// G=0x2f7e8e99; S=0x2f7e8f41; 
@property(assign, nonatomic) BOOL duplex;	// G=0x2f7e8ded; S=0x2f7e8e29; 
@property(readonly, assign, nonatomic) int pageCount;	// G=0x2f7e8ed1; 
@property(assign, nonatomic) NSRange pageRange;	// G=0x2f7e8ef1; S=0x2f7e8f21; 
@property(retain, nonatomic) UIPrintPaper *paper;	// G=0x2f7e90b1; S=0x2f7e90d1; 
@property(readonly, assign, nonatomic) NSArray *paperList;	// G=0x2f7e8f7d; 
@property(retain, nonatomic) PKPrinter *printer;	// G=0x2f7e9225; S=0x2f7e8bc5; @synthesize=_printer
@property(readonly, assign, nonatomic) BOOL showCopies;	// G=0x2f7e9181; 
@property(readonly, assign, nonatomic) BOOL showDuplex;	// G=0x2f7e90f1; 
@property(readonly, assign, nonatomic) BOOL showPageRange;	// G=0x2f7e915d; 
@property(readonly, assign, nonatomic) BOOL showPaper;	// G=0x2f7e91a5; 
- (id)initWithPrintInterationController:(id)printInterationController inParentController:(id)parentController;	// 0x2f7e751d
- (void)_keyWindowWillRotate:(id)_keyWindow;	// 0x2f7e7cb5
- (void)_presentInParentAnimated:(BOOL)parentAnimated;	// 0x2f7e78dd
- (void)_presentWindow;	// 0x2f7e7a01
- (void)cancelPrinting;	// 0x2f7e89a9
- (void)controllerDidDisappear;	// 0x2f7e89bd
// declared property getter: - (int)copies;	// 0x2f7e8e99
- (void)dealloc;	// 0x2f7e77c9
- (void)dismissAnimated:(BOOL)animated;	// 0x2f7e85a1
- (void)dismissPrintPanel:(BOOL)panel animated:(BOOL)animated;	// 0x2f7e81c1
// declared property getter: - (BOOL)duplex;	// 0x2f7e8ded
// declared property getter: - (int)pageCount;	// 0x2f7e8ed1
// declared property getter: - (NSRange)pageRange;	// 0x2f7e8ef1
// declared property getter: - (id)paper;	// 0x2f7e90b1
// declared property getter: - (id)paperList;	// 0x2f7e8f7d
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x2f7e8921
- (void)presentPrintPanelAnimated:(BOOL)animated;	// 0x2f7e7d49
- (void)presentPrintPanelFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x2f7e8095
- (void)presentPrintPanelFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x2f7e7f4d
// declared property getter: - (id)printer;	// 0x2f7e9225
// declared property setter: - (void)setCopies:(int)copies;	// 0x2f7e8f41
// declared property setter: - (void)setDuplex:(BOOL)duplex;	// 0x2f7e8e29
// declared property setter: - (void)setPageRange:(NSRange)range;	// 0x2f7e8f21
// declared property setter: - (void)setPaper:(id)paper;	// 0x2f7e90d1
// declared property setter: - (void)setPrinter:(id)printer;	// 0x2f7e8bc5
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f7e85b5
// declared property getter: - (BOOL)showCopies;	// 0x2f7e9181
// declared property getter: - (BOOL)showDuplex;	// 0x2f7e90f1
// declared property getter: - (BOOL)showPageRange;	// 0x2f7e915d
// declared property getter: - (BOOL)showPaper;	// 0x2f7e91a5
- (void)startPrinting;	// 0x2f7e8935
- (unsigned)supportedInterfaceOrientations;	// 0x2f7e8775
@end
