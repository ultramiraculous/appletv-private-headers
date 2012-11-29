/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKBKeyView.h"
#import "UIKit-Structs.h"

@class UIKBTree;
@protocol UIKBHandwritingDelegateProtocol;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingView : UIKBKeyView {
	KBStrokeList *_strokes;	// 112 = 0x70
	id<UIKBHandwritingDelegateProtocol> _delegate;	// 116 = 0x74
	CGColorRef _inkColor;	// 120 = 0x78
	CGImageRef _inkMask;	// 124 = 0x7c
	UIKBTree *_keyboard;	// 128 = 0x80
	CGPoint _last;	// 132 = 0x84
	int _down;	// 140 = 0x8c
	BOOL _stroked;	// 144 = 0x90
	BOOL _captureEnabled;	// 145 = 0x91
	BOOL _inGesture;	// 146 = 0x92
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x30efe6a9
- (id).cxx_construct;	// 0x30eff68d
- (BOOL)cancelTouchTracking;	// 0x30eff5f5
- (BOOL)clear;	// 0x30efeb71
- (void)dealloc;	// 0x30efea15
- (void)drawRect:(CGRect)rect;	// 0x30efec69
- (void)send;	// 0x30efebb9
- (void)setDelegate:(id)delegate;	// 0x30efeba9
- (BOOL)shouldCache;	// 0x30efeb0d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30efeebd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30eff599
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30eff13d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30efefb5
- (void)updateForKeyboard:(id)keyboard key:(id)key;	// 0x30efeb11
@end
