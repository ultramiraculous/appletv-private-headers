/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextMagnifierRenderer : UIView {
	int m_autoscrollDirections;	// 84 = 0x54
	int m_magnifierMethod;	// 88 = 0x58
}
@property(assign, nonatomic) int autoscrollDirections;	// G=0x3482ef9d; S=0x3482efad; @synthesize=m_autoscrollDirections
@property(assign, nonatomic) int magnifierMethod;	// G=0x3482efbd; S=0x3482efcd; @synthesize=m_magnifierMethod
- (id)initWithFrame:(CGRect)frame;	// 0x34686601
// declared property getter: - (int)autoscrollDirections;	// 0x3482ef9d
- (void)drawAutoscroller:(CGRect)autoscroller;	// 0x3482ed49
- (void)drawMagnifier:(CGRect)magnifier;	// 0x3482ef49
- (void)drawRect:(CGRect)rect;	// 0x3482ef4d
// declared property getter: - (int)magnifierMethod;	// 0x3482efbd
// declared property setter: - (void)setAutoscrollDirections:(int)directions;	// 0x3482efad
// declared property setter: - (void)setMagnifierMethod:(int)method;	// 0x3482efcd
@end
