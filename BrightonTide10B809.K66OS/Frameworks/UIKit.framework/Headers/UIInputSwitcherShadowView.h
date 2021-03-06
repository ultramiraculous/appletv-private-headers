/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherShadowView : UIView {
	int m_mode;	// 84 = 0x54
	float m_pointerOffset;	// 88 = 0x58
	NSArray *m_gradientColors;	// 92 = 0x5c
}
@property(retain, nonatomic) NSArray *gradientColors;	// G=0x32ec0a89; S=0x32ec0a99; @synthesize=m_gradientColors
@property(assign, nonatomic) int mode;	// G=0x32c48449; S=0x32ec0a59; @synthesize=m_mode
@property(assign, nonatomic) float pointerOffset;	// G=0x32ec0a69; S=0x32ec0a79; @synthesize=m_pointerOffset
- (id)initWithFrame:(CGRect)frame;	// 0x32c482b1
- (void)dealloc;	// 0x32ec04a1
- (void)drawRect:(CGRect)rect;	// 0x32ec04f1
// declared property getter: - (id)gradientColors;	// 0x32ec0a89
// declared property getter: - (int)mode;	// 0x32c48449
// declared property getter: - (float)pointerOffset;	// 0x32ec0a69
- (void)setFrame:(CGRect)frame;	// 0x32c483bd
// declared property setter: - (void)setGradientColors:(id)colors;	// 0x32ec0a99
// declared property setter: - (void)setMode:(int)mode;	// 0x32ec0a59
// declared property setter: - (void)setPointerOffset:(float)offset;	// 0x32ec0a79
@end

