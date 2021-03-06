/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBKeyView.h"

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
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x30bc3bd9
- (id).cxx_construct;	// 0x30bc4bbd
- (BOOL)cancelTouchTracking;	// 0x30bc4b25
- (BOOL)clear;	// 0x30bc40a1
- (void)dealloc;	// 0x30bc3f45
- (void)drawRect:(CGRect)rect;	// 0x30bc4199
- (void)send;	// 0x30bc40e9
- (void)setDelegate:(id)delegate;	// 0x30bc40d9
- (BOOL)shouldCache;	// 0x30bc403d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30bc43ed
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30bc4ac9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30bc466d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30bc44e5
- (void)updateForKeyboard:(id)keyboard key:(id)key;	// 0x30bc4041
@end

