/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITouch, NSMutableArray, UIKeyboardEmojiView, NSString, NSArray;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPage : UIControl {
@private
	NSArray *_emoji;	// 72 = 0x48
	NSMutableArray *_emojiViews;	// 76 = 0x4c
	int _numRows;	// 80 = 0x50
	int _numCols;	// 84 = 0x54
	int _numPages;	// 88 = 0x58
	CGPoint _emojiPadding;	// 92 = 0x5c
	CGPoint _margin;	// 100 = 0x64
	CGSize _emojiSize;	// 108 = 0x6c
	CGRect _keyActivationRect;	// 116 = 0x74
	NSString *_optionalText;	// 132 = 0x84
	id<UIKeyboardEmojiController> _controller;	// 136 = 0x88
	UITouch *_activeTouch;	// 140 = 0x8c
	BOOL _needsLayout;	// 144 = 0x90
	UIKeyboardEmojiView *_touched;	// 148 = 0x94
	UIKeyboardEmojiView *_pendingDisplay;	// 152 = 0x98
	UIKeyboardEmojiView *_onDisplay;	// 156 = 0x9c
}
@property(retain) UITouch *activeTouch;	// G=0x302bca39; S=0x302bca4d; @synthesize=_activeTouch
@property(assign) id<UIKeyboardEmojiController> controller;	// G=0x302bc9e1; S=0x302bc9f1; @synthesize=_controller
@property(retain) NSArray *emoji;	// G=0x302bc9a9; S=0x302bc9bd; @synthesize=_emoji
@property(assign) CGRect keyActivationRect;	// G=0x302bcae1; S=0x302bcb05; @synthesize=_keyActivationRect
@property(retain) UIKeyboardEmojiView *onDisplay;	// G=0x302bcaa9; S=0x302bcabd; @synthesize=_onDisplay
@property(retain) NSString *optionalText;	// G=0x302bca01; S=0x302bca15; @synthesize=_optionalText
@property(retain) UIKeyboardEmojiView *pendingDisplay;	// G=0x302bca71; S=0x302bca85; @synthesize=_pendingDisplay
@property(retain) UIKeyboardEmojiView *touched;	// G=0x302bc971; S=0x302bc985; @synthesize=_touched
+ (CGSize)emojiSize:(BOOL)size;	// 0x302bb2d5
- (id)initWithFrame:(CGRect)frame;	// 0x302bb119
// declared property getter: - (id)activeTouch;	// 0x302bca39
- (void)cancelPendingPopupChanges;	// 0x302bbfe1
- (void)checkForStalePopup:(id)stalePopup;	// 0x302bc0e1
- (void)clearSubviews;	// 0x302bbbfd
- (id)closestForPoint:(CGPoint)point;	// 0x302bbe35
- (unsigned char)colCount:(BOOL)count;	// 0x302bb375
// declared property getter: - (id)controller;	// 0x302bc9e1
- (void)deactivatePopUps;	// 0x302bbd79
- (void)dealloc;	// 0x302bb1d1
// declared property getter: - (id)emoji;	// 0x302bc9a9
- (void)generateSubviews;	// 0x302bb789
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x302bbe05
// declared property getter: - (CGRect)keyActivationRect;	// 0x302bcae1
- (CGPoint)margin:(BOOL)margin;	// 0x302bb3bd
// declared property getter: - (id)onDisplay;	// 0x302bcaa9
// declared property getter: - (id)optionalText;	// 0x302bca01
- (CGPoint)padding:(BOOL)padding;	// 0x302bb425
// declared property getter: - (id)pendingDisplay;	// 0x302bca71
- (CGRect)rectForRow:(int)row Col:(int)col;	// 0x302bb679
- (void)removeDisplayedPopup:(id)popup;	// 0x302bc095
- (unsigned char)rowCount:(BOOL)count;	// 0x302bb32d
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x302bca4d
// declared property setter: - (void)setController:(id)controller;	// 0x302bc9f1
// declared property setter: - (void)setEmoji:(id)emoji;	// 0x302bc9bd
- (void)setFrame:(CGRect)frame;	// 0x302bb5d5
// declared property setter: - (void)setKeyActivationRect:(CGRect)rect;	// 0x302bcb05
// declared property setter: - (void)setOnDisplay:(id)display;	// 0x302bcabd
// declared property setter: - (void)setOptionalText:(id)text;	// 0x302bca15
// declared property setter: - (void)setPendingDisplay:(id)display;	// 0x302bca85
// declared property setter: - (void)setTouched:(id)touched;	// 0x302bc985
- (void)showPendingPopup:(id)popup;	// 0x302bc001
- (int)takeEmoji:(id)emoji fromIndex:(int)index;	// 0x302bb6fd
- (void)touchBegan:(id)began;	// 0x302bc19d
- (void)touchCancelled:(id)cancelled;	// 0x302bc63d
- (void)touchEnded:(id)ended;	// 0x302bc4bd
- (void)touchMoved:(id)moved;	// 0x302bc355
// declared property getter: - (id)touched;	// 0x302bc971
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x302bc701
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302bc8d5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x302bc839
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x302bc79d
- (void)updateLayoutConstants;	// 0x302bb4a5
@end
