/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class UIWebSelection, UITapAndAHalfRecognizer, UIWebDocumentView, UILongPressGestureRecognizer, UIWebSelectionView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate> {
@private
	UIWebDocumentView *_webView;	// 4 = 0x4
	UIWebSelectionView *_selectionView;	// 8 = 0x8
	UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 12 = 0xc
	UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;	// 16 = 0x10
	BOOL _enabled;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL enabled;	// G=0x300d4bf5; S=0x300d5041; 
@property(readonly, assign, nonatomic) UIWebSelection *selection;	// G=0x302fee85; 
@property(readonly, assign, nonatomic) CGRect selectionFrame;	// G=0x302feea5; 
- (id)initWithWebView:(id)webView;	// 0x300d42b1
- (void)clearSelection;	// 0x301d255d
- (void)dealloc;	// 0x301d3a99
- (void)didEndScrollingOverflow;	// 0x302ff179
- (void)didEndScrollingPage;	// 0x302ff139
- (void)didRotate:(id)rotate;	// 0x302ff205
// declared property getter: - (BOOL)enabled;	// 0x300d4bf5
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x3017c8f9
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x3017ec81
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x3017dc15
- (void)hideCallout;	// 0x302ff199
- (id)hitTest:(CGPoint)test withEvent:(id)event fromView:(id)view;	// 0x302ff089
- (BOOL)isSelectionGestureRecognizer:(id)recognizer;	// 0x3017ede1
- (void)layoutChangedByScrolling:(BOOL)scrolling;	// 0x302ff1b9
- (void)makeWebSelection:(id)selection;	// 0x302fef09
- (void)resignedFirstResponder;	// 0x301d3205
- (void)scaleChanged;	// 0x302ff05d
// declared property getter: - (id)selection;	// 0x302fee85
- (void)selectionChanged;	// 0x302fee19
// declared property getter: - (CGRect)selectionFrame;	// 0x302feea5
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x300d5041
- (void)setGestureRecognizers;	// 0x300d49b5
- (void)tap:(id)tap;	// 0x302ff00d
- (void)willRotate:(id)rotate;	// 0x302ff1e5
- (void)willStartScrollingOverflow;	// 0x302ff159
- (void)willStartScrollingPage;	// 0x302ff119
@end

