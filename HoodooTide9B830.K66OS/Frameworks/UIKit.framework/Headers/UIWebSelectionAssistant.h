/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"

@class UILongPressGestureRecognizer, UIWebSelectionView, UIWebSelection, UITapAndAHalfRecognizer, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate> {
@private
	UIWebDocumentView *_webView;	// 4 = 0x4
	UIWebSelectionView *_selectionView;	// 8 = 0x8
	UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 12 = 0xc
	UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;	// 16 = 0x10
	BOOL _enabled;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL enabled;	// G=0x300c2f4d; S=0x300c3399; 
@property(readonly, assign, nonatomic) UIWebSelection *selection;	// G=0x302f2031; 
@property(readonly, assign, nonatomic) CGRect selectionFrame;	// G=0x302f2051; 
- (id)initWithWebView:(id)webView;	// 0x300c2609
- (void)clearSelection;	// 0x301c1e5d
- (void)dealloc;	// 0x301c3399
- (void)didEndScrollingOverflow;	// 0x302f2325
- (void)didEndScrollingPage;	// 0x302f22e5
- (void)didRotate:(id)rotate;	// 0x302f23b1
// declared property getter: - (BOOL)enabled;	// 0x300c2f4d
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3016c22d
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x3016e5b5
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x3016d549
- (void)hideCallout;	// 0x302f2345
- (id)hitTest:(CGPoint)test withEvent:(id)event fromView:(id)view;	// 0x302f2235
- (BOOL)isSelectionGestureRecognizer:(id)recognizer;	// 0x3016e715
- (void)layoutChangedByScrolling:(BOOL)scrolling;	// 0x302f2365
- (void)makeWebSelection:(id)selection;	// 0x302f20b5
- (void)resignedFirstResponder;	// 0x301c2b05
- (void)scaleChanged;	// 0x302f2209
// declared property getter: - (id)selection;	// 0x302f2031
- (void)selectionChanged;	// 0x302f1fc5
// declared property getter: - (CGRect)selectionFrame;	// 0x302f2051
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x300c3399
- (void)setGestureRecognizers;	// 0x300c2d0d
- (void)tap:(id)tap;	// 0x302f21b9
- (void)willRotate:(id)rotate;	// 0x302f2391
- (void)willStartScrollingOverflow;	// 0x302f2305
- (void)willStartScrollingPage;	// 0x302f22c5
@end

