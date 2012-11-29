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
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;	// 0x30c10389
- (void)alertViewCancel:(id)cancel;	// 0x30c103fd
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x30c10349
- (id)backAlert;	// 0x30c0fe19
- (void)backAlertClickedButtonAtIndex:(int)index;	// 0x30c10379
- (id)createBackAlert;	// 0x30c0feb5
- (id)createFrontAlert;	// 0x30c0fe61
- (void)dealloc;	// 0x30c0fd35
- (void)didPresentAlertView:(id)view;	// 0x30c0ff45
- (void)dismiss;	// 0x30c10025
- (void)flip;	// 0x30c100f9
- (id)frontAlert;	// 0x30c0fdd1
- (void)frontAlertClickedButtonAtIndex:(int)index;	// 0x30c10369
- (void)setDelegate:(id)delegate;	// 0x30c0fdc1
- (void)show;	// 0x30c0ff09
@end
