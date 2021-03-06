/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIAlertView;

@interface UITwoSidedAlertController : NSObject {
	UIAlertView *_front;	// 4 = 0x4
	UIAlertView *_back;	// 8 = 0x8
	UIAlertView *_currentAlert;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;	// 0x348a0c69
- (void)alertViewCancel:(id)cancel;	// 0x348a0cdd
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x348a0c29
- (id)backAlert;	// 0x348a06f9
- (void)backAlertClickedButtonAtIndex:(int)index;	// 0x348a0c59
- (id)createBackAlert;	// 0x348a0795
- (id)createFrontAlert;	// 0x348a0741
- (void)dealloc;	// 0x348a0615
- (void)didPresentAlertView:(id)view;	// 0x348a0825
- (void)dismiss;	// 0x348a0905
- (void)flip;	// 0x348a09d9
- (id)frontAlert;	// 0x348a06b1
- (void)frontAlertClickedButtonAtIndex:(int)index;	// 0x348a0c49
- (void)setDelegate:(id)delegate;	// 0x348a06a1
- (void)show;	// 0x348a07e9
@end

