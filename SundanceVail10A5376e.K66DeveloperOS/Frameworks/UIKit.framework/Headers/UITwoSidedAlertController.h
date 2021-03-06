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
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;	// 0x30574df9
- (void)alertViewCancel:(id)cancel;	// 0x30574e6d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x30574db9
- (id)backAlert;	// 0x30574889
- (void)backAlertClickedButtonAtIndex:(int)index;	// 0x30574de9
- (id)createBackAlert;	// 0x30574925
- (id)createFrontAlert;	// 0x305748d1
- (void)dealloc;	// 0x305747a5
- (void)didPresentAlertView:(id)view;	// 0x305749b5
- (void)dismiss;	// 0x30574a95
- (void)flip;	// 0x30574b69
- (id)frontAlert;	// 0x30574841
- (void)frontAlertClickedButtonAtIndex:(int)index;	// 0x30574dd9
- (void)setDelegate:(id)delegate;	// 0x30574831
- (void)show;	// 0x30574979
@end

