/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextRangeView, UISelectionGrabberDot;

__attribute__((visibility("hidden")))
@interface UISelectionGrabber : UIView {
	UISelectionGrabberDot *m_dotView;	// 84 = 0x54
	BOOL m_isDotted;	// 88 = 0x58
	BOOL m_activeFlattened;	// 89 = 0x59
	BOOL m_alertFlattened;	// 90 = 0x5a
	BOOL m_navigationTransitionFlattened;	// 91 = 0x5b
	BOOL m_animating;	// 92 = 0x5c
	int m_orientation;	// 96 = 0x60
	int _applicationDeactivationReason;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL activeFlattened;	// G=0x31d98239; S=0x31eb1a4d; @synthesize=m_activeFlattened
@property(assign, nonatomic) BOOL alertFlattened;	// G=0x31d98229; S=0x31eb1a3d; @synthesize=m_alertFlattened
@property(assign, nonatomic) BOOL animating;	// G=0x31d98219; S=0x31eb18dd; @synthesize=m_animating
@property(readonly, assign, nonatomic) UITextRangeView *hostView;	// G=0x31d97f85; 
@property(assign, nonatomic) BOOL isDotted;	// G=0x31d97f55; S=0x31d97f65; @synthesize=m_isDotted
@property(assign, nonatomic) BOOL navigationTransitionFlattened;	// G=0x31d98249; S=0x31eb1a5d; @synthesize=m_navigationTransitionFlattened
@property(assign, nonatomic) int orientation;	// G=0x31eb1a6d; S=0x31d97f95; @synthesize=m_orientation
+ (id)_grabberDot;	// 0x31eb1a7d
- (id)initWithFrame:(CGRect)frame;	// 0x31d973a9
// declared property getter: - (BOOL)activeFlattened;	// 0x31d98239
// declared property getter: - (BOOL)alertFlattened;	// 0x31d98229
// declared property getter: - (BOOL)animating;	// 0x31d98219
- (BOOL)autoscrolled;	// 0x31eb16f1
- (void)canExpandAfterAlert:(id)alert;	// 0x31eb14f5
- (void)canExpandAfterBecomeActive:(id)active;	// 0x31eb15c1
- (void)canExpandAfterNavigationTransition:(id)transition;	// 0x31eb1621
- (BOOL)clipDot:(CGRect)dot;	// 0x31eb1719
- (void)dealloc;	// 0x31d98445
- (void)didMoveToSuperview;	// 0x31d97ffd
- (BOOL)dotIsVisbleInDocument:(CGRect)document;	// 0x31d98259
- (void)drawRect:(CGRect)rect;	// 0x31eb18fd
// declared property getter: - (id)hostView;	// 0x31d97f85
- (BOOL)inputViewIsChanging;	// 0x31eb16c9
// declared property getter: - (BOOL)isDotted;	// 0x31d97f55
- (BOOL)isPointedDown;	// 0x31d98149
- (BOOL)isPointedLeft;	// 0x31eb18c5
- (BOOL)isPointedRight;	// 0x31eb18ad
- (BOOL)isPointedUp;	// 0x31eb1895
- (BOOL)isRotating;	// 0x31eb16a1
- (BOOL)isScaling;	// 0x31eb1679
- (BOOL)isScrolling;	// 0x31eb1651
- (BOOL)isVertical;	// 0x31d98129
- (void)mustFlattenForAlert:(id)alert;	// 0x31eb1479
- (void)mustFlattenForNavigationTransition:(id)navigationTransition;	// 0x31eb15f1
- (void)mustFlattenForResignActive:(id)resignActive;	// 0x31eb157d
// declared property getter: - (BOOL)navigationTransitionFlattened;	// 0x31d98249
// declared property getter: - (int)orientation;	// 0x31eb1a6d
- (void)removeFromSuperview;	// 0x31d98401
- (void)saveDeactivationReason:(id)reason;	// 0x31eb1525
// declared property setter: - (void)setActiveFlattened:(BOOL)flattened;	// 0x31eb1a4d
// declared property setter: - (void)setAlertFlattened:(BOOL)flattened;	// 0x31eb1a3d
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x31eb18dd
- (void)setFrame:(CGRect)frame;	// 0x31d97575
- (void)setHidden:(BOOL)hidden;	// 0x31d97fb5
// declared property setter: - (void)setIsDotted:(BOOL)dotted;	// 0x31d97f65
// declared property setter: - (void)setNavigationTransitionFlattened:(BOOL)flattened;	// 0x31eb1a5d
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x31d97f95
- (void)updateDot;	// 0x31d976b1
@end

