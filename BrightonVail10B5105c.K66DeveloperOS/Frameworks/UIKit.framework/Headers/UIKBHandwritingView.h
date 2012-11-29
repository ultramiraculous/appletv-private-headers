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
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x34854469
- (id).cxx_construct;	// 0x3485544d
- (BOOL)cancelTouchTracking;	// 0x348553b5
- (BOOL)clear;	// 0x34854931
- (void)dealloc;	// 0x348547d5
- (void)drawRect:(CGRect)rect;	// 0x34854a29
- (void)send;	// 0x34854979
- (void)setDelegate:(id)delegate;	// 0x34854969
- (BOOL)shouldCache;	// 0x348548cd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x34854c7d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x34855359
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x34854efd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x34854d75
- (void)updateForKeyboard:(id)keyboard key:(id)key;	// 0x348548d1
@end
