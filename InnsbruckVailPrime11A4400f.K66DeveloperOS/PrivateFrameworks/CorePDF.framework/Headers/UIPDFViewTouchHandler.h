/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIGestureRecognizerDelegate.h"
#import <UIKit/UIResponder.h>

@class UIPDFPageView, UIPDFSelectionController, UIPDFMagnifierController, UITapGestureRecognizer, UILongPressGestureRecognizer, UIMenuController;

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {
	UIPDFPageView *_pdfPageView;	// 4 = 0x4
	UITapGestureRecognizer *_doubleTapRecognizer;	// 8 = 0x8
	UITapGestureRecognizer *_singleTapRecognizer;	// 12 = 0xc
	UILongPressGestureRecognizer *_briefPressRecognizer;	// 16 = 0x10
	UILongPressGestureRecognizer *_longPressRecognizer;	// 20 = 0x14
	UITapGestureRecognizer *_twoFingerTapRecognizer;	// 24 = 0x18
	UIMenuController *_menuController;	// 28 = 0x1c
	UIPDFSelectionController *_selectionController;	// 32 = 0x20
	UIPDFMagnifierController *_magnifyController;	// 36 = 0x24
	BOOL _trackingSelection;	// 40 = 0x28
	BOOL _showMagnifier;	// 41 = 0x29
	BOOL _showLoupe;	// 42 = 0x2a
	BOOL _firstTouch;	// 43 = 0x2b
	BOOL _useDelegateForLinks;	// 44 = 0x2c
	BOOL _allowMenu;	// 45 = 0x2d
}
@property(assign) BOOL allowMenu;	// G=0x3062b11d; S=0x3062b135; @synthesize=_allowMenu
+ (void)releaseViewManager;	// 0x30629c91
- (id)initWithView:(id)view;	// 0x30629cb9
// declared property getter: - (BOOL)allowMenu;	// 0x3062b11d
- (void)briefPressRecognized:(id)recognized;	// 0x3062a449
- (BOOL)canBecomeFirstResponder;	// 0x3062a2bd
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3062ae31
- (void)copy:(id)copy;	// 0x3062aeb1
- (void)dealloc;	// 0x30629fe9
- (BOOL)delegateGesture:(id)gesture kind:(int)kind;	// 0x3062a349
- (void)disableRecognizers;	// 0x3062a21d
- (void)doubleTapRecognized:(id)recognized;	// 0x3062a929
- (void)enableRecognizers;	// 0x3062a18d
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3062abed
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x3062ae2d
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x3062ac49
- (void)hideMenu;	// 0x3062b119
- (void)longPressRecognized:(id)recognized;	// 0x3062a719
- (id)nextResponder;	// 0x3062a2ad
- (BOOL)resignFirstResponder;	// 0x3062a2c1
- (void)selectAll:(id)all;	// 0x3062aef9
// declared property setter: - (void)setAllowMenu:(BOOL)menu;	// 0x3062b135
- (void)setFirstTouch;	// 0x3062a329
- (void)showMenu;	// 0x3062afa1
- (void)singleTapRecognized:(id)recognized;	// 0x3062a9e5
- (void)twoFingerTapRecognized:(id)recognized;	// 0x3062aab9
@end
