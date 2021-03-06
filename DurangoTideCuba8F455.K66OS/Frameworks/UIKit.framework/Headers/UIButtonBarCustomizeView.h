/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIToolbar, NSMutableArray, UIImageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIButtonBarCustomizeView : UIView {
@private
	UIToolbar *_buttonBar;	// 44 = 0x2c
	NSArray *_availableButtons;	// 48 = 0x30
	NSArray *_currentButtons;	// 52 = 0x34
	NSMutableArray *_fixedButtons;	// 56 = 0x38
	UIView *_draggingView;	// 60 = 0x3c
	UIImageView *_ghostView;	// 64 = 0x40
	UIImageView *_replacementGlow;	// 68 = 0x44
	UIView *_replaceButton;	// 72 = 0x48
	CGPoint _startPoint;	// 76 = 0x4c
}
- (void)_finishCustomizeMouseUpChangeAnimation:(id)animation finished:(id)finished context:(id)context;	// 0x30209b8d
- (void)adjustDragImage:(GSEventRef)image;	// 0x3020f1b9
- (id)buttonAtEvent:(GSEventRef)event;	// 0x3020df89
- (void)buttonBarMouseDown:(GSEventRef)down;	// 0x3020d0bd
- (void)buttonBarMouseDragged:(GSEventRef)dragged;	// 0x3020cf7d
- (void)buttonBarMouseUp:(GSEventRef)up;	// 0x3020d819
- (BOOL)canHandleSwipes;	// 0x30208905
- (void)dealloc;	// 0x3020b2b1
- (void)layoutSubviews;	// 0x3020fbd1
- (void)mouseDown:(GSEventRef)down;	// 0x3020f6c1
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3020e955
- (void)mouseUp:(GSEventRef)up;	// 0x3020d265
- (void)setButtonBar:(id)bar currentButtons:(id)buttons availableButtons:(id)buttons3;	// 0x30209c21
@end

