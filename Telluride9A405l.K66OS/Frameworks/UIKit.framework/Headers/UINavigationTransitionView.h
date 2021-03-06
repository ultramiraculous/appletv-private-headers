/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIWindow;

@interface UINavigationTransitionView : UIView <NSCoding> {
@private
	id _delegate;	// 48 = 0x30
	UIView *_fromView;	// 52 = 0x34
	UIView *_toView;	// 56 = 0x38
	int _transition;	// 60 = 0x3c
	UIResponder *_firstResponderToRestore;	// 64 = 0x40
	UIWindow *_originalWindow;	// 68 = 0x44
	float _fromViewAlpha;	// 72 = 0x48
	unsigned _isTransitioning : 1;	// 76 = 0x4c
	unsigned _popoverWillCleanUpNavigationTransition : 1;	// 76 = 0x4c
	unsigned _usesRoundedCorners : 1;	// 76 = 0x4c
}
@property(assign, nonatomic) id delegate;	// G=0x32f1b4dd; S=0x32cb445d; @synthesize=_delegate
@property(readonly, assign) UIView *fromView;	// G=0x32f1b4ed; @synthesize=_fromView
@property(readonly, assign) BOOL isTransitioning;	// G=0x32f1b299; 
@property(assign, nonatomic) BOOL popoverWillCleanUpNavigationTransition;	// G=0x32f1b0b1; S=0x32f1b089; 
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x32f1b4c9; S=0x32f1b359; 
+ (double)defaultDurationForTransition:(int)transition;	// 0x32cd3a89
- (id)initWithCoder:(id)coder;	// 0x32f1b0c5
- (id)initWithFrame:(CGRect)frame;	// 0x32cb43f9
- (void)_cleanupTransition;	// 0x32cd4501
- (void)_cleanupTransitionFromPopover;	// 0x32f1b319
- (BOOL)_isTransitioningFromView:(id)view;	// 0x32f1b2ad
- (void)_navigationTransitionDidStop;	// 0x32cd44c1
- (void)_notifyDelegateTransitionDidStopWithContext:(id)_notifyDelegateTransition;	// 0x32cd494d
- (void)dealloc;	// 0x32d41add
// declared property getter: - (id)delegate;	// 0x32f1b4dd
- (void)encodeWithCoder:(id)coder;	// 0x32f1b1b5
// declared property getter: - (id)fromView;	// 0x32f1b4ed
// declared property getter: - (BOOL)isTransitioning;	// 0x32f1b299
// declared property getter: - (BOOL)popoverWillCleanUpNavigationTransition;	// 0x32f1b0b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32cb445d
// declared property setter: - (void)setPopoverWillCleanUpNavigationTransition:(BOOL)cleanUpNavigationTransition;	// 0x32f1b089
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x32f1b359
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3;	// 0x32cd322d
- (BOOL)transition:(int)transition toView:(id)view;	// 0x32cd320d
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x32f1b4c9
@end

