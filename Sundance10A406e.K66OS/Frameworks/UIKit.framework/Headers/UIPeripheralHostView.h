/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIKeyboardCornerView, UIPeripheralHostLayer;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostView : UIView {
	int _explicitLayoutCount;	// 84 = 0x54
	UIKeyboardCornerView *_cornerViewLeft;	// 88 = 0x58
	UIKeyboardCornerView *_cornerViewRight;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) UIKeyboardCornerView *cornerViewLeft;	// G=0x30be3a55; @synthesize=_cornerViewLeft
@property(readonly, assign, nonatomic) UIKeyboardCornerView *cornerViewRight;	// G=0x30be3a65; @synthesize=_cornerViewRight
@property(readonly, assign, nonatomic) UIPeripheralHostLayer *layer;	// G=0x3092a045; 
+ (Class)layerClass;	// 0x30928e81
- (id)initWithFrame:(CGRect)frame;	// 0x30928d65
- (int)_clipCornersOfView:(id)view;	// 0x30be3a11
- (BOOL)_shouldUseKeyWindowStack;	// 0x309dd011
- (void)beginExplicitLayout;	// 0x3092a001
// declared property getter: - (id)cornerViewLeft;	// 0x30be3a55
// declared property getter: - (id)cornerViewRight;	// 0x30be3a65
- (void)dealloc;	// 0x30be39a9
- (void)endExplicitLayout;	// 0x3092a23d
// declared property getter: - (id)layer;	// 0x3092a045
- (void)layoutSubviews;	// 0x309e1585
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3098fdcd
- (void)removeFromSuperview;	// 0x30995f51
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x309debe5
- (int)textEffectsVisibilityLevel;	// 0x309d1b75
@end

