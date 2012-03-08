/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIInputSwitcherShadowView : UIView {
@private
	int m_mode;	// 48 = 0x30
	float m_pointerOffset;	// 52 = 0x34
}
@property(assign, nonatomic) int mode;	// G=0x3302fe09; S=0x3302fe19; @synthesize=m_mode
@property(assign, nonatomic) float pointerOffset;	// G=0x3302fe29; S=0x3302fe39; @synthesize=m_pointerOffset
- (id)initWithFrame:(CGRect)frame;	// 0x3302f781
- (void)drawRect:(CGRect)rect;	// 0x3302f859
// declared property getter: - (int)mode;	// 0x3302fe09
// declared property getter: - (float)pointerOffset;	// 0x3302fe29
- (void)setFrame:(CGRect)frame;	// 0x3302f7d1
// declared property setter: - (void)setMode:(int)mode;	// 0x3302fe19
// declared property setter: - (void)setPointerOffset:(float)offset;	// 0x3302fe39
@end
